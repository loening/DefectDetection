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

class DLLAPI JSZCAlgorithmsDLLOQCWG
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
	JSZCAlgorithmsDLLOQCWG();
	// ��������
	~JSZCAlgorithmsDLLOQCWG();

	// ������������
#pragma region universalFunction

	// ��շ���ֵ
	void clearVec();
#pragma endregion

#pragma region ChengduJabilOQC
	/************************************************************
	*Function:              ImageShieldProcessIPADCB84OuterGrayFrame
	*Description:           IPADCB84��ɫIPADCB84�����ȡ��λ���й�λ
	*ho_Image:              (�������)����ͼ��
	*ho_DetectRegion:       (�������)��ȡ����
	*ho_PointRegion:        (�������)��λ��
	*ho_camregion:          (�������)��Ʒ��
	*ho_JTReg:              (�������)��Ʒ��
	*hv_ImName:             (�������)ͼ����
	*Return:                (�������)����ֵ �ɹ�1 ����-1
	*author					(xkc)
	************************************************************/
	int  Yolo_DetectOQCWG_Extract(HObject ho_Image, HObject ho_RectangleRegion, HObject *ho_OutputRegion,
		HTuple hv_RegionID, HTuple hv_ProNum, HTuple hv_StaNum, HTuple hv_CamNum, HTuple hv_ImageNum,
		HTuple hv_d6);





#pragma endregion	 

};















