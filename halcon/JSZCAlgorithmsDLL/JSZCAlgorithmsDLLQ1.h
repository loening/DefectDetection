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

class DLLAPI JSZCAlgorithmsDLLQ1
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
	JSZCAlgorithmsDLLQ1();
	// ��������
	~JSZCAlgorithmsDLLQ1();

	// ������������
#pragma region universalFunction

	// ��շ���ֵ
	void clearVec();
#pragma endregion



#pragma region ChengduJabilQ1
	//Q1��ʽ��̨1\2\5
	/************************************************************
	*Function:               HotRole
	*Description:            �����ȱ�ݼ��
	*Params:
	*hv_dd:					����--�����ṹ��
	*hv_dt					���--�����ṹ��
	*Return :				1������ȱ�ݣ�0������ȱ�ݣ�-1�����㷨����������
	************************************************************/
	int  HotRole(HTuple hv_dd, HTuple hv_dt);

	/************************************************************
	*Function:               AffineTransformation
	*Description:            ͼ��У���㷨
	*Params:
	*hv_dd:					����--�����ṹ��
	*Return :				1������ȱ�ݣ�0������ȱ�ݣ�-1�����㷨����������
	************************************************************/
	int  AffineTransformation(HTuple hv_at);

	/************************************************************
	*Function:               DefectDetectionAlgorithms
	*Description:            ͨ��ȱ�ݼ���㷨
	*Params:
	*hv_dd:					����--�����ṹ��
	*hv_dt					���--�����ṹ��
	*Return :				1������ȱ�ݣ�0������ȱ�ݣ�-1�����㷨����������
	************************************************************/
	int  DefectDetectionAlgorithms(HTuple hv_dd, HTuple hv_dt);

	/************************************************************
	*Function:               ImageProcessQ1_84GrayLumenDefects1Station
	*Description:            Q1��ɫ��ǻȱ�ݼ���㷨
	*Params:
	*ho_Image:				 ����--��ɫͼ��
	*hv_ProNum				 ����--��Ʒ���
	*hv_StaNum			     ����--��λ��
	*hv_CamNum			     ����--ͼ���
	*hv_ImageNum			 ����--ͼ������
	*hv_AlgorithmConfig		 ����--�㷨�����ļ�
	*hv_dt					 ����--�������
	*Return :                1������ȱ�ݣ�0������ȱ�ݣ�-1�����㷨����������
	************************************************************/
	int   ImageProcessQ1_84GrayLumenDefects1Station(HObject ho_Image, HTuple hv_ProNum,
		HTuple hv_StaNum, HTuple hv_CamNum, HTuple hv_ImageNum, HTuple hv_AlgorithmConfig,
		HTuple *hv_dt);
	/************************************************************
	*Function:               ImageProcessQ1_84GrayLumenDefects1Station
	*Description:            Q1��ɫ��ǻȱ�ݼ���㷨
	*Params:
	*ho_Image:				 ����--��ɫͼ��
	*hv_ProNum				 ����--��Ʒ���
	*hv_StaNum			     ����--��λ��
	*hv_CamNum			     ����--ͼ���
	*hv_ImageNum			 ����--ͼ������
	*hv_AlgorithmConfig		 ����--�㷨�����ļ�
	*hv_dt					 ����--�������
	*Return :                1������ȱ�ݣ�0������ȱ�ݣ�-1�����㷨����������
	************************************************************/
	int   ImageProcessQ1_84LumenRoleDefects2Station(HObject ho_Image, HTuple hv_ProNum,
		HTuple hv_StaNum, HTuple hv_CamNum, HTuple hv_ImageNum, HTuple hv_AlgorithmConfig,
		HTuple *hv_dt);

	//Q1��ʽ��̨3\4// 
	/************************************************************
	*Function:               Det_Bjizhun_region
	*Description:            ���B��׼,AUTHOR:jl
	*Params:
	*hv_dd:					 ����--�����ṹ��
	*hv_dt					 ���--�����ṹ��
	*Return :				 1������ȱ�ݣ�0������ȱ�ݣ�-1�����㷨����������
	************************************************************/
	int  Det_Bjizhun_region(HTuple hv_dd, HTuple hv_dt);

	/************************************************************
	*Function:               Det_LD_Region
	*Description:            ����ص�,AUTHOR:jl
	*Params:
	*hv_dd:					 ����--�����ṹ��
	*hv_dt					 ���--�����ṹ��
	*Return :				 1������ȱ�ݣ�0������ȱ�ݣ�-1�����㷨����������
	************************************************************/
	int  Det_LD_Region(HTuple hv_dd, HTuple hv_dt);

	/************************************************************
	*Function:               Det_RT_Region
	*Description:            ���RT��AUTHOR:jl
	*Params:
	*hv_dd:					 ����--�����ṹ��
	*hv_dt					 ���--�����ṹ��
	*Return :				 1������ȱ�ݣ�0������ȱ�ݣ�-1�����㷨����������
	************************************************************/
	int  Det_RT_Region(HTuple hv_dd, HTuple hv_dt);

	/************************************************************
	*Function:               Det_SJ_Region
	*Description:            ����ܽ���AUTHOR:jl
	*Params:
	*hv_dd:					 ����--�����ṹ��
	*hv_dt					 ���--�����ṹ��
	*Return :				 1������ȱ�ݣ�0������ȱ�ݣ�-1�����㷨����������
	************************************************************/
	int  Det_SJ_Region(HTuple hv_dd, HTuple hv_dt);

	/************************************************************
	*Function:               ImageProcessQ1_84GrayLumenDefects3StationB
	*Description:            Q1��ɫ��ǻȱ�ݼ���㷨//3,4��λB
	*Params:
	*ho_Image:				 ����--��ɫͼ��
	*hv_ProNum				 ����--��Ʒ���
	*hv_StaNum			     ����--��λ��
	*hv_CamNum			     ����--ͼ���
	*hv_ImageNum			 ����--ͼ������
	*hv_dt					 ����--�������
	*Return :                1������ȱ�ݣ�0������ȱ�ݣ�-1�����㷨����������
	************************************************************/

	int  ImageProcessQ1_84GrayLumenDefects3Station(HObject ho_Image, HTuple hv_ProNum,
		HTuple hv_StaNum, HTuple hv_CamNum, HTuple hv_ImageNum, HTuple * hv_dt);

#pragma endregion


};















