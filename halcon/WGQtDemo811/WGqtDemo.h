#ifndef _WGQtDEMO_H
#define _WGQtDEMO_H
#include <QtWidgets/QMainWindow>
#include "ui_WGqtDemo.h"
#include "HalconCpp.h"	 
#include <string>
#include <map>
#include <iostream>
#include <qDebug>
#include <QMessageBox>
#include "qwindowdefs.h"
//#include <QButtonGroup>			
#include <QTime>
#include <QProcess>
#include<QDir>
#include<QFileDialog>
#include<QFileInfoList>
#include<QFileInfo>
#include<QTextCodec>
#include "JSZCAlgorithmsDLLOQC.h" 
#include "JSZCAlgorithmsDLLQ1.h" 
#include "JSZCAlgorithmsDLLPVD.h" 
//#include "../x64/Release/JSZCAlgorithmsDLL.h"	 
// //��ʽ����
//#pragma  comment(lib,"../x64/Release/JSZCAlgorithmsDLL.lib")

//extern "C"
//{
//#include "../JSZCAlgorithmsDLL/JSZCAlgorithmsDLL.h"
//}		  
using namespace std;
using namespace HalconCpp;

// ���Զ���
#pragma region property	
// ����������Ϣ�ṹ��
//struct AlgorithmErr
//{
//	// �㷨���з���ֵ
//	int reg = 0;
//	// ������Ϣ
//	QString ErrMessage = "";
//};

#pragma endregion
class WGqtDemo : public QMainWindow
{
	Q_OBJECT

public:
	WGqtDemo(QWidget *parent = Q_NULLPTR);
	~WGqtDemo();

	// �㷨����ֵ����
	int Aerr;
	HObject ho_EmptyTextObject, hhh;
	HTuple  hv_WindowHandle, hv_Count;
	private slots:

	// �㷨���к���
	void Draw_Regions();
	void processImage();
	void stopRun();
	void on_selectBtn();
	void showErrmess(QString err);


private:
	// �������б�־
	bool runbool = false;
	Ui::WGqtDemoClass *ui;
	//ȱ������
	QVector<HObject> Vect_regions;
	QTime times;
	QProcess m_process;
	// �������
	HTuple hv_file_path, hv_ImageFiles, hv_Index, witdh, hvheight, hv_StaNum, hv_CamNum, hv_ImageNum, hv_Result, hv_dt,
		hv_S0, hv_S1, hv_N, hv_ro, hv_co, hv_te, hv_GenParamValue, hv_Index1, hv_Area, hv_Row, hv_Column, hv_Number, hv_Row1,
		hv_Column1, hv_Row2, hv_Column2, hv_Newtuple, hv_Area1, hv_Row3, hv_Column3, hv_o, hv_Indices, hv_Lev, hv_Indices1,
		hv_text;
	//��ʼ��
	HTuple hv_Ts, hv_SCINam, hv_SCIANum, hv_SCINNum, hv_Dict, hv_DictData, hv_ProNum;
	HObject ho_Image, ho_reg, ho_RegionUnion;
	// �ļ�·��
	QString path;                    // ·��
	QString s;
	// �쳣��Ϣ
	QString errMess = "";
	HTuple Hwidth, Hheigth, hv_AlgorParaQ1Handle;
	HObject ho_DetectRegion, ho_PointRegion, ho_camregion, ho_JTReg;
	// ���������
	JSZCAlgorithmsDLLOQC jszcOQC;
	JSZCAlgorithmsDLLQ1 jszcQ1;
	JSZCAlgorithmsDLLPVD jszcPVD;

#pragma region halcon�ⲿ����
	void disp_message(HTuple hv_WindowHandle, HTuple hv_String, HTuple hv_CoordSystem, HTuple hv_Row, HTuple hv_Column, HTuple hv_Color, HTuple hv_Box);
	void set_display_font(HTuple hv_WindowHandle, HTuple hv_Size, HTuple hv_Font, HTuple hv_Bold,
		HTuple hv_Slant);
	void Display_Text(HObject ho_Image, HObject ho_deReg, HTuple hv_path, HTuple hv_Lev,
		HTuple hv_Stt, HTuple hv_SCINam, HTuple hv_SCINNum, HTuple hv_SCIANum, HTuple hv_Ts,
		HTuple hv_TimeFormat, HTuple hv_Summary, HTuple hv_Pdd, HTuple hv_Pat, HTuple hv_Img,
		HTuple hv_Reg, HTuple hv_NPro, HTuple hv_Dict, HTuple hv_DictData, HTuple hv_FontSize,
		HTuple hv_WindowH, HTuple hv_AH, HTuple *hv_text);
	// ͼ����������
	void Filter_Test_Images(HTuple hv_SCINum, HTuple hv_path, HTuple hv_so, HTuple loc, HTuple *hv_ProNum,
		HTuple *hv_StaNum, HTuple *hv_CamNum, HTuple *hv_ImageNum, HTuple *hv_Result);
#pragma endregion		

};
#endif


