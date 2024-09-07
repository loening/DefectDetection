#pragma once
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS     //����궨�����Ҫ�ŵ�.c�ļ��ĵ�һ��
#pragma warning(disable:4996)  
#include "Halconcpp.h"
#include <iostream>
#include <QString>
#include <vector>
//#include <opencv2/opencv.hpp>

using namespace std;
using namespace HalconCpp;
//using namespace cv;

// ��������ָ��
#ifdef _DLLAPI
#define DLLAPI __declspec(dllexport)
#else
#define DLLAPI __declspec(dllimport)
#endif // _DLLAPI

class DLLAPI JSZCAlgorithmsDLLOQC
{

private:



public:
	// �㷨���з���ֵ
	int reg = 0;

	// ������Ϣ
	//char* ErrMessage = nullptr;

	// C++������Ϣ
	vector <QString> VeErrMessage;

	// ���캯��
	JSZCAlgorithmsDLLOQC();
	// ��������
	~JSZCAlgorithmsDLLOQC();

	// ������������
#pragma region universalFunction

	// ��շ���ֵ
	void clearVec();
#pragma endregion

#pragma region ChengduJabilOQC
	/************************************************************
	*Function:              ImageShieldProcessOQC84OuterGrayFrame
	*Description:           OQC84��ɫOQC84�����ȡ��λ���й�λ
	*ho_Image:              (�������)����ͼ��
	*ho_DetectRegion:       (�������)��ȡ����
	*ho_PointRegion:        (�������)��λ��
	*ho_camregion:          (�������)��Ʒ��
	*ho_JTReg:              (�������)��Ʒ��
	*hv_ImName:             (�������)ͼ����
	*Return:                (�������)����ֵ �ɹ�1 ����-1
	*author					(xkc)
	************************************************************/
	int  ImageShieldProcessOQC84OuterGrayFrame(HObject ho_Image, HObject *ho_DetectRegion,
		HObject *ho_PointRegion, HObject *ho_camregion, HObject *ho_JTReg, HTuple hv_ProNum,
		HTuple hv_StaNum, HTuple hv_CamNum, HTuple hv_ImageNum);

	/************************************************************
	*Function:              ImageShieldProcessOQC84OuterSilverFrame
	*Description:           OQC84��ɫOQC84�����ȡ��λ���й�λ
	*ho_Image:              (�������)����ͼ��
	*ho_DetectRegion:       (�������)��ȡ�������
	*ho_PointRegion:        (�������)��λ��
	*ho_camregion:          (�������)���������
	*ho_JTReg:              (�������)��������
	*hv_ImName:             (�������)ͼ����
	*Return:                (�������)����ֵ �ɹ�1 ����-1
	*author					(xkc)
	************************************************************/
	int  ImageShieldProcessOQC84OuterSilverFrame(HObject ho_Image, HObject *ho_DetectRegion,
		HObject *ho_PointRegion, HObject *ho_camregion, HObject *ho_JTReg, HTuple hv_ProNum,
		HTuple hv_StaNum, HTuple hv_CamNum, HTuple hv_ImageNum);
	/************************************************************
	*Function:              Image_OQC84_OuterPositioning_Blue
	*Description:           OQC84��ɫOQC84�����ȡ��λ���й�λ
	*ho_Image:              (�������)����ͼ��
	*ho_DetectRegion:       (�������)��ȡ����
	*ho_PointRegion:        (�������)��λ��
	*ho_camregion:          (�������)��Ʒ��
	*ho_JTReg:              (�������)��Ʒ��
	*hv_ImName:             (�������)ͼ����
	*Return:                (�������)����ֵ �ɹ�1 ����-1
	*author					(zzp)
	************************************************************/
	int  Image_OQC84_OuterPositioning_Blue(HObject ho_Image, HObject * ho_DetectRegion,
		HObject * ho_PointRegion, HObject * ho_camregion, HObject * ho_JTReg, HTuple hv_ImName);

	/************************************************************
	*Function:              ImageProcessOQC84lumen4ColourDefects1Machine1Station
	*Description:           OQC84��ɫ��ǻһ��λ��1-40��������
	*ho_Image:              (�������)����ͼ��
	*hv_ProNum:             (�������)��Ʒ��
	*hv_StaNum:             (�������)��Ʒ��
	*hv_CamNum:             (�������)��Ʒ��
	*hv_ImageNum:           (�������)��Ʒ��
	*hv_dt:                 (�������)ȱ������
	*Return:                (�������)����ֵ �ɹ�1 ����-1
	*author					(xkc��)
	************************************************************/
	int  ImageProcessOQC84lumen4ColourDefects1Machine1Station(HObject ho_Image, HTuple hv_ProNum,
		HTuple hv_StaNum, HTuple hv_CamNum, HTuple hv_ImageNum, HTuple hv_StrModel, HTuple * hv_dt);

	/************************************************************
	*Function:              OQC84lumen_AJZ_DetectionRegion_1Machine1Station
	*Description:           OQC84��ɫ��ǻһ��λA��׼���������
	*ho_Image:              (�������)����ͼ��
	*hv_ProNum:             (�������)��Ʒ��
	*hv_StaNum:             (�������)��Ʒ��
	*hv_CamNum:             (�������)��Ʒ��
	*hv_ImageNum:           (�������)��Ʒ��
	*hv_dt:                 (�������)ȱ������
	*Return:                (�������)����ֵ �ɹ�1 ����-1
	*author					(xkc)
	************************************************************/
	int  OQC84lumen_AJZ_DetectionRegion_1Machine1Station(HObject ho_Image, HObject ho_AJZRegion,
		HTuple hv_ImageNum, HTuple hv_inputdt, HTuple * hv_dt);

	/************************************************************
	*Function:              OQC84lumen_CGLC_DetectionRegion_1Machine1Station
	*Description:           OQC84��ɫ��ǻһ��λCGLC���������
	*ho_Image:              (�������)����ͼ��
	*hv_ProNum:             (�������)��Ʒ��
	*hv_StaNum:             (�������)��Ʒ��
	*hv_CamNum:             (�������)��Ʒ��
	*hv_ImageNum:           (�������)��Ʒ��
	*hv_dt:                 (�������)ȱ������
	*Return:                (�������)����ֵ �ɹ�1 ����-1
	*author					(xkc)
	************************************************************/
	int  OQC84lumen_CGLC_DetectionRegion_1Machine1Station(HObject ho_Image, HObject ho_CGLCRegion,
		HTuple hv_ImageNum, HTuple hv_inputdt, HTuple * hv_dt);

	/************************************************************
	*Function:              OQC84lumen_CGLC_Laser_DetectionRegion_1Machine1Station
	*Description:           OQC84��ɫ��ǻһ��λCGLC_Laser���������
	*ho_Image:              (�������)����ͼ��
	*hv_ProNum:             (�������)��Ʒ��
	*hv_StaNum:             (�������)��Ʒ��
	*hv_CamNum:             (�������)��Ʒ��
	*hv_ImageNum:           (�������)��Ʒ��
	*hv_dt:                 (�������)ȱ������
	*Return:                (�������)����ֵ �ɹ�1 ����-1
	*author					(xkc)
	************************************************************/
	int  OQC84lumen_CGLC_Laser_DetectionRegion_1Machine1Station(HObject ho_Image, HObject ho_LaserRegion,
		HTuple hv_ImageNum, HTuple hv_inputdt, HTuple * hv_dt);

	/************************************************************
	*Function:              OQC84lumen_CGRT_DetectionRegion_1Machine1Station
	*Description:           OQC84��ɫ��ǻһ��λCGRT���������
	*ho_Image:              (�������)����ͼ��
	*hv_ProNum:             (�������)��Ʒ��
	*hv_StaNum:             (�������)��Ʒ��
	*hv_CamNum:             (�������)��Ʒ��
	*hv_ImageNum:           (�������)��Ʒ��
	*hv_dt:                 (�������)ȱ������
	*Return:                (�������)����ֵ �ɹ�1 ����-1
	*author					(xkc)
	************************************************************/
	int  OQC84lumen_CGRT_DetectionRegion_1Machine1Station(HObject ho_Image, HObject ho_CGRTRegion,
		HTuple hv_ImageNum, HTuple hv_inputdt, HTuple * hv_dt);

	/************************************************************
	*Function:              OQC84lumen_Hole_DetectionRegion_1Machine1Station
	*Description:           OQC84��ɫ��ǻһ��λHole���������
	*ho_Image:              (�������)����ͼ��
	*hv_ProNum:             (�������)��Ʒ��
	*hv_StaNum:             (�������)��Ʒ��
	*hv_CamNum:             (�������)��Ʒ��
	*hv_ImageNum:           (�������)��Ʒ��
	*hv_dt:                 (�������)ȱ������
	*Return:                (�������)����ֵ �ɹ�1 ����-1
	*author					(xkc)
	************************************************************/
	int  OQC84lumen_Hole_DetectionRegion_1Machine1Station(HObject ho_Image, HObject ho_HoleRegion,
		HTuple hv_ImageNum, HTuple hv_inputdt, HTuple * hv_dt);

	/************************************************************
	*Function:              OQC84lumen_Plastic_DetectionRegion_1Machine1Station
	*Description:           OQC84��ɫ��ǻһ��λ�ܽ����������
	*ho_Image:              (�������)����ͼ��
	*hv_ProNum:             (�������)��Ʒ��
	*hv_StaNum:             (�������)��Ʒ��
	*hv_CamNum:             (�������)��Ʒ��
	*hv_ImageNum:           (�������)��Ʒ��
	*hv_dt:                 (�������)ȱ������
	*Return:                (�������)����ֵ �ɹ�1 ����-1
	*author					(xkc)
	************************************************************/
	int  OQC84lumen_Plastic_DetectionRegion_1Machine1Station(HObject ho_Image, HObject ho_PlasticRegion,
		HTuple hv_ImageNum, HTuple hv_inputdt, HTuple hv_StrModel, HTuple * hv_dt);

	/************************************************************
	*Function:              ImageProcessOQC84lumenGrayDefects1Machine2Station
	*Description:           OQC84��ɫ��ǻ����λ��1-42��������
	*ho_Image:              (�������)����ͼ��
	*hv_ProNum:             (�������)��Ʒ��
	*hv_StaNum:             (�������)��Ʒ��
	*hv_CamNum:             (�������)��Ʒ��
	*hv_ImageNum:           (�������)��Ʒ��
	*hv_dt:                 (�������)ȱ������
	*Return:                (�������)����ֵ �ɹ�1 ����-1
	*author					(zzp��)
	************************************************************/
	int   ImageProcessOQC84lumenBlueDefects1Machine2Station(HObject ho_Image, HTuple hv_ProNum,
		HTuple hv_StaNum, HTuple hv_CamNum, HTuple hv_ImageNum, HTuple * hv_dt);

	/************************************************************
	*Function:              ImageProcessOQC84lumenGrayDefects1Machine2Station
	*Description:           OQC84��ɫ��ǻ�Ĺ�λ��1-24��������
	*ho_Image:              (�������)����ͼ��
	*hv_ProNum:             (�������)��Ʒ��
	*hv_StaNum:             (�������)��Ʒ��
	*hv_CamNum:             (�������)��Ʒ��
	*hv_ImageNum:           (�������)��Ʒ��
	*hv_dt:                 (�������)ȱ������
	*Return:                (�������)����ֵ �ɹ�1 ����-1
	*author					(xkc)
	************************************************************/
	int  ImageProcessOQC84lumenBlueDefects1Machine4Station(HObject ho_Image, HTuple hv_ProNum,
		HTuple hv_StaNum, HTuple hv_CamNum, HTuple hv_ImageNum, HTuple * hv_dt);

#pragma endregion	 

};















