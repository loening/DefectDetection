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

class DLLAPI JSZCAlgorithmsDLLPVD
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
	JSZCAlgorithmsDLLPVD();
	// ��������
	~JSZCAlgorithmsDLLPVD();

	// ������������
#pragma region universalFunction

	// ��շ���ֵ
	void clearVec();
#pragma endregion

#pragma region ChengduJabilSelf-check4

	/************************************************************
	*Function:              ImageShieldProcessAMiddleSelfTest4_83_1
	*Description:           һ�Ż��Լ�4�����ȡ��λ���й�λ
	*ho_Image:              (�������)����ͼ��
	*ho_DetectRegion:       (�������)��ȡ����
	*ho_PointRegion:        (�������)��λ��
	*ho_camregion:          (�������)��Ʒ��
	*ho_JTReg:              (�������)��Ʒ��
	*hv_ImName:             (�������)ͼ����
	*Return:                (�������)����ֵ �ɹ�1 ����-1
	*author					(lja)
	************************************************************/
	int  ImageShieldProcessAMiddleSelfTest4_83_1(HObject ho_Image, HObject * ho_DetectRegion,
		HObject* ho_PointRegion, HObject* ho_camregion, HObject* ho_JTReg, HTuple hv_ImName);

	/************************************************************
	*Function:              ImageShieldProcessAMiddleSelfTest4_83_2
	*Description:           ���Ż��Լ�4�����ȡ��λ���й�λ
	*ho_Image:              (�������)����ͼ��
	*ho_DetectRegion:       (�������)��ȡ����
	*ho_PointRegion:        (�������)��λ��
	*ho_camregion:          (�������)��Ʒ��
	*ho_JTReg:              (�������)��Ʒ��
	*hv_ImName:             (�������)ͼ����
	*Return:                (�������)����ֵ �ɹ�1 ����-1
	*author					(lja)
	************************************************************/
	int  ImageShieldProcessAMiddleSelfTest4_83_2(HObject ho_Image, HObject * ho_DetectRegion,
		HObject* ho_PointRegion, HObject* ho_camregion, HObject* ho_JTReg, HTuple hv_ImName);

	/************************************************************
	*Function:              ImageShieldProcessAMiddleSelfTest4_83_6
	*Description:           ���Ż��Լ�4�����ȡ��λ���й�λ
	*ho_Image:              (�������)����ͼ��
	*ho_DetectRegion:       (�������)��ȡ����
	*ho_PointRegion:        (�������)��λ��
	*ho_camregion:          (�������)��Ʒ��
	*ho_JTReg:              (�������)��Ʒ��
	*hv_ImName:             (�������)ͼ����
	*Return:                (�������)����ֵ �ɹ�1 ����-1
	*author					(lja)
	************************************************************/
	int  ImageShieldProcessAMiddleSelfTest4_83_6(HObject ho_Image, HObject * ho_DetectRegion,
		HObject* ho_PointRegion, HObject* ho_camregion, HObject* ho_JTReg, HTuple hv_ImName);

	/************************************************************
	*Function:              ImageShieldProcessAMiddleSelfTest4_84_11
	*Description:           ʮһ�Ż��Լ�4�����ȡ��λ���й�λ
	*ho_Image:              (�������)����ͼ��
	*ho_DetectRegion:       (�������)��ȡ����
	*ho_PointRegion:        (�������)��λ��
	*ho_camregion:          (�������)��Ʒ��
	*ho_JTReg:              (�������)��Ʒ��
	*hv_ImName:             (�������)ͼ����
	*Return:                (�������)����ֵ �ɹ�1 ����-1
	*author					(lja)
	************************************************************/
	int  ImageShieldProcessAMiddleSelfTest4_84_11(HObject ho_Image, HObject * ho_DetectRegion,
		HObject* ho_PointRegion, HObject* ho_camregion, HObject* ho_JTReg, HTuple hv_ImName);


	/************************************************************
	*Function:              ImageShieldProcessAMiddleSelfTest4_84_12
	*Description:           ʮ���Ż��Լ�4�����ȡ��λ���й�λ
	*ho_Image:              (�������)����ͼ��
	*ho_DetectRegion:       (�������)��ȡ����
	*ho_PointRegion:        (�������)��λ��
	*ho_camregion:          (�������)��Ʒ��
	*ho_JTReg:              (�������)��Ʒ��
	*hv_ImName:             (�������)ͼ����
	*Return:                (�������)����ֵ �ɹ�1 ����-1
	*author					(lja)
	************************************************************/
	int  ImageShieldProcessAMiddleSelfTest4_84_12(HObject ho_Image, HObject * ho_DetectRegion,
		HObject* ho_PointRegion, HObject* ho_camregion, HObject* ho_JTReg, HTuple hv_ImName);

	/************************************************************
	*Function:              ImageProcessZJ4BlackDefects1Machine1_2_3Station
	*Description:           �Լ�4������
	*ho_Image:              (�������)����ͼ��
	*ho_DetectReg			(�������)
	*ho_Mask				(�������)
	*hv_ProNum:             (�������)��Ʒ��
	*hv_StaNum:             (�������)��Ʒ��
	*hv_CamNum:             (�������)��Ʒ��
	*hv_ImageNum:           (�������)��Ʒ��
	*hv_dt:                 (�������)ȱ������
	*Return:                (�������)����ֵ �ɹ�1 ����-1
	*author					(lja)
	************************************************************/
	int  ImageProcessZJ4BlackDefects1Machine1_2_3Station(HObject ho_Image, HObject ho_DetectReg,
		HObject ho_Mask, HTuple hv_ProNum, HTuple hv_StaNum, HTuple hv_CamNum, HTuple hv_ImageNum,
		HTuple* hv_dt);




#pragma endregion

};















