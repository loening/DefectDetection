# -*- coding: utf-8 -*-
# Copyright (c) Facebook, Inc. and its affiliates.
"""
Implement many useful :class:`Augmentation`.
"""
from os import terminal_size
import numpy as np
import sys
import random
import cv2
from fvcore.transforms.transform import (
    BlendTransform,
    CropTransform,
    HFlipTransform,
    NoOpTransform,
    VFlipTransform,
)
from PIL import Image
from detectron2.structures import BoxMode

from .augmentation import Augmentation, _transform_to_aug
from .transform import ExtentTransform, ResizeTransform, RotationTransform

__all__ = [
    "RandomApply",
    "RandomBrightness",
    "RandomContrast",
    "RandomCrop",
    "RandomExtent",
    "RandomFlip",
    "RandomSaturation",
    "RandomLighting",
    "RandomRotation",
    "RandomGauss",
    "Resize",
    "ResizeShortestEdge",
    "RandomCrop_CategoryAreaConstraint",
    "LoadMosaic"
]


class RandomApply(Augmentation):
    """
    Randomly apply an augmentation with a given probability.
    """

    def __init__(self, tfm_or_aug, prob=0.5):
        """
        Args:
            tfm_or_aug (Transform, Augmentation): the transform or augmentation
                to be applied. It can either be a `Transform` or `Augmentation`
                instance.
            prob (float): probability between 0.0 and 1.0 that
                the wrapper transformation is applied
        """
        super().__init__()
        self.aug = _transform_to_aug(tfm_or_aug)
        assert 0.0 <= prob <= 1.0, f"Probablity must be between 0.0 and 1.0 (given: {prob})"
        self.prob = prob

    def get_transform(self, *args):
        do = self._rand_range() < self.prob
        if do:
            return self.aug.get_transform(*args)
        else:
            return NoOpTransform()

    def __call__(self, aug_input):
        do = self._rand_range() < self.prob
        if do:
            return self.aug(aug_input)
        else:
            return NoOpTransform()


class RandomFlip(Augmentation):
    """
    Flip the image horizontally or vertically with the given probability.
    """

    def __init__(self, prob=0.5, *, horizontal=True, vertical=False):
        """
        Args:
            prob (float): probability of flip.
            horizontal (boolean): whether to apply horizontal flipping
            vertical (boolean): whether to apply vertical flipping
        """
        super().__init__()

        if horizontal and vertical:
            raise ValueError("Cannot do both horiz and vert. Please use two Flip instead.")
        if not horizontal and not vertical:
            raise ValueError("At least one of horiz or vert has to be True!")
        self._init(locals())

    def get_transform(self, image):
        h, w = image.shape[:2]
        do = self._rand_range() < self.prob
        if do:
            if self.horizontal:
                return HFlipTransform(w)
            elif self.vertical:
                return VFlipTransform(h)
        else:
            return NoOpTransform()


class Resize(Augmentation):
    """ Resize image to a fixed target size"""

    def __init__(self, shape, interp=Image.BILINEAR):
        """
        Args:
            shape: (h, w) tuple or a int
            interp: PIL interpolation method
        """
        if isinstance(shape, int):
            shape = (shape, shape)
        shape = tuple(shape)
        self._init(locals())

    def get_transform(self, image):
        return ResizeTransform(
            image.shape[0], image.shape[1], self.shape[0], self.shape[1], self.interp
        )


class ResizeShortestEdge(Augmentation):
    """
    Scale the shorter edge to the given size, with a limit of `max_size` on the longer edge.
    If `max_size` is reached, then downscale so that the longer edge does not exceed max_size.
    """

    def __init__(
        self, short_edge_length, max_size=sys.maxsize, sample_style="range", interp=Image.BILINEAR
    ):
        """
        Args:
            short_edge_length (list[int]): If ``sample_style=="range"``,
                a [min, max] interval from which to sample the shortest edge length.
                If ``sample_style=="choice"``, a list of shortest edge lengths to sample from.
            max_size (int): maximum allowed longest edge length.
            sample_style (str): either "range" or "choice".
        """
        super().__init__()
        assert sample_style in ["range", "choice"], sample_style

        self.is_range = sample_style == "range"
        if isinstance(short_edge_length, int):
            short_edge_length = (short_edge_length, short_edge_length)
        if self.is_range:
            assert len(short_edge_length) == 2, (
                "short_edge_length must be two values using 'range' sample style."
                f" Got {short_edge_length}!"
            )
        self._init(locals())

    def get_transform(self, image):
        h, w = image.shape[:2]
        if self.is_range:
            size = np.random.randint(self.short_edge_length[0], self.short_edge_length[1] + 1)
        else:
            size = np.random.choice(self.short_edge_length)
        if size == 0:
            return NoOpTransform()

        scale = size * 1.0 / min(h, w)
        if h < w:
            newh, neww = size, scale * w
        else:
            newh, neww = scale * h, size
        if max(newh, neww) > self.max_size:
            scale = self.max_size * 1.0 / max(newh, neww)
            newh = newh * scale
            neww = neww * scale
            
        # print("当前值：",w, h, neww)
        neww = int(neww + 0.5)
        newh = int(newh + 0.5)
        return ResizeTransform(h, w, newh, neww, self.interp)


class RandomRotation(Augmentation):
    """
    This method returns a copy of this image, rotated the given
    number of degrees counter clockwise around the given center.
    """

    def __init__(self, angle, expand=True, center=None, sample_style="range", interp=None):
        """
        Args:
            angle (list[float]): If ``sample_style=="range"``,
                a [min, max] interval from which to sample the angle (in degrees).
                If ``sample_style=="choice"``, a list of angles to sample from
            expand (bool): choose if the image should be resized to fit the whole
                rotated image (default), or simply cropped
            center (list[[float, float]]):  If ``sample_style=="range"``,
                a [[minx, miny], [maxx, maxy]] relative interval from which to sample the center,
                [0, 0] being the top left of the image and [1, 1] the bottom right.
                If ``sample_style=="choice"``, a list of centers to sample from
                Default: None, which means that the center of rotation is the center of the image
                center has no effect if expand=True because it only affects shifting
        """
        super().__init__()
        assert sample_style in ["range", "choice"], sample_style
        self.is_range = sample_style == "range"
        if isinstance(angle, (float, int)):
            angle = (angle, angle)
        if center is not None and isinstance(center[0], (float, int)):
            center = (center, center)
        self._init(locals())

    def get_transform(self, image):
        h, w = image.shape[:2]
        center = None
        if self.is_range:
            angle = np.random.uniform(self.angle[0], self.angle[1])
            if self.center is not None:
                center = (
                    np.random.uniform(self.center[0][0], self.center[1][0]),
                    np.random.uniform(self.center[0][1], self.center[1][1]),
                )
        else:
            angle = np.random.choice(self.angle)
            if self.center is not None:
                center = np.random.choice(self.center)

        if center is not None:
            center = (w * center[0], h * center[1])  # Convert to absolute coordinates

        if angle % 360 == 0:
            return NoOpTransform()

        return RotationTransform(h, w, angle, expand=self.expand, center=center, interp=self.interp)


class RandomCrop(Augmentation):
    """
    Randomly crop a rectangle region out of an image.
    """

    def __init__(self, crop_type: str, crop_size):
        """
        Args:
            crop_type (str): one of "relative_range", "relative", "absolute", "absolute_range".
            crop_size (tuple[float, float]): two floats, explained below.

        - "relative": crop a (H * crop_size[0], W * crop_size[1]) region from an input image of
          size (H, W). crop size should be in (0, 1]
        - "relative_range": uniformly sample two values from [crop_size[0], 1]
          and [crop_size[1]], 1], and use them as in "relative" crop type.
        - "absolute" crop a (crop_size[0], crop_size[1]) region from input image.
          crop_size must be smaller than the input image size.
        - "absolute_range", for an input of size (H, W), uniformly sample H_crop in
          [crop_size[0], min(H, crop_size[1])] and W_crop in [crop_size[0], min(W, crop_size[1])].
          Then crop a region (H_crop, W_crop).
        """
        # TODO style of relative_range and absolute_range are not consistent:
        # one takes (h, w) but another takes (min, max)
        super().__init__()
        assert crop_type in ["relative_range", "relative", "absolute", "absolute_range"]
        self._init(locals())

    def get_transform(self, image):
        h, w = image.shape[:2]
        croph, cropw = self.get_crop_size((h, w))
        assert h >= croph and w >= cropw, "Shape computation in {} has bugs.".format(self)
        h0 = np.random.randint(h - croph + 1)
        w0 = np.random.randint(w - cropw + 1)
        return CropTransform(w0, h0, cropw, croph)

    def get_crop_size(self, image_size):
        """
        Args:
            image_size (tuple): height, width

        Returns:
            crop_size (tuple): height, width in absolute pixels
        """
        h, w = image_size
        if self.crop_type == "relative":
            ch, cw = self.crop_size
            return int(h * ch + 0.5), int(w * cw + 0.5)
        elif self.crop_type == "relative_range":
            crop_size = np.asarray(self.crop_size, dtype=np.float32)
            ch, cw = crop_size + np.random.rand(2) * (1 - crop_size)
            return int(h * ch + 0.5), int(w * cw + 0.5)
        elif self.crop_type == "absolute":
            return (min(self.crop_size[0], h), min(self.crop_size[1], w))
        
        elif self.crop_type == "absolute_range":
            assert self.crop_size[0] <= self.crop_size[1]
            # size = np.random.choice([1024,1152,1280,1408,1536,1664,1792,1920,2048])
            # ch = size
            # cw = size
            ch = np.random.randint(min(h, self.crop_size[0]), min(h, self.crop_size[1]) + 1)
            cw = np.random.randint(min(w, self.crop_size[0]), min(w, self.crop_size[1]) + 1)
            return ch, cw
        else:
            NotImplementedError("Unknown crop type {}".format(self.crop_type))


class RandomCrop_CategoryAreaConstraint(Augmentation):
    """
    Similar to :class:`RandomCrop`, but find a cropping window such that no single category
    occupies a ratio of more than `single_category_max_area` in semantic segmentation ground
    truth, which can cause unstability in training. The function attempts to find such a valid
    cropping window for at most 10 times.
    """

    def __init__(
        self,
        crop_type: str,
        crop_size,
        single_category_max_area: float = 1.0,
        ignored_category: int = None,
    ):
        """
        Args:
            crop_type, crop_size: same as in :class:`RandomCrop`
            single_category_max_area: the maximum allowed area ratio of a
                category. Set to 1.0 to disable
            ignored_category: allow this category in the semantic segmentation
                ground truth to exceed the area ratio. Usually set to the category
                that's ignored in training.
        """
        self.crop_aug = RandomCrop(crop_type, crop_size)
        self._init(locals())

    def get_transform(self, image, sem_seg):
        if self.single_category_max_area >= 1.0:
            return self.crop_aug.get_transform(image)
        else:
            h, w = sem_seg.shape
            for _ in range(10):
                crop_size = self.crop_aug.get_crop_size((h, w))
                y0 = np.random.randint(h - crop_size[0] + 1)
                x0 = np.random.randint(w - crop_size[1] + 1)
                sem_seg_temp = sem_seg[y0 : y0 + crop_size[0], x0 : x0 + crop_size[1]]
                labels, cnt = np.unique(sem_seg_temp, return_counts=True)
                if self.ignored_category is not None:
                    cnt = cnt[labels != self.ignored_category]
                if len(cnt) > 1 and np.max(cnt) < np.sum(cnt) * self.single_category_max_area:
                    break
            crop_tfm = CropTransform(x0, y0, crop_size[1], crop_size[0])
            return crop_tfm


class RandomExtent(Augmentation):
    """
    Outputs an image by cropping a random "subrect" of the source image.

    The subrect can be parameterized to include pixels outside the source image,
    in which case they will be set to zeros (i.e. black). The size of the output
    image will vary with the size of the random subrect.
    """

    def __init__(self, scale_range, shift_range):
        """
        Args:
            output_size (h, w): Dimensions of output image
            scale_range (l, h): Range of input-to-output size scaling factor
            shift_range (x, y): Range of shifts of the cropped subrect. The rect
                is shifted by [w / 2 * Uniform(-x, x), h / 2 * Uniform(-y, y)],
                where (w, h) is the (width, height) of the input image. Set each
                component to zero to crop at the image's center.
        """
        super().__init__()
        self._init(locals())

    def get_transform(self, image):
        img_h, img_w = image.shape[:2]

        # Initialize src_rect to fit the input image.
        src_rect = np.array([-0.5 * img_w, -0.5 * img_h, 0.5 * img_w, 0.5 * img_h])

        # Apply a random scaling to the src_rect.
        src_rect *= np.random.uniform(self.scale_range[0], self.scale_range[1])

        # Apply a random shift to the coordinates origin.
        src_rect[0::2] += self.shift_range[0] * img_w * (np.random.rand() - 0.5)
        src_rect[1::2] += self.shift_range[1] * img_h * (np.random.rand() - 0.5)

        # Map src_rect coordinates into image coordinates (center at corner).
        src_rect[0::2] += 0.5 * img_w
        src_rect[1::2] += 0.5 * img_h

        return ExtentTransform(
            src_rect=(src_rect[0], src_rect[1], src_rect[2], src_rect[3]),
            output_size=(int(src_rect[3] - src_rect[1]), int(src_rect[2] - src_rect[0])),
        )


class RandomContrast(Augmentation):
    """
    Randomly transforms image contrast.

    Contrast intensity is uniformly sampled in (intensity_min, intensity_max).
    - intensity < 1 will reduce contrast
    - intensity = 1 will preserve the input image
    - intensity > 1 will increase contrast

    See: https://pillow.readthedocs.io/en/3.0.x/reference/ImageEnhance.html
    """

    def __init__(self, intensity_min, intensity_max):
        """
        Args:
            intensity_min (float): Minimum augmentation
            intensity_max (float): Maximum augmentation
        """
        super().__init__()
        self._init(locals())

    def get_transform(self, image):
        w = np.random.uniform(self.intensity_min, self.intensity_max)
        return BlendTransform(src_image=image.mean(), src_weight=1 - w, dst_weight=w)


class RandomBrightness(Augmentation):
    """
    Randomly transforms image brightness.

    Brightness intensity is uniformly sampled in (intensity_min, intensity_max).
    - intensity < 1 will reduce brightness
    - intensity = 1 will preserve the input image
    - intensity > 1 will increase brightness

    See: https://pillow.readthedocs.io/en/3.0.x/reference/ImageEnhance.html
    """

    def __init__(self, intensity_min, intensity_max):
        """
        Args:
            intensity_min (float): Minimum augmentation
            intensity_max (float): Maximum augmentation
        """
        super().__init__()
        self._init(locals())

    def get_transform(self, image):
        w = np.random.uniform(self.intensity_min, self.intensity_max)
        return BlendTransform(src_image=0, src_weight=1 - w, dst_weight=w)


class RandomSaturation(Augmentation):
    """
    Randomly transforms saturation of an RGB image.
    Input images are assumed to have 'RGB' channel order.

    Saturation intensity is uniformly sampled in (intensity_min, intensity_max).
    - intensity < 1 will reduce saturation (make the image more grayscale)
    - intensity = 1 will preserve the input image
    - intensity > 1 will increase saturation

    See: https://pillow.readthedocs.io/en/3.0.x/reference/ImageEnhance.html
    """

    def __init__(self, intensity_min, intensity_max):
        """
        Args:
            intensity_min (float): Minimum augmentation (1 preserves input).
            intensity_max (float): Maximum augmentation (1 preserves input).
        """
        super().__init__()
        self._init(locals())

    def get_transform(self, image):
        assert image.shape[-1] == 3, "RandomSaturation only works on RGB images"
        w = np.random.uniform(self.intensity_min, self.intensity_max)
        grayscale = image.dot([0.299, 0.587, 0.114])[:, :, np.newaxis]
        return BlendTransform(src_image=grayscale, src_weight=1 - w, dst_weight=w)


class RandomLighting(Augmentation):
    """
    The "lighting" augmentation described in AlexNet, using fixed PCA over ImageNet.
    Input images are assumed to have 'RGB' channel order.

    The degree of color jittering is randomly sampled via a normal distribution,
    with standard deviation given by the scale parameter.
    """

    def __init__(self, scale):
        """
        Args:
            scale (float): Standard deviation of principal component weighting.
        """
        super().__init__()
        self._init(locals())
        self.eigen_vecs = np.array(
            [[-0.5675, 0.7192, 0.4009], [-0.5808, -0.0045, -0.8140], [-0.5836, -0.6948, 0.4203]]
        )
        self.eigen_vals = np.array([0.2175, 0.0188, 0.0045])

    def get_transform(self, image):
        assert image.shape[-1] == 3, "RandomLighting only works on RGB images"
        weights = np.random.normal(scale=self.scale, size=3)
        return BlendTransform(
            src_image=self.eigen_vecs.dot(weights * self.eigen_vals), src_weight=1.0, dst_weight=1.0
        )
    

class RandomGauss(Augmentation):
    """
    Randomly add gauss noise to image.

    均值为0，保证图像的亮度不会有变化，而方差大小则决定了高斯噪声的强度。

    """

    def __init__(self, var_min, var_max):
        """
        Args:
            var_min (float): Minimum variance
            var_max (float): Maximum variance
        """

        var_min = var_min if var_min > 0 else 0
        var_max = var_max if var_max > 0 else 0

        if var_max < var_min:
            temp = var_min
            var_min = var_max
            var_max = temp

        super().__init__()
        self._init(locals())

    def get_transform(self, image):
        var = np.random.uniform(self.var_min, self.var_max)
        noise = np.random.normal(0, var ** 0.5, image.shape) * 255
        return BlendTransform(src_image=noise, src_weight=1, dst_weight=1)

# LoadMosaic
class LoadMosaic():
    def __init__(self, idx, cfg, _dataset):
        self.idx = idx
        self.mosaic_size = cfg.INPUT.MosaicSize
        self.dataset_dict = _dataset
        self.d_indices = range(len(self.dataset_dict))
        self.image_format = cfg.INPUT.FORMAT
        self.CenterRange = cfg.INPUT.Mosaic_CenterRange
        self.num_classes = cfg.MODEL.FCOS.NUM_CLASSES

    def get_transform(self,data): 
        self.indices = [self.idx] + random.choices(self.d_indices, k=3)
        self.data = data
        data, is_aug = self.mosaic()
        return data, is_aug

    def load_image(self, index, x1a, y1a, x2a, y2a):
        
        dataset = self.dataset_dict[index]
        path = dataset['file_name']
        img = cv2.imread(path)
        if self.image_format == "L":
            img = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
        h, w = img.shape[:2]
        annotations = dataset["annotations"]
        mask = self.mkMask(img, annotations)
        anno_len = len(annotations)
        if anno_len <= 0:
            ret = {}
            return ret, False
        anno_id = random.randint(0, len(annotations)-1)
        annotation = annotations[anno_id]
        cate_id = annotation["category_id"]
        segmentation = annotation["segmentation"][0]
        x, y = segmentation[0::2], segmentation[1::2]
        bbox = annotation["bbox"]
        bbox_min_x, bbox_min_y, bbox_max_x, bbox_max_y = bbox[0], bbox[1], bbox[0] + bbox[2], bbox[1] + bbox[3]
        bbox_center_x = int((bbox_min_x + bbox_max_x) * 0.5)
        bbox_center_y = int((bbox_min_y + bbox_max_y) * 0.5)
        new_img_w = x2a - x1a
        new_img_h = y2a - y1a
        padding_x_l = new_img_w//2
        padding_x_r = new_img_w - padding_x_l
        padding_y_t = new_img_h//2
        padding_y_b = new_img_h - padding_y_t
        if bbox[2] < new_img_w and bbox[3] < new_img_h:
            
            min_x = max(bbox_center_x - padding_x_l, 0)
            if min_x == 0:
                padding_x_r = new_img_w - bbox_center_x
            max_x = min(bbox_center_x + padding_x_r, w)
            if max_x == w:
                padding_x_l = new_img_w - (w - bbox_center_x)
                min_x = bbox_center_x - padding_x_l
            min_y = max(bbox_center_y - padding_y_t, 0)
            if min_y == 0:
                padding_y_b = new_img_h - bbox_center_y
            max_y = min(bbox_center_y + padding_y_b, h)
            if max_y == h:
                padding_y_t = new_img_h - (h - bbox_center_y)
                min_y = bbox_center_y - padding_y_t

            new_img = img[min_y: max_y, min_x: max_x]
            new_mask = mask[min_y: max_y, min_x: max_x]
            contours, _ = cv2.findContours(new_mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
            for cnt in contours:
                b_x, b_y, b_w, b_h = cv2.boundingRect(cnt)
                box_ioa = self.box_ioa(max_x-min_x, max_y-min_y, b_w, b_h)
                if box_ioa < 0.0005 and (b_x == 0 or b_h == 0 or b_x+b_w == new_img.shape[0] or b_y+b_h == new_img.shape[1]):
                    np.where(new_mask[b_y:b_y+b_h, b_x:b_x+b_w] != 0, 0, 0)

            ret = {
                "image": new_img,
                "mask": new_mask
            }

            return ret, True
        else:
            ret = {}
            return ret, False

    def mkMask(self, im, annos):
        mask = np.zeros(im.shape[:2], np.uint8)
        for anno in annos:
            cate = anno["category_id"] + 1
            seg = anno["segmentation"][0]
            x, y = seg[0::2], seg[1::2]
            points = [[x[i], y[i]] for i in range(len(x))]
            cv2.fillConvexPoly(mask, np.array(points), cate)
        return mask

    def mosaic(self):
        s = self.mosaic_size * 2
        yc, xc = int(random.uniform(self.mosaic_size*(1-self.CenterRange), self.mosaic_size*(1+self.CenterRange))), int(random.uniform(self.mosaic_size*(1-self.CenterRange), self.mosaic_size*(1+self.CenterRange)))
        bbox_mode = BoxMode.XYWH_ABS
        annotations = []
        for i, index in enumerate(self.indices):
            dataset = self.dataset_dict[index]
            path = dataset['file_name']
            if self.image_format == "L":
                img = cv2.imread(path, 0)
            else:
                img = cv2.imread(path)
            h, w = img.shape[:2]

            if i == 0:
                mask = np.zeros((s, s), dtype=np.uint8)
                if self.image_format == "L":
                    img4 = np.zeros((s, s), dtype=np.uint8)
                else:
                    img4 = np.full((s, s, img.shape[2]), 0, dtype=np.uint8)
                x1a, y1a, x2a, y2a = 0, 0, xc, yc
                # self.load_image(index, x1a, y1a, x2a, y2a)
                # x1b, y1b, x2b, y2b = w - (x2a - x1a), h - (y2a - y1a), w, h
            elif i == 1:
                x1a, y1a, x2a, y2a = xc, 0, s, yc
                x1b, y1b, x2b, y2b = 0, h - (y2a - y1a), min(w, x2a - x1a), h
            elif i == 2:    # 左下角
                x1a, y1a, x2a, y2a = 0, yc, xc, s
                x1b, y1b, x2b, y2b = w - (x2a - x1a), 0, w, min(y2a - y1a, h)
            elif i == 3:    # 右下角
                x1a, y1a, x2a, y2a = xc, yc, s, s
                x1b, y1b, x2b, y2b = 0, 0, min(w, x2a - x1a), min(y2a - y1a, h)
            
            ret, is_mosaic = self.load_image(index, x1a, y1a, x2a, y2a)
            if is_mosaic:
                img4[y1a:y2a, x1a:x2a] = ret["image"]
                mask[y1a:y2a, x1a:x2a] = ret["mask"]
                kernel = np.ones((3,3), np.uint8)
                mask = cv2.dilate(mask, kernel, iterations=1)
            else:
                return self.data, False
            # self.update_anno(index, x1b, x2b, y1b, y2b)
            # mask4[y1a:y2a, x1a:x2a] = mask[y1b:y2b, x1b:x2b]
        cates = [int(i) for i in range(1, self.num_classes+1)]
        contours, _ = cv2.findContours(mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
        for cnt in contours:
            x, y, wid, hi = cv2.boundingRect(cnt)
            for i in cates:
                if i in mask[y:y+hi, x:x+wid]:
                    cate_id = i - 1
            bbox = [x, y, wid, hi]
            points = cnt[:,0,:]
            x, y = [i[0] for i in points], [i[1] for i in points]
            seg = [0] * len(x) * 2
            seg[0::2], seg[1::2] = x, y
            anno = {
                "iscrowd": 0,
                "bbox": bbox,
                "category_id": cate_id,
                "segmentation": [seg],
                "bbox_mode": bbox_mode
            }
            annotations.append(anno)
        self.data["annotations"] = annotations
        self.data["height"] = s
        self.data["width"] = s
        self.data["image"] = img4

        # mask = self.mkMask(annotations)
        self.data["mask"] = mask
        return self.data, True

    def box_ioa(self, w, h, b_w, b_h):
        box_area = b_w * b_h
        mask_area = w * h
        ioa = box_area / mask_area
        return ioa