#pragma once
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS     //这个宏定义最好要放到.c文件的第一行
#pragma warning(disable:4996)  
#include "Halconcpp.h"
#include <iostream>
#include <QString>
#include <vector>
//#include <opencv2/opencv.hpp>

using namespace std;
using namespace HalconCpp;
//using namespace cv;

// 条件编译指令
#ifdef _DLLAPI
#define DLLAPI __declspec(dllexport)
#else
#define DLLAPI __declspec(dllimport)
#endif // _DLLAPI

class DLLAPI JSZCAlgorithmsDLLOQC
{

private:



public:
	// 算法运行返回值
	int reg = 0;

	// 错误信息
	//char* ErrMessage = nullptr;

	// C++错误信息
	vector <QString> VeErrMessage;

	// 构造函数
	JSZCAlgorithmsDLLOQC();
	// 析构函数
	~JSZCAlgorithmsDLLOQC();

	// 声明导出函数
#pragma region universalFunction

	// 清空返回值
	void clearVec();
#pragma endregion

#pragma region ChengduJabilOQC
	/************************************************************
	*Function:              ImageShieldProcessOQC84OuterGrayFrame
	*Description:           OQC84灰色OQC84外观提取定位所有工位
	*ho_Image:              (输入参数)输入图像
	*ho_DetectRegion:       (输出参数)提取区域
	*ho_PointRegion:        (输出参数)定位点
	*ho_camregion:          (输入参数)产品号
	*ho_JTReg:              (输入参数)产品号
	*hv_ImName:             (输入参数)图像编号
	*Return:                (输出参数)返回值 成功1 报错-1
	*author					(xkc)
	************************************************************/
	int  ImageShieldProcessOQC84OuterGrayFrame(HObject ho_Image, HObject *ho_DetectRegion,
		HObject *ho_PointRegion, HObject *ho_camregion, HObject *ho_JTReg, HTuple hv_ProNum,
		HTuple hv_StaNum, HTuple hv_CamNum, HTuple hv_ImageNum);

	/************************************************************
	*Function:              ImageShieldProcessOQC84OuterSilverFrame
	*Description:           OQC84银色OQC84外观提取定位所有工位
	*ho_Image:              (输入参数)输入图像
	*ho_DetectRegion:       (输出参数)提取检测区域
	*ho_PointRegion:        (输出参数)定位点
	*ho_camregion:          (输入参数)相机孔区域
	*ho_JTReg:              (输入参数)胶条区域
	*hv_ImName:             (输入参数)图像编号
	*Return:                (输出参数)返回值 成功1 报错-1
	*author					(xkc)
	************************************************************/
	int  ImageShieldProcessOQC84OuterSilverFrame(HObject ho_Image, HObject *ho_DetectRegion,
		HObject *ho_PointRegion, HObject *ho_camregion, HObject *ho_JTReg, HTuple hv_ProNum,
		HTuple hv_StaNum, HTuple hv_CamNum, HTuple hv_ImageNum);
	/************************************************************
	*Function:              Image_OQC84_OuterPositioning_Blue
	*Description:           OQC84蓝色OQC84外观提取定位所有工位
	*ho_Image:              (输入参数)输入图像
	*ho_DetectRegion:       (输出参数)提取区域
	*ho_PointRegion:        (输出参数)定位点
	*ho_camregion:          (输入参数)产品号
	*ho_JTReg:              (输入参数)产品号
	*hv_ImName:             (输入参数)图像编号
	*Return:                (输出参数)返回值 成功1 报错-1
	*author					(zzp)
	************************************************************/
	int  Image_OQC84_OuterPositioning_Blue(HObject ho_Image, HObject * ho_DetectRegion,
		HObject * ho_PointRegion, HObject * ho_camregion, HObject * ho_JTReg, HTuple hv_ImName);

	/************************************************************
	*Function:              ImageProcessOQC84lumen4ColourDefects1Machine1Station
	*Description:           OQC84四色内腔一工位（1-40）检测程序
	*ho_Image:              (输入参数)输入图像
	*hv_ProNum:             (输入参数)产品号
	*hv_StaNum:             (输入参数)产品号
	*hv_CamNum:             (输入参数)产品号
	*hv_ImageNum:           (输入参数)产品号
	*hv_dt:                 (输出参数)缺陷区域
	*Return:                (输出参数)返回值 成功1 报错-1
	*author					(xkc主)
	************************************************************/
	int  ImageProcessOQC84lumen4ColourDefects1Machine1Station(HObject ho_Image, HTuple hv_ProNum,
		HTuple hv_StaNum, HTuple hv_CamNum, HTuple hv_ImageNum, HTuple hv_StrModel, HTuple * hv_dt);

	/************************************************************
	*Function:              OQC84lumen_AJZ_DetectionRegion_1Machine1Station
	*Description:           OQC84四色内腔一工位A基准区域检测程序
	*ho_Image:              (输入参数)输入图像
	*hv_ProNum:             (输入参数)产品号
	*hv_StaNum:             (输入参数)产品号
	*hv_CamNum:             (输入参数)产品号
	*hv_ImageNum:           (输入参数)产品号
	*hv_dt:                 (输出参数)缺陷区域
	*Return:                (输出参数)返回值 成功1 报错-1
	*author					(xkc)
	************************************************************/
	int  OQC84lumen_AJZ_DetectionRegion_1Machine1Station(HObject ho_Image, HObject ho_AJZRegion,
		HTuple hv_ImageNum, HTuple hv_inputdt, HTuple * hv_dt);

	/************************************************************
	*Function:              OQC84lumen_CGLC_DetectionRegion_1Machine1Station
	*Description:           OQC84四色内腔一工位CGLC区域检测程序
	*ho_Image:              (输入参数)输入图像
	*hv_ProNum:             (输入参数)产品号
	*hv_StaNum:             (输入参数)产品号
	*hv_CamNum:             (输入参数)产品号
	*hv_ImageNum:           (输入参数)产品号
	*hv_dt:                 (输出参数)缺陷区域
	*Return:                (输出参数)返回值 成功1 报错-1
	*author					(xkc)
	************************************************************/
	int  OQC84lumen_CGLC_DetectionRegion_1Machine1Station(HObject ho_Image, HObject ho_CGLCRegion,
		HTuple hv_ImageNum, HTuple hv_inputdt, HTuple * hv_dt);

	/************************************************************
	*Function:              OQC84lumen_CGLC_Laser_DetectionRegion_1Machine1Station
	*Description:           OQC84四色内腔一工位CGLC_Laser区域检测程序
	*ho_Image:              (输入参数)输入图像
	*hv_ProNum:             (输入参数)产品号
	*hv_StaNum:             (输入参数)产品号
	*hv_CamNum:             (输入参数)产品号
	*hv_ImageNum:           (输入参数)产品号
	*hv_dt:                 (输出参数)缺陷区域
	*Return:                (输出参数)返回值 成功1 报错-1
	*author					(xkc)
	************************************************************/
	int  OQC84lumen_CGLC_Laser_DetectionRegion_1Machine1Station(HObject ho_Image, HObject ho_LaserRegion,
		HTuple hv_ImageNum, HTuple hv_inputdt, HTuple * hv_dt);

	/************************************************************
	*Function:              OQC84lumen_CGRT_DetectionRegion_1Machine1Station
	*Description:           OQC84四色内腔一工位CGRT区域检测程序
	*ho_Image:              (输入参数)输入图像
	*hv_ProNum:             (输入参数)产品号
	*hv_StaNum:             (输入参数)产品号
	*hv_CamNum:             (输入参数)产品号
	*hv_ImageNum:           (输入参数)产品号
	*hv_dt:                 (输出参数)缺陷区域
	*Return:                (输出参数)返回值 成功1 报错-1
	*author					(xkc)
	************************************************************/
	int  OQC84lumen_CGRT_DetectionRegion_1Machine1Station(HObject ho_Image, HObject ho_CGRTRegion,
		HTuple hv_ImageNum, HTuple hv_inputdt, HTuple * hv_dt);

	/************************************************************
	*Function:              OQC84lumen_Hole_DetectionRegion_1Machine1Station
	*Description:           OQC84四色内腔一工位Hole区域检测程序
	*ho_Image:              (输入参数)输入图像
	*hv_ProNum:             (输入参数)产品号
	*hv_StaNum:             (输入参数)产品号
	*hv_CamNum:             (输入参数)产品号
	*hv_ImageNum:           (输入参数)产品号
	*hv_dt:                 (输出参数)缺陷区域
	*Return:                (输出参数)返回值 成功1 报错-1
	*author					(xkc)
	************************************************************/
	int  OQC84lumen_Hole_DetectionRegion_1Machine1Station(HObject ho_Image, HObject ho_HoleRegion,
		HTuple hv_ImageNum, HTuple hv_inputdt, HTuple * hv_dt);

	/************************************************************
	*Function:              OQC84lumen_Plastic_DetectionRegion_1Machine1Station
	*Description:           OQC84四色内腔一工位塑胶区域检测程序
	*ho_Image:              (输入参数)输入图像
	*hv_ProNum:             (输入参数)产品号
	*hv_StaNum:             (输入参数)产品号
	*hv_CamNum:             (输入参数)产品号
	*hv_ImageNum:           (输入参数)产品号
	*hv_dt:                 (输出参数)缺陷区域
	*Return:                (输出参数)返回值 成功1 报错-1
	*author					(xkc)
	************************************************************/
	int  OQC84lumen_Plastic_DetectionRegion_1Machine1Station(HObject ho_Image, HObject ho_PlasticRegion,
		HTuple hv_ImageNum, HTuple hv_inputdt, HTuple hv_StrModel, HTuple * hv_dt);

	/************************************************************
	*Function:              ImageProcessOQC84lumenGrayDefects1Machine2Station
	*Description:           OQC84蓝色内腔二工位（1-42）检测程序
	*ho_Image:              (输入参数)输入图像
	*hv_ProNum:             (输入参数)产品号
	*hv_StaNum:             (输入参数)产品号
	*hv_CamNum:             (输入参数)产品号
	*hv_ImageNum:           (输入参数)产品号
	*hv_dt:                 (输出参数)缺陷区域
	*Return:                (输出参数)返回值 成功1 报错-1
	*author					(zzp主)
	************************************************************/
	int   ImageProcessOQC84lumenBlueDefects1Machine2Station(HObject ho_Image, HTuple hv_ProNum,
		HTuple hv_StaNum, HTuple hv_CamNum, HTuple hv_ImageNum, HTuple * hv_dt);

	/************************************************************
	*Function:              ImageProcessOQC84lumenGrayDefects1Machine2Station
	*Description:           OQC84四色内腔四工位（1-24）检测程序
	*ho_Image:              (输入参数)输入图像
	*hv_ProNum:             (输入参数)产品号
	*hv_StaNum:             (输入参数)产品号
	*hv_CamNum:             (输入参数)产品号
	*hv_ImageNum:           (输入参数)产品号
	*hv_dt:                 (输出参数)缺陷区域
	*Return:                (输出参数)返回值 成功1 报错-1
	*author					(xkc)
	************************************************************/
	int  ImageProcessOQC84lumenBlueDefects1Machine4Station(HObject ho_Image, HTuple hv_ProNum,
		HTuple hv_StaNum, HTuple hv_CamNum, HTuple hv_ImageNum, HTuple * hv_dt);

#pragma endregion	 

};















