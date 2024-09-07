from detectron2.data.datasets import register_coco_instances
from detectron2.data import MetadataCatalog, DatasetCatalog
import os

import numpy as np
from PIL import Image
import time

os.environ["CUDA_VISIBLE_DEVICES"] = "1"

import torch

jf = '/media/ps/1616B1B516B19669/LB/train/0604/k11_1/annotations/train.json'
imgs = '/media/ps/1616B1B516B19669/LB/train/0604/k11_1/train'
register_coco_instances("phone", {}, jf, imgs)
fruits_nuts_metadata = MetadataCatalog.get("phone")
dataset_dicts = DatasetCatalog.get("phone")

from detectron2.engine import DefaultTrainer
from adet.config import get_cfg

cfg = get_cfg()
config_file = '/home/ps/inflibs171/AdelaiDet/configs/BlendMask/R_50_3x.yaml'
cfg.merge_from_file(config_file)
cfg.DATALOADER.NUM_WORKERS = 2

cfg.MODEL.ROI_HEADS.NUM_CLASSES = 25
cfg.MODEL.FCOS.NUM_CLASSES = 25



# cfg.MODEL.FCOS.NUM_CLASSES = 2
cfg.INPUT.MAX_SIZE_TEST = 2048
cfg.INPUT.MIN_SIZE_TEST = 2048
# cfg.MODEL.WEIGHTS = "/media/ps/1616B1B516B19669/LB/train/0604/k11_1/weights/model_0050999.pth"
cfg.MODEL.WEIGHTS = "/media/ps/1616B1B516B19669/LB/train/0604/k11_1/weights/en"
cfg.MODEL.ROI_HEADS.SCORE_THRESH_TEST = 0.1 # set the testing threshold for this model
cfg.DATASETS.TEST = ("phone", )
cfg.MODEL.DEVICE = "cuda:0"
cfg.MODEL.FCOS.INFERENCE_TH_TEST = 0.1225

cfg.INPUT.FORMAT = 'L'
cfg.MODEL.PIXEL_MEAN = [23.933]
cfg.MODEL.PIXEL_STD = [33.574]

cfg.MODEL.KEY = '8Xe0efbbhSPHmaw0'
cfg.MODEL.IV = 'OwXaWuIhMzErsKl5'

from detectron2.engine import DefaultPredictor
import torch
import time

import torch.nn as nn
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

        # checkpointer.load_enc(cfg.MODEL.WEIGHTS)
        checkpointer.load_enc(cfg.MODEL.WEIGHTS,cfg.MODEL.KEY,cfg.MODEL.IV)

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
a=[]