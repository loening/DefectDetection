from detectron2.data.datasets import register_coco_instances
from detectron2.data import MetadataCatalog, DatasetCatalog
import os
os.environ["CUDA_VISIBLE_DEVICES"] = "1"
import numpy as np
from PIL import Image
import time




jf = '/media/ps/1616B1B516B19669/LB/train/HG2_project/mask_song/annotations/train.json'
imgs = '/media/ps/1616B1B516B19669/LB/train/HG2_project/mask_song/train'
register_coco_instances("phone", {}, jf, imgs)
fruits_nuts_metadata = MetadataCatalog.get("phone")
dataset_dicts = DatasetCatalog.get("phone")


from adet.config import get_cfg

from detectron2.engine import DefaultTrainer
from adet.config import get_cfg

cfg = get_cfg()
config_file = '/home/ps/inflibs171/AdelaiDet/configs/BlendMask/R_50_3x.yaml'
cfg.merge_from_file(config_file)
cfg.DATALOADER.NUM_WORKERS = 2

cfg.MODEL.ROI_HEADS.NUM_CLASSES = 10
cfg.MODEL.FCOS.NUM_CLASSES = 10

# cfg.MODEL.FCOS.NUM_CLASSES = 2
cfg.INPUT.MAX_SIZE_TEST = 2048
cfg.INPUT.MIN_SIZE_TEST = 2048
cfg.MODEL.WEIGHTS = "/media/ps/1616B1B516B19669/LB/train/HG2_project/mask_song/weights/model_0040999.pth"
cfg.MODEL.ROI_HEADS.SCORE_THRESH_TEST = 0.1 # set the testing threshold for this model
cfg.DATASETS.TEST = ("phone", )
cfg.MODEL.DEVICE = "cuda:0"
cfg.MODEL.FCOS.INFERENCE_TH_TEST = 0.16

cfg.INPUT.FORMAT = 'L'
cfg.MODEL.PIXEL_MEAN = [102.807]
cfg.MODEL.PIXEL_STD = [36.354]
# cfg.MODEL.BLENDMASK.ATTN_SIZE = 16
# cfg.MODEL.BLENDMASK.BOTTOM_RESOLUTION = 64
# cfg.MODEL.KEY = '9999999999999999'
# cfg.MODEL.IV =  'qqqqqqqqqqqqqqqq'


from detectron2.engine import DefaultPredictor
import torch
from detectron2.modeling import build_model
from detectron2.checkpoint import DetectionCheckpointer
import detectron2.data.transforms as T


class DefaultPredictor1(DefaultPredictor):
    def __init__(self, cfg):
        self.cfg = cfg.clone()  # cfg can be modified by model
        self.model = build_model(self.cfg)
        self.model.eval()
        if len(cfg.DATASETS.TEST):
            self.metadata = MetadataCatalog.get(cfg.DATASETS.TEST[0])

        checkpointer = DetectionCheckpointer(self.model)
        checkpointer.load(cfg.MODEL.WEIGHTS)

        self.aug = T.ResizeShortestEdge(
            [cfg.INPUT.MIN_SIZE_TEST, cfg.INPUT.MIN_SIZE_TEST], cfg.INPUT.MAX_SIZE_TEST
        )

        self.input_format = cfg.INPUT.FORMAT
        # assert self.input_format in ["RGB", "BGR"], self.input_format

    def __call__(self, original_image):
        with torch.no_grad():  # https://github.com/sphinx-doc/sphinx/issues/4258
            # Apply pre-processing to image.
            if self.input_format == "RGB":
                # whether the model expects BGR inputs or RGB
                original_image = original_image[:, :, ::-1]
            # original_image = original_image[:, :, ::-1]
            height, width = original_image.shape[:2]
            image = self.aug.get_transform(original_image).apply_image(original_image)
            image = torch.as_tensor(image.astype("float32"))
            # image = torch.as_tensor(image.astype("float32").transpose(2, 0, 1))
            inputs = {"image": image, "height": height, "width": width}
            predictions = self.model([inputs])[0]
            return predictions


predictor = DefaultPredictor1(cfg)

from detectron2.utils.visualizer import ColorMode
from detectron2.utils.visualizer import Visualizer
import matplotlib.pyplot as plt

import random
import cv2
import glob, os, json
import os.path as osp
from tqdm import tqdm
import numpy as np
from shapely.geometry import Polygon, MultiPoint
from detectron2.utils.visualizer import ColorMode
from detectron2.utils.visualizer import Visualizer
import matplotlib.pyplot as plt
import random
import cv2
import glob,os,json
import os.path as osp
from tqdm import tqdm
import numpy as np
from shapely.geometry import Polygon,MultiPoint

inf_dir = r"/media/ps/1616B1B516B19669/LB/val/HG2_TEST"
save_dir = r"/media/ps/1616B1B516B19669/LB/train/HG2_project/mask_song"
jf = r'/media/ps/1616B1B516B19669/LB/val/HG2_TEST/song.json'
json_data = json.load(open(jf))

def cal_area_mask(a, b):
    if len(b)>8:
        a = np.array(a,dtype=int).reshape(-1, 2)
        b = np.array(b,dtype=int).reshape(-1, 2)
        union_poly = np.concatenate((a,b))
        poly1 = Polygon(a).convex_hull 
        poly2 = Polygon(b).convex_hull
        if not poly1.intersects(poly2):
            iou = 0  
        else:
            inter_area = poly1.intersection(poly2).area
            union_area = MultiPoint(union_poly).convex_hull.area
            iou=float(inter_area) / union_area
    else:
        iou = 0
    return iou

new_json={}
for root,dirs,files in os.walk(inf_dir):
    if files:
        imgs = glob.glob(root + '/*[jb][pm][gp]')
        sub_save_dir = os.path.join(save_dir,osp.basename(root))
        if not osp.exists(sub_save_dir):
            os.makedirs(sub_save_dir)
        
        ng_nums = 0
        ng_per_num = 0 # ng数量，计算缺陷维度
        img_per_num = 0 # 图片数量，计算图片维度
        all_iou = []
    
        for index,img in tqdm(enumerate(imgs)): 
            fn = osp.basename(img)
#             print("==>fn:{}({}/{})".format(fn,index,len(imgs)))
            im = cv2.imread(img, 0)
            im_rgb = cv2.imread(img, 1)
            outputs = predictor(im)
            predictions = outputs["instances"].to("cpu")
            cates = predictions.pred_classes.tolist()
            scores = predictions.scores.tolist()
            if not osp.exists(sub_save_dir):
                os.makedirs(sub_save_dir)
            v = Visualizer(im_rgb[:, :, ::-1],
                           metadata=fruits_nuts_metadata, 
                           scale=1, 
                           instance_mode=ColorMode.IMAGE_BW   # remove the colors of unsegmented pixels
            )

            v = v.draw_instance_predictions(outputs["instances"].to("cpu"))
            model_masks = v.masks
            new_json[fn] = {}
            new_json[fn]["filename"] = fn
            new_json[fn]["regions"] = []
            
            regions_list = []
            for index_x,item in enumerate(model_masks):
                for index_y,mask in enumerate(item):
                    xs = mask[0::2]
                    xs = [round(x) for x in xs]
                    ys = mask[1::2]
                    ys = [round(y) for y in ys]
                    regions_list.append({"shape_attributes":{"all_points_x":xs,"all_points_y":ys},
                                         "region_attributes":{"regions":str(cates[index_x]+1)},
                                         "scores":str(round(scores[index_x],2))})

            new_json[fn]["regions"] = regions_list
            

with open(os.path.join(save_dir,'default.json'), "w") as f:
    json.dump(new_json, f)
   
                 

'''
{'instances': Instances(num_instances=3, image_height=2048, image_width=2048, fields=[

pred_boxes: Boxes(tensor([[ 229.8726,  992.6866,  309.2379, 1083.9806],
        [ 230.9641,  995.7458,  305.6670, 1077.4072],
        [ 230.4986,  992.6005,  310.5602, 1081.7902]], device='cuda:0')), 
        
scores: tensor([0.9135, 0.3940, 0.3686], device='cuda:0'), 

pred_classes: tensor([ 8, 11, 14], device='cuda:0'), 

locations: tensor([[ 268., 1036.],[ 260., 1028.],[ 260., 1036.]], device='cuda:0'), 
        
top_feat: tensor([[ 0.0010, -0.1584, -0.5071,  ...,  0.1943, -0.1443, -0.1232],[-0.0929, -0.1069, -0.3573,  ...,  0.1685, -0.0957, -0.1708],[ 0.0073, -0.1125, -0.4656,  ...,  0.1674, -0.1115, -0.1617]],device='cuda:0'), 
       
fpn_levels: tensor([0, 0, 0], device='cuda:0'), 
       
pred_masks: tensor([[[False, False, False

'''