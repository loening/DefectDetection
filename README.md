# DefectDetection

## Introduction: Defect Detection on Mobile Phone Back Covers

This project introduces a hybrid approach for detecting defects on cell phone back covers, leveraging a combination of neural network models and traditional image processing algorithms.

## Directory Structure
- **Data:** Contains the relevant data files for the model.
- **neural network modeling:** Implements neural network models based on the detectron2 framework.
- **halcon:** Incorporates traditional image processing algorithms.

## Neural Network Model
### System Requirements
- Python version ≥ 3.7
- PyTorch version ≥ 1.8, along with the compatible version of torchvision.

### Training Commands

```bash
python AdelaiDet/datasets/prepare_thing_sem_from_instance.py
```

### Testing Commands

```bash
python AdelaiDet/demo/demo.py \
    --config-file configs/BlendMask/R_101_dcni3_5x.yaml \
    --input input.jpg \
    --confidence-threshold 0.35 \
    --opts MODEL.WEIGHTS blendmask_r101_dcni3_5x.pth
```

In the above commands, the model weight file `blendmask_r101_dcni3_5x.pth` and the test input file `input.jpg` are evaluated.

## Citation
If you use this project in your research, please cite this project.
```
@article{Hybrid2024,
  title   = {Hybrid Defect Detection for Cell Phone Back Covers: Fusing Deep Learning and Traditional Image Processing Techniques},
  author  = {Dening Luo and Ke Liu and Daofu Zong},
  journal= {},
  year={2024}
}
```
