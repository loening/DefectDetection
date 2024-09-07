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

class DLLAPI JSZCAlgorithmsDLLPVD
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
	JSZCAlgorithmsDLLPVD();
	// 析构函数
	~JSZCAlgorithmsDLLPVD();

	// 声明导出函数
#pragma region universalFunction

	// 清空返回值
	void clearVec();
#pragma endregion

#pragma region ChengduJabilSelf-check4

	/************************************************************
	*Function:              ImageShieldProcessAMiddleSelfTest4_83_1
	*Description:           一号机自检4外观提取定位所有工位
	*ho_Image:              (输入参数)输入图像
	*ho_DetectRegion:       (输出参数)提取区域
	*ho_PointRegion:        (输出参数)定位点
	*ho_camregion:          (输入参数)产品号
	*ho_JTReg:              (输入参数)产品号
	*hv_ImName:             (输入参数)图像编号
	*Return:                (输出参数)返回值 成功1 报错-1
	*author					(lja)
	************************************************************/
	int  ImageShieldProcessAMiddleSelfTest4_83_1(HObject ho_Image, HObject * ho_DetectRegion,
		HObject* ho_PointRegion, HObject* ho_camregion, HObject* ho_JTReg, HTuple hv_ImName);

	/************************************************************
	*Function:              ImageShieldProcessAMiddleSelfTest4_83_2
	*Description:           二号机自检4外观提取定位所有工位
	*ho_Image:              (输入参数)输入图像
	*ho_DetectRegion:       (输出参数)提取区域
	*ho_PointRegion:        (输出参数)定位点
	*ho_camregion:          (输入参数)产品号
	*ho_JTReg:              (输入参数)产品号
	*hv_ImName:             (输入参数)图像编号
	*Return:                (输出参数)返回值 成功1 报错-1
	*author					(lja)
	************************************************************/
	int  ImageShieldProcessAMiddleSelfTest4_83_2(HObject ho_Image, HObject * ho_DetectRegion,
		HObject* ho_PointRegion, HObject* ho_camregion, HObject* ho_JTReg, HTuple hv_ImName);

	/************************************************************
	*Function:              ImageShieldProcessAMiddleSelfTest4_83_6
	*Description:           六号机自检4外观提取定位所有工位
	*ho_Image:              (输入参数)输入图像
	*ho_DetectRegion:       (输出参数)提取区域
	*ho_PointRegion:        (输出参数)定位点
	*ho_camregion:          (输入参数)产品号
	*ho_JTReg:              (输入参数)产品号
	*hv_ImName:             (输入参数)图像编号
	*Return:                (输出参数)返回值 成功1 报错-1
	*author					(lja)
	************************************************************/
	int  ImageShieldProcessAMiddleSelfTest4_83_6(HObject ho_Image, HObject * ho_DetectRegion,
		HObject* ho_PointRegion, HObject* ho_camregion, HObject* ho_JTReg, HTuple hv_ImName);

	/************************************************************
	*Function:              ImageShieldProcessAMiddleSelfTest4_84_11
	*Description:           十一号机自检4外观提取定位所有工位
	*ho_Image:              (输入参数)输入图像
	*ho_DetectRegion:       (输出参数)提取区域
	*ho_PointRegion:        (输出参数)定位点
	*ho_camregion:          (输入参数)产品号
	*ho_JTReg:              (输入参数)产品号
	*hv_ImName:             (输入参数)图像编号
	*Return:                (输出参数)返回值 成功1 报错-1
	*author					(lja)
	************************************************************/
	int  ImageShieldProcessAMiddleSelfTest4_84_11(HObject ho_Image, HObject * ho_DetectRegion,
		HObject* ho_PointRegion, HObject* ho_camregion, HObject* ho_JTReg, HTuple hv_ImName);


	/************************************************************
	*Function:              ImageShieldProcessAMiddleSelfTest4_84_12
	*Description:           十二号机自检4外观提取定位所有工位
	*ho_Image:              (输入参数)输入图像
	*ho_DetectRegion:       (输出参数)提取区域
	*ho_PointRegion:        (输出参数)定位点
	*ho_camregion:          (输入参数)产品号
	*ho_JTReg:              (输入参数)产品号
	*hv_ImName:             (输入参数)图像编号
	*Return:                (输出参数)返回值 成功1 报错-1
	*author					(lja)
	************************************************************/
	int  ImageShieldProcessAMiddleSelfTest4_84_12(HObject ho_Image, HObject * ho_DetectRegion,
		HObject* ho_PointRegion, HObject* ho_camregion, HObject* ho_JTReg, HTuple hv_ImName);

	/************************************************************
	*Function:              ImageProcessZJ4BlackDefects1Machine1_2_3Station
	*Description:           自检4检测程序
	*ho_Image:              (输入参数)输入图像
	*ho_DetectReg			(输入参数)
	*ho_Mask				(输入参数)
	*hv_ProNum:             (输入参数)产品号
	*hv_StaNum:             (输入参数)产品号
	*hv_CamNum:             (输入参数)产品号
	*hv_ImageNum:           (输入参数)产品号
	*hv_dt:                 (输出参数)缺陷区域
	*Return:                (输出参数)返回值 成功1 报错-1
	*author					(lja)
	************************************************************/
	int  ImageProcessZJ4BlackDefects1Machine1_2_3Station(HObject ho_Image, HObject ho_DetectReg,
		HObject ho_Mask, HTuple hv_ProNum, HTuple hv_StaNum, HTuple hv_CamNum, HTuple hv_ImageNum,
		HTuple* hv_dt);




#pragma endregion

};















