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

class DLLAPI JSZCAlgorithmsDLLOQCWG
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
	JSZCAlgorithmsDLLOQCWG();
	// 析构函数
	~JSZCAlgorithmsDLLOQCWG();

	// 声明导出函数
#pragma region universalFunction

	// 清空返回值
	void clearVec();
#pragma endregion

#pragma region ChengduJabilOQC
	/************************************************************
	*Function:              ImageShieldProcessIPADCB84OuterGrayFrame
	*Description:           IPADCB84灰色IPADCB84外观提取定位所有工位
	*ho_Image:              (输入参数)输入图像
	*ho_DetectRegion:       (输出参数)提取区域
	*ho_PointRegion:        (输出参数)定位点
	*ho_camregion:          (输入参数)产品号
	*ho_JTReg:              (输入参数)产品号
	*hv_ImName:             (输入参数)图像编号
	*Return:                (输出参数)返回值 成功1 报错-1
	*author					(xkc)
	************************************************************/
	int  Yolo_DetectOQCWG_Extract(HObject ho_Image, HObject ho_RectangleRegion, HObject *ho_OutputRegion,
		HTuple hv_RegionID, HTuple hv_ProNum, HTuple hv_StaNum, HTuple hv_CamNum, HTuple hv_ImageNum,
		HTuple hv_d6);





#pragma endregion	 

};















