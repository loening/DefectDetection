import torch
import torch.nn.functional as F
from torch import nn

from detectron2.layers import Conv2d, ShapeSpec, get_norm   

from detectron2.modeling.backbone import  Backbone
from detectron2.modeling import BACKBONE_REGISTRY


__all__ = []



@BACKBONE_REGISTRY.register()
def build_fcos_cspnext_pafpn_backbone(cfg, input_shape:ShapeSpec):
    if cfg.MODEL.CSPNEXT:
        bottom_up = build_cspnext_backbone(cfg, input_shape)
        pass