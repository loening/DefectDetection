import math
from typing import List, Dict
import torch
from torch import nn
from torch.nn import functional as F

from detectron2.layers import ShapeSpec, NaiveSyncBatchNorm
from detectron2.modeling.proposal_generator.build import PROPOSAL_GENERATOR_REGISTRY

from adet.layers import DFConv2d, NaiveGroupNorm
from adet.utils.comm import compute_locations
from .fcos_outputs import FCOSOutputs


__all__ = ["FCOS"]

INF = 100000000


class Scale(nn.Module):
    def __init__(self, init_value=1.0):
        super(Scale, self).__init__()
        self.scale = nn.Parameter(torch.FloatTensor([init_value]))

    def forward(self, input):
        return input * self.scale


class ModuleListDial(nn.ModuleList):
    def __init__(self, modules=None):
        super(ModuleListDial, self).__init__(modules)
        self.cur_position = 0

    def forward(self, x):
        result = self[self.cur_position](x)
        self.cur_position += 1
        if self.cur_position >= len(self):
            self.cur_position = 0
        return result


@PROPOSAL_GENERATOR_REGISTRY.register()
class FCOS(nn.Module):
    """
    Implement FCOS (https://arxiv.org/abs/1904.01355).
    """
    def __init__(self, cfg, input_shape: Dict[str, ShapeSpec]):
        super().__init__()
        self.in_features = cfg.MODEL.FCOS.IN_FEATURES
        self.fpn_strides = cfg.MODEL.FCOS.FPN_STRIDES
        self.yield_proposal = cfg.MODEL.FCOS.YIELD_PROPOSAL

        self.fcos_head = FCOSHead(cfg, [input_shape[f] for f in self.in_features])
        self.in_channels_to_top_module = self.fcos_head.in_channels_to_top_module

        self.fcos_outputs = FCOSOutputs(cfg)

    def forward_head(self, features, top_module=None):
        features = [features[f] for f in self.in_features]
        pred_class_logits, pred_deltas, pred_centerness, top_feats, bbox_towers = self.fcos_head(
            features, top_module, self.yield_proposal)
        return pred_class_logits, pred_deltas, pred_centerness, top_feats, bbox_towers

    # def forward(self, images, features, gt_instances=None, top_module=None):
    #     """
    #     Arguments:
    #         images (list[Tensor] or ImageList): images to be processed
    #         targets (list[BoxList]): ground-truth boxes present in the image (optional)
    #
    #     Returns:
    #         result (list[BoxList] or dict[Tensor]): the output from the model.
    #             During training, it returns a dict[Tensor] which contains the losses.
    #             During testing, it returns list[BoxList] contains additional fields
    #             like `scores`, `labels` and `mask` (for Mask R-CNN models).
    #
    #     """
    #     features = [features[f] for f in self.in_features]
    #     locations = self.compute_locations(features)
    #     logits_pred, reg_pred, ctrness_pred, top_feats, bbox_towers = self.fcos_head(
    #         features, top_module, self.yield_proposal
    #     )
    #
    #     results = {}
    #     if self.yield_proposal:
    #         results["features"] = {
    #             f: b for f, b in zip(self.in_features, bbox_towers)
    #         }
    #
    #     if self.training:
    #         results, losses = self.fcos_outputs.losses(
    #             logits_pred, reg_pred, ctrness_pred,
    #             locations, gt_instances, top_feats
    #         )
    #
    #         if self.yield_proposal:
    #             with torch.no_grad():
    #                 results["proposals"] = self.fcos_outputs.predict_proposals(
    #                     logits_pred, reg_pred, ctrness_pred,
    #                     locations, images.image_sizes, top_feats
    #                 )
    #         return results, losses
    #     else:
    #         results = self.fcos_outputs.predict_proposals(
    #             logits_pred, reg_pred, ctrness_pred,
    #             locations, images.image_sizes, top_feats
    #         )
    #
    #         return results, {}

    def forward(self, images, features, gt_instances=None, top_module=None):
        features = [features[f] for f in self.in_features]  ### list:[[tensor:1,256,256,256][tensor:1,256,128,128][tensor:1,256,64,64][tensor:1,256,32,32][tensor:1,256,16,16]]
        locations = self.compute_locations(features)
        logits_pred, reg_pred, ctrness_pred, top_feats, bbox_towers = self.fcos_head(
            features, top_module, self.yield_proposal
        )

        # # add
        # import os
        # from adet.utils.draw import FeatureVisualization
        # path = '/media/ps/1616B1B516B19669/LB/train/HG2_project/blendmask/bottom48/fcos'
        # if not os.path.exists(path):
        #     os.makedirs(path)
        # f2 = FeatureVisualization(ctrness_pred,path)
        # f2.get_feature()
        #
        # path2 = '/media/ps/1616B1B516B19669/LB/inf/val/ctrness'
        # if not os.path.exists(path2):
        #     os.makedirs(path2)
        # f = FeatureVisualization(reg_pred, path2)
        # f.get_feature()



        results = {}
        if self.yield_proposal:
            results["features"] = {
                f: b for f, b in zip(self.in_features, bbox_towers)
            }

        if self.training:
            results, losses = self.fcos_outputs.losses(
                logits_pred, reg_pred, ctrness_pred,
                locations, gt_instances, top_feats
            )

            if self.yield_proposal:
                with torch.no_grad():
                    results["proposals"] = self.fcos_outputs.predict_proposals(
                        logits_pred, reg_pred, ctrness_pred,
                        locations, images.image_sizes, top_feats
                    )
            # print("images:",images[0].shape)
            # print("results:",results)
            return results, losses
        else:
            results = self.fcos_outputs.predict_proposals(
                logits_pred, reg_pred, ctrness_pred,
                locations, images.image_sizes, top_feats
            )

            return results, {}

    def compute_locations(self, features):
        locations = []
        for level, feature in enumerate(features):
            h, w = feature.size()[-2:]
            locations_per_level = compute_locations(
                h, w, self.fpn_strides[level],      # [8, 16, 32, 64, 128]
                feature.device
            )
            locations.append(locations_per_level)
        return locations


class FCOSHead(nn.Module):
    def __init__(self, cfg, input_shape: List[ShapeSpec]):
        """
        Arguments:
            in_channels (int): number of channels of the input feature
        """
        super().__init__()
        # TODO: Implement the sigmoid version first.
        self.num_classes = cfg.MODEL.FCOS.NUM_CLASSES
        self.fpn_strides = cfg.MODEL.FCOS.FPN_STRIDES
        self.use_p2 = "p2" in cfg.MODEL.FCOS.IN_FEATURES
        head_configs = {"cls": (cfg.MODEL.FCOS.NUM_CLS_CONVS,
                                cfg.MODEL.FCOS.USE_DEFORMABLE),
                        "bbox": (cfg.MODEL.FCOS.NUM_BOX_CONVS,
                                 cfg.MODEL.FCOS.USE_DEFORMABLE),
                        "share": (cfg.MODEL.FCOS.NUM_SHARE_CONVS,
                                 False),
                        "p2_cls": (cfg.MODEL.FCOS.P2_NUM_CLS_CONVS, 
                                 cfg.MODEL.FCOS.USE_DEFORMABLE),
                        "p2_bbox": (cfg.MODEL.FCOS.P2_NUM_BOX_CONVS, 
                                 cfg.MODEL.FCOS.USE_DEFORMABLE)}
        norm = None if cfg.MODEL.FCOS.NORM == "none" else cfg.MODEL.FCOS.NORM
        self.num_levels = len(input_shape)

        in_channels = [s.channels for s in input_shape]
        assert len(set(in_channels)) == 1, "Each level must have the same channel!"
        in_channels = in_channels[0]

        self.in_channels_to_top_module = in_channels

        for head in head_configs:       ## {'cls': (4, False), 'bbox': (4, False), 'share': (0, False)}
            tower = []
            num_convs, use_deformable = head_configs[head]
            for i in range(num_convs):
                if use_deformable and i == num_convs - 1:
                    conv_func = DFConv2d
                else:
                    conv_func = nn.Conv2d
                tower.append(conv_func(
                    in_channels, in_channels,
                    kernel_size=3, stride=1,
                    padding=1, bias=True
                ))
                if norm == "GN":
                    tower.append(nn.GroupNorm(32, in_channels))
                elif norm == "NaiveGN":
                    tower.append(NaiveGroupNorm(32, in_channels))
                elif norm == "BN":
                    tower.append(ModuleListDial([
                        nn.BatchNorm2d(in_channels) for _ in range(self.num_levels)
                    ]))
                elif norm == "SyncBN":
                    tower.append(ModuleListDial([
                        NaiveSyncBatchNorm(in_channels) for _ in range(self.num_levels)
                    ]))
                tower.append(nn.ReLU())
            self.add_module('{}_tower'.format(head),
                            nn.Sequential(*tower))

        self.cls_logits = nn.Conv2d(
            in_channels, self.num_classes,
            kernel_size=3, stride=1,
            padding=1
        )
        self.bbox_pred = nn.Conv2d(
            in_channels, 4, kernel_size=3,
            stride=1, padding=1
        )
        self.ctrness = nn.Conv2d(
            in_channels, 1, kernel_size=3,
            stride=1, padding=1
        )

        if cfg.MODEL.FCOS.USE_SCALE:
            self.scales = nn.ModuleList([Scale(init_value=1.0) for _ in range(self.num_levels)])
        else:
            self.scales = None

        for modules in [
            self.cls_tower, self.bbox_tower,
            self.share_tower, self.cls_logits,
            self.bbox_pred, self.ctrness,
            self.p2_cls_tower, self.p2_bbox_tower,
        ]:
            for l in modules.modules():
                if isinstance(l, nn.Conv2d):
                    torch.nn.init.normal_(l.weight, std=0.01)
                    torch.nn.init.constant_(l.bias, 0)

        # initialize the bias for focal loss
        prior_prob = cfg.MODEL.FCOS.PRIOR_PROB
        bias_value = -math.log((1 - prior_prob) / prior_prob)
        torch.nn.init.constant_(self.cls_logits.bias, bias_value)

    def forward(self, x, top_module=None, yield_bbox_towers=False):
        logits = []
        bbox_reg = []
        ctrness = []
        top_feats = []
        bbox_towers = []
        for l, feature in enumerate(x):
            feature = self.share_tower(feature)
            if self.use_p2 and l == 0:
                cls_tower = self.p2_cls_tower(feature)
                bbox_tower = self.p2_bbox_tower(feature)
            else:
                cls_tower = self.cls_tower(feature)
                bbox_tower = self.bbox_tower(feature)
            if yield_bbox_towers:
                bbox_towers.append(bbox_tower)

            logits.append(self.cls_logits(cls_tower))
            ctrness.append(self.ctrness(bbox_tower))
            reg = self.bbox_pred(bbox_tower)
            if self.scales is not None:
                reg = self.scales[l](reg)
            # Note that we use relu, as in the improved FCOS, instead of exp.
            bbox_reg.append(F.relu(reg))
            if top_module is not None:
                top_feats.append(top_module(bbox_tower))
        return logits, bbox_reg, ctrness, top_feats, bbox_towers


'''
locations:
[
[tensor([[   4.,    4.],
        [  12.,    4.],
        [  20.,    4.],
        ...,
        [2028., 2044.],
        [2036., 2044.],
        [2044., 2044.]], device='cuda:0')],
tensor([[   8.,    8.],
        [  24.,    8.],
        [  40.,    8.],
        ...,
        [2008., 2040.],
        [2024., 2040.],
        [2040., 2040.]], device='cuda:0')
]
'''