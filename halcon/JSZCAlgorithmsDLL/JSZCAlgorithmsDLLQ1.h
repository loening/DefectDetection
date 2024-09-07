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

class DLLAPI JSZCAlgorithmsDLLQ1
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
	JSZCAlgorithmsDLLQ1();
	// 析构函数
	~JSZCAlgorithmsDLLQ1();

	// 声明导出函数
#pragma region universalFunction

	// 清空返回值
	void clearVec();
#pragma endregion



#pragma region ChengduJabilQ1
	//Q1正式机台1\2\5
	/************************************************************
	*Function:               HotRole
	*Description:            热钻孔缺陷检测
	*Params:
	*hv_dd:					输入--参数结构体
	*hv_dt					输出--参数结构体
	*Return :				1代表有缺陷，0带表无缺陷，-1带表算法参数有问题
	************************************************************/
	int  HotRole(HTuple hv_dd, HTuple hv_dt);

	/************************************************************
	*Function:               AffineTransformation
	*Description:            图像校正算法
	*Params:
	*hv_dd:					输入--参数结构体
	*Return :				1代表有缺陷，0带表无缺陷，-1带表算法参数有问题
	************************************************************/
	int  AffineTransformation(HTuple hv_at);

	/************************************************************
	*Function:               DefectDetectionAlgorithms
	*Description:            通用缺陷检测算法
	*Params:
	*hv_dd:					输入--参数结构体
	*hv_dt					输出--参数结构体
	*Return :				1代表有缺陷，0带表无缺陷，-1带表算法参数有问题
	************************************************************/
	int  DefectDetectionAlgorithms(HTuple hv_dd, HTuple hv_dt);

	/************************************************************
	*Function:               ImageProcessQ1_84GrayLumenDefects1Station
	*Description:            Q1灰色内腔缺陷检测算法
	*Params:
	*ho_Image:				 输入--灰色图像
	*hv_ProNum				 输入--产品编号
	*hv_StaNum			     输入--工位号
	*hv_CamNum			     输入--图像号
	*hv_ImageNum			 输入--图像索引
	*hv_AlgorithmConfig		 输入--算法配置文件
	*hv_dt					 输入--设配参数
	*Return :                1代表有缺陷，0带表无缺陷，-1带表算法参数有问题
	************************************************************/
	int   ImageProcessQ1_84GrayLumenDefects1Station(HObject ho_Image, HTuple hv_ProNum,
		HTuple hv_StaNum, HTuple hv_CamNum, HTuple hv_ImageNum, HTuple hv_AlgorithmConfig,
		HTuple *hv_dt);
	/************************************************************
	*Function:               ImageProcessQ1_84GrayLumenDefects1Station
	*Description:            Q1灰色内腔缺陷检测算法
	*Params:
	*ho_Image:				 输入--灰色图像
	*hv_ProNum				 输入--产品编号
	*hv_StaNum			     输入--工位号
	*hv_CamNum			     输入--图像号
	*hv_ImageNum			 输入--图像索引
	*hv_AlgorithmConfig		 输入--算法配置文件
	*hv_dt					 输入--设配参数
	*Return :                1代表有缺陷，0带表无缺陷，-1带表算法参数有问题
	************************************************************/
	int   ImageProcessQ1_84LumenRoleDefects2Station(HObject ho_Image, HTuple hv_ProNum,
		HTuple hv_StaNum, HTuple hv_CamNum, HTuple hv_ImageNum, HTuple hv_AlgorithmConfig,
		HTuple *hv_dt);

	//Q1正式机台3\4// 
	/************************************************************
	*Function:               Det_Bjizhun_region
	*Description:            检测B基准,AUTHOR:jl
	*Params:
	*hv_dd:					 输入--参数结构体
	*hv_dt					 输出--参数结构体
	*Return :				 1代表有缺陷，0带表无缺陷，-1带表算法参数有问题
	************************************************************/
	int  Det_Bjizhun_region(HTuple hv_dd, HTuple hv_dt);

	/************************************************************
	*Function:               Det_LD_Region
	*Description:            检测镭雕,AUTHOR:jl
	*Params:
	*hv_dd:					 输入--参数结构体
	*hv_dt					 输出--参数结构体
	*Return :				 1代表有缺陷，0带表无缺陷，-1带表算法参数有问题
	************************************************************/
	int  Det_LD_Region(HTuple hv_dd, HTuple hv_dt);

	/************************************************************
	*Function:               Det_RT_Region
	*Description:            检测RT，AUTHOR:jl
	*Params:
	*hv_dd:					 输入--参数结构体
	*hv_dt					 输出--参数结构体
	*Return :				 1代表有缺陷，0带表无缺陷，-1带表算法参数有问题
	************************************************************/
	int  Det_RT_Region(HTuple hv_dd, HTuple hv_dt);

	/************************************************************
	*Function:               Det_SJ_Region
	*Description:            检测塑胶，AUTHOR:jl
	*Params:
	*hv_dd:					 输入--参数结构体
	*hv_dt					 输出--参数结构体
	*Return :				 1代表有缺陷，0带表无缺陷，-1带表算法参数有问题
	************************************************************/
	int  Det_SJ_Region(HTuple hv_dd, HTuple hv_dt);

	/************************************************************
	*Function:               ImageProcessQ1_84GrayLumenDefects3StationB
	*Description:            Q1灰色内腔缺陷检测算法//3,4工位B
	*Params:
	*ho_Image:				 输入--灰色图像
	*hv_ProNum				 输入--产品编号
	*hv_StaNum			     输入--工位号
	*hv_CamNum			     输入--图像号
	*hv_ImageNum			 输入--图像索引
	*hv_dt					 输入--设配参数
	*Return :                1代表有缺陷，0带表无缺陷，-1带表算法参数有问题
	************************************************************/

	int  ImageProcessQ1_84GrayLumenDefects3Station(HObject ho_Image, HTuple hv_ProNum,
		HTuple hv_StaNum, HTuple hv_CamNum, HTuple hv_ImageNum, HTuple * hv_dt);

#pragma endregion


};















