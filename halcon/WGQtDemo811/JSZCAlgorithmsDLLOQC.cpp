#include <ostream>		
#include "Halconcpp.h"
//#include <opencv2/opencv.hpp>
#include <string.h>
#include "JSZCAlgorithmsDLLOQC.h" 
//#include <QObject>
using namespace std;
using namespace HalconCpp;
//using namespace cv;


// 定义导出函数
JSZCAlgorithmsDLLOQC::JSZCAlgorithmsDLLOQC()
{
	//ErrMessage = (char*)malloc(sizeof(char)*1000);
	//strcpy(ErrMessage, "");

}

JSZCAlgorithmsDLLOQC::~JSZCAlgorithmsDLLOQC()
{
	//free(ErrMessage);	
}

#pragma region universalFunction  

void  JSZCAlgorithmsDLLOQC::clearVec()
{
	// 异常信息
	//memset(ErrMessage, 0, sizeof(char) * 1000);
	// 异常标志位
	reg = 0;
	VeErrMessage.clear();
}
#pragma endregion

#pragma region ChengduJabilOQC
//灰色OQC84外观提取定位所有工位
int JSZCAlgorithmsDLLOQC::ImageShieldProcessOQC84OuterGrayFrame(HObject ho_Image, HObject *ho_DetectRegion,
	HObject *ho_PointRegion, HObject *ho_camregion, HObject *ho_JTReg, HTuple hv_ProNum,
	HTuple hv_StaNum, HTuple hv_CamNum, HTuple hv_ImageNum)
{

	// Local iconic variables
	HObject  ho_ImageMean, ho_ImageScaled, ho_Region;
	HObject  ho_RegionFillUp, ho_RegionClosing, ho_RegionFillUp1;
	HObject  ho_RegionOpening, ho_ROI_0, ho_ConnectedRegions;
	HObject  ho_SelectedRegions, ho_RegionUnion1, ho_RegionTrans;
	HObject  ho_RegionMoved, ho_RegionDifference, ho_RegionOpening1;
	HObject  ho_SortedRegions, ho_ObjectSelected, ho_RegionMoved1;
	HObject  ho_RegionTrans1, ho_ImageReduced, ho_ImageMedian1;
	HObject  ho_ImageTexture, ho_Region1, ho_ConnectedRegions1;
	HObject  ho_SortedRegions1, ho_ObjectSelected1, ho_RegionTrans2;
	HObject  ho_RegionMoved2, ho_RegionDifference1, ho_RegionDilation;
	HObject  ho_ImageMedian5, ho_ImageTexture5, ho_ImageTexture8;
	HObject  ho_ImageResult19, ho_Region14, ho_ConnectedRegions40;
	HObject  ho_SelectedRegions48, ho_SelectedRegions49, ho_RegionUnion7;
	HObject  ho_RegionClosing4, ho_RegionFillUp20, ho_ConnectedRegions41;
	HObject  ho_RegionTrans11, ho_RegionUnion2, ho_RegionClosing1;
	HObject  ho_ConnectedRegions5, ho_SelectedRegions3, ho_ImageScaled2;
	HObject  ho_Region2, ho_ImageMedian9, ho_ImageTexture4, ho_Region5;
	HObject  ho_RegionOpening21, ho_ConnectedRegions11, ho_SortedRegions4;
	HObject  ho_RegionTrans32, ho_RegionMoved11, ho_RegionDifference3;
	HObject  ho_RegionDilation1, ho_ImageMedian24, ho_ImageTexture1;
	HObject  ho_ImageTexture2, ho_ImageSub, ho_Region29, ho_ConnectedRegions26;
	HObject  ho_SelectedRegions4, ho_SelectedRegions25, ho_SelectedRegions26;
	HObject  ho_RegionUnion8, ho_RegionClosing8, ho_ConnectedRegions7;
	HObject  ho_RegionTrans16, ho_SelectedRegions1, ho_SelectedRegions2;
	HObject  ho_RegionErosion, ho_RegionUnion3, ho_RegionClosing9;
	HObject  ho_RegionClosing10, ho_RegionFillUp6, ho_RegionOpening5;
	HObject  ho_SelectedRegions9, ho_RegionClosing6, ho_RegionOpening2;
	HObject  ho_ConnectedRegions10, ho_ObjectSelected2, ho_RegionUnion18;
	HObject  ho_RegionTrans4, ho_ImageMean5, ho_ImageScaled4;
	HObject  ho_Region13, ho_RegionOpening3, ho_ConnectedRegions19;
	HObject  ho_SelectedRegions11, ho_ImageMean2, ho_ImageScaled3;
	HObject  ho_Region10, ho_RegionOpening9, ho_ConnectedRegions14;
	HObject  ho_SelectedRegions12, ho_RegionTrans10, ho_RegionDilation2;
	HObject  ho_ImageResult18, ho_Region12, ho_ConnectedRegions27;
	HObject  ho_RegionTrans7, ho_RegionUnion14, ho_Region9, ho_RegionFillUp4;
	HObject  ho_ConnectedRegions25, ho_RegionOpening13, ho_ConnectedRegions8;
	HObject  ho_SelectedRegions8, ho_RegionTrans3, ho_Region34;
	HObject  ho_RegionFillUp15, ho_RegionClosing12, ho_RegionFillUp2;
	HObject  ho_RegionOpening4, ho_ConnectedRegions67, ho_SelectedRegions99;
	HObject  ho_RegionUnion11, ho_RegionTrans49, ho_RegionMoved26;
	HObject  ho_Cross1, ho_Cross2, ho_Cross3, ho_Cross4, ho_Cross1re;
	HObject  ho_Cross2re, ho_Cross3re, ho_Cross4re, ho_RegionUnion4;
	HObject  ho_ConnectedRegions4;

	// Local control variables
	HTuple  hv_Number, hv_Number1, hv_Row16, hv_Column16;
	HTuple  hv_Phi3, hv_Length1, hv_Length2, hv_Cos, hv_Sin;
	HTuple  hv_a, hv_b, hv_c, hv_d, hv_e, hv_f, hv_g, hv_h;
	HTuple  hv_Exception;

	try
	{
		//参数初始化
		//胶条区域初始化
		GenEmptyObj(&(*ho_JTReg));
		//检测区域初始化
		GenEmptyObj(&(*ho_DetectRegion));
		//相机孔区域初始化
		GenEmptyObj(&(*ho_camregion));

		//解析图像名
		//*     tuple_str_first_n (ImName, 2, Substring)
		//*     tuple_split (ImName, '_', Substrings)
		//*     StaNum := Substrings[0]
		//tuple_number (StaNum, StaNum)
		//*     CamNum := Substrings[1]
		//tuple_number (CamNum, CamNum)
		//*     ImageNum := Substrings[2]
		//tuple_number (ImageNum, ImageNum)

		if (0 != (HTuple(int(hv_StaNum == 1)).TupleAnd(int(hv_CamNum == 1))))
		{
			//1-1-0
			MeanImage(ho_Image, &ho_ImageMean, 5, 5);
			ScaleImage(ho_ImageMean, &ho_ImageScaled, 2, -80);
			Threshold(ho_ImageScaled, &ho_Region, 0, 60);
			FillUp(ho_Region, &ho_RegionFillUp);
			ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 45, 60);
			FillUp(ho_RegionClosing, &ho_RegionFillUp1);
			OpeningRectangle1(ho_RegionFillUp1, &ho_RegionOpening, 30, 500);
			if (0 != (int(hv_ImageNum == 30)))
			{
				//1-1-30
				GenRectangle1(&ho_ROI_0, 1209, 0, 2048, 2048);
				Difference(ho_RegionOpening, ho_ROI_0, &ho_RegionOpening);
			}
			Connection(ho_RegionOpening, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 100000,
				9999999);
			CountObj(ho_SelectedRegions, &hv_Number);
			if (0 != hv_Number)
			{
				GenRectangle1(&ho_ROI_0, 0, 2048, 1, 2048);
				Union2(ho_ROI_0, ho_SelectedRegions, &ho_RegionUnion1);
				Union1(ho_RegionUnion1, &ho_SelectedRegions);
			}
			ShapeTrans(ho_SelectedRegions, &ho_RegionTrans, "convex");
			MoveRegion(ho_RegionTrans, &ho_RegionMoved, 0, -120);
			Difference(ho_RegionMoved, ho_RegionTrans, &ho_RegionDifference);
			OpeningRectangle1(ho_RegionDifference, &ho_RegionOpening1, 5, 160);
			MoveRegion(ho_RegionOpening1, &(*ho_DetectRegion), 0, 2);
		}
		else if (0 != (HTuple(int(hv_StaNum == 1)).TupleAnd(int(hv_CamNum == 2))))
		{
			//1-2-0
			MeanImage(ho_Image, &ho_ImageMean, 5, 5);
			ScaleImage(ho_ImageMean, &ho_ImageScaled, 3, -100);
			Threshold(ho_ImageScaled, &ho_Region, 0, 60);
			FillUp(ho_Region, &ho_RegionFillUp);
			ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 45, 60);
			FillUp(ho_RegionClosing, &ho_RegionFillUp1);
			OpeningRectangle1(ho_RegionFillUp1, &ho_RegionOpening, 30, 500);
			if (0 != (int(hv_ImageNum == 30)))
			{
				//1-2-30
				GenRectangle1(&ho_ROI_0, 1200, 0, 2048, 2048);
				Difference(ho_RegionOpening, ho_ROI_0, &ho_RegionOpening);
			}
			Connection(ho_RegionOpening, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 100000,
				9999999);
			CountObj(ho_SelectedRegions, &hv_Number);
			if (0 != hv_Number)
			{
				GenRectangle1(&ho_ROI_0, 0, 2048, 1, 2048);
				Union2(ho_ROI_0, ho_SelectedRegions, &ho_RegionUnion1);
				Union1(ho_RegionUnion1, &ho_SelectedRegions);
			}
			ShapeTrans(ho_SelectedRegions, &ho_RegionTrans, "convex");
			MoveRegion(ho_RegionTrans, &ho_RegionMoved, 0, -110);
			Difference(ho_RegionMoved, ho_RegionTrans, &ho_RegionDifference);
			OpeningRectangle1(ho_RegionDifference, &ho_RegionOpening1, 5, 160);
			MoveRegion(ho_RegionOpening1, &(*ho_DetectRegion), 0, 2);
		}
		else if (0 != (HTuple(int(hv_StaNum == 2)).TupleAnd(int(hv_CamNum == 1))))
		{
			//2-1-0
			MeanImage(ho_Image, &ho_ImageMean, 5, 5);
			ScaleImage(ho_ImageMean, &ho_ImageScaled, 5, -150);
			Threshold(ho_ImageScaled, &ho_Region, 0, 50);
			ClosingRectangle1(ho_Region, &ho_RegionClosing, 30, 20);
			FillUp(ho_RegionClosing, &ho_RegionFillUp);
			OpeningRectangle1(ho_RegionFillUp, &ho_RegionOpening, 1, 1600);
			Connection(ho_RegionOpening, &ho_ConnectedRegions);
			SortRegion(ho_ConnectedRegions, &ho_SortedRegions, "character", "false", "column");
			SelectObj(ho_SortedRegions, &ho_ObjectSelected, 1);
			MoveRegion(ho_ObjectSelected, &ho_RegionMoved, 0, 10);
			ShapeTrans(ho_RegionMoved, &ho_RegionTrans, "rectangle1");
			MoveRegion(ho_RegionTrans, &ho_RegionMoved1, 0, -1024);
			Union2(ho_RegionTrans, ho_RegionMoved1, &ho_RegionUnion1);
			ShapeTrans(ho_RegionUnion1, &ho_RegionTrans1, "rectangle1");
			Difference(ho_RegionTrans1, ho_RegionTrans, &(*ho_DetectRegion));

			ReduceDomain(ho_Image, (*ho_DetectRegion), &ho_ImageReduced);
			if (0 != (int(hv_ImageNum == 2)))
			{
				//2-1-2
				MeanImage(ho_ImageReduced, &ho_ImageMedian1, 25, 5);
				TextureLaws(ho_ImageMedian1, &ho_ImageTexture, "el", 5, 7);
				Threshold(ho_ImageTexture, &ho_Region1, 0, 180);
				ClosingRectangle1(ho_Region1, &ho_RegionClosing, 100, 2);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening1, 400, 5);
				Connection(ho_RegionOpening1, &ho_ConnectedRegions1);
				SortRegion(ho_ConnectedRegions1, &ho_SortedRegions1, "character", "true",
					"row");
				SelectObj(ho_SortedRegions1, &ho_ObjectSelected1, 1);
				ShapeTrans(ho_ObjectSelected1, &ho_RegionTrans2, "rectangle1");
				MoveRegion(ho_RegionTrans2, &ho_RegionMoved2, 144, 0);
				Difference(ho_RegionMoved2, ho_RegionTrans2, &ho_RegionDifference1);
				DilationRectangle1(ho_RegionDifference1, &ho_RegionDilation, 500, 20);
				Intersection(ho_ImageReduced, ho_RegionDilation, &(*ho_JTReg));
			}
			if (0 != (int(hv_ImageNum == 3)))
			{
				//2-1-3
				//裁剪
				MedianRect(ho_ImageReduced, &ho_ImageMedian5, 15, 15);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture5, "el", 5, 7);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture8, "le", 5, 7);
				AddImage(ho_ImageTexture5, ho_ImageTexture8, &ho_ImageResult19, 2, -100);
				Threshold(ho_ImageResult19, &ho_Region14, 160, 255);
				ClosingRectangle1(ho_Region14, &ho_RegionClosing, 1, 30);
				Connection(ho_RegionClosing, &ho_ConnectedRegions40);
				SelectShape(ho_ConnectedRegions40, &ho_SelectedRegions48, "area", "and",
					2000, 9999999);
				SelectShape(ho_SelectedRegions48, &ho_SelectedRegions49, "column", "and",
					700, 1300);
				Union1(ho_SelectedRegions49, &ho_RegionUnion7);
				ClosingRectangle1(ho_RegionUnion7, &ho_RegionClosing4, 45, 25);
				FillUp(ho_RegionClosing4, &ho_RegionFillUp20);
				Connection(ho_RegionFillUp20, &ho_ConnectedRegions41);
				SelectShape(ho_ConnectedRegions41, &ho_SelectedRegions49, "row", "and", 1300,
					2048);
				MoveRegion(ho_SelectedRegions49, &ho_RegionMoved, 100, 0);
				Union2(ho_RegionMoved, ho_ConnectedRegions41, &ho_RegionUnion1);
				OpeningCircle(ho_RegionUnion1, &ho_RegionOpening, 90.5);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans11, "convex");
				MoveRegion(ho_RegionTrans11, &ho_RegionMoved, 200, 0);
				Union2(ho_RegionTrans11, ho_RegionMoved, &ho_RegionUnion1);
				DilationCircle(ho_RegionUnion1, &(*ho_camregion), 20.5);
			}
			if (0 != (int(hv_ImageNum == 4)))
			{
				//2-1-4
				MedianRect(ho_ImageReduced, &ho_ImageMedian5, 15, 15);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture5, "el", 5, 7);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture8, "le", 5, 7);
				AddImage(ho_ImageTexture5, ho_ImageTexture8, &ho_ImageResult19, 2, -100);
				Threshold(ho_ImageResult19, &ho_Region14, 160, 255);
				ClosingRectangle1(ho_Region14, &ho_RegionClosing, 1, 30);
				Connection(ho_RegionClosing, &ho_ConnectedRegions40);
				SelectShape(ho_ConnectedRegions40, &ho_SelectedRegions48, "area", "and",
					2000, 9999999);
				SelectShape(ho_SelectedRegions48, &ho_SelectedRegions49, "column", "and",
					700, 1300);
				Union1(ho_SelectedRegions49, &ho_RegionUnion7);
				ClosingRectangle1(ho_RegionUnion7, &ho_RegionClosing4, 45, 25);
				FillUp(ho_RegionClosing4, &ho_RegionFillUp20);
				Connection(ho_RegionFillUp20, &ho_ConnectedRegions41);
				SelectShape(ho_ConnectedRegions41, &ho_SelectedRegions49, "row", "and", 0,
					500);
				MoveRegion(ho_SelectedRegions49, &ho_RegionMoved, -100, 0);
				Union2(ho_RegionMoved, ho_ConnectedRegions41, &ho_RegionUnion1);
				SelectShape(ho_ConnectedRegions41, &ho_SelectedRegions49, "row", "and", 800,
					2048);
				MoveRegion(ho_SelectedRegions49, &ho_RegionMoved, 300, 0);
				Union2(ho_RegionMoved, ho_RegionUnion1, &ho_RegionUnion2);

				Connection(ho_RegionUnion2, &ho_ConnectedRegions);
				OpeningCircle(ho_ConnectedRegions, &ho_RegionOpening, 30.5);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans11, "convex");
				DilationCircle(ho_RegionTrans11, &(*ho_camregion), 20.5);
			}
			if (0 != (int(hv_ImageNum == 5)))
			{
				//2-1-5
				MedianRect(ho_ImageReduced, &ho_ImageMedian5, 15, 15);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture5, "el", 5, 7);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture8, "le", 5, 7);
				AddImage(ho_ImageTexture5, ho_ImageTexture8, &ho_ImageResult19, 2, -100);
				Threshold(ho_ImageResult19, &ho_Region14, 180, 255);
				ClosingRectangle1(ho_Region14, &ho_RegionClosing, 1, 30);
				Connection(ho_RegionClosing, &ho_ConnectedRegions40);
				SelectShape(ho_ConnectedRegions40, &ho_SelectedRegions48, "area", "and",
					4000, 9999999);
				SelectShape(ho_SelectedRegions48, &ho_SelectedRegions49, "column", "and",
					700, 1300);
				Union1(ho_SelectedRegions49, &ho_RegionUnion7);
				ClosingRectangle1(ho_RegionUnion7, &ho_RegionClosing4, 45, 25);
				FillUp(ho_RegionClosing4, &ho_RegionFillUp20);
				Connection(ho_RegionFillUp20, &ho_ConnectedRegions41);
				SelectShape(ho_ConnectedRegions41, &ho_SelectedRegions49, "row", "and", 0,
					500);
				MoveRegion(ho_SelectedRegions49, &ho_RegionMoved, -200, 0);
				Union2(ho_RegionMoved, ho_ConnectedRegions41, &ho_RegionUnion1);
				ClosingRectangle1(ho_RegionUnion1, &ho_RegionClosing1, 10, 200);
				Connection(ho_RegionClosing1, &ho_ConnectedRegions);
				ShapeTrans(ho_ConnectedRegions, &ho_RegionTrans11, "convex");
				DilationCircle(ho_RegionTrans11, &(*ho_camregion), 20.5);
			}
			if (0 != (int(hv_ImageNum == 6)))
			{
				//2-1-6
				MedianRect(ho_ImageReduced, &ho_ImageMedian5, 15, 15);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture5, "el", 5, 7);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture8, "le", 5, 7);
				AddImage(ho_ImageTexture5, ho_ImageTexture8, &ho_ImageResult19, 2, -100);
				Threshold(ho_ImageResult19, &ho_Region14, 180, 255);
				Connection(ho_Region14, &ho_ConnectedRegions40);
				SelectShape(ho_ConnectedRegions40, &ho_SelectedRegions48, "area", "and",
					4000, 9999999);
				SelectShape(ho_SelectedRegions48, &ho_SelectedRegions49, "column", "and",
					700, 1300);
				Union1(ho_SelectedRegions49, &ho_RegionUnion7);
				ClosingRectangle1(ho_RegionUnion7, &ho_RegionClosing4, 200, 25);
				FillUp(ho_RegionClosing4, &ho_RegionFillUp20);
				MoveRegion(ho_RegionFillUp20, &ho_RegionMoved, -100, 0);
				Union2(ho_RegionMoved, ho_RegionFillUp20, &ho_RegionUnion1);
				ClosingRectangle1(ho_RegionUnion1, &ho_RegionClosing1, 10, 100);
				Connection(ho_RegionClosing1, &ho_ConnectedRegions);
				ShapeTrans(ho_ConnectedRegions, &ho_RegionTrans11, "convex");
				MoveRegion(ho_RegionTrans11, &ho_RegionMoved, -200, 0);
				Union2(ho_RegionTrans11, ho_RegionMoved, &ho_RegionUnion1);
				DilationCircle(ho_RegionUnion1, &(*ho_camregion), 20.5);
			}
			if (0 != (int(hv_ImageNum == 7)))
			{
				//2-1-7
				OpeningCircle(ho_Region, &ho_RegionOpening, 10.5);
				Connection(ho_RegionOpening, &ho_ConnectedRegions5);
				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, ((HTuple("row").Append("column")).Append("area")),
					"and", ((HTuple(300).Append(750)).Append(6e+4)), ((HTuple(2000).Append(1150)).Append(3e+6)));
				ShapeTrans(ho_SelectedRegions3, &ho_RegionTrans, "rectangle1");
				DilationRectangle1(ho_RegionTrans, &ho_RegionDilation, 130, 330);
				OpeningCircle(ho_RegionDilation, &ho_RegionOpening, 160.5);
				MoveRegion(ho_RegionOpening, &ho_RegionMoved, 0, 15);
				MoveRegion(ho_RegionMoved, &ho_RegionMoved1, 200, 0);
				Union2(ho_RegionMoved1, ho_RegionMoved, &ho_RegionUnion1);
				DilationCircle(ho_RegionUnion1, &(*ho_camregion), 25.5);
			}
			if (0 != (int(hv_ImageNum == 8)))
			{
				//2-1-8
				OpeningCircle(ho_Region, &ho_RegionOpening, 20.5);
				Connection(ho_RegionOpening, &ho_ConnectedRegions5);
				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, ((HTuple("row").Append("circularity")).Append("area")),
					"and", ((HTuple(100).Append(0.4)).Append(1e+4)), ((HTuple(600).Append(1)).Append(5e+4)));
				CountObj(ho_SelectedRegions3, &hv_Number);
				if (0 != (int(hv_Number == 0)))
				{
					ScaleImage(ho_ImageMean, &ho_ImageScaled2, 5, -160);
					Threshold(ho_ImageScaled2, &ho_Region2, 0, 50);
					OpeningCircle(ho_Region2, &ho_RegionOpening, 20.5);
					Connection(ho_RegionOpening, &ho_ConnectedRegions5);
					SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, ((HTuple("row").Append("circularity")).Append("area")),
						"and", ((HTuple(1000).Append(0.4)).Append(1e+4)), ((HTuple(1600).Append(1)).Append(5e+4)));
				}
				ShapeTrans(ho_SelectedRegions3, &ho_RegionTrans, "ellipse");
				DilationCircle(ho_RegionTrans, &ho_RegionDilation, 95.5);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved, 10, 2);
				Union2(ho_RegionDilation, ho_RegionMoved, &ho_RegionUnion1);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved, -1300, 5);
				Union2(ho_RegionUnion1, ho_RegionMoved, &ho_RegionUnion1);
				ShapeTrans(ho_RegionUnion1, &ho_RegionTrans1, "convex");
				DilationCircle(ho_RegionTrans1, &(*ho_camregion), 15.5);
			}
			if (0 != (int(hv_ImageNum == 11)))
			{
				//2-1-11
				MedianRect(ho_ImageReduced, &ho_ImageMedian9, 15, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 4, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 120);
				ClosingRectangle1(ho_Region5, &ho_RegionClosing, 100, 1);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening21, 600, 15);
				Connection(ho_RegionOpening21, &ho_ConnectedRegions11);
				SortRegion(ho_ConnectedRegions11, &ho_SortedRegions4, "character", "true",
					"row");
				SelectObj(ho_SortedRegions4, &ho_ObjectSelected1, 1);
				ShapeTrans(ho_ObjectSelected1, &ho_RegionTrans32, "rectangle1");
				MoveRegion(ho_RegionTrans32, &ho_RegionMoved11, 144, 0);
				Difference(ho_RegionMoved11, ho_RegionTrans32, &ho_RegionDifference3);
				DilationRectangle1(ho_RegionDifference3, &ho_RegionDilation1, 500, 20);
				Intersection(ho_ImageReduced, ho_RegionDilation1, &(*ho_JTReg));
			}
			if (0 != (int(hv_ImageNum == 12)))
			{
				//2-1-12
				MedianRect(ho_ImageReduced, &ho_ImageMedian9, 15, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 4, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 120);
				ClosingRectangle1(ho_Region5, &ho_RegionClosing, 100, 1);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening21, 600, 15);
				Connection(ho_RegionOpening21, &ho_ConnectedRegions11);
				SortRegion(ho_ConnectedRegions11, &ho_SortedRegions4, "character", "true",
					"row");
				SelectObj(ho_SortedRegions4, &ho_ObjectSelected1, 1);
				ShapeTrans(ho_ObjectSelected1, &ho_RegionTrans32, "rectangle1");
				MoveRegion(ho_RegionTrans32, &ho_RegionMoved11, 144, 0);
				Difference(ho_RegionMoved11, ho_RegionTrans32, &ho_RegionDifference3);
				DilationRectangle1(ho_RegionDifference3, &ho_RegionDilation1, 500, 20);
				Intersection(ho_ImageReduced, ho_RegionDilation1, &(*ho_JTReg));
			}
			if (0 != (int(hv_ImageNum == 13)))
			{
				//2-1-13
				//mean_image (ImageReduced, ImageMedian9, 25, 5)
				//texture_laws (ImageMedian9, ImageTexture4, 'el', 5, 7)
				//threshold (ImageTexture4, Region5, 0, 180)
				//closing_rectangle1 (Region5, RegionClosing, 100, 2)
				//opening_rectangle1 (RegionClosing, RegionOpening21, 400, 5)
				//connection (RegionOpening21, ConnectedRegions11)
				//sort_region (ConnectedRegions11, SortedRegions4, 'character', 'true', 'row')
				//select_obj (SortedRegions4, ObjectSelected1, 1)
				//shape_trans (ObjectSelected1, RegionTrans32, 'rectangle1')
				//move_region (RegionTrans32, RegionMoved11, 90, 0)
				//difference (RegionTrans32, RegionMoved11, RegionDifference3)
				//dilation_rectangle1 (RegionDifference3, RegionDilation1, 500, 20)
				//intersection (ImageReduced, RegionDilation1, JTReg)

				MedianRect(ho_ImageReduced, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -200);
				Threshold(ho_ImageSub, &ho_Region29, 180, 255);
				Connection(ho_Region29, &ho_ConnectedRegions26);
				SelectShape(ho_ConnectedRegions26, &ho_SelectedRegions4, "area", "and", 2000,
					2e+4);
				SelectShape(ho_SelectedRegions4, &ho_SelectedRegions25, "row", "and", 500,
					2048);
				SelectShape(ho_SelectedRegions25, &ho_SelectedRegions26, "column", "and",
					800, 1300);
				Union1(ho_SelectedRegions26, &ho_RegionUnion8);
				ClosingCircle(ho_RegionUnion8, &ho_RegionClosing8, 23.5);
				FillUp(ho_RegionClosing8, &ho_RegionFillUp);
				Connection(ho_RegionFillUp, &ho_ConnectedRegions7);
				ShapeTrans(ho_ConnectedRegions7, &ho_RegionTrans16, "outer_circle");
				DilationCircle(ho_RegionTrans16, &(*ho_camregion), 3.5);
			}
			if (0 != (int(hv_ImageNum == 14)))
			{
				//2-1-14
				OpeningCircle(ho_RegionFillUp, &ho_RegionOpening, 10.5);
				Connection(ho_RegionOpening, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions1, (HTuple("column").Append("area")),
					"and", (HTuple(800).Append(3e+3)), (HTuple(1200).Append(8e+5)));

				SelectShape(ho_SelectedRegions1, &ho_SelectedRegions2, "row", "and", 0, 400);
				ShapeTrans(ho_SelectedRegions2, &ho_RegionTrans, "outer_circle");
				DilationCircle(ho_RegionTrans, &ho_RegionDilation, 10.5);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved, 10, 3);
				Union2(ho_RegionTrans, ho_RegionMoved, &ho_RegionUnion1);

				SelectShape(ho_SelectedRegions1, &ho_SelectedRegions2, "row", "and", 600,
					1600);
				ShapeTrans(ho_SelectedRegions2, &ho_RegionTrans, "rectangle2");
				DilationRectangle1(ho_RegionTrans, &ho_RegionDilation, 260, 160);
				OpeningCircle(ho_RegionDilation, &ho_RegionOpening1, 300.5);
				ErosionRectangle1(ho_RegionOpening1, &ho_RegionErosion, 160, 30);
				Union2(ho_SelectedRegions1, ho_RegionErosion, &ho_RegionUnion2);

				SelectShape(ho_SelectedRegions1, &ho_SelectedRegions2, "row", "and", 1700,
					2000);
				ShapeTrans(ho_SelectedRegions2, &ho_RegionTrans, "outer_circle");
				DilationCircle(ho_RegionTrans, &ho_RegionDilation, 10.5);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved, 8, 0);
				Union2(ho_RegionTrans, ho_RegionMoved, &ho_RegionUnion3);

				Union2(ho_RegionUnion2, ho_RegionUnion1, &ho_RegionUnion2);
				Union2(ho_RegionUnion2, ho_RegionUnion3, &ho_RegionUnion3);

				Union1(ho_RegionUnion3, &ho_RegionUnion3);
				DilationCircle(ho_RegionUnion3, &(*ho_camregion), 5.5);
			}
			if (0 != (int(hv_ImageNum == 15)))
			{
				//2-1-15
				MedianRect(ho_ImageReduced, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 7, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -200);
				Threshold(ho_ImageSub, &ho_Region2, 180, 255);
				Connection(ho_Region2, &ho_ConnectedRegions26);
				SelectShape(ho_ConnectedRegions26, &ho_SelectedRegions4, "area", "and", 1000,
					999999);
				SelectShape(ho_SelectedRegions4, &ho_SelectedRegions25, "row", "and", 0,
					2048);
				SelectShape(ho_SelectedRegions25, &ho_SelectedRegions26, "column", "and",
					800, 1300);

				Union1(ho_SelectedRegions26, &ho_RegionUnion8);
				ClosingCircle(ho_RegionUnion8, &ho_RegionClosing8, 10);
				Connection(ho_RegionClosing8, &ho_ConnectedRegions7);
				ShapeTrans(ho_ConnectedRegions7, &ho_RegionTrans16, "convex");
				DilationCircle(ho_RegionTrans16, &(*ho_camregion), 10.5);
			}
			if (0 != (int(hv_ImageNum == 16)))
			{
				//2-1-16
				//裁剪
				MeanImage(ho_ImageReduced, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 210, 255);
				ClosingCircle(ho_Region5, &ho_RegionClosing9, 28.5);
				ClosingRectangle1(ho_RegionClosing9, &ho_RegionClosing10, 8, 80);
				FillUp(ho_RegionClosing10, &ho_RegionFillUp6);
				OpeningCircle(ho_RegionFillUp6, &ho_RegionOpening, 6.5);
				OpeningRectangle1(ho_RegionOpening, &ho_RegionOpening5, 90, 1);
				Connection(ho_RegionOpening5, &ho_ConnectedRegions11);
				SelectShape(ho_ConnectedRegions11, &ho_SelectedRegions9, (HTuple("row").Append("area")),
					"and", (HTuple(0).Append(700)), (HTuple(50).Append(99999)));
				ShapeTrans(ho_SelectedRegions9, &ho_RegionTrans, "convex");
				DilationCircle(ho_RegionTrans, &(*ho_camregion), 15.5);
			}
			if (0 != (int(hv_ImageNum == 17)))
			{
				//2-1-17
				MeanImage(ho_ImageReduced, &ho_ImageMedian9, 25, 5);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 180);
				ClosingRectangle1(ho_Region5, &ho_RegionClosing, 100, 2);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening21, 400, 5);
				Connection(ho_RegionOpening21, &ho_ConnectedRegions11);
				SortRegion(ho_ConnectedRegions11, &ho_SortedRegions4, "character", "true",
					"row");
				SelectObj(ho_SortedRegions4, &ho_ObjectSelected1, 1);
				ShapeTrans(ho_ObjectSelected1, &ho_RegionTrans32, "rectangle1");
				MoveRegion(ho_RegionTrans32, &ho_RegionMoved11, 144, 0);
				Difference(ho_RegionMoved11, ho_RegionTrans32, &ho_RegionDifference3);
				DilationRectangle1(ho_RegionDifference3, &ho_RegionDilation1, 500, 20);
				Intersection(ho_ImageReduced, ho_RegionDilation1, &(*ho_JTReg));
			}
			if (0 != (int(hv_ImageNum == 20)))
			{
				//2-1-19
				MedianRect(ho_ImageReduced, &ho_ImageMedian5, 15, 15);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture5, "el", 5, 7);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture8, "le", 5, 7);
				AddImage(ho_ImageTexture5, ho_ImageTexture8, &ho_ImageResult19, 2, -80);
				Threshold(ho_ImageResult19, &ho_Region14, 180, 255);
				Connection(ho_Region14, &ho_ConnectedRegions40);
				SelectShape(ho_ConnectedRegions40, &ho_SelectedRegions48, "area", "and",
					4000, 9999999);
				SelectShape(ho_SelectedRegions48, &ho_SelectedRegions49, "column", "and",
					700, 1300);
				Union1(ho_SelectedRegions49, &ho_RegionUnion7);
				ClosingRectangle1(ho_RegionUnion7, &ho_RegionClosing4, 45, 25);
				FillUp(ho_RegionClosing4, &ho_RegionFillUp20);
				ShapeTrans(ho_RegionFillUp20, &ho_RegionTrans11, "rectangle2");
				DilationCircle(ho_RegionTrans11, &(*ho_camregion), 20.5);
			}
			if (0 != (int(hv_ImageNum == 21)))
			{
				//2-1-21
				MedianRect(ho_ImageReduced, &ho_ImageMedian5, 15, 15);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture5, "el", 5, 7);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture8, "le", 5, 7);
				AddImage(ho_ImageTexture5, ho_ImageTexture8, &ho_ImageResult19, 2, -100);
				Threshold(ho_ImageResult19, &ho_Region14, 180, 255);
				Connection(ho_Region14, &ho_ConnectedRegions40);
				SelectShape(ho_ConnectedRegions40, &ho_SelectedRegions48, "area", "and",
					4000, 9999999);
				SelectShape(ho_SelectedRegions48, &ho_SelectedRegions49, "column", "and",
					700, 1300);
				Union1(ho_SelectedRegions49, &ho_RegionUnion7);
				ClosingRectangle1(ho_RegionUnion7, &ho_RegionClosing4, 45, 25);
				FillUp(ho_RegionClosing4, &ho_RegionFillUp20);
				MoveRegion(ho_RegionFillUp20, &ho_RegionMoved, -800, 0);
				Union2(ho_RegionFillUp20, ho_RegionMoved, &ho_RegionUnion1);
				ShapeTrans(ho_RegionUnion1, &ho_RegionTrans11, "convex");
				DilationCircle(ho_RegionTrans11, &(*ho_camregion), 20.5);
			}
			if (0 != (int(hv_ImageNum == 22)))
			{
				//2-1-22
				MedianRect(ho_ImageReduced, &ho_ImageMedian5, 15, 15);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture5, "el", 5, 7);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture8, "le", 5, 7);
				AddImage(ho_ImageTexture5, ho_ImageTexture8, &ho_ImageResult19, 2, -100);
				Threshold(ho_ImageResult19, &ho_Region14, 180, 255);
				Connection(ho_Region14, &ho_ConnectedRegions40);
				SelectShape(ho_ConnectedRegions40, &ho_SelectedRegions48, "area", "and",
					2000, 9999999);
				SelectShape(ho_SelectedRegions48, &ho_SelectedRegions49, "column", "and",
					700, 1300);
				Union1(ho_SelectedRegions49, &ho_RegionUnion7);
				ClosingRectangle1(ho_RegionUnion7, &ho_RegionClosing4, 45, 25);
				FillUp(ho_RegionClosing4, &ho_RegionFillUp20);
				Connection(ho_RegionFillUp20, &ho_ConnectedRegions41);
				ShapeTrans(ho_ConnectedRegions41, &ho_RegionTrans11, "convex");
				DilationCircle(ho_RegionTrans11, &(*ho_camregion), 20.5);
			}
			if (0 != (int(hv_ImageNum == 23)))
			{
				//2-1-23
				OpeningCircle(ho_RegionFillUp, &ho_RegionOpening, 10.5);
				Connection(ho_RegionOpening, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions1, ((HTuple("column").Append("circularity")).Append("area")),
					"and", ((HTuple(800).Append(0.6)).Append(3e+4)), ((HTuple(1200).Append(1)).Append(8e+5)));

				SelectShape(ho_SelectedRegions1, &ho_SelectedRegions2, "row", "and", 200,
					800);
				ShapeTrans(ho_SelectedRegions2, &ho_RegionTrans, "outer_circle");
				DilationCircle(ho_RegionTrans, &ho_RegionDilation, 80.5);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved, -400, 0);
				Union2(ho_RegionTrans, ho_RegionMoved, &ho_RegionUnion1);

				SelectShape(ho_SelectedRegions1, &ho_SelectedRegions2, "row", "and", 1400,
					1800);
				ShapeTrans(ho_SelectedRegions2, &ho_RegionTrans, "outer_circle");
				DilationCircle(ho_RegionTrans, &ho_RegionDilation, 80.5);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved, 600, 0);
				Union2(ho_RegionTrans, ho_RegionMoved, &ho_RegionUnion2);

				Union2(ho_RegionUnion2, ho_RegionUnion1, &ho_RegionUnion2);
				Union1(ho_RegionUnion2, &ho_RegionUnion2);
				ShapeTrans(ho_RegionUnion2, &ho_RegionTrans, "convex");
				DilationCircle(ho_RegionTrans, &(*ho_camregion), 10.5);
			}
			if (0 != (int(hv_ImageNum == 24)))
			{
				//2-1-24
				MedianRect(ho_ImageReduced, &ho_ImageMedian5, 15, 15);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture5, "el", 5, 7);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture8, "le", 5, 7);
				AddImage(ho_ImageTexture5, ho_ImageTexture8, &ho_ImageResult19, 2, -100);
				Threshold(ho_ImageResult19, &ho_Region14, 180, 255);
				Connection(ho_Region14, &ho_ConnectedRegions40);
				SelectShape(ho_ConnectedRegions40, &ho_SelectedRegions48, "area", "and",
					2000, 9999999);
				SelectShape(ho_SelectedRegions48, &ho_SelectedRegions49, "column", "and",
					700, 1300);
				Union1(ho_SelectedRegions49, &ho_RegionUnion7);
				ClosingRectangle1(ho_RegionUnion7, &ho_RegionClosing4, 45, 25);
				FillUp(ho_RegionClosing4, &ho_RegionFillUp20);
				MoveRegion(ho_RegionFillUp20, &ho_RegionMoved, -100, 0);
				Union2(ho_RegionFillUp20, ho_RegionMoved, &ho_RegionUnion1);
				ShapeTrans(ho_RegionUnion1, &ho_RegionTrans11, "convex");
				DilationCircle(ho_RegionTrans11, &(*ho_camregion), 20.5);
			}
			if (0 != (int(hv_ImageNum == 26)))
			{
				//2-1-26
				MeanImage(ho_ImageReduced, &ho_ImageMedian9, 25, 5);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 180);
				ClosingRectangle1(ho_Region5, &ho_RegionClosing, 100, 2);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening21, 400, 5);
				Connection(ho_RegionOpening21, &ho_ConnectedRegions11);
				SortRegion(ho_ConnectedRegions11, &ho_SortedRegions4, "character", "true",
					"row");
				SelectObj(ho_SortedRegions4, &ho_ObjectSelected1, 1);
				ShapeTrans(ho_ObjectSelected1, &ho_RegionTrans32, "rectangle1");
				MoveRegion(ho_RegionTrans32, &ho_RegionMoved11, 144, 0);
				Difference(ho_RegionMoved11, ho_RegionTrans32, &ho_RegionDifference3);
				DilationRectangle1(ho_RegionDifference3, &ho_RegionDilation1, 500, 20);
				Intersection(ho_ImageReduced, ho_RegionDilation1, &(*ho_JTReg));
			}
			if (0 != (int(hv_ImageNum == 27)))
			{
				//2-1-27
				MeanImage(ho_ImageReduced, &ho_ImageMedian9, 25, 5);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 180);
				ClosingRectangle1(ho_Region5, &ho_RegionClosing, 100, 2);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening21, 400, 5);
				Connection(ho_RegionOpening21, &ho_ConnectedRegions11);
				SortRegion(ho_ConnectedRegions11, &ho_SortedRegions4, "character", "true",
					"row");
				SelectObj(ho_SortedRegions4, &ho_ObjectSelected1, 1);
				ShapeTrans(ho_ObjectSelected1, &ho_RegionTrans32, "rectangle1");
				MoveRegion(ho_RegionTrans32, &ho_RegionMoved11, 144, 0);
				Difference(ho_RegionMoved11, ho_RegionTrans32, &ho_RegionDifference3);
				DilationRectangle1(ho_RegionDifference3, &ho_RegionDilation1, 500, 20);
				Intersection(ho_ImageReduced, ho_RegionDilation1, &(*ho_JTReg));
			}
			Union1((*ho_camregion), &(*ho_camregion));
		}
		else if (0 != (HTuple(int(hv_StaNum == 2)).TupleAnd(int(hv_CamNum == 2))))
		{
			//2-2-0
			MeanImage(ho_Image, &ho_ImageMean, 5, 5);
			ScaleImage(ho_ImageMean, &ho_ImageScaled2, 4, -120);
			Threshold(ho_ImageScaled2, &ho_Region2, 0, 50);
			ClosingRectangle1(ho_Region2, &ho_RegionClosing6, 30, 20);
			FillUp(ho_RegionClosing6, &ho_RegionFillUp);
			OpeningRectangle1(ho_RegionFillUp, &ho_RegionOpening2, 1, 1600);
			Connection(ho_RegionOpening2, &ho_ConnectedRegions10);
			SortRegion(ho_ConnectedRegions10, &ho_SortedRegions1, "character", "false",
				"column");
			SelectObj(ho_SortedRegions1, &ho_ObjectSelected2, 1);
			MoveRegion(ho_ObjectSelected2, &ho_RegionMoved, 0, 10);
			ShapeTrans(ho_RegionMoved, &ho_RegionTrans1, "rectangle1");
			MoveRegion(ho_RegionTrans1, &ho_RegionMoved2, 0, -1024);
			Union2(ho_RegionTrans1, ho_RegionMoved2, &ho_RegionUnion18);
			ShapeTrans(ho_RegionUnion18, &ho_RegionTrans4, "rectangle1");
			Difference(ho_RegionTrans4, ho_RegionTrans1, &(*ho_DetectRegion));
			ReduceDomain(ho_Image, (*ho_DetectRegion), &ho_ImageReduced);
			if (0 != (int(hv_ImageNum == 2)))
			{
				//2-2-2
				MeanImage(ho_ImageReduced, &ho_ImageMean5, 25, 5);
				ScaleImage(ho_ImageMean5, &ho_ImageScaled4, 2, -140);
				Threshold(ho_ImageScaled4, &ho_Region13, 0, 20);
				OpeningRectangle1(ho_Region13, &ho_RegionOpening3, 30, 2);
				Connection(ho_RegionOpening3, &ho_ConnectedRegions19);
				SelectShape(ho_ConnectedRegions19, &ho_SelectedRegions11, "width", "and",
					700, 1300);
				FillUp(ho_SelectedRegions11, &ho_RegionFillUp);
				DilationRectangle1(ho_RegionFillUp, &(*ho_JTReg), 30, 20);
			}
			if (0 != (int(hv_ImageNum == 3)))
			{
				//2-2-3
				MeanImage(ho_ImageReduced, &ho_ImageMean2, 20, 10);
				ScaleImage(ho_ImageMean2, &ho_ImageScaled3, 5, -300);
				Threshold(ho_ImageScaled3, &ho_Region10, 0, 55);
				OpeningRectangle1(ho_Region10, &ho_RegionOpening9, 33, 2);
				Connection(ho_RegionOpening9, &ho_ConnectedRegions14);
				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions12, "area", "and",
					25000, 9999999);

				Union1(ho_SelectedRegions12, &ho_RegionUnion1);
				ShapeTrans(ho_RegionUnion1, &ho_RegionTrans10, "convex");
				DilationCircle(ho_RegionTrans10, &(*ho_camregion), 19.5);
			}
			if (0 != (int(hv_ImageNum == 4)))
			{
				//2-2-4
				ScaleImage(ho_ImageMean, &ho_ImageScaled2, 5, -80);
				Threshold(ho_ImageScaled2, &ho_Region2, 0, 30);
				OpeningCircle(ho_Region2, &ho_RegionOpening, 30.5);
				Connection(ho_RegionOpening, &ho_ConnectedRegions5);
				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, (HTuple("row").Append("area")),
					"and", (HTuple(0).Append(1e+4)), (HTuple(800).Append(2e+5)));
				DilationCircle(ho_SelectedRegions3, &ho_RegionDilation, 20.5);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved, -80, 0);
				DilationRectangle1(ho_RegionMoved, &ho_RegionMoved, 100, 1);
				Union2(ho_RegionDilation, ho_RegionMoved, &ho_RegionUnion1);
				ShapeTrans(ho_RegionUnion1, &ho_RegionTrans1, "outer_circle");

				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, (HTuple("row").Append("area")),
					"and", (HTuple(1000).Append(4e+4)), (HTuple(2000).Append(9e+4)));
				ShapeTrans(ho_SelectedRegions3, &ho_RegionTrans, "ellipse");
				DilationCircle(ho_RegionTrans, &ho_RegionDilation, 80.5);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved, 100, 0);
				Union2(ho_RegionDilation, ho_RegionMoved, &ho_RegionUnion1);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved, -920, 0);
				Union2(ho_RegionUnion1, ho_RegionMoved, &ho_RegionUnion1);
				ShapeTrans(ho_RegionUnion1, &ho_RegionTrans2, "convex");

				Union2(ho_RegionTrans2, ho_RegionTrans1, &ho_RegionUnion2);
				DilationCircle(ho_RegionUnion2, &(*ho_camregion), 15.5);
			}
			if (0 != (int(hv_ImageNum == 5)))
			{
				//2-2-5
				ScaleImage(ho_ImageMean, &ho_ImageScaled2, 5, -80);
				Threshold(ho_ImageScaled2, &ho_Region2, 0, 30);
				OpeningCircle(ho_Region2, &ho_RegionOpening, 30.5);
				Connection(ho_RegionOpening, &ho_ConnectedRegions);

				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, ((HTuple("row").Append("circularity")).Append("area")),
					"and", ((HTuple(400).Append(0.6)).Append(3e+4)), ((HTuple(1000).Append(1)).Append(2e+5)));
				ShapeTrans(ho_SelectedRegions, &ho_RegionTrans, "outer_circle");
				DilationCircle(ho_RegionTrans, &ho_RegionDilation, 60.5);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved, -950, 10);

				MoveRegion(ho_RegionDilation, &ho_RegionMoved1, -210, 2);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved2, 930, 0);
				Union2(ho_RegionMoved1, ho_RegionMoved2, &ho_RegionUnion1);
				ShapeTrans(ho_RegionUnion1, &ho_RegionTrans, "convex");

				Union2(ho_RegionTrans, ho_RegionMoved, &ho_RegionUnion2);
				DilationCircle(ho_RegionUnion2, &(*ho_camregion), 10.5);
			}
			if (0 != (int(hv_ImageNum == 6)))
			{
				//2-2-6
				ScaleImage(ho_ImageMean, &ho_ImageScaled2, 5, -350);
				Threshold(ho_ImageScaled2, &ho_Region2, 0, 30);
				Connection(ho_Region2, &ho_ConnectedRegions5);
				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, (HTuple("row").Append("area")),
					"and", (HTuple(0).Append(5e+4)), (HTuple(500).Append(2e+5)));
				ShapeTrans(ho_SelectedRegions3, &ho_RegionTrans1, "convex");
				MoveRegion(ho_RegionTrans1, &ho_RegionMoved, -100, 0);
				Union2(ho_RegionTrans1, ho_RegionMoved, &ho_RegionUnion1);
				ShapeTrans(ho_RegionUnion1, &ho_RegionTrans1, "convex");
				DilationCircle(ho_RegionTrans1, &(*ho_camregion), 15.5);
			}
			if (0 != (int(hv_ImageNum == 7)))
			{
				//2-2-7
				ScaleImage(ho_ImageMean, &ho_ImageScaled2, 5, -400);
				Threshold(ho_ImageScaled2, &ho_Region2, 0, 30);
				Connection(ho_Region2, &ho_ConnectedRegions5);
				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, (HTuple("column").Append("area")),
					"and", (HTuple(800).Append(3e+5)), (HTuple(1100).Append(2e+7)));
				ShapeTrans(ho_SelectedRegions3, &ho_RegionTrans1, "convex");
				MoveRegion(ho_RegionTrans1, &ho_RegionMoved, 100, 0);
				Union2(ho_RegionTrans1, ho_RegionMoved, &ho_RegionUnion1);
				ShapeTrans(ho_RegionUnion1, &ho_RegionTrans1, "convex");
				DilationCircle(ho_RegionTrans1, &(*ho_camregion), 15.5);
			}
			if (0 != (int(hv_ImageNum == 8)))
			{
				//2-2-8
				OpeningCircle(ho_Region2, &ho_RegionOpening, 30.5);
				Connection(ho_RegionOpening, &ho_ConnectedRegions5);
				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, ((HTuple("row").Append("circularity")).Append("area")),
					"and", ((HTuple(100).Append(0.5)).Append(1e+4)), ((HTuple(600).Append(1)).Append(5e+4)));
				CountObj(ho_SelectedRegions3, &hv_Number);
				if (0 != (int(hv_Number == 0)))
				{
					ScaleImage(ho_ImageMean, &ho_ImageScaled2, 6, -120);
					Threshold(ho_ImageScaled2, &ho_Region2, 0, 30);
					OpeningCircle(ho_Region2, &ho_RegionOpening, 30.5);
					Connection(ho_RegionOpening, &ho_ConnectedRegions5);
					SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, ((HTuple("row").Append("circularity")).Append("area")),
						"and", ((HTuple(1000).Append(0.5)).Append(1e+4)), ((HTuple(1600).Append(1)).Append(5e+4)));
				}
				ShapeTrans(ho_SelectedRegions3, &ho_RegionTrans, "ellipse");
				DilationCircle(ho_RegionTrans, &ho_RegionDilation, 95.5);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved, -60, 5);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved1, -1300, 5);
				Union2(ho_RegionMoved, ho_RegionMoved1, &ho_RegionUnion1);
				ShapeTrans(ho_RegionUnion1, &ho_RegionTrans1, "convex");
				DilationCircle(ho_RegionTrans1, &(*ho_camregion), 15.5);
			}
			if (0 != (int(hv_ImageNum == 11)))
			{
				//2-2-11
				MeanImage(ho_ImageReduced, &ho_ImageMean5, 25, 5);
				ScaleImage(ho_ImageMean5, &ho_ImageScaled4, 2, -150);
				Threshold(ho_ImageScaled4, &ho_Region13, 0, 10);
				OpeningRectangle1(ho_Region13, &ho_RegionOpening3, 30, 2);
				Connection(ho_RegionOpening3, &ho_ConnectedRegions19);
				SelectShape(ho_ConnectedRegions19, &ho_SelectedRegions11, "width", "and",
					700, 1300);
				FillUp(ho_SelectedRegions11, &ho_RegionFillUp);
				DilationRectangle1(ho_RegionFillUp, &(*ho_JTReg), 30, 15);
			}
			if (0 != (int(hv_ImageNum == 12)))
			{
				//2-2-12
				MeanImage(ho_ImageReduced, &ho_ImageMean5, 25, 5);
				ScaleImage(ho_ImageMean5, &ho_ImageScaled4, 2, -120);
				Threshold(ho_ImageScaled4, &ho_Region13, 0, 20);
				OpeningRectangle1(ho_Region13, &ho_RegionOpening3, 22, 2);
				Connection(ho_RegionOpening3, &ho_ConnectedRegions19);
				SelectShape(ho_ConnectedRegions19, &ho_SelectedRegions11, "width", "and",
					700, 1300);
				FillUp(ho_SelectedRegions11, &ho_RegionFillUp);
				DilationRectangle1(ho_RegionFillUp, &(*ho_JTReg), 30, 11);
			}
			if (0 != (int(hv_ImageNum == 13)))
			{
				//2-2-13
				MeanImage(ho_ImageReduced, &ho_ImageMean5, 25, 5);
				ScaleImage(ho_ImageMean5, &ho_ImageScaled4, 5, -120);
				Threshold(ho_ImageScaled4, &ho_Region13, 0, 20);
				OpeningRectangle1(ho_Region13, &ho_RegionOpening3, 22, 2);
				Connection(ho_RegionOpening3, &ho_ConnectedRegions19);

				SelectShape(ho_ConnectedRegions19, &ho_SelectedRegions4, "area", "and", 2000,
					6e+4);
				SelectShape(ho_SelectedRegions4, &ho_SelectedRegions25, "row", "and", 200,
					2048);
				SelectShape(ho_SelectedRegions25, &ho_SelectedRegions26, "column", "and",
					800, 1300);
				Union1(ho_SelectedRegions26, &ho_RegionUnion8);
				ClosingCircle(ho_RegionUnion8, &ho_RegionClosing8, 23.5);
				Connection(ho_RegionClosing8, &ho_ConnectedRegions7);
				DilationRectangle1(ho_ConnectedRegions7, &ho_RegionDilation2, 30, 10);
				ShapeTrans(ho_RegionDilation2, &ho_RegionTrans16, "convex");

				DilationCircle(ho_RegionTrans16, &(*ho_camregion), 10.5);
			}
			if (0 != (int(hv_ImageNum == 14)))
			{
				//2-2-14
				MedianImage(ho_ImageReduced, &ho_ImageReduced, "circle", 9, "mirrored");
				MultImage(ho_ImageReduced, ho_ImageReduced, &ho_ImageResult18, 0.01, 0);
				Threshold(ho_ImageResult18, &ho_Region12, 0, 60);
				Connection(ho_Region12, &ho_ConnectedRegions27);
				SelectShape(ho_ConnectedRegions27, &ho_SelectedRegions2, (HTuple("area").Append("ratio")),
					"and", (HTuple(10050).Append(0.2)), (HTuple(9999999).Append(3)));
				ShapeTrans(ho_SelectedRegions2, &ho_RegionTrans7, "convex");
				Union1(ho_RegionTrans7, &ho_RegionUnion14);
				DilationCircle(ho_RegionUnion14, &(*ho_camregion), 8.5);
			}
			if (0 != (int(hv_ImageNum == 15)))
			{
				//2-2-15
				MedianImage(ho_ImageReduced, &ho_ImageReduced, "circle", 9, "mirrored");
				MultImage(ho_ImageReduced, ho_ImageReduced, &ho_ImageResult18, 0.01, 0);
				Threshold(ho_ImageResult18, &ho_Region12, 0, 60);
				Connection(ho_Region12, &ho_ConnectedRegions27);
				SelectShape(ho_ConnectedRegions27, &ho_SelectedRegions2, (HTuple("area").Append("height")),
					"and", (HTuple(10050).Append(100)), (HTuple(999999).Append(1600)));
				ShapeTrans(ho_SelectedRegions2, &ho_RegionTrans7, "convex");
				Union1(ho_RegionTrans7, &ho_RegionUnion14);
				DilationCircle(ho_RegionUnion14, &(*ho_camregion), 8.5);
			}
			if (0 != (int(hv_ImageNum == 16)))
			{
				//2-2-16
				Threshold(ho_ImageReduced, &ho_Region9, 0, 60);
				FillUp(ho_Region9, &ho_RegionFillUp4);
				Connection(ho_RegionFillUp4, &ho_ConnectedRegions25);
				OpeningCircle(ho_ConnectedRegions25, &ho_RegionOpening13, 15.5);
				Connection(ho_RegionOpening13, &ho_ConnectedRegions8);
				SelectShape(ho_ConnectedRegions8, &ho_SelectedRegions8, (HTuple("row").Append("area")),
					"and", (HTuple(0).Append(5000)), (HTuple(200).Append(99999)));
				ShapeTrans(ho_SelectedRegions8, &ho_RegionTrans3, "convex");
				DilationRectangle1(ho_RegionTrans3, &(*ho_camregion), 25, 25);
			}
			if (0 != (int(hv_ImageNum == 17)))
			{
				//2-2-17
				MeanImage(ho_ImageReduced, &ho_ImageMean5, 25, 5);
				ScaleImage(ho_ImageMean5, &ho_ImageScaled4, 2, -150);
				Threshold(ho_ImageScaled4, &ho_Region13, 0, 10);
				OpeningRectangle1(ho_Region13, &ho_RegionOpening3, 28, 2);
				Connection(ho_RegionOpening3, &ho_ConnectedRegions19);
				SelectShape(ho_ConnectedRegions19, &ho_SelectedRegions11, "width", "and",
					700, 1300);
				FillUp(ho_SelectedRegions11, &ho_RegionFillUp);
				DilationRectangle1(ho_RegionFillUp, &(*ho_JTReg), 30, 11);
			}
			if (0 != (int(hv_ImageNum == 18)))
			{
				//2-2-18
				MeanImage(ho_ImageReduced, &ho_ImageMean5, 25, 5);
				ScaleImage(ho_ImageMean5, &ho_ImageScaled4, 2, -100);
				Threshold(ho_ImageScaled4, &ho_Region13, 0, 5);
				OpeningRectangle1(ho_Region13, &ho_RegionOpening3, 22, 2);
				Connection(ho_RegionOpening3, &ho_ConnectedRegions19);
				SelectShape(ho_ConnectedRegions19, &ho_SelectedRegions11, "width", "and",
					700, 1300);
				FillUp(ho_SelectedRegions11, &ho_RegionFillUp);
				DilationRectangle1(ho_RegionFillUp, &(*ho_JTReg), 30, 11);
			}
			if (0 != (int(hv_ImageNum == 19)))
			{
				//2-2-19
				Threshold(ho_ImageReduced, &ho_Region9, 0, 60);
				FillUp(ho_Region9, &ho_RegionFillUp4);
				Connection(ho_RegionFillUp4, &ho_ConnectedRegions25);
				OpeningCircle(ho_ConnectedRegions25, &ho_RegionOpening13, 15.5);
				Connection(ho_RegionOpening13, &ho_ConnectedRegions8);
				SelectShape(ho_ConnectedRegions8, &ho_SelectedRegions8, (HTuple("row").Append("area")),
					"and", (HTuple(1600).Append(8e+4)), (HTuple(2048).Append(2e+5)));
				ShapeTrans(ho_SelectedRegions8, &ho_RegionTrans3, "convex");
				DilationRectangle1(ho_RegionTrans3, &(*ho_camregion), 25, 25);
			}
			if (0 != (int(hv_ImageNum == 20)))
			{
				//2-2-20
				Threshold(ho_ImageReduced, &ho_Region9, 0, 60);
				FillUp(ho_Region9, &ho_RegionFillUp4);
				Connection(ho_RegionFillUp4, &ho_ConnectedRegions25);
				OpeningCircle(ho_ConnectedRegions25, &ho_RegionOpening13, 15.5);
				Connection(ho_RegionOpening13, &ho_ConnectedRegions8);
				SelectShape(ho_ConnectedRegions8, &ho_SelectedRegions8, "area", "and", 6e+5,
					2e+7);
				ShapeTrans(ho_SelectedRegions8, &ho_RegionTrans3, "convex");
				DilationRectangle1(ho_RegionTrans3, &(*ho_camregion), 25, 25);
			}
			if (0 != (int(hv_ImageNum == 21)))
			{
				//2-2-21
				//提取小区域
				Threshold(ho_ImageReduced, &ho_Region9, 0, 60);
				FillUp(ho_Region9, &ho_RegionFillUp4);
				Connection(ho_RegionFillUp4, &ho_ConnectedRegions25);
				OpeningCircle(ho_ConnectedRegions25, &ho_RegionOpening13, 15.5);
				Connection(ho_RegionOpening13, &ho_ConnectedRegions8);
				SelectShape(ho_ConnectedRegions8, &ho_SelectedRegions8, (HTuple("row").Append("area")),
					"and", (HTuple(0).Append(1e+5)), (HTuple(1048).Append(2e+7)));
				ShapeTrans(ho_SelectedRegions8, &ho_RegionTrans3, "convex");
				DilationRectangle1(ho_RegionTrans3, &(*ho_camregion), 25, 25);
			}
			if (0 != (int(hv_ImageNum == 22)))
			{
				//2-2-22
				ScaleImage(ho_ImageMean, &ho_ImageScaled2, 5, -300);
				Threshold(ho_ImageScaled2, &ho_Region2, 0, 30);
				Connection(ho_Region2, &ho_ConnectedRegions5);
				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, (HTuple("row").Append("area")),
					"and", (HTuple(1600).Append(5e+4)), (HTuple(2048).Append(2e+5)));
				ShapeTrans(ho_SelectedRegions3, &ho_RegionTrans1, "ellipse");
				MoveRegion(ho_RegionTrans1, &ho_RegionMoved, 100, 0);
				Union2(ho_RegionTrans1, ho_RegionMoved, &ho_RegionUnion1);
				ShapeTrans(ho_RegionUnion1, &ho_RegionTrans1, "convex");
				DilationCircle(ho_RegionTrans1, &(*ho_camregion), 15.5);
			}
			if (0 != (int(hv_ImageNum == 23)))
			{
				//2-2-23
				ScaleImage(ho_ImageMean, &ho_ImageScaled2, 5, -80);
				Threshold(ho_ImageScaled2, &ho_Region2, 0, 30);
				OpeningCircle(ho_Region2, &ho_RegionOpening, 100.5);
				Connection(ho_RegionOpening, &ho_ConnectedRegions5);
				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, (HTuple("row").Append("area")),
					"and", (HTuple(0).Append(2e+4)), (HTuple(800).Append(2e+5)));
				DilationCircle(ho_SelectedRegions3, &ho_RegionDilation, 90.5);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved, -500, 0);
				Union2(ho_RegionDilation, ho_RegionMoved, &ho_RegionUnion1);
				ShapeTrans(ho_RegionUnion1, &ho_RegionTrans1, "convex");

				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, (HTuple("row").Append("area")),
					"and", (HTuple(1000).Append(4e+4)), (HTuple(2000).Append(9e+4)));
				ShapeTrans(ho_SelectedRegions3, &ho_RegionTrans, "ellipse");
				DilationCircle(ho_RegionTrans, &ho_RegionDilation, 90.5);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved, 300, 0);
				Union2(ho_RegionTrans1, ho_RegionMoved, &ho_RegionUnion1);
				ShapeTrans(ho_RegionUnion1, &ho_RegionTrans2, "convex");

				DilationCircle(ho_RegionTrans2, &(*ho_camregion), 15.5);
			}
			if (0 != (HTuple(int(hv_ImageNum == 24)).TupleOr(int(hv_ImageNum == 54))))
			{
				//2-2-24   2-2-54
				MedianRect(ho_ImageReduced, &ho_ImageMedian5, 15, 15);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture5, "el", 5, 7);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture8, "le", 5, 7);
				AddImage(ho_ImageTexture5, ho_ImageTexture8, &ho_ImageResult19, 2, -100);
				Threshold(ho_ImageResult19, &ho_Region14, 180, 255);
				Connection(ho_Region14, &ho_ConnectedRegions40);
				SelectShape(ho_ConnectedRegions40, &ho_SelectedRegions48, "area", "and",
					2000, 9999999);
				SelectShape(ho_SelectedRegions48, &ho_SelectedRegions49, "column", "and",
					700, 1300);
				Union1(ho_SelectedRegions49, &ho_RegionUnion7);
				ClosingRectangle1(ho_RegionUnion7, &ho_RegionClosing4, 45, 25);
				FillUp(ho_RegionClosing4, &ho_RegionFillUp20);
				MoveRegion(ho_RegionFillUp20, &ho_RegionMoved, -100, 0);
				Union2(ho_RegionFillUp20, ho_RegionMoved, &ho_RegionUnion1);
				ShapeTrans(ho_RegionUnion1, &ho_RegionTrans11, "convex");
				DilationCircle(ho_RegionTrans11, &(*ho_camregion), 20.5);
			}
			if (0 != (int(hv_ImageNum == 25)))
			{
				//2-2-25
				OpeningCircle(ho_Region2, &ho_RegionOpening, 60.5);
				Connection(ho_RegionOpening, &ho_ConnectedRegions5);
				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, (HTuple("row").Append("area")),
					"and", (HTuple(0).Append(4e+4)), (HTuple(800).Append(9e+4)));
				CountObj(ho_SelectedRegions3, &hv_Number);
				if (0 != hv_Number)
				{
					ShapeTrans(ho_SelectedRegions3, &ho_RegionTrans, "ellipse");
					DilationCircle(ho_RegionTrans, &ho_RegionDilation, 70.5);
					MoveRegion(ho_RegionDilation, &ho_RegionMoved, 550, 5);
					Union2(ho_RegionDilation, ho_RegionMoved, &ho_RegionUnion1);
					MoveRegion(ho_RegionDilation, &ho_RegionMoved, -500, 0);
					Union2(ho_RegionUnion1, ho_RegionMoved, &ho_RegionUnion1);
					ShapeTrans(ho_RegionUnion1, &ho_RegionTrans2, "convex");
					DilationCircle(ho_RegionTrans2, &(*ho_camregion), 15.5);
				}
				else
				{
					ClosingCircle(ho_Region2, &ho_RegionOpening, 100.5);
					Connection(ho_RegionOpening, &ho_ConnectedRegions5);
					SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, (HTuple("column").Append("area")),
						"and", (HTuple(500).Append(1e+5)), (HTuple(2000).Append(9e+5)));
					DilationCircle(ho_SelectedRegions3, &ho_RegionDilation, 30.5);
					ShapeTrans(ho_RegionDilation, &ho_RegionTrans2, "convex");
					MoveRegion(ho_RegionTrans2, &ho_RegionMoved, -30, 0);
					DilationCircle(ho_RegionMoved, &(*ho_camregion), 15.5);
				}
			}
			if (0 != (int(hv_ImageNum == 26)))
			{
				//2-2-26
				MeanImage(ho_ImageReduced, &ho_ImageMean5, 25, 5);
				ScaleImage(ho_ImageMean5, &ho_ImageScaled4, 2, -150);
				Threshold(ho_ImageScaled4, &ho_Region13, 0, 10);
				OpeningRectangle1(ho_Region13, &ho_RegionOpening3, 30, 2);
				Connection(ho_RegionOpening3, &ho_ConnectedRegions19);
				SelectShape(ho_ConnectedRegions19, &ho_SelectedRegions11, "width", "and",
					700, 1300);
				FillUp(ho_SelectedRegions11, &ho_RegionFillUp);
				DilationRectangle1(ho_RegionFillUp, &(*ho_JTReg), 30, 20);
			}
			if (0 != (int(hv_ImageNum == 27)))
			{
				//2-2-27
				MeanImage(ho_ImageReduced, &ho_ImageMean5, 25, 5);
				ScaleImage(ho_ImageMean5, &ho_ImageScaled4, 2, -120);
				Threshold(ho_ImageScaled4, &ho_Region13, 0, 10);
				OpeningRectangle1(ho_Region13, &ho_RegionOpening3, 22, 2);
				Connection(ho_RegionOpening3, &ho_ConnectedRegions19);
				SelectShape(ho_ConnectedRegions19, &ho_SelectedRegions11, "width", "and",
					700, 1300);
				FillUp(ho_SelectedRegions11, &ho_RegionFillUp);
				DilationRectangle1(ho_RegionFillUp, &(*ho_JTReg), 30, 11);
			}
			if (0 != (int(hv_ImageNum == 29)))
			{
				//2-2-29
				MeanImage(ho_ImageReduced, &ho_ImageMean5, 25, 5);
				ScaleImage(ho_ImageMean5, &ho_ImageScaled4, 2, -120);
				Threshold(ho_ImageScaled4, &ho_Region13, 0, 10);
				OpeningRectangle1(ho_Region13, &ho_RegionOpening3, 22, 2);
				Connection(ho_RegionOpening3, &ho_ConnectedRegions19);
				SelectShape(ho_ConnectedRegions19, &ho_SelectedRegions11, "width", "and",
					700, 1300);
				FillUp(ho_SelectedRegions11, &ho_RegionFillUp);
				DilationRectangle1(ho_RegionFillUp, &(*ho_JTReg), 30, 11);
			}
			if (0 != (int(hv_ImageNum == 52)))
			{
				//2-2-52
				ScaleImage(ho_ImageMean, &ho_ImageScaled2, 6, -200);
				Threshold(ho_ImageScaled2, &ho_Region2, 0, 30);
				Connection(ho_Region2, &ho_ConnectedRegions5);
				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, (HTuple("row").Append("area")),
					"and", (HTuple(1600).Append(5e+4)), (HTuple(2048).Append(2e+5)));
				ShapeTrans(ho_SelectedRegions3, &ho_RegionTrans1, "outer_circle");
				MoveRegion(ho_RegionTrans1, &ho_RegionMoved, 50, 0);
				DilationCircle(ho_RegionMoved, &(*ho_camregion), 35.5);
			}
			if (0 != (int(hv_ImageNum == 53)))
			{
				//2-2-53
				ScaleImage(ho_ImageMean, &ho_ImageScaled2, 6, -80);
				Threshold(ho_ImageScaled2, &ho_Region2, 0, 30);
				OpeningCircle(ho_Region2, &ho_RegionOpening, 100.5);
				Connection(ho_RegionOpening, &ho_ConnectedRegions5);
				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, (HTuple("row").Append("area")),
					"and", (HTuple(0).Append(2e+4)), (HTuple(800).Append(2e+5)));
				DilationCircle(ho_SelectedRegions3, &ho_RegionDilation, 90.5);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved, -500, 0);
				Union2(ho_RegionDilation, ho_RegionMoved, &ho_RegionUnion1);
				ShapeTrans(ho_RegionUnion1, &ho_RegionTrans1, "convex");

				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, (HTuple("row").Append("area")),
					"and", (HTuple(1000).Append(4e+4)), (HTuple(2000).Append(9e+4)));
				ShapeTrans(ho_SelectedRegions3, &ho_RegionTrans, "ellipse");
				DilationCircle(ho_RegionTrans, &ho_RegionDilation, 90.5);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved, 300, 0);
				Union2(ho_RegionTrans1, ho_RegionMoved, &ho_RegionUnion1);
				ShapeTrans(ho_RegionUnion1, &ho_RegionTrans2, "convex");

				DilationCircle(ho_RegionTrans2, &(*ho_camregion), 15.5);
			}
			if (0 != (HTuple(HTuple(int(hv_ImageNum == 32)).TupleOr(int(hv_ImageNum == 56))).TupleOr(int(hv_ImageNum == 57))))
			{
				//2-2-56
				MeanImage(ho_ImageReduced, &ho_ImageMean5, 25, 5);
				ScaleImage(ho_ImageMean5, &ho_ImageScaled4, 5, -250);
				Threshold(ho_ImageScaled4, &ho_Region13, 0, 10);
				OpeningRectangle1(ho_Region13, &ho_RegionOpening3, 30, 2);
				Connection(ho_RegionOpening3, &ho_ConnectedRegions19);
				SelectShape(ho_ConnectedRegions19, &ho_SelectedRegions11, "width", "and",
					700, 1300);
				FillUp(ho_SelectedRegions11, &ho_RegionFillUp);
				DilationRectangle1(ho_RegionFillUp, &(*ho_JTReg), 30, 20);
			}
		}
		else if (0 != (HTuple(int(hv_StaNum == 3)).TupleAnd(int(hv_CamNum == 1))))
		{
			//3-1-0
			MeanImage(ho_Image, &ho_ImageMean, 5, 5);
			ScaleImage(ho_ImageMean, &ho_ImageScaled2, 7, -100);
			Threshold(ho_ImageScaled2, &ho_Region34, 0, 60);
			FillUp(ho_Region34, &ho_RegionFillUp15);
			ClosingRectangle1(ho_RegionFillUp15, &ho_RegionClosing12, 25, 60);
			FillUp(ho_RegionClosing12, &ho_RegionFillUp2);
			OpeningRectangle1(ho_RegionFillUp2, &ho_RegionOpening4, 30, 500);

			Connection(ho_RegionOpening4, &ho_ConnectedRegions67);
			SelectShape(ho_ConnectedRegions67, &ho_SelectedRegions99, "area", "and", 40000,
				9999999);
			CountObj(ho_SelectedRegions99, &hv_Number);
			if (0 != hv_Number)
			{
				GenRectangle1(&ho_ROI_0, 0, 0, 2048, 1);
				Union2(ho_ROI_0, ho_SelectedRegions99, &ho_RegionUnion11);
				Union1(ho_RegionUnion11, &ho_SelectedRegions99);
			}
			if (0 != (int(hv_ImageNum == 29)))
			{
				//3-1-29
				MoveRegion(ho_SelectedRegions99, &ho_SelectedRegions99, 0, 50);
			}
			if (0 != (int(hv_ImageNum == 30)))
			{
				//3-1-30
				GenRectangle1(&ho_ROI_0, 1210, 0, 2048, 2048);
				Difference(ho_SelectedRegions99, ho_ROI_0, &ho_SelectedRegions99);
			}
			ShapeTrans(ho_SelectedRegions99, &ho_RegionTrans49, "rectangle1");
			MoveRegion(ho_RegionTrans49, &ho_RegionMoved26, 0, 100);
			Difference(ho_RegionMoved26, ho_RegionTrans49, &ho_RegionDifference);
			OpeningRectangle1(ho_RegionDifference, &ho_RegionOpening1, 5, 160);
			MoveRegion(ho_RegionOpening1, &(*ho_DetectRegion), 0, 2);
		}
		else if (0 != (HTuple(int(hv_StaNum == 3)).TupleAnd(int(hv_CamNum == 2))))
		{
			//3-2-0
			MeanImage(ho_Image, &ho_ImageMean, 5, 5);
			ScaleImage(ho_ImageMean, &ho_ImageScaled, 5, -100);
			Threshold(ho_ImageScaled, &ho_Region, 0, 60);
			FillUp(ho_Region, &ho_RegionFillUp);
			ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 45, 60);
			FillUp(ho_RegionClosing, &ho_RegionFillUp1);
			OpeningRectangle1(ho_RegionFillUp1, &ho_RegionOpening, 30, 500);
			if (0 != (int(hv_ImageNum == 30)))
			{
				//3-2-30
				GenRectangle1(&ho_ROI_0, 1209, 0, 2048, 2048);
				Difference(ho_RegionOpening, ho_ROI_0, &ho_RegionOpening);
			}
			Connection(ho_RegionOpening, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 70000,
				9999999);
			CountObj(ho_SelectedRegions, &hv_Number);
			if (0 != hv_Number)
			{
				GenRectangle1(&ho_ROI_0, 0, 0, 1, 1);
				Union2(ho_ROI_0, ho_SelectedRegions, &ho_RegionUnion1);
				Union1(ho_RegionUnion1, &ho_SelectedRegions);
			}
			ShapeTrans(ho_SelectedRegions, &ho_RegionTrans, "convex");
			MoveRegion(ho_RegionTrans, &ho_RegionMoved, 0, 120);
			Difference(ho_RegionMoved, ho_RegionTrans, &ho_RegionDifference);
			OpeningRectangle1(ho_RegionDifference, &ho_RegionOpening1, 5, 160);
			MoveRegion(ho_RegionOpening1, &(*ho_DetectRegion), 0, 2);
		}
		Union2((*ho_camregion), (*ho_JTReg), &(*ho_camregion));
		CountObj((*ho_DetectRegion), &hv_Number1);
		if (0 != (int(hv_Number1 > 0)))
		{
			//通过外轮廓提取拼接处区域
			MoveRegion((*ho_DetectRegion), &(*ho_DetectRegion), 0, 0);
			SmallestRectangle2((*ho_DetectRegion), &hv_Row16, &hv_Column16, &hv_Phi3, &hv_Length1,
				&hv_Length2);

			//提取仿射最小外接矩形的四个顶点坐标
			GenRectangle2ContourXld(&(*ho_DetectRegion), hv_Row16, hv_Column16, hv_Phi3,
				hv_Length1, hv_Length2);
			TupleCos(hv_Phi3, &hv_Cos);
			TupleSin(hv_Phi3, &hv_Sin);

			GenRectangle2ContourXld(&(*ho_DetectRegion), hv_Row16, hv_Column16, hv_Phi3,
				hv_Length1, hv_Length2);
			TupleCos(hv_Phi3, &hv_Cos);
			TupleSin(hv_Phi3, &hv_Sin);
			if (HDevWindowStack::IsOpen())
				SetColor(HDevWindowStack::GetActive(), "red");
			hv_a = ((-hv_Length1)*hv_Cos) - (hv_Length2*hv_Sin);
			hv_b = ((-hv_Length1)*hv_Sin) + (hv_Length2*hv_Cos);
			GenCrossContourXld(&ho_Cross1, hv_Row16 - hv_b, hv_Column16 + hv_a, 26, hv_Phi3);
			hv_c = (hv_Length1*hv_Cos) - (hv_Length2*hv_Sin);
			hv_d = (hv_Length1*hv_Sin) + (hv_Length2*hv_Cos);
			GenCrossContourXld(&ho_Cross2, hv_Row16 - hv_d, hv_Column16 + hv_c, 26, hv_Phi3);
			hv_e = (hv_Length1*hv_Cos) + (hv_Length2*hv_Sin);
			hv_f = (hv_Length1*hv_Sin) - (hv_Length2*hv_Cos);
			GenCrossContourXld(&ho_Cross3, hv_Row16 - hv_f, hv_Column16 + hv_e, 26, hv_Phi3);
			hv_g = ((-hv_Length1)*hv_Cos) + (hv_Length2*hv_Sin);
			hv_h = ((-hv_Length1)*hv_Sin) - (hv_Length2*hv_Cos);
			GenCrossContourXld(&ho_Cross4, hv_Row16 - hv_h, hv_Column16 + hv_g, 26, hv_Phi3);
			//xld转换region
			GenRegionContourXld(ho_Cross1, &ho_Cross1re, "filled");
			GenRegionContourXld(ho_Cross2, &ho_Cross2re, "filled");
			GenRegionContourXld(ho_Cross3, &ho_Cross3re, "filled");
			GenRegionContourXld(ho_Cross4, &ho_Cross4re, "filled");
			Union2(ho_Cross1re, ho_Cross2re, &ho_RegionUnion2);
			Union2(ho_RegionUnion2, ho_Cross3re, &ho_RegionUnion3);
			Union2(ho_RegionUnion3, ho_Cross4re, &ho_RegionUnion4);
			Connection(ho_RegionUnion4, &ho_ConnectedRegions4);

			SortRegion(ho_ConnectedRegions4, &ho_SortedRegions, "character", "true", "row");
			if (0 != (int(hv_StaNum == 3)))
			{
				SelectObj(ho_SortedRegions, &(*ho_PointRegion), 1);
			}
			else
			{
				SelectObj(ho_SortedRegions, &(*ho_PointRegion), 2);
			}
		}
		return 1;
	}
	catch (HException& ExceptionHandler)
	{
		HTuple err;
		ExceptionHandler.ToHTuple(&err);
		string strErr = err.ToString();
		string strerr = std::to_string(hv_ProNum.I()) + "-" + std::to_string(hv_StaNum.I()) + "_" + std::to_string(hv_CamNum.I()) + "_" + std::to_string(hv_ImageNum.I()) + "ImageShieldProcessOQC84OuterGrayFrame error:" + strErr;
		VeErrMessage.push_back(QString::fromStdString(strerr));
	}
	reg = -1;
	return -1;
}

//银色OQC84外观提取定位所有工位
int JSZCAlgorithmsDLLOQC::ImageShieldProcessOQC84OuterSilverFrame(HObject ho_Image, HObject *ho_DetectRegion,
	HObject *ho_PointRegion, HObject *ho_camregion, HObject *ho_JTReg, HTuple hv_ProNum,
	HTuple hv_StaNum, HTuple hv_CamNum, HTuple hv_ImageNum)
{

	// Local iconic variables
	HObject  ho_ImageMean, ho_ImageScaled, ho_Region;
	HObject  ho_RegionFillUp, ho_RegionClosing, ho_RegionFillUp1;
	HObject  ho_RegionOpening, ho_ROI_0, ho_ConnectedRegions;
	HObject  ho_SelectedRegions, ho_RegionUnion1, ho_RegionTrans;
	HObject  ho_RegionMoved, ho_RegionDifference, ho_RegionOpening1;
	HObject  ho_SortedRegions, ho_ObjectSelected, ho_RegionMoved1;
	HObject  ho_RegionTrans1, ho_ImageReduced, ho_ImageMedian1;
	HObject  ho_ImageTexture, ho_Region1, ho_ConnectedRegions1;
	HObject  ho_SortedRegions1, ho_ObjectSelected1, ho_RegionTrans2;
	HObject  ho_RegionMoved2, ho_RegionDifference1, ho_RegionDilation;
	HObject  ho_ImageMedian5, ho_ImageTexture5, ho_ImageTexture8;
	HObject  ho_ImageResult19, ho_Region14, ho_ConnectedRegions40;
	HObject  ho_SelectedRegions48, ho_SelectedRegions49, ho_RegionUnion7;
	HObject  ho_RegionClosing4, ho_RegionFillUp20, ho_ConnectedRegions41;
	HObject  ho_RegionTrans11, ho_RegionUnion2, ho_RegionClosing1;
	HObject  ho_ConnectedRegions5, ho_SelectedRegions3, ho_ImageScaled2;
	HObject  ho_Region2, ho_ImageMedian9, ho_ImageTexture4, ho_Region5;
	HObject  ho_RegionOpening21, ho_ConnectedRegions11, ho_SortedRegions4;
	HObject  ho_RegionTrans32, ho_RegionMoved11, ho_RegionDifference3;
	HObject  ho_RegionDilation1, ho_ImageMedian24, ho_ImageTexture1;
	HObject  ho_ImageTexture2, ho_ImageSub, ho_Region29, ho_ConnectedRegions26;
	HObject  ho_SelectedRegions4, ho_SelectedRegions25, ho_SelectedRegions26;
	HObject  ho_RegionUnion8, ho_RegionClosing8, ho_ConnectedRegions7;
	HObject  ho_RegionTrans16, ho_SelectedRegions1, ho_SelectedRegions2;
	HObject  ho_RegionErosion, ho_RegionUnion3, ho_RegionClosing9;
	HObject  ho_RegionClosing10, ho_RegionFillUp6, ho_RegionOpening5;
	HObject  ho_SelectedRegions9, ho_RegionClosing6, ho_RegionOpening2;
	HObject  ho_ConnectedRegions10, ho_ObjectSelected2, ho_RegionUnion18;
	HObject  ho_RegionTrans4, ho_ImageMean5, ho_ImageScaled4;
	HObject  ho_Region13, ho_RegionOpening3, ho_ConnectedRegions19;
	HObject  ho_SelectedRegions11, ho_ImageMean2, ho_ImageScaled3;
	HObject  ho_Region10, ho_RegionOpening9, ho_ConnectedRegions14;
	HObject  ho_SelectedRegions12, ho_RegionTrans10, ho_RegionDilation2;
	HObject  ho_ImageResult18, ho_Region12, ho_ConnectedRegions27;
	HObject  ho_RegionTrans7, ho_RegionUnion14, ho_Region9, ho_RegionFillUp4;
	HObject  ho_ConnectedRegions25, ho_RegionOpening13, ho_ConnectedRegions8;
	HObject  ho_SelectedRegions8, ho_RegionTrans3, ho_Region34;
	HObject  ho_RegionFillUp15, ho_RegionClosing12, ho_RegionFillUp2;
	HObject  ho_RegionOpening4, ho_ConnectedRegions67, ho_SelectedRegions99;
	HObject  ho_RegionUnion11, ho_RegionTrans49, ho_RegionMoved26;
	HObject  ho_Cross1, ho_Cross2, ho_Cross3, ho_Cross4, ho_Cross1re;
	HObject  ho_Cross2re, ho_Cross3re, ho_Cross4re, ho_RegionUnion4;
	HObject  ho_ConnectedRegions4;

	// Local control variables
	HTuple  hv_Number, hv_Number1, hv_Row16, hv_Column16;
	HTuple  hv_Phi3, hv_Length1, hv_Length2, hv_Cos, hv_Sin;
	HTuple  hv_a, hv_b, hv_c, hv_d, hv_e, hv_f, hv_g, hv_h;
	HTuple  hv_Exception;

	try
	{
		//参数初始化
		//胶条区域初始化
		GenEmptyObj(&(*ho_JTReg));
		//检测区域初始化
		GenEmptyObj(&(*ho_DetectRegion));
		//相机孔区域初始化
		GenEmptyObj(&(*ho_camregion));

		//解析图像名
		//*     tuple_str_first_n (ImName, 2, Substring)
		//*     tuple_split (ImName, '_', Substrings)
		//*     StaNum := Substrings[0]
		//tuple_number (StaNum, StaNum)
		//*     CamNum := Substrings[1]
		//tuple_number (CamNum, CamNum)
		//*     ImageNum := Substrings[2]
		//tuple_number (ImageNum, ImageNum)

		if (0 != (HTuple(int(hv_StaNum == 1)).TupleAnd(int(hv_CamNum == 1))))
		{
			//1-1-0
			MeanImage(ho_Image, &ho_ImageMean, 5, 5);
			ScaleImage(ho_ImageMean, &ho_ImageScaled, 2, -80);
			Threshold(ho_ImageScaled, &ho_Region, 0, 60);
			FillUp(ho_Region, &ho_RegionFillUp);
			ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 45, 60);
			FillUp(ho_RegionClosing, &ho_RegionFillUp1);
			OpeningRectangle1(ho_RegionFillUp1, &ho_RegionOpening, 30, 500);
			if (0 != (int(hv_ImageNum == 30)))
			{
				//1-1-30
				GenRectangle1(&ho_ROI_0, 1209, 0, 2048, 2048);
				Difference(ho_RegionOpening, ho_ROI_0, &ho_RegionOpening);
			}
			Connection(ho_RegionOpening, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 100000,
				9999999);
			CountObj(ho_SelectedRegions, &hv_Number);
			if (0 != hv_Number)
			{
				GenRectangle1(&ho_ROI_0, 0, 2048, 1, 2048);
				Union2(ho_ROI_0, ho_SelectedRegions, &ho_RegionUnion1);
				Union1(ho_RegionUnion1, &ho_SelectedRegions);
			}
			ShapeTrans(ho_SelectedRegions, &ho_RegionTrans, "convex");
			MoveRegion(ho_RegionTrans, &ho_RegionMoved, 0, -120);
			Difference(ho_RegionMoved, ho_RegionTrans, &ho_RegionDifference);
			OpeningRectangle1(ho_RegionDifference, &ho_RegionOpening1, 5, 160);
			MoveRegion(ho_RegionOpening1, &(*ho_DetectRegion), 0, 2);
		}
		else if (0 != (HTuple(int(hv_StaNum == 1)).TupleAnd(int(hv_CamNum == 2))))
		{
			//1-2-0
			MeanImage(ho_Image, &ho_ImageMean, 5, 5);
			ScaleImage(ho_ImageMean, &ho_ImageScaled, 2, -80);
			Threshold(ho_ImageScaled, &ho_Region, 0, 60);
			FillUp(ho_Region, &ho_RegionFillUp);
			ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 45, 60);
			FillUp(ho_RegionClosing, &ho_RegionFillUp1);
			OpeningRectangle1(ho_RegionFillUp1, &ho_RegionOpening, 30, 500);
			if (0 != (int(hv_ImageNum == 30)))
			{
				//1-2-30
				GenRectangle1(&ho_ROI_0, 1209, 0, 2048, 2048);
				Difference(ho_RegionOpening, ho_ROI_0, &ho_RegionOpening);
			}
			Connection(ho_RegionOpening, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 100000,
				9999999);
			CountObj(ho_SelectedRegions, &hv_Number);
			if (0 != hv_Number)
			{
				GenRectangle1(&ho_ROI_0, 0, 2048, 1, 2048);
				Union2(ho_ROI_0, ho_SelectedRegions, &ho_RegionUnion1);
				Union1(ho_RegionUnion1, &ho_SelectedRegions);
			}
			ShapeTrans(ho_SelectedRegions, &ho_RegionTrans, "convex");
			MoveRegion(ho_RegionTrans, &ho_RegionMoved, 0, -120);
			Difference(ho_RegionMoved, ho_RegionTrans, &ho_RegionDifference);
			OpeningRectangle1(ho_RegionDifference, &ho_RegionOpening1, 5, 160);
			MoveRegion(ho_RegionOpening1, &(*ho_DetectRegion), 0, 2);
		}
		else if (0 != (HTuple(int(hv_StaNum == 2)).TupleAnd(int(hv_CamNum == 1))))
		{
			//2-1-0
			MeanImage(ho_Image, &ho_ImageMean, 5, 5);
			ScaleImage(ho_ImageMean, &ho_ImageScaled, 5, -150);
			Threshold(ho_ImageScaled, &ho_Region, 0, 50);
			ClosingRectangle1(ho_Region, &ho_RegionClosing, 30, 20);
			FillUp(ho_RegionClosing, &ho_RegionFillUp);
			OpeningRectangle1(ho_RegionFillUp, &ho_RegionOpening, 1, 1600);
			Connection(ho_RegionOpening, &ho_ConnectedRegions);
			SortRegion(ho_ConnectedRegions, &ho_SortedRegions, "character", "false", "column");
			SelectObj(ho_SortedRegions, &ho_ObjectSelected, 1);
			MoveRegion(ho_ObjectSelected, &ho_RegionMoved, 0, 10);
			ShapeTrans(ho_RegionMoved, &ho_RegionTrans, "rectangle1");
			MoveRegion(ho_RegionTrans, &ho_RegionMoved1, 0, -1024);
			Union2(ho_RegionTrans, ho_RegionMoved1, &ho_RegionUnion1);
			ShapeTrans(ho_RegionUnion1, &ho_RegionTrans1, "rectangle1");
			Difference(ho_RegionTrans1, ho_RegionTrans, &(*ho_DetectRegion));

			ReduceDomain(ho_Image, (*ho_DetectRegion), &ho_ImageReduced);
			if (0 != (int(hv_ImageNum == 2)))
			{
				//2-1-2
				MeanImage(ho_ImageReduced, &ho_ImageMedian1, 25, 5);
				TextureLaws(ho_ImageMedian1, &ho_ImageTexture, "el", 5, 7);
				Threshold(ho_ImageTexture, &ho_Region1, 0, 180);
				ClosingRectangle1(ho_Region1, &ho_RegionClosing, 100, 2);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening1, 400, 5);
				Connection(ho_RegionOpening1, &ho_ConnectedRegions1);
				SortRegion(ho_ConnectedRegions1, &ho_SortedRegions1, "character", "true",
					"row");
				SelectObj(ho_SortedRegions1, &ho_ObjectSelected1, 1);
				ShapeTrans(ho_ObjectSelected1, &ho_RegionTrans2, "rectangle1");
				MoveRegion(ho_RegionTrans2, &ho_RegionMoved2, 144, 0);
				Difference(ho_RegionMoved2, ho_RegionTrans2, &ho_RegionDifference1);
				DilationRectangle1(ho_RegionDifference1, &ho_RegionDilation, 500, 20);
				Intersection(ho_ImageReduced, ho_RegionDilation, &(*ho_JTReg));
			}
			if (0 != (int(hv_ImageNum == 3)))
			{
				//2-1-3
				//裁剪
				MedianRect(ho_ImageReduced, &ho_ImageMedian5, 15, 15);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture5, "el", 5, 7);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture8, "le", 5, 7);
				AddImage(ho_ImageTexture5, ho_ImageTexture8, &ho_ImageResult19, 2, -100);
				Threshold(ho_ImageResult19, &ho_Region14, 160, 255);
				ClosingRectangle1(ho_Region14, &ho_RegionClosing, 1, 30);
				Connection(ho_RegionClosing, &ho_ConnectedRegions40);
				SelectShape(ho_ConnectedRegions40, &ho_SelectedRegions48, "area", "and",
					2000, 9999999);
				SelectShape(ho_SelectedRegions48, &ho_SelectedRegions49, "column", "and",
					700, 1300);
				Union1(ho_SelectedRegions49, &ho_RegionUnion7);
				ClosingRectangle1(ho_RegionUnion7, &ho_RegionClosing4, 45, 25);
				FillUp(ho_RegionClosing4, &ho_RegionFillUp20);
				Connection(ho_RegionFillUp20, &ho_ConnectedRegions41);
				SelectShape(ho_ConnectedRegions41, &ho_SelectedRegions49, "row", "and", 1300,
					2048);
				MoveRegion(ho_SelectedRegions49, &ho_RegionMoved, 100, 0);
				Union2(ho_RegionMoved, ho_ConnectedRegions41, &ho_RegionUnion1);
				OpeningCircle(ho_RegionUnion1, &ho_RegionOpening, 90.5);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans11, "convex");
				MoveRegion(ho_RegionTrans11, &ho_RegionMoved, 200, 0);
				Union2(ho_RegionTrans11, ho_RegionMoved, &ho_RegionUnion1);
				DilationCircle(ho_RegionUnion1, &(*ho_camregion), 20.5);
			}
			if (0 != (int(hv_ImageNum == 4)))
			{
				//2-1-4
				MedianRect(ho_ImageReduced, &ho_ImageMedian5, 15, 15);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture5, "el", 5, 7);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture8, "le", 5, 7);
				AddImage(ho_ImageTexture5, ho_ImageTexture8, &ho_ImageResult19, 2, -100);
				Threshold(ho_ImageResult19, &ho_Region14, 160, 255);
				ClosingRectangle1(ho_Region14, &ho_RegionClosing, 1, 30);
				Connection(ho_RegionClosing, &ho_ConnectedRegions40);
				SelectShape(ho_ConnectedRegions40, &ho_SelectedRegions48, "area", "and",
					2000, 9999999);
				SelectShape(ho_SelectedRegions48, &ho_SelectedRegions49, "column", "and",
					700, 1300);
				Union1(ho_SelectedRegions49, &ho_RegionUnion7);
				ClosingRectangle1(ho_RegionUnion7, &ho_RegionClosing4, 45, 25);
				FillUp(ho_RegionClosing4, &ho_RegionFillUp20);
				Connection(ho_RegionFillUp20, &ho_ConnectedRegions41);
				SelectShape(ho_ConnectedRegions41, &ho_SelectedRegions49, "row", "and", 0,
					500);
				MoveRegion(ho_SelectedRegions49, &ho_RegionMoved, -100, 0);
				Union2(ho_RegionMoved, ho_ConnectedRegions41, &ho_RegionUnion1);
				SelectShape(ho_ConnectedRegions41, &ho_SelectedRegions49, "row", "and", 800,
					2048);
				MoveRegion(ho_SelectedRegions49, &ho_RegionMoved, 300, 0);
				Union2(ho_RegionMoved, ho_RegionUnion1, &ho_RegionUnion2);

				Connection(ho_RegionUnion2, &ho_ConnectedRegions);
				OpeningCircle(ho_ConnectedRegions, &ho_RegionOpening, 30.5);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans11, "convex");
				DilationCircle(ho_RegionTrans11, &(*ho_camregion), 20.5);
			}
			if (0 != (int(hv_ImageNum == 5)))
			{
				//2-1-5
				MedianRect(ho_ImageReduced, &ho_ImageMedian5, 15, 15);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture5, "el", 5, 7);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture8, "le", 5, 7);
				AddImage(ho_ImageTexture5, ho_ImageTexture8, &ho_ImageResult19, 2, -100);
				Threshold(ho_ImageResult19, &ho_Region14, 180, 255);
				ClosingRectangle1(ho_Region14, &ho_RegionClosing, 1, 30);
				Connection(ho_RegionClosing, &ho_ConnectedRegions40);
				SelectShape(ho_ConnectedRegions40, &ho_SelectedRegions48, "area", "and",
					4000, 9999999);
				SelectShape(ho_SelectedRegions48, &ho_SelectedRegions49, "column", "and",
					700, 1300);
				Union1(ho_SelectedRegions49, &ho_RegionUnion7);
				ClosingRectangle1(ho_RegionUnion7, &ho_RegionClosing4, 45, 25);
				FillUp(ho_RegionClosing4, &ho_RegionFillUp20);
				Connection(ho_RegionFillUp20, &ho_ConnectedRegions41);
				SelectShape(ho_ConnectedRegions41, &ho_SelectedRegions49, "row", "and", 0,
					500);
				MoveRegion(ho_SelectedRegions49, &ho_RegionMoved, -200, 0);
				Union2(ho_RegionMoved, ho_ConnectedRegions41, &ho_RegionUnion1);
				ClosingRectangle1(ho_RegionUnion1, &ho_RegionClosing1, 10, 200);
				Connection(ho_RegionClosing1, &ho_ConnectedRegions);
				ShapeTrans(ho_ConnectedRegions, &ho_RegionTrans11, "convex");
				DilationCircle(ho_RegionTrans11, &(*ho_camregion), 20.5);
			}
			if (0 != (int(hv_ImageNum == 6)))
			{
				//2-1-6
				MedianRect(ho_ImageReduced, &ho_ImageMedian5, 15, 15);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture5, "el", 5, 7);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture8, "le", 5, 7);
				AddImage(ho_ImageTexture5, ho_ImageTexture8, &ho_ImageResult19, 2, -100);
				Threshold(ho_ImageResult19, &ho_Region14, 180, 255);
				Connection(ho_Region14, &ho_ConnectedRegions40);
				SelectShape(ho_ConnectedRegions40, &ho_SelectedRegions48, "area", "and",
					4000, 9999999);
				SelectShape(ho_SelectedRegions48, &ho_SelectedRegions49, "column", "and",
					700, 1300);
				Union1(ho_SelectedRegions49, &ho_RegionUnion7);
				ClosingRectangle1(ho_RegionUnion7, &ho_RegionClosing4, 200, 25);
				FillUp(ho_RegionClosing4, &ho_RegionFillUp20);
				MoveRegion(ho_RegionFillUp20, &ho_RegionMoved, -100, 0);
				Union2(ho_RegionMoved, ho_RegionFillUp20, &ho_RegionUnion1);
				ClosingRectangle1(ho_RegionUnion1, &ho_RegionClosing1, 10, 100);
				Connection(ho_RegionClosing1, &ho_ConnectedRegions);
				ShapeTrans(ho_ConnectedRegions, &ho_RegionTrans11, "convex");
				MoveRegion(ho_RegionTrans11, &ho_RegionMoved, -200, 0);
				Union2(ho_RegionTrans11, ho_RegionMoved, &ho_RegionUnion1);
				DilationCircle(ho_RegionUnion1, &(*ho_camregion), 20.5);
			}
			if (0 != (int(hv_ImageNum == 7)))
			{
				//2-1-7
				OpeningCircle(ho_Region, &ho_RegionOpening, 10.5);
				Connection(ho_RegionOpening, &ho_ConnectedRegions5);
				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, ((HTuple("row").Append("column")).Append("area")),
					"and", ((HTuple(300).Append(750)).Append(6e+4)), ((HTuple(2000).Append(1150)).Append(3e+6)));
				ShapeTrans(ho_SelectedRegions3, &ho_RegionTrans, "rectangle1");
				DilationRectangle1(ho_RegionTrans, &ho_RegionDilation, 130, 330);
				OpeningCircle(ho_RegionDilation, &ho_RegionOpening, 160.5);
				MoveRegion(ho_RegionOpening, &ho_RegionMoved, 0, 15);
				MoveRegion(ho_RegionMoved, &ho_RegionMoved1, 200, 0);
				Union2(ho_RegionMoved1, ho_RegionMoved, &ho_RegionUnion1);
				DilationCircle(ho_RegionUnion1, &(*ho_camregion), 25.5);
			}
			if (0 != (int(hv_ImageNum == 8)))
			{
				//2-1-8
				OpeningCircle(ho_Region, &ho_RegionOpening, 20.5);
				Connection(ho_RegionOpening, &ho_ConnectedRegions5);
				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, ((HTuple("row").Append("circularity")).Append("area")),
					"and", ((HTuple(100).Append(0.4)).Append(1e+4)), ((HTuple(600).Append(1)).Append(5e+4)));
				CountObj(ho_SelectedRegions3, &hv_Number);
				if (0 != (int(hv_Number == 0)))
				{
					ScaleImage(ho_ImageMean, &ho_ImageScaled2, 5, -160);
					Threshold(ho_ImageScaled2, &ho_Region2, 0, 50);
					OpeningCircle(ho_Region2, &ho_RegionOpening, 20.5);
					Connection(ho_RegionOpening, &ho_ConnectedRegions5);
					SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, ((HTuple("row").Append("circularity")).Append("area")),
						"and", ((HTuple(1000).Append(0.4)).Append(1e+4)), ((HTuple(1600).Append(1)).Append(5e+4)));
				}
				ShapeTrans(ho_SelectedRegions3, &ho_RegionTrans, "ellipse");
				DilationCircle(ho_RegionTrans, &ho_RegionDilation, 95.5);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved, 10, 2);
				Union2(ho_RegionDilation, ho_RegionMoved, &ho_RegionUnion1);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved, -1300, 5);
				Union2(ho_RegionUnion1, ho_RegionMoved, &ho_RegionUnion1);
				ShapeTrans(ho_RegionUnion1, &ho_RegionTrans1, "convex");
				DilationCircle(ho_RegionTrans1, &(*ho_camregion), 15.5);
			}
			if (0 != (int(hv_ImageNum == 11)))
			{
				//2-1-11
				MedianRect(ho_ImageReduced, &ho_ImageMedian9, 15, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 4, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 120);
				ClosingRectangle1(ho_Region5, &ho_RegionClosing, 100, 1);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening21, 600, 15);
				Connection(ho_RegionOpening21, &ho_ConnectedRegions11);
				SortRegion(ho_ConnectedRegions11, &ho_SortedRegions4, "character", "true",
					"row");
				SelectObj(ho_SortedRegions4, &ho_ObjectSelected1, 1);
				ShapeTrans(ho_ObjectSelected1, &ho_RegionTrans32, "rectangle1");
				MoveRegion(ho_RegionTrans32, &ho_RegionMoved11, 144, 0);
				Difference(ho_RegionMoved11, ho_RegionTrans32, &ho_RegionDifference3);
				DilationRectangle1(ho_RegionDifference3, &ho_RegionDilation1, 500, 20);
				Intersection(ho_ImageReduced, ho_RegionDilation1, &(*ho_JTReg));
			}
			if (0 != (int(hv_ImageNum == 12)))
			{
				//2-1-12
				MedianRect(ho_ImageReduced, &ho_ImageMedian9, 15, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 4, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 120);
				ClosingRectangle1(ho_Region5, &ho_RegionClosing, 100, 1);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening21, 600, 15);
				Connection(ho_RegionOpening21, &ho_ConnectedRegions11);
				SortRegion(ho_ConnectedRegions11, &ho_SortedRegions4, "character", "true",
					"row");
				SelectObj(ho_SortedRegions4, &ho_ObjectSelected1, 1);
				ShapeTrans(ho_ObjectSelected1, &ho_RegionTrans32, "rectangle1");
				MoveRegion(ho_RegionTrans32, &ho_RegionMoved11, 144, 0);
				Difference(ho_RegionMoved11, ho_RegionTrans32, &ho_RegionDifference3);
				DilationRectangle1(ho_RegionDifference3, &ho_RegionDilation1, 500, 20);
				Intersection(ho_ImageReduced, ho_RegionDilation1, &(*ho_JTReg));
			}
			if (0 != (int(hv_ImageNum == 13)))
			{
				//2-1-13
				//mean_image (ImageReduced, ImageMedian9, 25, 5)
				//texture_laws (ImageMedian9, ImageTexture4, 'el', 5, 7)
				//threshold (ImageTexture4, Region5, 0, 180)
				//closing_rectangle1 (Region5, RegionClosing, 100, 2)
				//opening_rectangle1 (RegionClosing, RegionOpening21, 400, 5)
				//connection (RegionOpening21, ConnectedRegions11)
				//sort_region (ConnectedRegions11, SortedRegions4, 'character', 'true', 'row')
				//select_obj (SortedRegions4, ObjectSelected1, 1)
				//shape_trans (ObjectSelected1, RegionTrans32, 'rectangle1')
				//move_region (RegionTrans32, RegionMoved11, 90, 0)
				//difference (RegionTrans32, RegionMoved11, RegionDifference3)
				//dilation_rectangle1 (RegionDifference3, RegionDilation1, 500, 20)
				//intersection (ImageReduced, RegionDilation1, JTReg)

				MedianRect(ho_ImageReduced, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -200);
				Threshold(ho_ImageSub, &ho_Region29, 180, 255);
				Connection(ho_Region29, &ho_ConnectedRegions26);
				SelectShape(ho_ConnectedRegions26, &ho_SelectedRegions4, "area", "and", 2000,
					2e+4);
				SelectShape(ho_SelectedRegions4, &ho_SelectedRegions25, "row", "and", 500,
					2048);
				SelectShape(ho_SelectedRegions25, &ho_SelectedRegions26, "column", "and",
					800, 1300);
				Union1(ho_SelectedRegions26, &ho_RegionUnion8);
				ClosingCircle(ho_RegionUnion8, &ho_RegionClosing8, 23.5);
				FillUp(ho_RegionClosing8, &ho_RegionFillUp);
				Connection(ho_RegionFillUp, &ho_ConnectedRegions7);
				ShapeTrans(ho_ConnectedRegions7, &ho_RegionTrans16, "outer_circle");
				DilationCircle(ho_RegionTrans16, &(*ho_camregion), 3.5);
			}
			if (0 != (int(hv_ImageNum == 14)))
			{
				//2-1-14
				OpeningCircle(ho_RegionFillUp, &ho_RegionOpening, 10.5);
				Connection(ho_RegionOpening, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions1, (HTuple("column").Append("area")),
					"and", (HTuple(800).Append(3e+3)), (HTuple(1200).Append(8e+5)));

				SelectShape(ho_SelectedRegions1, &ho_SelectedRegions2, "row", "and", 0, 400);
				ShapeTrans(ho_SelectedRegions2, &ho_RegionTrans, "outer_circle");
				DilationCircle(ho_RegionTrans, &ho_RegionDilation, 50.5);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved, 0, 3);
				Union2(ho_RegionTrans, ho_RegionMoved, &ho_RegionUnion1);

				SelectShape(ho_SelectedRegions1, &ho_SelectedRegions2, "row", "and", 600,
					1600);
				ShapeTrans(ho_SelectedRegions2, &ho_RegionTrans, "rectangle2");
				DilationRectangle1(ho_RegionTrans, &ho_RegionDilation, 260, 160);
				OpeningCircle(ho_RegionDilation, &ho_RegionOpening1, 300.5);
				ErosionRectangle1(ho_RegionOpening1, &ho_RegionErosion, 160, 30);
				Union2(ho_SelectedRegions1, ho_RegionErosion, &ho_RegionUnion2);

				SelectShape(ho_SelectedRegions1, &ho_SelectedRegions2, "row", "and", 1700,
					2000);
				ShapeTrans(ho_SelectedRegions2, &ho_RegionTrans, "outer_circle");
				DilationCircle(ho_RegionTrans, &ho_RegionDilation, 10.5);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved, 8, 0);
				Union2(ho_RegionTrans, ho_RegionMoved, &ho_RegionUnion3);

				Union2(ho_RegionUnion2, ho_RegionUnion1, &ho_RegionUnion2);
				Union2(ho_RegionUnion2, ho_RegionUnion3, &ho_RegionUnion3);

				Union1(ho_RegionUnion3, &ho_RegionUnion3);
				DilationCircle(ho_RegionUnion3, &(*ho_camregion), 5.5);
			}
			if (0 != (int(hv_ImageNum == 15)))
			{
				//2-1-15
				MedianRect(ho_ImageReduced, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 7, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -200);
				Threshold(ho_ImageSub, &ho_Region2, 180, 255);
				Connection(ho_Region2, &ho_ConnectedRegions26);
				SelectShape(ho_ConnectedRegions26, &ho_SelectedRegions4, "area", "and", 1000,
					999999);
				SelectShape(ho_SelectedRegions4, &ho_SelectedRegions25, "row", "and", 0,
					2048);
				SelectShape(ho_SelectedRegions25, &ho_SelectedRegions26, "column", "and",
					800, 1300);

				Union1(ho_SelectedRegions26, &ho_RegionUnion8);
				ClosingCircle(ho_RegionUnion8, &ho_RegionClosing8, 10);
				Connection(ho_RegionClosing8, &ho_ConnectedRegions7);
				ShapeTrans(ho_ConnectedRegions7, &ho_RegionTrans16, "convex");
				DilationCircle(ho_RegionTrans16, &(*ho_camregion), 10.5);
			}
			if (0 != (int(hv_ImageNum == 16)))
			{
				//2-1-16
				//裁剪
				MeanImage(ho_ImageReduced, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 210, 255);
				ClosingCircle(ho_Region5, &ho_RegionClosing9, 28.5);
				ClosingRectangle1(ho_RegionClosing9, &ho_RegionClosing10, 8, 80);
				FillUp(ho_RegionClosing10, &ho_RegionFillUp6);
				OpeningCircle(ho_RegionFillUp6, &ho_RegionOpening, 6.5);
				OpeningRectangle1(ho_RegionOpening, &ho_RegionOpening5, 90, 1);
				Connection(ho_RegionOpening5, &ho_ConnectedRegions11);
				SelectShape(ho_ConnectedRegions11, &ho_SelectedRegions9, (HTuple("row").Append("area")),
					"and", (HTuple(0).Append(700)), (HTuple(200).Append(99999)));
				ShapeTrans(ho_SelectedRegions9, &ho_RegionTrans, "convex");
				DilationCircle(ho_RegionTrans, &(*ho_camregion), 15.5);
			}
			if (0 != (int(hv_ImageNum == 17)))
			{
				//2-1-17
				MeanImage(ho_ImageReduced, &ho_ImageMedian9, 25, 5);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 180);
				ClosingRectangle1(ho_Region5, &ho_RegionClosing, 100, 2);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening21, 400, 5);
				Connection(ho_RegionOpening21, &ho_ConnectedRegions11);
				SortRegion(ho_ConnectedRegions11, &ho_SortedRegions4, "character", "true",
					"row");
				SelectObj(ho_SortedRegions4, &ho_ObjectSelected1, 1);
				ShapeTrans(ho_ObjectSelected1, &ho_RegionTrans32, "rectangle1");
				MoveRegion(ho_RegionTrans32, &ho_RegionMoved11, 144, 0);
				Difference(ho_RegionMoved11, ho_RegionTrans32, &ho_RegionDifference3);
				DilationRectangle1(ho_RegionDifference3, &ho_RegionDilation1, 500, 20);
				Intersection(ho_ImageReduced, ho_RegionDilation1, &(*ho_JTReg));
			}
			if (0 != (int(hv_ImageNum == 20)))
			{
				//2-1-19
				MedianRect(ho_ImageReduced, &ho_ImageMedian5, 15, 15);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture5, "el", 5, 7);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture8, "le", 5, 7);
				AddImage(ho_ImageTexture5, ho_ImageTexture8, &ho_ImageResult19, 2, -80);
				Threshold(ho_ImageResult19, &ho_Region14, 180, 255);
				Connection(ho_Region14, &ho_ConnectedRegions40);
				SelectShape(ho_ConnectedRegions40, &ho_SelectedRegions48, "area", "and",
					4000, 9999999);
				SelectShape(ho_SelectedRegions48, &ho_SelectedRegions49, "column", "and",
					700, 1300);
				Union1(ho_SelectedRegions49, &ho_RegionUnion7);
				ClosingRectangle1(ho_RegionUnion7, &ho_RegionClosing4, 45, 25);
				FillUp(ho_RegionClosing4, &ho_RegionFillUp20);
				ShapeTrans(ho_RegionFillUp20, &ho_RegionTrans11, "rectangle2");
				DilationCircle(ho_RegionTrans11, &(*ho_camregion), 20.5);
			}
			if (0 != (int(hv_ImageNum == 21)))
			{
				//2-1-21
				MedianRect(ho_ImageReduced, &ho_ImageMedian5, 15, 15);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture5, "el", 5, 7);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture8, "le", 5, 7);
				AddImage(ho_ImageTexture5, ho_ImageTexture8, &ho_ImageResult19, 2, -100);
				Threshold(ho_ImageResult19, &ho_Region14, 180, 255);
				Connection(ho_Region14, &ho_ConnectedRegions40);
				SelectShape(ho_ConnectedRegions40, &ho_SelectedRegions48, "area", "and",
					4000, 9999999);
				SelectShape(ho_SelectedRegions48, &ho_SelectedRegions49, "column", "and",
					700, 1300);
				Union1(ho_SelectedRegions49, &ho_RegionUnion7);
				ClosingRectangle1(ho_RegionUnion7, &ho_RegionClosing4, 45, 25);
				FillUp(ho_RegionClosing4, &ho_RegionFillUp20);
				MoveRegion(ho_RegionFillUp20, &ho_RegionMoved, -800, 0);
				Union2(ho_RegionFillUp20, ho_RegionMoved, &ho_RegionUnion1);
				ShapeTrans(ho_RegionUnion1, &ho_RegionTrans11, "convex");
				DilationCircle(ho_RegionTrans11, &(*ho_camregion), 20.5);
			}
			if (0 != (int(hv_ImageNum == 22)))
			{
				//2-1-22
				MedianRect(ho_ImageReduced, &ho_ImageMedian5, 15, 15);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture5, "el", 5, 7);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture8, "le", 5, 7);
				AddImage(ho_ImageTexture5, ho_ImageTexture8, &ho_ImageResult19, 2, -100);
				Threshold(ho_ImageResult19, &ho_Region14, 180, 255);
				Connection(ho_Region14, &ho_ConnectedRegions40);
				SelectShape(ho_ConnectedRegions40, &ho_SelectedRegions48, "area", "and",
					2000, 9999999);
				SelectShape(ho_SelectedRegions48, &ho_SelectedRegions49, "column", "and",
					700, 1300);
				Union1(ho_SelectedRegions49, &ho_RegionUnion7);
				ClosingRectangle1(ho_RegionUnion7, &ho_RegionClosing4, 45, 25);
				FillUp(ho_RegionClosing4, &ho_RegionFillUp20);
				Connection(ho_RegionFillUp20, &ho_ConnectedRegions41);
				ShapeTrans(ho_ConnectedRegions41, &ho_RegionTrans11, "convex");
				DilationCircle(ho_RegionTrans11, &(*ho_camregion), 20.5);
			}
			if (0 != (int(hv_ImageNum == 23)))
			{
				//2-1-23
				OpeningCircle(ho_RegionFillUp, &ho_RegionOpening, 10.5);
				Connection(ho_RegionOpening, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions1, ((HTuple("column").Append("circularity")).Append("area")),
					"and", ((HTuple(800).Append(0.6)).Append(3e+4)), ((HTuple(1200).Append(1)).Append(8e+5)));

				SelectShape(ho_SelectedRegions1, &ho_SelectedRegions2, "row", "and", 200,
					800);
				ShapeTrans(ho_SelectedRegions2, &ho_RegionTrans, "outer_circle");
				DilationCircle(ho_RegionTrans, &ho_RegionDilation, 80.5);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved, -400, 0);
				Union2(ho_RegionTrans, ho_RegionMoved, &ho_RegionUnion1);

				SelectShape(ho_SelectedRegions1, &ho_SelectedRegions2, "row", "and", 1400,
					1800);
				ShapeTrans(ho_SelectedRegions2, &ho_RegionTrans, "outer_circle");
				DilationCircle(ho_RegionTrans, &ho_RegionDilation, 80.5);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved, 600, 0);
				Union2(ho_RegionTrans, ho_RegionMoved, &ho_RegionUnion2);

				Union2(ho_RegionUnion2, ho_RegionUnion1, &ho_RegionUnion2);
				Union1(ho_RegionUnion2, &ho_RegionUnion2);
				ShapeTrans(ho_RegionUnion2, &ho_RegionTrans, "convex");
				DilationCircle(ho_RegionTrans, &(*ho_camregion), 10.5);
			}
			if (0 != (int(hv_ImageNum == 24)))
			{
				//2-1-24
				MedianRect(ho_ImageReduced, &ho_ImageMedian5, 15, 15);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture5, "el", 5, 7);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture8, "le", 5, 7);
				AddImage(ho_ImageTexture5, ho_ImageTexture8, &ho_ImageResult19, 2, -100);
				Threshold(ho_ImageResult19, &ho_Region14, 180, 255);
				Connection(ho_Region14, &ho_ConnectedRegions40);
				SelectShape(ho_ConnectedRegions40, &ho_SelectedRegions48, "area", "and",
					2000, 9999999);
				SelectShape(ho_SelectedRegions48, &ho_SelectedRegions49, "column", "and",
					700, 1300);
				Union1(ho_SelectedRegions49, &ho_RegionUnion7);
				ClosingRectangle1(ho_RegionUnion7, &ho_RegionClosing4, 45, 25);
				FillUp(ho_RegionClosing4, &ho_RegionFillUp20);
				MoveRegion(ho_RegionFillUp20, &ho_RegionMoved, -100, 0);
				Union2(ho_RegionFillUp20, ho_RegionMoved, &ho_RegionUnion1);
				ShapeTrans(ho_RegionUnion1, &ho_RegionTrans11, "convex");
				DilationCircle(ho_RegionTrans11, &(*ho_camregion), 20.5);
			}
			if (0 != (int(hv_ImageNum == 26)))
			{
				//2-1-26
				MeanImage(ho_ImageReduced, &ho_ImageMedian9, 25, 5);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 180);
				ClosingRectangle1(ho_Region5, &ho_RegionClosing, 100, 2);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening21, 400, 5);
				Connection(ho_RegionOpening21, &ho_ConnectedRegions11);
				SortRegion(ho_ConnectedRegions11, &ho_SortedRegions4, "character", "true",
					"row");
				SelectObj(ho_SortedRegions4, &ho_ObjectSelected1, 1);
				ShapeTrans(ho_ObjectSelected1, &ho_RegionTrans32, "rectangle1");
				MoveRegion(ho_RegionTrans32, &ho_RegionMoved11, 144, 0);
				Difference(ho_RegionMoved11, ho_RegionTrans32, &ho_RegionDifference3);
				DilationRectangle1(ho_RegionDifference3, &ho_RegionDilation1, 500, 20);
				Intersection(ho_ImageReduced, ho_RegionDilation1, &(*ho_JTReg));
			}
			if (0 != (int(hv_ImageNum == 27)))
			{
				//2-1-27
				MeanImage(ho_ImageReduced, &ho_ImageMedian9, 25, 5);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 180);
				ClosingRectangle1(ho_Region5, &ho_RegionClosing, 100, 2);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening21, 400, 5);
				Connection(ho_RegionOpening21, &ho_ConnectedRegions11);
				SortRegion(ho_ConnectedRegions11, &ho_SortedRegions4, "character", "true",
					"row");
				SelectObj(ho_SortedRegions4, &ho_ObjectSelected1, 1);
				ShapeTrans(ho_ObjectSelected1, &ho_RegionTrans32, "rectangle1");
				MoveRegion(ho_RegionTrans32, &ho_RegionMoved11, 144, 0);
				Difference(ho_RegionMoved11, ho_RegionTrans32, &ho_RegionDifference3);
				DilationRectangle1(ho_RegionDifference3, &ho_RegionDilation1, 500, 20);
				Intersection(ho_ImageReduced, ho_RegionDilation1, &(*ho_JTReg));
			}
			Union1((*ho_camregion), &(*ho_camregion));
		}
		else if (0 != (HTuple(int(hv_StaNum == 2)).TupleAnd(int(hv_CamNum == 2))))
		{
			//2-2-0
			MeanImage(ho_Image, &ho_ImageMean, 5, 5);
			ScaleImage(ho_ImageMean, &ho_ImageScaled2, 4, -120);
			Threshold(ho_ImageScaled2, &ho_Region2, 0, 50);
			ClosingRectangle1(ho_Region2, &ho_RegionClosing6, 30, 20);
			FillUp(ho_RegionClosing6, &ho_RegionFillUp);
			OpeningRectangle1(ho_RegionFillUp, &ho_RegionOpening2, 1, 1600);
			Connection(ho_RegionOpening2, &ho_ConnectedRegions10);
			SortRegion(ho_ConnectedRegions10, &ho_SortedRegions1, "character", "false",
				"column");
			SelectObj(ho_SortedRegions1, &ho_ObjectSelected2, 1);
			MoveRegion(ho_ObjectSelected2, &ho_RegionMoved, 0, 10);
			ShapeTrans(ho_RegionMoved, &ho_RegionTrans1, "rectangle1");
			MoveRegion(ho_RegionTrans1, &ho_RegionMoved2, 0, -1024);
			Union2(ho_RegionTrans1, ho_RegionMoved2, &ho_RegionUnion18);
			ShapeTrans(ho_RegionUnion18, &ho_RegionTrans4, "rectangle1");
			Difference(ho_RegionTrans4, ho_RegionTrans1, &(*ho_DetectRegion));
			ReduceDomain(ho_Image, (*ho_DetectRegion), &ho_ImageReduced);
			if (0 != (int(hv_ImageNum == 2)))
			{
				//2-2-2
				MeanImage(ho_ImageReduced, &ho_ImageMean5, 25, 5);
				ScaleImage(ho_ImageMean5, &ho_ImageScaled4, 2, -140);
				Threshold(ho_ImageScaled4, &ho_Region13, 0, 20);
				OpeningRectangle1(ho_Region13, &ho_RegionOpening3, 30, 2);
				Connection(ho_RegionOpening3, &ho_ConnectedRegions19);
				SelectShape(ho_ConnectedRegions19, &ho_SelectedRegions11, "width", "and",
					700, 1300);
				FillUp(ho_SelectedRegions11, &ho_RegionFillUp);
				DilationRectangle1(ho_RegionFillUp, &(*ho_JTReg), 30, 20);
			}
			if (0 != (int(hv_ImageNum == 3)))
			{
				//2-2-3
				MeanImage(ho_ImageReduced, &ho_ImageMean2, 20, 10);
				ScaleImage(ho_ImageMean2, &ho_ImageScaled3, 5, -300);
				Threshold(ho_ImageScaled3, &ho_Region10, 0, 55);
				OpeningRectangle1(ho_Region10, &ho_RegionOpening9, 33, 2);
				Connection(ho_RegionOpening9, &ho_ConnectedRegions14);
				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions12, "area", "and",
					25000, 9999999);

				Union1(ho_SelectedRegions12, &ho_RegionUnion1);
				ShapeTrans(ho_RegionUnion1, &ho_RegionTrans10, "convex");
				DilationCircle(ho_RegionTrans10, &(*ho_camregion), 19.5);
			}
			if (0 != (int(hv_ImageNum == 4)))
			{
				//2-2-4
				ScaleImage(ho_ImageMean, &ho_ImageScaled2, 5, -80);
				Threshold(ho_ImageScaled2, &ho_Region2, 0, 30);
				OpeningCircle(ho_Region2, &ho_RegionOpening, 30.5);
				Connection(ho_RegionOpening, &ho_ConnectedRegions5);
				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, (HTuple("row").Append("area")),
					"and", (HTuple(0).Append(1e+4)), (HTuple(800).Append(2e+5)));
				DilationCircle(ho_SelectedRegions3, &ho_RegionDilation, 20.5);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved, -80, 0);
				DilationRectangle1(ho_RegionMoved, &ho_RegionMoved, 100, 1);
				Union2(ho_RegionDilation, ho_RegionMoved, &ho_RegionUnion1);
				ShapeTrans(ho_RegionUnion1, &ho_RegionTrans1, "outer_circle");

				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, (HTuple("row").Append("area")),
					"and", (HTuple(1000).Append(4e+4)), (HTuple(2000).Append(9e+4)));
				ShapeTrans(ho_SelectedRegions3, &ho_RegionTrans, "ellipse");
				DilationCircle(ho_RegionTrans, &ho_RegionDilation, 80.5);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved, 100, 0);
				Union2(ho_RegionDilation, ho_RegionMoved, &ho_RegionUnion1);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved, -920, 0);
				Union2(ho_RegionUnion1, ho_RegionMoved, &ho_RegionUnion1);
				ShapeTrans(ho_RegionUnion1, &ho_RegionTrans2, "convex");

				Union2(ho_RegionTrans2, ho_RegionTrans1, &ho_RegionUnion2);
				DilationCircle(ho_RegionUnion2, &(*ho_camregion), 15.5);
			}
			if (0 != (int(hv_ImageNum == 5)))
			{
				//2-2-5
				ScaleImage(ho_ImageMean, &ho_ImageScaled2, 5, -80);
				Threshold(ho_ImageScaled2, &ho_Region2, 0, 30);
				OpeningCircle(ho_Region2, &ho_RegionOpening, 30.5);
				Connection(ho_RegionOpening, &ho_ConnectedRegions);

				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, ((HTuple("row").Append("circularity")).Append("area")),
					"and", ((HTuple(400).Append(0.6)).Append(3e+4)), ((HTuple(1000).Append(1)).Append(2e+5)));
				ShapeTrans(ho_SelectedRegions, &ho_RegionTrans, "outer_circle");
				DilationCircle(ho_RegionTrans, &ho_RegionDilation, 60.5);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved, -950, 10);

				MoveRegion(ho_RegionDilation, &ho_RegionMoved1, -210, 2);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved2, 930, 0);
				Union2(ho_RegionMoved1, ho_RegionMoved2, &ho_RegionUnion1);
				ShapeTrans(ho_RegionUnion1, &ho_RegionTrans, "convex");

				Union2(ho_RegionTrans, ho_RegionMoved, &ho_RegionUnion2);
				DilationCircle(ho_RegionUnion2, &(*ho_camregion), 10.5);
			}
			if (0 != (int(hv_ImageNum == 6)))
			{
				//2-2-6
				ScaleImage(ho_ImageMean, &ho_ImageScaled2, 5, -350);
				Threshold(ho_ImageScaled2, &ho_Region2, 0, 30);
				Connection(ho_Region2, &ho_ConnectedRegions5);
				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, (HTuple("row").Append("area")),
					"and", (HTuple(0).Append(5e+4)), (HTuple(500).Append(2e+5)));
				ShapeTrans(ho_SelectedRegions3, &ho_RegionTrans1, "convex");
				MoveRegion(ho_RegionTrans1, &ho_RegionMoved, -100, 0);
				Union2(ho_RegionTrans1, ho_RegionMoved, &ho_RegionUnion1);
				ShapeTrans(ho_RegionUnion1, &ho_RegionTrans1, "convex");
				DilationCircle(ho_RegionTrans1, &(*ho_camregion), 15.5);
			}
			if (0 != (int(hv_ImageNum == 7)))
			{
				//2-2-7
				ScaleImage(ho_ImageMean, &ho_ImageScaled2, 5, -400);
				Threshold(ho_ImageScaled2, &ho_Region2, 0, 30);
				Connection(ho_Region2, &ho_ConnectedRegions5);
				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, (HTuple("column").Append("area")),
					"and", (HTuple(800).Append(3e+5)), (HTuple(1100).Append(2e+7)));
				ShapeTrans(ho_SelectedRegions3, &ho_RegionTrans1, "convex");
				MoveRegion(ho_RegionTrans1, &ho_RegionMoved, 100, 0);
				Union2(ho_RegionTrans1, ho_RegionMoved, &ho_RegionUnion1);
				ShapeTrans(ho_RegionUnion1, &ho_RegionTrans1, "convex");
				DilationCircle(ho_RegionTrans1, &(*ho_camregion), 15.5);
			}
			if (0 != (int(hv_ImageNum == 8)))
			{
				//2-2-8
				OpeningCircle(ho_Region2, &ho_RegionOpening, 30.5);
				Connection(ho_RegionOpening, &ho_ConnectedRegions5);
				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, ((HTuple("row").Append("circularity")).Append("area")),
					"and", ((HTuple(100).Append(0.5)).Append(1e+4)), ((HTuple(600).Append(1)).Append(5e+4)));
				CountObj(ho_SelectedRegions3, &hv_Number);
				if (0 != (int(hv_Number == 0)))
				{
					ScaleImage(ho_ImageMean, &ho_ImageScaled2, 6, -120);
					Threshold(ho_ImageScaled2, &ho_Region2, 0, 30);
					OpeningCircle(ho_Region2, &ho_RegionOpening, 30.5);
					Connection(ho_RegionOpening, &ho_ConnectedRegions5);
					SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, ((HTuple("row").Append("circularity")).Append("area")),
						"and", ((HTuple(1000).Append(0.5)).Append(1e+4)), ((HTuple(1600).Append(1)).Append(5e+4)));
				}
				ShapeTrans(ho_SelectedRegions3, &ho_RegionTrans, "ellipse");
				DilationCircle(ho_RegionTrans, &ho_RegionDilation, 95.5);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved, -60, 5);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved1, -1300, 5);
				Union2(ho_RegionMoved, ho_RegionMoved1, &ho_RegionUnion1);
				ShapeTrans(ho_RegionUnion1, &ho_RegionTrans1, "convex");
				DilationCircle(ho_RegionTrans1, &(*ho_camregion), 15.5);
			}
			if (0 != (int(hv_ImageNum == 11)))
			{
				//2-2-11
				MeanImage(ho_ImageReduced, &ho_ImageMean5, 25, 5);
				ScaleImage(ho_ImageMean5, &ho_ImageScaled4, 2, -150);
				Threshold(ho_ImageScaled4, &ho_Region13, 0, 10);
				OpeningRectangle1(ho_Region13, &ho_RegionOpening3, 30, 2);
				Connection(ho_RegionOpening3, &ho_ConnectedRegions19);
				SelectShape(ho_ConnectedRegions19, &ho_SelectedRegions11, "width", "and",
					700, 1300);
				FillUp(ho_SelectedRegions11, &ho_RegionFillUp);
				DilationRectangle1(ho_RegionFillUp, &(*ho_JTReg), 30, 15);
			}
			if (0 != (int(hv_ImageNum == 12)))
			{
				//2-2-12
				MeanImage(ho_ImageReduced, &ho_ImageMean5, 25, 5);
				ScaleImage(ho_ImageMean5, &ho_ImageScaled4, 2, -120);
				Threshold(ho_ImageScaled4, &ho_Region13, 0, 20);
				OpeningRectangle1(ho_Region13, &ho_RegionOpening3, 22, 2);
				Connection(ho_RegionOpening3, &ho_ConnectedRegions19);
				SelectShape(ho_ConnectedRegions19, &ho_SelectedRegions11, "width", "and",
					700, 1300);
				FillUp(ho_SelectedRegions11, &ho_RegionFillUp);
				DilationRectangle1(ho_RegionFillUp, &(*ho_JTReg), 30, 11);
			}
			if (0 != (int(hv_ImageNum == 13)))
			{
				//2-2-13
				MeanImage(ho_ImageReduced, &ho_ImageMean5, 25, 5);
				ScaleImage(ho_ImageMean5, &ho_ImageScaled4, 5, -120);
				Threshold(ho_ImageScaled4, &ho_Region13, 0, 20);
				OpeningRectangle1(ho_Region13, &ho_RegionOpening3, 22, 2);
				Connection(ho_RegionOpening3, &ho_ConnectedRegions19);

				SelectShape(ho_ConnectedRegions19, &ho_SelectedRegions4, "area", "and", 2000,
					6e+4);
				SelectShape(ho_SelectedRegions4, &ho_SelectedRegions25, "row", "and", 200,
					2048);
				SelectShape(ho_SelectedRegions25, &ho_SelectedRegions26, "column", "and",
					800, 1300);
				Union1(ho_SelectedRegions26, &ho_RegionUnion8);
				ClosingCircle(ho_RegionUnion8, &ho_RegionClosing8, 23.5);
				Connection(ho_RegionClosing8, &ho_ConnectedRegions7);
				DilationRectangle1(ho_ConnectedRegions7, &ho_RegionDilation2, 30, 10);
				ShapeTrans(ho_RegionDilation2, &ho_RegionTrans16, "convex");

				DilationCircle(ho_RegionTrans16, &(*ho_camregion), 10.5);
			}
			if (0 != (int(hv_ImageNum == 14)))
			{
				//2-2-14
				MedianImage(ho_ImageReduced, &ho_ImageReduced, "circle", 9, "mirrored");
				MultImage(ho_ImageReduced, ho_ImageReduced, &ho_ImageResult18, 0.01, 0);
				Threshold(ho_ImageResult18, &ho_Region12, 0, 60);
				Connection(ho_Region12, &ho_ConnectedRegions27);
				SelectShape(ho_ConnectedRegions27, &ho_SelectedRegions2, (HTuple("area").Append("ratio")),
					"and", (HTuple(10050).Append(0.2)), (HTuple(9999999).Append(3)));
				ShapeTrans(ho_SelectedRegions2, &ho_RegionTrans7, "convex");
				Union1(ho_RegionTrans7, &ho_RegionUnion14);
				DilationCircle(ho_RegionUnion14, &(*ho_camregion), 8.5);
			}
			if (0 != (int(hv_ImageNum == 15)))
			{
				//2-2-15
				MedianImage(ho_ImageReduced, &ho_ImageReduced, "circle", 9, "mirrored");
				MultImage(ho_ImageReduced, ho_ImageReduced, &ho_ImageResult18, 0.01, 0);
				Threshold(ho_ImageResult18, &ho_Region12, 0, 60);
				Connection(ho_Region12, &ho_ConnectedRegions27);
				SelectShape(ho_ConnectedRegions27, &ho_SelectedRegions2, (HTuple("area").Append("height")),
					"and", (HTuple(10050).Append(100)), (HTuple(999999).Append(1600)));
				ShapeTrans(ho_SelectedRegions2, &ho_RegionTrans7, "convex");
				Union1(ho_RegionTrans7, &ho_RegionUnion14);
				DilationCircle(ho_RegionUnion14, &(*ho_camregion), 8.5);
			}
			if (0 != (int(hv_ImageNum == 16)))
			{
				//2-2-16
				Threshold(ho_ImageReduced, &ho_Region9, 0, 60);
				FillUp(ho_Region9, &ho_RegionFillUp4);
				Connection(ho_RegionFillUp4, &ho_ConnectedRegions25);
				OpeningCircle(ho_ConnectedRegions25, &ho_RegionOpening13, 15.5);
				Connection(ho_RegionOpening13, &ho_ConnectedRegions8);
				SelectShape(ho_ConnectedRegions8, &ho_SelectedRegions8, (HTuple("row").Append("area")),
					"and", (HTuple(0).Append(5000)), (HTuple(200).Append(99999)));
				ShapeTrans(ho_SelectedRegions8, &ho_RegionTrans3, "convex");
				DilationRectangle1(ho_RegionTrans3, &(*ho_camregion), 25, 25);
			}
			if (0 != (int(hv_ImageNum == 17)))
			{
				//2-2-17
				MeanImage(ho_ImageReduced, &ho_ImageMean5, 25, 5);
				ScaleImage(ho_ImageMean5, &ho_ImageScaled4, 2, -150);
				Threshold(ho_ImageScaled4, &ho_Region13, 0, 10);
				OpeningRectangle1(ho_Region13, &ho_RegionOpening3, 28, 2);
				Connection(ho_RegionOpening3, &ho_ConnectedRegions19);
				SelectShape(ho_ConnectedRegions19, &ho_SelectedRegions11, "width", "and",
					700, 1300);
				FillUp(ho_SelectedRegions11, &ho_RegionFillUp);
				DilationRectangle1(ho_RegionFillUp, &(*ho_JTReg), 30, 11);
			}
			if (0 != (int(hv_ImageNum == 18)))
			{
				//2-2-18
				MeanImage(ho_ImageReduced, &ho_ImageMean5, 25, 5);
				ScaleImage(ho_ImageMean5, &ho_ImageScaled4, 2, -100);
				Threshold(ho_ImageScaled4, &ho_Region13, 0, 5);
				OpeningRectangle1(ho_Region13, &ho_RegionOpening3, 22, 2);
				Connection(ho_RegionOpening3, &ho_ConnectedRegions19);
				SelectShape(ho_ConnectedRegions19, &ho_SelectedRegions11, "width", "and",
					700, 1300);
				FillUp(ho_SelectedRegions11, &ho_RegionFillUp);
				DilationRectangle1(ho_RegionFillUp, &(*ho_JTReg), 30, 11);
			}
			if (0 != (int(hv_ImageNum == 19)))
			{
				//2-2-19
				Threshold(ho_ImageReduced, &ho_Region9, 0, 60);
				FillUp(ho_Region9, &ho_RegionFillUp4);
				Connection(ho_RegionFillUp4, &ho_ConnectedRegions25);
				OpeningCircle(ho_ConnectedRegions25, &ho_RegionOpening13, 15.5);
				Connection(ho_RegionOpening13, &ho_ConnectedRegions8);
				SelectShape(ho_ConnectedRegions8, &ho_SelectedRegions8, (HTuple("row").Append("area")),
					"and", (HTuple(1600).Append(8e+4)), (HTuple(2048).Append(2e+5)));
				ShapeTrans(ho_SelectedRegions8, &ho_RegionTrans3, "convex");
				DilationRectangle1(ho_RegionTrans3, &(*ho_camregion), 25, 25);
			}
			if (0 != (int(hv_ImageNum == 20)))
			{
				//2-2-20
				Threshold(ho_ImageReduced, &ho_Region9, 0, 60);
				FillUp(ho_Region9, &ho_RegionFillUp4);
				Connection(ho_RegionFillUp4, &ho_ConnectedRegions25);
				OpeningCircle(ho_ConnectedRegions25, &ho_RegionOpening13, 15.5);
				Connection(ho_RegionOpening13, &ho_ConnectedRegions8);
				SelectShape(ho_ConnectedRegions8, &ho_SelectedRegions8, "area", "and", 6e+5,
					2e+7);
				ShapeTrans(ho_SelectedRegions8, &ho_RegionTrans3, "convex");
				DilationRectangle1(ho_RegionTrans3, &(*ho_camregion), 25, 25);
			}
			if (0 != (int(hv_ImageNum == 21)))
			{
				//2-2-21
				//提取小区域
				Threshold(ho_ImageReduced, &ho_Region9, 0, 60);
				FillUp(ho_Region9, &ho_RegionFillUp4);
				Connection(ho_RegionFillUp4, &ho_ConnectedRegions25);
				OpeningCircle(ho_ConnectedRegions25, &ho_RegionOpening13, 15.5);
				Connection(ho_RegionOpening13, &ho_ConnectedRegions8);
				SelectShape(ho_ConnectedRegions8, &ho_SelectedRegions8, (HTuple("row").Append("area")),
					"and", (HTuple(0).Append(1e+5)), (HTuple(1048).Append(2e+7)));
				ShapeTrans(ho_SelectedRegions8, &ho_RegionTrans3, "convex");
				DilationRectangle1(ho_RegionTrans3, &(*ho_camregion), 25, 25);
			}
			if (0 != (int(hv_ImageNum == 22)))
			{
				//2-2-22
				ScaleImage(ho_ImageMean, &ho_ImageScaled2, 5, -300);
				Threshold(ho_ImageScaled2, &ho_Region2, 0, 30);
				Connection(ho_Region2, &ho_ConnectedRegions5);
				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, (HTuple("row").Append("area")),
					"and", (HTuple(1600).Append(5e+4)), (HTuple(2048).Append(2e+5)));
				ShapeTrans(ho_SelectedRegions3, &ho_RegionTrans1, "ellipse");
				MoveRegion(ho_RegionTrans1, &ho_RegionMoved, 100, 0);
				Union2(ho_RegionTrans1, ho_RegionMoved, &ho_RegionUnion1);
				ShapeTrans(ho_RegionUnion1, &ho_RegionTrans1, "convex");
				DilationCircle(ho_RegionTrans1, &(*ho_camregion), 15.5);
			}
			if (0 != (int(hv_ImageNum == 23)))
			{
				//2-2-23
				ScaleImage(ho_ImageMean, &ho_ImageScaled2, 5, -80);
				Threshold(ho_ImageScaled2, &ho_Region2, 0, 30);
				OpeningCircle(ho_Region2, &ho_RegionOpening, 100.5);
				Connection(ho_RegionOpening, &ho_ConnectedRegions5);
				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, (HTuple("row").Append("area")),
					"and", (HTuple(0).Append(2e+4)), (HTuple(800).Append(2e+5)));
				DilationCircle(ho_SelectedRegions3, &ho_RegionDilation, 90.5);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved, -500, 0);
				Union2(ho_RegionDilation, ho_RegionMoved, &ho_RegionUnion1);
				ShapeTrans(ho_RegionUnion1, &ho_RegionTrans1, "convex");

				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, (HTuple("row").Append("area")),
					"and", (HTuple(1000).Append(4e+4)), (HTuple(2000).Append(9e+4)));
				ShapeTrans(ho_SelectedRegions3, &ho_RegionTrans, "ellipse");
				DilationCircle(ho_RegionTrans, &ho_RegionDilation, 90.5);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved, 300, 0);
				Union2(ho_RegionTrans1, ho_RegionMoved, &ho_RegionUnion1);
				ShapeTrans(ho_RegionUnion1, &ho_RegionTrans2, "convex");

				DilationCircle(ho_RegionTrans2, &(*ho_camregion), 15.5);
			}
			if (0 != (HTuple(int(hv_ImageNum == 24)).TupleOr(int(hv_ImageNum == 54))))
			{
				//2-2-24   2-2-54
				MedianRect(ho_ImageReduced, &ho_ImageMedian5, 15, 15);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture5, "el", 5, 7);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture8, "le", 5, 7);
				AddImage(ho_ImageTexture5, ho_ImageTexture8, &ho_ImageResult19, 2, -100);
				Threshold(ho_ImageResult19, &ho_Region14, 180, 255);
				Connection(ho_Region14, &ho_ConnectedRegions40);
				SelectShape(ho_ConnectedRegions40, &ho_SelectedRegions48, "area", "and",
					2000, 9999999);
				SelectShape(ho_SelectedRegions48, &ho_SelectedRegions49, "column", "and",
					700, 1300);
				Union1(ho_SelectedRegions49, &ho_RegionUnion7);
				ClosingRectangle1(ho_RegionUnion7, &ho_RegionClosing4, 45, 25);
				FillUp(ho_RegionClosing4, &ho_RegionFillUp20);
				MoveRegion(ho_RegionFillUp20, &ho_RegionMoved, -100, 0);
				Union2(ho_RegionFillUp20, ho_RegionMoved, &ho_RegionUnion1);
				ShapeTrans(ho_RegionUnion1, &ho_RegionTrans11, "convex");
				DilationCircle(ho_RegionTrans11, &(*ho_camregion), 20.5);
			}
			if (0 != (int(hv_ImageNum == 25)))
			{
				//2-2-25
				OpeningCircle(ho_Region2, &ho_RegionOpening, 60.5);
				Connection(ho_RegionOpening, &ho_ConnectedRegions5);
				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, (HTuple("row").Append("area")),
					"and", (HTuple(0).Append(4e+4)), (HTuple(800).Append(9e+4)));
				CountObj(ho_SelectedRegions3, &hv_Number);
				if (0 != hv_Number)
				{
					ShapeTrans(ho_SelectedRegions3, &ho_RegionTrans, "ellipse");
					DilationCircle(ho_RegionTrans, &ho_RegionDilation, 70.5);
					MoveRegion(ho_RegionDilation, &ho_RegionMoved, 550, 5);
					Union2(ho_RegionDilation, ho_RegionMoved, &ho_RegionUnion1);
					MoveRegion(ho_RegionDilation, &ho_RegionMoved, -500, 0);
					Union2(ho_RegionUnion1, ho_RegionMoved, &ho_RegionUnion1);
					ShapeTrans(ho_RegionUnion1, &ho_RegionTrans2, "convex");
					DilationCircle(ho_RegionTrans2, &(*ho_camregion), 15.5);
				}
				else
				{
					ClosingCircle(ho_Region2, &ho_RegionOpening, 100.5);
					Connection(ho_RegionOpening, &ho_ConnectedRegions5);
					SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, (HTuple("column").Append("area")),
						"and", (HTuple(500).Append(1e+5)), (HTuple(2000).Append(9e+5)));
					DilationCircle(ho_SelectedRegions3, &ho_RegionDilation, 30.5);
					ShapeTrans(ho_RegionDilation, &ho_RegionTrans2, "convex");
					MoveRegion(ho_RegionTrans2, &ho_RegionMoved, -30, 0);
					DilationCircle(ho_RegionMoved, &(*ho_camregion), 15.5);
				}
			}
			if (0 != (int(hv_ImageNum == 26)))
			{
				//2-2-26
				MeanImage(ho_ImageReduced, &ho_ImageMean5, 25, 5);
				ScaleImage(ho_ImageMean5, &ho_ImageScaled4, 2, -150);
				Threshold(ho_ImageScaled4, &ho_Region13, 0, 10);
				OpeningRectangle1(ho_Region13, &ho_RegionOpening3, 30, 2);
				Connection(ho_RegionOpening3, &ho_ConnectedRegions19);
				SelectShape(ho_ConnectedRegions19, &ho_SelectedRegions11, "width", "and",
					700, 1300);
				FillUp(ho_SelectedRegions11, &ho_RegionFillUp);
				DilationRectangle1(ho_RegionFillUp, &(*ho_JTReg), 30, 20);
			}
			if (0 != (int(hv_ImageNum == 27)))
			{
				//2-2-27
				MeanImage(ho_ImageReduced, &ho_ImageMean5, 25, 5);
				ScaleImage(ho_ImageMean5, &ho_ImageScaled4, 2, -120);
				Threshold(ho_ImageScaled4, &ho_Region13, 0, 10);
				OpeningRectangle1(ho_Region13, &ho_RegionOpening3, 22, 2);
				Connection(ho_RegionOpening3, &ho_ConnectedRegions19);
				SelectShape(ho_ConnectedRegions19, &ho_SelectedRegions11, "width", "and",
					700, 1300);
				FillUp(ho_SelectedRegions11, &ho_RegionFillUp);
				DilationRectangle1(ho_RegionFillUp, &(*ho_JTReg), 30, 11);
			}
			if (0 != (int(hv_ImageNum == 29)))
			{
				//2-2-29
				MeanImage(ho_ImageReduced, &ho_ImageMean5, 25, 5);
				ScaleImage(ho_ImageMean5, &ho_ImageScaled4, 2, -120);
				Threshold(ho_ImageScaled4, &ho_Region13, 0, 10);
				OpeningRectangle1(ho_Region13, &ho_RegionOpening3, 22, 2);
				Connection(ho_RegionOpening3, &ho_ConnectedRegions19);
				SelectShape(ho_ConnectedRegions19, &ho_SelectedRegions11, "width", "and",
					700, 1300);
				FillUp(ho_SelectedRegions11, &ho_RegionFillUp);
				DilationRectangle1(ho_RegionFillUp, &(*ho_JTReg), 30, 11);
			}
			if (0 != (int(hv_ImageNum == 52)))
			{
				//2-2-52
				ScaleImage(ho_ImageMean, &ho_ImageScaled2, 6, -200);
				Threshold(ho_ImageScaled2, &ho_Region2, 0, 30);
				Connection(ho_Region2, &ho_ConnectedRegions5);
				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, (HTuple("row").Append("area")),
					"and", (HTuple(1600).Append(5e+4)), (HTuple(2048).Append(2e+5)));
				ShapeTrans(ho_SelectedRegions3, &ho_RegionTrans1, "outer_circle");
				MoveRegion(ho_RegionTrans1, &ho_RegionMoved, 50, 0);
				DilationCircle(ho_RegionMoved, &(*ho_camregion), 35.5);
			}
			if (0 != (int(hv_ImageNum == 53)))
			{
				//2-2-53
				ScaleImage(ho_ImageMean, &ho_ImageScaled2, 6, -80);
				Threshold(ho_ImageScaled2, &ho_Region2, 0, 30);
				OpeningCircle(ho_Region2, &ho_RegionOpening, 100.5);
				Connection(ho_RegionOpening, &ho_ConnectedRegions5);
				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, (HTuple("row").Append("area")),
					"and", (HTuple(0).Append(2e+4)), (HTuple(800).Append(2e+5)));
				DilationCircle(ho_SelectedRegions3, &ho_RegionDilation, 90.5);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved, -500, 0);
				Union2(ho_RegionDilation, ho_RegionMoved, &ho_RegionUnion1);
				ShapeTrans(ho_RegionUnion1, &ho_RegionTrans1, "convex");

				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, (HTuple("row").Append("area")),
					"and", (HTuple(1000).Append(4e+4)), (HTuple(2000).Append(9e+4)));
				ShapeTrans(ho_SelectedRegions3, &ho_RegionTrans, "ellipse");
				DilationCircle(ho_RegionTrans, &ho_RegionDilation, 90.5);
				MoveRegion(ho_RegionDilation, &ho_RegionMoved, 300, 0);
				Union2(ho_RegionTrans1, ho_RegionMoved, &ho_RegionUnion1);
				ShapeTrans(ho_RegionUnion1, &ho_RegionTrans2, "convex");

				DilationCircle(ho_RegionTrans2, &(*ho_camregion), 15.5);
			}
			if (0 != (HTuple(HTuple(int(hv_ImageNum == 32)).TupleOr(int(hv_ImageNum == 56))).TupleOr(int(hv_ImageNum == 57))))
			{
				//2-2-56
				MeanImage(ho_ImageReduced, &ho_ImageMean5, 25, 5);
				ScaleImage(ho_ImageMean5, &ho_ImageScaled4, 5, -250);
				Threshold(ho_ImageScaled4, &ho_Region13, 0, 10);
				OpeningRectangle1(ho_Region13, &ho_RegionOpening3, 30, 2);
				Connection(ho_RegionOpening3, &ho_ConnectedRegions19);
				SelectShape(ho_ConnectedRegions19, &ho_SelectedRegions11, "width", "and",
					700, 1300);
				FillUp(ho_SelectedRegions11, &ho_RegionFillUp);
				DilationRectangle1(ho_RegionFillUp, &(*ho_JTReg), 30, 20);
			}
		}
		else if (0 != (HTuple(int(hv_StaNum == 3)).TupleAnd(int(hv_CamNum == 1))))
		{
			//3-1-0
			MeanImage(ho_Image, &ho_ImageMean, 5, 5);
			ScaleImage(ho_ImageMean, &ho_ImageScaled2, 6, -110);
			Threshold(ho_ImageScaled2, &ho_Region34, 0, 60);
			FillUp(ho_Region34, &ho_RegionFillUp15);
			ClosingRectangle1(ho_RegionFillUp15, &ho_RegionClosing12, 45, 60);
			FillUp(ho_RegionClosing12, &ho_RegionFillUp2);
			OpeningRectangle1(ho_RegionFillUp2, &ho_RegionOpening4, 30, 500);

			Connection(ho_RegionOpening4, &ho_ConnectedRegions67);
			SelectShape(ho_ConnectedRegions67, &ho_SelectedRegions99, "area", "and", 40000,
				9999999);
			CountObj(ho_SelectedRegions99, &hv_Number);
			if (0 != hv_Number)
			{
				GenRectangle1(&ho_ROI_0, 0, 0, 2048, 1);
				Union2(ho_ROI_0, ho_SelectedRegions99, &ho_RegionUnion11);
				Union1(ho_RegionUnion11, &ho_SelectedRegions99);
			}
			if (0 != (int(hv_ImageNum == 30)))
			{
				//3-1-30
				GenRectangle1(&ho_ROI_0, 1210, 0, 2048, 2048);
				Difference(ho_SelectedRegions99, ho_ROI_0, &ho_SelectedRegions99);
			}
			ShapeTrans(ho_SelectedRegions99, &ho_RegionTrans49, "rectangle1");
			MoveRegion(ho_RegionTrans49, &ho_RegionMoved26, 0, 100);
			Difference(ho_RegionMoved26, ho_RegionTrans49, &ho_RegionDifference);
			OpeningRectangle1(ho_RegionDifference, &ho_RegionOpening1, 5, 160);
			MoveRegion(ho_RegionOpening1, &(*ho_DetectRegion), 0, 2);
		}
		else if (0 != (HTuple(int(hv_StaNum == 3)).TupleAnd(int(hv_CamNum == 2))))
		{
			//3-2-0
			MeanImage(ho_Image, &ho_ImageMean, 5, 5);
			ScaleImage(ho_ImageMean, &ho_ImageScaled, 4, -100);
			Threshold(ho_ImageScaled, &ho_Region, 0, 60);
			FillUp(ho_Region, &ho_RegionFillUp);
			ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 45, 60);
			FillUp(ho_RegionClosing, &ho_RegionFillUp1);
			OpeningRectangle1(ho_RegionFillUp1, &ho_RegionOpening, 30, 500);
			if (0 != (int(hv_ImageNum == 30)))
			{
				//3-2-30
				GenRectangle1(&ho_ROI_0, 1209, 0, 2048, 2048);
				Difference(ho_RegionOpening, ho_ROI_0, &ho_RegionOpening);
			}
			Connection(ho_RegionOpening, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 70000,
				9999999);
			CountObj(ho_SelectedRegions, &hv_Number);
			if (0 != hv_Number)
			{
				GenRectangle1(&ho_ROI_0, 0, 0, 1, 1);
				Union2(ho_ROI_0, ho_SelectedRegions, &ho_RegionUnion1);
				Union1(ho_RegionUnion1, &ho_SelectedRegions);
			}
			ShapeTrans(ho_SelectedRegions, &ho_RegionTrans, "convex");
			MoveRegion(ho_RegionTrans, &ho_RegionMoved, 0, 120);
			Difference(ho_RegionMoved, ho_RegionTrans, &ho_RegionDifference);
			OpeningRectangle1(ho_RegionDifference, &ho_RegionOpening1, 5, 160);
			MoveRegion(ho_RegionOpening1, &(*ho_DetectRegion), 0, 2);
		}
		Union2((*ho_camregion), (*ho_JTReg), &(*ho_camregion));
		CountObj((*ho_DetectRegion), &hv_Number1);
		if (0 != (int(hv_Number1 > 0)))
		{
			//通过外轮廓提取拼接处区域
			MoveRegion((*ho_DetectRegion), &(*ho_DetectRegion), 0, 0);
			SmallestRectangle2((*ho_DetectRegion), &hv_Row16, &hv_Column16, &hv_Phi3, &hv_Length1,
				&hv_Length2);

			//提取仿射最小外接矩形的四个顶点坐标
			GenRectangle2ContourXld(&(*ho_DetectRegion), hv_Row16, hv_Column16, hv_Phi3,
				hv_Length1, hv_Length2);
			TupleCos(hv_Phi3, &hv_Cos);
			TupleSin(hv_Phi3, &hv_Sin);

			GenRectangle2ContourXld(&(*ho_DetectRegion), hv_Row16, hv_Column16, hv_Phi3,
				hv_Length1, hv_Length2);
			TupleCos(hv_Phi3, &hv_Cos);
			TupleSin(hv_Phi3, &hv_Sin);
			if (HDevWindowStack::IsOpen())
				SetColor(HDevWindowStack::GetActive(), "red");
			hv_a = ((-hv_Length1)*hv_Cos) - (hv_Length2*hv_Sin);
			hv_b = ((-hv_Length1)*hv_Sin) + (hv_Length2*hv_Cos);
			GenCrossContourXld(&ho_Cross1, hv_Row16 - hv_b, hv_Column16 + hv_a, 26, hv_Phi3);
			hv_c = (hv_Length1*hv_Cos) - (hv_Length2*hv_Sin);
			hv_d = (hv_Length1*hv_Sin) + (hv_Length2*hv_Cos);
			GenCrossContourXld(&ho_Cross2, hv_Row16 - hv_d, hv_Column16 + hv_c, 26, hv_Phi3);
			hv_e = (hv_Length1*hv_Cos) + (hv_Length2*hv_Sin);
			hv_f = (hv_Length1*hv_Sin) - (hv_Length2*hv_Cos);
			GenCrossContourXld(&ho_Cross3, hv_Row16 - hv_f, hv_Column16 + hv_e, 26, hv_Phi3);
			hv_g = ((-hv_Length1)*hv_Cos) + (hv_Length2*hv_Sin);
			hv_h = ((-hv_Length1)*hv_Sin) - (hv_Length2*hv_Cos);
			GenCrossContourXld(&ho_Cross4, hv_Row16 - hv_h, hv_Column16 + hv_g, 26, hv_Phi3);
			//xld转换region
			GenRegionContourXld(ho_Cross1, &ho_Cross1re, "filled");
			GenRegionContourXld(ho_Cross2, &ho_Cross2re, "filled");
			GenRegionContourXld(ho_Cross3, &ho_Cross3re, "filled");
			GenRegionContourXld(ho_Cross4, &ho_Cross4re, "filled");
			Union2(ho_Cross1re, ho_Cross2re, &ho_RegionUnion2);
			Union2(ho_RegionUnion2, ho_Cross3re, &ho_RegionUnion3);
			Union2(ho_RegionUnion3, ho_Cross4re, &ho_RegionUnion4);
			Connection(ho_RegionUnion4, &ho_ConnectedRegions4);

			SortRegion(ho_ConnectedRegions4, &ho_SortedRegions, "character", "true", "row");
			if (0 != (int(hv_StaNum == 3)))
			{
				SelectObj(ho_SortedRegions, &(*ho_PointRegion), 1);
			}
			else
			{
				SelectObj(ho_SortedRegions, &(*ho_PointRegion), 2);
			}
		}
		return 1;

	}
	catch (HException& ExceptionHandler)
	{
		HTuple err;
		ExceptionHandler.ToHTuple(&err);
		string strErr = err.ToString();
		string strerr = std::to_string(hv_ProNum.I()) + "-" + std::to_string(hv_StaNum.I()) + "_" + std::to_string(hv_CamNum.I()) + "_" + std::to_string(hv_ImageNum.I()) + "ImageShieldProcessOQC84OuterSilverFrame error:" + strErr;
		VeErrMessage.push_back(QString::fromStdString(strerr));
	}
	reg = -1;
	return -1;
}

int JSZCAlgorithmsDLLOQC::Image_OQC84_OuterPositioning_Blue(HObject ho_Image, HObject * ho_DetectRegion,
	HObject * ho_PointRegion, HObject * ho_camregion, HObject * ho_JTReg, HTuple hv_ImName)
{

	// Local iconic variables
	HObject  ho_RegionUnion, ho_Rectangle, ho_ImageMedian23;
	HObject  ho_ImageScaled1, ho_Region1, ho_RegionFillUp13;
	HObject  ho_ConnectedRegions2, ho_SelectedRegions1, ho_ImageReduced7;
	HObject  ho_ImageMedian24, ho_ImageScaled2, ho_Region21;
	HObject  ho_RegionDifference, ho_ROI_0, ho_RegionIntersection1;
	HObject  ho_ConnectedRegions19, ho_SelectedRegions16, ho_RegionDilation1;
	HObject  ho_RegionIntersection2, ho_ImageReduced, ho_ImageMedian;
	HObject  ho_ImageScaled, ho_Region, ho_RegionFillUp1, ho_ConnectedRegions;
	HObject  ho_SelectedRegions, ho_RegionUnion1, ho_RegionDilation;
	HObject  ho_RegionIntersection, ho_RegionTrans4, ho_ImageReduced9;
	HObject  ho_ImageMedian9, ho_EdgeAmplitude8, ho_ImageScaled9;
	HObject  ho_Region5, ho_RegionFillUp19, ho_RegionOpening7;
	HObject  ho_RegionIntersection11, ho_ConnectedRegions11;
	HObject  ho_SelectedRegions24, ho_RegionTrans32, ho_RegionIntersection13;
	HObject  ho_EdgeAmplitude1, ho_ImageScaled3, ho_RegionOpening21;
	HObject  ho_ImageMean3, ho_EdgeAmplitude, ho_RegionFillUp2;
	HObject  ho_ConnectedRegions5, ho_SelectedRegions3, ho_RegionUnion5;
	HObject  ho_RegionTrans2, ho_RegionTrans9, ho_RegionMoved1;
	HObject  ho_RegionUnion6, ho_RegionDilation2, ho_Region6;
	HObject  ho_RegionFillUp3, ho_ConnectedRegions1, ho_SelectedRegions2;
	HObject  ho_RegionUnion11, ho_RegionOpening12, ho_ConnectedRegions22;
	HObject  ho_SelectedRegions19, ho_RegionUnion28, ho_RegionTrans;
	HObject  ho_RegionTrans3, ho_RegionMoved2, ho_RegionUnion10;
	HObject  ho_RegionDilation4, ho_EdgeAmplitude2, ho_ImageScaled4;
	HObject  ho_Region3, ho_RegionUnion7, ho_RegionOpening13;
	HObject  ho_ConnectedRegions21, ho_SelectedRegions18, ho_RegionUnion27;
	HObject  ho_RegionTrans5, ho_RegionTrans6, ho_RegionMoved3;
	HObject  ho_RegionMoved4, ho_RegionUnion13, ho_RegionDilation6;
	HObject  ho_RegionUnion12, ho_RegionUnion24, ho_RegionUnion29;
	HObject  ho_EdgeAmplitude4, ho_RegionOpening, ho_RegionDilation5;
	HObject  ho_RegionMoved5, ho_RegionUnion8, ho_TMP_Region;
	HObject  ho_EdgeAmplitude3, ho_ImageScaled5, ho_Region4;
	HObject  ho_RegionFillUp4, ho_RegionOpening1, ho_RegionIntersection6;
	HObject  ho_ConnectedRegions3, ho_SelectedRegions4, ho_RegionTrans1;
	HObject  ho_RegionDilation7, ho_RegionIntersection14, ho_RegionIntersection7;
	HObject  ho_RegionIntersection15, ho_ImageMedian10, ho_ImageScaled14;
	HObject  ho_Region10, ho_RegionFillUp15, ho_ConnectedRegions23;
	HObject  ho_SelectedRegions20, ho_RegionTrans15, ho_RegionDilation22;
	HObject  ho_ImageReduced1, ho_ImageMedian1, ho_ImageScaled6;
	HObject  ho_Region8, ho_RegionFillUp6, ho_ConnectedRegions6;
	HObject  ho_SelectedRegions6, ho_RegionUnion9, ho_RegionDilation23;
	HObject  ho_ConnectedRegions24, ho_RegionTrans16, ho_RegionErosion;
	HObject  ho_ImageMedian2, ho_ImageScaled7, ho_Region9, ho_RegionFillUp7;
	HObject  ho_RegionOpening2, ho_ConnectedRegions7, ho_SelectedRegions7;
	HObject  ho_RegionUnion14, ho_RegionTrans17, ho_RegionDilation24;
	HObject  ho_RegionOpening9, ho_RegionUnion30, ho_RegionUnion31;
	HObject  ho_RegionIntersection8, ho_ConnectedRegions25, ho_ImageMedian3;
	HObject  ho_ImageScaled10, ho_Region13, ho_RegionFillUp10;
	HObject  ho_ConnectedRegions14, ho_SelectedRegions8, ho_RegionUnion32;
	HObject  ho_RegionDilation25, ho_ConnectedRegions26, ho_RegionTrans18;
	HObject  ho_RegionErosion1, ho_SortedRegions1, ho_ObjectSelected;
	HObject  ho_RegionMoved8, ho_RegionDilation26, ho_RegionIntersection9;
	HObject  ho_RegionUnion33, ho_RegionUnion34, ho_ConnectedRegions27;
	HObject  ho_RegionIntersection12, ho_ImageMedian8, ho_ImageScaled13;
	HObject  ho_Region7, ho_RegionFillUp, ho_RegionOpening11;
	HObject  ho_ConnectedRegions20, ho_SelectedRegions17, ho_RegionUnion26;
	HObject  ho_Region18, ho_RegionFillUp17, ho_ConnectedRegions29;
	HObject  ho_SelectedRegions21, ho_RegionUnion20, ho_RegionTrans20;
	HObject  ho_ImageMedian6, ho_ImageScaled11, ho_Region14;
	HObject  ho_RegionFillUp12, ho_RegionOpening6, ho_ConnectedRegions16;
	HObject  ho_SelectedRegions12, ho_RegionUnion21, ho_ImageScaled15;
	HObject  ho_Region15, ho_RegionFillUp11, ho_RegionOpening5;
	HObject  ho_ConnectedRegions15, ho_SelectedRegions11, ho_RegionUnion19;
	HObject  ho_RegionDilation9, ho_ImageMedian13, ho_EdgeAmplitude5;
	HObject  ho_ImageScaled16, ho_Region17, ho_RegionFillUp16;
	HObject  ho_ConnectedRegions28, ho_RegionUnion35, ho_RegionTrans8;
	HObject  ho_RegionTrans19, ho_RegionMoved10, ho_RegionUnion36;
	HObject  ho_RegionDilation21, ho_RegionFillUp20, ho_SelectedRegions22;
	HObject  ho_RegionOpening3, ho_SelectedRegions23, ho_RegionUnion37;
	HObject  ho_RegionTrans21, ho_RegionTrans22, ho_RegionMoved11;
	HObject  ho_RegionUnion38, ho_RegionDilation11, ho_RegionMoved12;
	HObject  ho_RegionDilation16, ho_RegionClosing1, ho_RegionMoved6;
	HObject  ho_RegionErosion2, ho_RegionDilation17, ho_RegionFillUp18;
	HObject  ho_RegionOpening8, ho_RegionDilation18, ho_RegionIntersection10;
	HObject  ho_RegionTrans23, ho_RegionDilation12, ho_RegionDifference2;
	HObject  ho_RegionUnion23, ho_RegionTrans7, ho_RegionDilation8;
	HObject  ho_RegionUnion17, ho_ConnectedRegions12, ho_RegionDilation13;
	HObject  ho_RegionTrans10, ho_RegionDilation10, ho_RegionDilation27;
	HObject  ho_RegionUnion15, ho_ImageMedian5, ho_ImageScaled8;
	HObject  ho_Region11, ho_RegionFillUp8, ho_RegionOpening4;
	HObject  ho_ConnectedRegions9, ho_SelectedRegions10, ho_RegionTrans11;
	HObject  ho_RegionUnion18, ho_RegionErosion3, ho_RegionIntersection16;
	HObject  ho_RegionDilation19, ho_EdgeAmplitude6, ho_RegionTrans24;
	HObject  ho_ImageMedian4, ho_Region12, ho_RegionFillUp9;
	HObject  ho_ConnectedRegions8, ho_SelectedRegions9, ho_RegionTrans25;
	HObject  ho_EdgeAmplitude7, ho_RegionTrans12, ho_RegionTrans13;
	HObject  ho_RegionMoved, ho_RegionUnion16, ho_RegionDilation14;
	HObject  ho_RegionClosing5, ho_RegionDilation20, ho_ImageMedian12;
	HObject  ho_Region2, ho_RegionFillUp5, ho_ConnectedRegions10;
	HObject  ho_SelectedRegions5, ho_RegionDifference1, ho_RegionIntersection3;
	HObject  ho_ConnectedRegions13, ho_SelectedRegions14, ho_RegionDilation3;
	HObject  ho_RegionIntersection4, ho_ImageMedian7, ho_ImageScaled12;
	HObject  ho_Region16, ho_RegionFillUp14, ho_RegionOpening10;
	HObject  ho_ConnectedRegions17, ho_SelectedRegions13, ho_RegionMoved7;
	HObject  ho_RegionDifference3, ho_RegionIntersection5, ho_ConnectedRegions18;
	HObject  ho_SelectedRegions15, ho_RegionTrans14, ho_RegionDilation15;
	HObject  ho_Cross1, ho_Cross2, ho_Cross3, ho_Cross4, ho_Cross1re;
	HObject  ho_Cross2re, ho_Cross3re, ho_Cross4re, ho_RegionUnion2;
	HObject  ho_RegionUnion3, ho_RegionUnion4, ho_ConnectedRegions4;
	HObject  ho_SortedRegions;

	// Local control variables
	HTuple  hv_Substring, hv_Substrings, hv_StaNum;
	HTuple  hv_CamNum, hv_ImageNum, hv_Length5, hv_Selected1;
	HTuple  hv_Number21, hv_Width, hv_Height, hv_Area1, hv_Row1;
	HTuple  hv_Column1, hv_Area2, hv_Row2, hv_Column2, hv_Number;
	HTuple  hv_Number2, hv_Number3, hv_Number4, hv_Number5;
	HTuple  hv_Number6, hv_Area7, hv_Row7, hv_Column7, hv_Number10;
	HTuple  hv_Area3, hv_Row3, hv_Column3, hv_Number7, hv_Area4;
	HTuple  hv_Row4, hv_Column4, hv_Number8, hv_Number9, hv_Area5;
	HTuple  hv_Row5, hv_Column5, hv_Area6, hv_Row6, hv_Column6;
	HTuple  hv_Number1, hv_Row16, hv_Column16, hv_Phi3, hv_Length1;
	HTuple  hv_Length2, hv_Cos, hv_Sin, hv_a, hv_b, hv_c, hv_d;
	HTuple  hv_e, hv_f, hv_g, hv_h, hv_Area, hv_Row, hv_Column;
	HTuple  hv_Exception;

	try
	{
		//解析图像名
		if (HDevWindowStack::IsOpen())
			SetColored(HDevWindowStack::GetActive(), 12);
		TupleStrFirstN(hv_ImName, 2, &hv_Substring);

		//tuple_split (ImName, '_', Substrings)
		//tuple_split (Substrings, '-', Substrings1)
		//Substring := Substrings1[1]+'_'+Substrings1[2]
		//胶条区域
		GenEmptyObj(&(*ho_JTReg));
		TupleSplit(hv_ImName, "_", &hv_Substrings);

		hv_StaNum = ((const HTuple&)hv_Substrings)[0];
		TupleNumber(hv_StaNum, &hv_StaNum);
		hv_CamNum = ((const HTuple&)hv_Substrings)[1];
		TupleNumber(hv_CamNum, &hv_CamNum);
		hv_ImageNum = ((const HTuple&)hv_Substrings)[2];
		TupleNumber(hv_ImageNum, &hv_ImageNum);
		TupleLength(hv_Substrings, &hv_Length5);
		TupleSelect(hv_Substrings, hv_Length5 - 1, &hv_Selected1);
		GenEmptyObj(&(*ho_DetectRegion));
		GenEmptyObj(&ho_RegionUnion);
		GenEmptyObj(&(*ho_camregion));
		TupleNumber(hv_Selected1, &hv_Number21);
		GetImageSize(ho_Image, &hv_Width, &hv_Height);
		GenRectangle1(&ho_Rectangle, 0, 0, hv_Height, hv_Width);
		if (0 != (int(hv_Substring == HTuple("3_1"))))
		{
			MedianRect(ho_Image, &ho_ImageMedian23, 5, 30);
			ScaleImage(ho_ImageMedian23, &ho_ImageScaled1, 4, -50);
			Threshold(ho_ImageScaled1, &ho_Region1, 200, 255);
			FillUp(ho_Region1, &ho_RegionFillUp13);
			Connection(ho_RegionFillUp13, &ho_ConnectedRegions2);
			SelectShape(ho_ConnectedRegions2, &ho_SelectedRegions1, (HTuple("area").Append("column")),
				"and", (HTuple(500000).Append(900)), (HTuple(9999999).Append(2200)));
			ReduceDomain(ho_Image, ho_SelectedRegions1, &ho_ImageReduced7);
			MedianRect(ho_ImageReduced7, &ho_ImageMedian24, 3, 15);
			ScaleImage(ho_ImageMedian24, &ho_ImageScaled2, 2, -250);
			Threshold(ho_ImageScaled2, &ho_Region21, 200, 255);
			Difference(ho_SelectedRegions1, ho_Region21, &ho_RegionDifference);
			GenRectangle1(&ho_ROI_0, -388.677, 658.761, 500, 1400);
			Intersection(ho_RegionDifference, ho_ROI_0, &ho_RegionIntersection1);
			Connection(ho_RegionIntersection1, &ho_ConnectedRegions19);
			SelectShape(ho_ConnectedRegions19, &ho_SelectedRegions16, "area", "and", 10000,
				99999);
			DilationRectangle1(ho_SelectedRegions16, &ho_RegionDilation1, 1, 50000);
			Intersection(ho_Image, ho_RegionDilation1, &ho_RegionIntersection2);
			ShapeTrans(ho_RegionIntersection2, &ho_RegionUnion, "rectangle1");

		}
		else if (0 != (int(hv_Substring == HTuple("3_2"))))
		{
			MedianRect(ho_Image, &ho_ImageMedian23, 5, 30);
			ScaleImage(ho_ImageMedian23, &ho_ImageScaled1, 4, -100);
			Threshold(ho_ImageScaled1, &ho_Region1, 200, 255);
			FillUp(ho_Region1, &ho_RegionFillUp13);
			Connection(ho_RegionFillUp13, &ho_ConnectedRegions2);
			SelectShape(ho_ConnectedRegions2, &ho_SelectedRegions1, (HTuple("area").Append("column")),
				"and", (HTuple(500000).Append(900)), (HTuple(9999999).Append(2200)));
			ReduceDomain(ho_Image, ho_SelectedRegions1, &ho_ImageReduced7);
			MedianRect(ho_ImageReduced7, &ho_ImageMedian24, 3, 15);
			ScaleImage(ho_ImageMedian24, &ho_ImageScaled2, 2, -250);
			Threshold(ho_ImageScaled2, &ho_Region21, 200, 255);
			Difference(ho_SelectedRegions1, ho_Region21, &ho_RegionDifference);
			GenRectangle1(&ho_ROI_0, -388.677, 658.761, 500, 1300);
			Intersection(ho_RegionDifference, ho_ROI_0, &ho_RegionIntersection1);
			Connection(ho_RegionIntersection1, &ho_ConnectedRegions19);
			SelectShape(ho_ConnectedRegions19, &ho_SelectedRegions16, "area", "and", 10000,
				99999);
			DilationRectangle1(ho_SelectedRegions16, &ho_RegionDilation1, 1, 50000);
			Intersection(ho_Image, ho_RegionDilation1, &ho_RegionIntersection2);
			ShapeTrans(ho_RegionIntersection2, &ho_RegionUnion, "rectangle1");

		}
		else if (0 != (int(hv_Substring == HTuple("2_1"))))
		{
			GenRectangle1(&ho_ROI_0, 137.727, -96.2863, 581.42, 2046.68);
			ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
			MedianRect(ho_ImageReduced, &ho_ImageMedian, 15, 100);
			ScaleImage(ho_ImageMedian, &ho_ImageScaled, 12, -350);
			Threshold(ho_ImageScaled, &ho_Region, 180, 255);
			FillUp(ho_Region, &ho_RegionFillUp1);
			Connection(ho_RegionFillUp1, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, (HTuple("area").Append("column")),
				"and", (HTuple(1e+5).Append(0)), (HTuple(999999999).Append(1650)));
			Union1(ho_SelectedRegions, &ho_RegionUnion1);
			DilationRectangle1(ho_RegionUnion1, &ho_RegionDilation, 1, 10000);
			Intersection(ho_Image, ho_RegionDilation, &ho_RegionIntersection);
			ShapeTrans(ho_RegionIntersection, &ho_RegionTrans4, "convex");
			ShapeTrans(ho_RegionTrans4, &ho_RegionUnion, "rectangle1");

			ReduceDomain(ho_Image, ho_RegionUnion, &ho_ImageReduced9);
			if (0 != (int(hv_Number21 == 2)))
			{
				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 25, 3);
				SobelAmp(ho_ImageMedian9, &ho_EdgeAmplitude8, "sum_abs", 3);
				ScaleImage(ho_EdgeAmplitude8, &ho_ImageScaled9, 40, -50);
				Threshold(ho_ImageScaled9, &ho_Region5, 200, 255);
				FillUp(ho_Region5, &ho_RegionFillUp19);
				OpeningCircle(ho_RegionFillUp19, &ho_RegionOpening7, 55);
				GenRectangle1(&ho_ROI_0, 1574.62, 741.236, 1972.94, 1414.76);
				Intersection(ho_RegionOpening7, ho_ROI_0, &ho_RegionIntersection11);
				Connection(ho_RegionIntersection11, &ho_ConnectedRegions11);
				SelectShape(ho_ConnectedRegions11, &ho_SelectedRegions24, "area", "and",
					1e+4, 999999);
				ShapeTrans(ho_SelectedRegions24, &ho_RegionTrans32, "rectangle1");
				DilationRectangle1(ho_RegionTrans32, &ho_RegionDilation1, 500, 1);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &ho_RegionIntersection13
					);
				DilationRectangle1(ho_RegionIntersection13, &(*ho_JTReg), 20, 1);
			}

			if (0 != (int(hv_Number21 == 3)))
			{
				//mean_image (ImageReduced9, ImageMedian9, 50, 8)
				//sobel_amp (ImageMedian9, EdgeAmplitude1, 'sum_abs', 11)
				//*             scale_image (EdgeAmplitude1, ImageScaled3, 50, -100)
				//threshold (ImageScaled3, Region5, 0, 50)
				//closing_rectangle1 (Region5, RegionClosing, 100, 2)
				//opening_rectangle1 (RegionClosing, RegionOpening21, 400, 5)
				//connection (RegionOpening21, ConnectedRegions11)
				//sort_region (ConnectedRegions11, SortedRegions4, 'first_point', 'true', 'row')
				//select_obj (SortedRegions4, ObjectSelected1, 1)
				//shape_trans (ObjectSelected1, RegionTrans32, 'rectangle1')
				//dilation_rectangle1 (RegionTrans32, RegionDilation1, 500, 50)
				//intersection (ImageReduced9, RegionDilation1, JTReg)

				MeanImage(ho_ImageReduced9, &ho_ImageMean3, 8, 8);
				//sobel_amp (ImageMean3, EdgeAmplitude, 'sum_abs', 7)
				ScaleImage(ho_ImageMean3, &ho_ImageScaled, 6, -220);
				Threshold(ho_ImageScaled, &ho_Region, 0, 70);
				FillUp(ho_Region, &ho_RegionFillUp2);
				Connection(ho_RegionFillUp2, &ho_ConnectedRegions5);
				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, ((HTuple("area").Append("column")).Append("row")),
					"and", ((HTuple(800).Append(700)).Append(1200)), ((HTuple(9999999).Append(1500)).Append(2200)));
				Union1(ho_SelectedRegions3, &ho_RegionUnion5);
				ShapeTrans(ho_RegionUnion5, &ho_RegionTrans2, "convex");
				ShapeTrans(ho_RegionTrans2, &ho_RegionTrans9, "rectangle1");
				MoveRegion(ho_RegionTrans9, &ho_RegionMoved1, 200, 0);
				Union2(ho_RegionTrans2, ho_RegionMoved1, &ho_RegionUnion6);
				DilationCircle(ho_RegionUnion6, &ho_RegionDilation2, 8);
				Intersection(ho_Image, ho_RegionDilation2, &(*ho_camregion));
			}

			if (0 != (int(hv_Number21 == 4)))
			{
				MeanImage(ho_ImageReduced9, &ho_ImageMean3, 8, 8);
				SobelAmp(ho_ImageMean3, &ho_EdgeAmplitude, "sum_abs", 11);
				ScaleImage(ho_EdgeAmplitude, &ho_ImageScaled, 200, -1500);
				Threshold(ho_ImageScaled, &ho_Region6, 200, 255);
				FillUp(ho_Region6, &ho_RegionFillUp3);
				Connection(ho_RegionFillUp3, &ho_ConnectedRegions1);
				SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions2, ((HTuple("area").Append("row")).Append("column")),
					"and", ((HTuple(10000).Append(0)).Append(750)), ((HTuple(999999).Append(500)).Append(1500)));
				Union1(ho_SelectedRegions2, &ho_RegionUnion11);
				OpeningCircle(ho_RegionUnion11, &ho_RegionOpening12, 5);
				Connection(ho_RegionOpening12, &ho_ConnectedRegions22);
				SelectShape(ho_ConnectedRegions22, &ho_SelectedRegions19, ((HTuple("area").Append("row")).Append("column")),
					"and", ((HTuple(5000).Append(0)).Append(750)), ((HTuple(999999).Append(500)).Append(1500)));
				Union1(ho_SelectedRegions19, &ho_RegionUnion28);
				ShapeTrans(ho_RegionUnion28, &ho_RegionTrans, "convex");
				ShapeTrans(ho_RegionTrans, &ho_RegionTrans3, "rectangle1");
				MoveRegion(ho_RegionTrans3, &ho_RegionMoved2, -188, 0);
				Union2(ho_RegionTrans, ho_RegionMoved2, &ho_RegionUnion10);
				DilationCircle(ho_RegionUnion10, &ho_RegionDilation4, 8);

				MeanImage(ho_ImageReduced9, &ho_ImageMean3, 20, 20);
				SobelAmp(ho_ImageMean3, &ho_EdgeAmplitude2, "sum_abs", 11);
				ScaleImage(ho_EdgeAmplitude2, &ho_ImageScaled4, 50, 0);
				Threshold(ho_ImageScaled4, &ho_Region3, 200, 255);
				FillUp(ho_Region3, &ho_RegionFillUp3);
				Connection(ho_RegionFillUp3, &ho_ConnectedRegions1);
				SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions2, ((HTuple("area").Append("row")).Append("column")),
					"and", ((HTuple(8000).Append(750)).Append(750)), ((HTuple(999999).Append(2200)).Append(1500)));
				Union1(ho_SelectedRegions2, &ho_RegionUnion7);
				OpeningCircle(ho_RegionUnion7, &ho_RegionOpening13, 5);
				Connection(ho_RegionOpening13, &ho_ConnectedRegions21);
				SelectShape(ho_ConnectedRegions21, &ho_SelectedRegions18, ((HTuple("area").Append("row")).Append("column")),
					"and", ((HTuple(8000).Append(750)).Append(750)), ((HTuple(999999).Append(2200)).Append(1500)));
				Union1(ho_SelectedRegions18, &ho_RegionUnion27);
				ShapeTrans(ho_RegionUnion27, &ho_RegionTrans5, "convex");
				ShapeTrans(ho_RegionTrans5, &ho_RegionTrans6, "rectangle1");
				MoveRegion(ho_RegionTrans6, &ho_RegionMoved3, 250, 0);
				MoveRegion(ho_RegionMoved3, &ho_RegionMoved4, 150, 0);
				Union2(ho_RegionTrans5, ho_RegionMoved3, &ho_RegionUnion13);
				Union2(ho_RegionUnion13, ho_RegionMoved4, &ho_RegionUnion13);
				DilationCircle(ho_RegionUnion13, &ho_RegionDilation6, 8);

				Union2(ho_RegionDilation4, ho_RegionDilation6, &ho_RegionUnion12);
				Intersection(ho_Image, ho_RegionUnion12, &(*ho_camregion));
			}

			if (0 != (int(hv_Number21 == 5)))
			{
				MeanImage(ho_ImageReduced9, &ho_ImageMean3, 8, 8);
				SobelAmp(ho_ImageMean3, &ho_EdgeAmplitude, "sum_abs", 11);
				ScaleImage(ho_EdgeAmplitude, &ho_ImageScaled, 200, -1500);
				Threshold(ho_ImageScaled, &ho_Region6, 200, 255);
				FillUp(ho_Region6, &ho_RegionFillUp3);
				Connection(ho_RegionFillUp3, &ho_ConnectedRegions1);
				SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions2, ((HTuple("area").Append("row")).Append("column")),
					"and", ((HTuple(10000).Append(0)).Append(750)), ((HTuple(999999).Append(600)).Append(1500)));
				Union1(ho_SelectedRegions2, &ho_RegionUnion11);
				OpeningCircle(ho_RegionUnion11, &ho_RegionOpening12, 5);
				Connection(ho_RegionOpening12, &ho_ConnectedRegions22);
				SelectShape(ho_ConnectedRegions22, &ho_SelectedRegions19, ((HTuple("area").Append("row")).Append("column")),
					"and", ((HTuple(5000).Append(0)).Append(750)), ((HTuple(999999).Append(500)).Append(1500)));
				Union1(ho_SelectedRegions19, &ho_RegionUnion24);
				ShapeTrans(ho_RegionUnion24, &ho_RegionTrans, "convex");
				ShapeTrans(ho_RegionTrans, &ho_RegionTrans3, "rectangle1");
				MoveRegion(ho_RegionTrans3, &ho_RegionMoved2, -188, 0);
				Union2(ho_RegionTrans, ho_RegionMoved2, &ho_RegionUnion10);
				DilationCircle(ho_RegionUnion10, &ho_RegionDilation4, 8);

				MeanImage(ho_ImageReduced9, &ho_ImageMean3, 20, 20);
				SobelAmp(ho_ImageMean3, &ho_EdgeAmplitude2, "sum_abs", 11);
				ScaleImage(ho_EdgeAmplitude2, &ho_ImageScaled4, 50, -100);
				Threshold(ho_ImageScaled4, &ho_Region3, 200, 255);
				FillUp(ho_Region3, &ho_RegionFillUp3);
				Connection(ho_RegionFillUp3, &ho_ConnectedRegions1);
				SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions2, ((HTuple("area").Append("row")).Append("column")),
					"and", ((HTuple(8000).Append(750)).Append(750)), ((HTuple(999999).Append(2200)).Append(1500)));
				Union1(ho_SelectedRegions2, &ho_RegionUnion7);
				OpeningCircle(ho_RegionUnion7, &ho_RegionOpening13, 5);
				Connection(ho_RegionOpening13, &ho_ConnectedRegions21);
				SelectShape(ho_ConnectedRegions21, &ho_SelectedRegions18, ((HTuple("area").Append("row")).Append("column")),
					"and", ((HTuple(8000).Append(750)).Append(750)), ((HTuple(999999).Append(2200)).Append(1500)));
				Union1(ho_SelectedRegions18, &ho_RegionUnion29);
				ShapeTrans(ho_RegionUnion29, &ho_RegionTrans5, "convex");
				ShapeTrans(ho_RegionTrans5, &ho_RegionTrans6, "rectangle1");
				MoveRegion(ho_RegionTrans6, &ho_RegionMoved3, 250, 0);
				MoveRegion(ho_RegionMoved3, &ho_RegionMoved4, 150, 0);
				Union2(ho_RegionTrans5, ho_RegionMoved3, &ho_RegionUnion13);
				Union2(ho_RegionUnion13, ho_RegionMoved4, &ho_RegionUnion13);
				DilationCircle(ho_RegionUnion13, &ho_RegionDilation6, 8);

				Union2(ho_RegionDilation4, ho_RegionDilation6, &ho_RegionUnion12);
				Intersection(ho_Image, ho_RegionUnion12, &(*ho_camregion));
			}

			if (0 != (int(hv_Number21 == 6)))
			{
				MeanImage(ho_ImageReduced9, &ho_ImageMean3, 8, 8);
				SobelAmp(ho_ImageMean3, &ho_EdgeAmplitude, "sum_abs", 11);
				ScaleImage(ho_EdgeAmplitude, &ho_ImageScaled, 200, -1500);
				Threshold(ho_ImageScaled, &ho_Region6, 200, 255);
				FillUp(ho_Region6, &ho_RegionFillUp3);
				Connection(ho_RegionFillUp3, &ho_ConnectedRegions1);
				SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions2, ((HTuple("area").Append("row")).Append("column")),
					"and", ((HTuple(10000).Append(0)).Append(750)), ((HTuple(999999).Append(600)).Append(1500)));
				Union1(ho_SelectedRegions2, &ho_RegionUnion11);
				OpeningCircle(ho_RegionUnion11, &ho_RegionOpening12, 5);
				Connection(ho_RegionOpening12, &ho_ConnectedRegions22);
				SelectShape(ho_ConnectedRegions22, &ho_SelectedRegions19, ((HTuple("area").Append("row")).Append("column")),
					"and", ((HTuple(5000).Append(0)).Append(750)), ((HTuple(999999).Append(500)).Append(1500)));
				Union1(ho_SelectedRegions19, &ho_RegionUnion24);
				ShapeTrans(ho_RegionUnion24, &ho_RegionTrans, "convex");
				ShapeTrans(ho_RegionTrans, &ho_RegionTrans3, "rectangle1");
				MoveRegion(ho_RegionTrans3, &ho_RegionMoved2, -188, 0);
				Union2(ho_RegionTrans, ho_RegionMoved2, &ho_RegionUnion10);
				DilationCircle(ho_RegionUnion10, &ho_RegionDilation4, 5);
				Intersection(ho_Image, ho_RegionDilation4, &(*ho_camregion));

			}

			if (0 != (int(hv_Number21 == 7)))
			{
				MeanImage(ho_ImageReduced9, &ho_ImageMean3, 15, 50);
				SobelAmp(ho_ImageMean3, &ho_EdgeAmplitude4, "sum_abs", 11);
				ScaleImage(ho_EdgeAmplitude4, &ho_ImageScaled, 100, -250);
				Threshold(ho_ImageScaled, &ho_Region6, 200, 255);
				FillUp(ho_Region6, &ho_RegionFillUp3);
				OpeningCircle(ho_RegionFillUp3, &ho_RegionOpening, 2);
				Connection(ho_RegionOpening, &ho_ConnectedRegions1);
				SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions2, ((HTuple("area").Append("row")).Append("column")),
					"and", ((HTuple(5000).Append(500)).Append(750)), ((HTuple(999999).Append(2200)).Append(1500)));
				Union1(ho_SelectedRegions2, &ho_RegionUnion11);
				ShapeTrans(ho_RegionUnion11, &ho_RegionTrans, "convex");
				ShapeTrans(ho_RegionTrans, &ho_RegionTrans3, "rectangle1");
				MoveRegion(ho_RegionTrans3, &ho_RegionMoved2, 220, 0);
				Union2(ho_RegionTrans, ho_RegionMoved2, &ho_RegionUnion10);
				DilationCircle(ho_RegionUnion10, &ho_RegionDilation5, 8);
				Intersection(ho_Image, ho_RegionDilation5, &(*ho_camregion));
				AreaCenter((*ho_camregion), &hv_Area1, &hv_Row1, &hv_Column1);
				if (0 != (int(hv_Area1 > 610000)))
				{
					MeanImage(ho_ImageReduced9, &ho_ImageMean3, 15, 50);
					ScaleImage(ho_ImageMean3, &ho_ImageScaled, 6, -280);
					Threshold(ho_ImageScaled, &ho_Region6, 0, 70);
					FillUp(ho_Region6, &ho_RegionFillUp3);
					OpeningCircle(ho_RegionFillUp3, &ho_RegionOpening, 2);
					Connection(ho_RegionOpening, &ho_ConnectedRegions1);
					SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions2, ((HTuple("area").Append("row")).Append("column")),
						"and", ((HTuple(8000).Append(500)).Append(750)), ((HTuple(999999).Append(2200)).Append(1500)));
					Union1(ho_SelectedRegions2, &ho_RegionUnion11);
					ShapeTrans(ho_RegionUnion11, &ho_RegionTrans, "convex");
					ShapeTrans(ho_RegionTrans, &ho_RegionTrans3, "rectangle1");
					MoveRegion(ho_RegionTrans3, &ho_RegionMoved2, 220, 0);
					Union2(ho_RegionTrans, ho_RegionMoved2, &ho_RegionUnion10);
					DilationCircle(ho_RegionUnion10, &ho_RegionDilation5, 8);
					Intersection(ho_Image, ho_RegionDilation5, &(*ho_camregion));
					AreaCenter((*ho_camregion), &hv_Area1, &hv_Row1, &hv_Column1);
				}
			}

			if (0 != (int(hv_Number21 == 8)))
			{
				MeanImage(ho_ImageReduced9, &ho_ImageMean3, 8, 10);
				SobelAmp(ho_ImageMean3, &ho_EdgeAmplitude1, "sum_abs", 11);
				ScaleImage(ho_EdgeAmplitude1, &ho_ImageScaled, 100, -800);
				Threshold(ho_ImageScaled, &ho_Region6, 200, 255);
				FillUp(ho_Region6, &ho_RegionFillUp3);
				OpeningCircle(ho_RegionFillUp3, &ho_RegionOpening, 3);
				Connection(ho_RegionOpening, &ho_ConnectedRegions1);
				SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions2, ((HTuple("area").Append("row")).Append("column")),
					"and", ((HTuple(1000).Append(0)).Append(750)), ((HTuple(999999).Append(1000)).Append(1500)));
				Union1(ho_SelectedRegions2, &ho_RegionUnion11);
				ShapeTrans(ho_RegionUnion11, &ho_RegionTrans, "convex");
				ShapeTrans(ho_RegionTrans, &ho_RegionTrans3, "rectangle1");
				MoveRegion(ho_RegionTrans3, &ho_RegionMoved2, -220, 0);
				Union2(ho_RegionTrans, ho_RegionMoved2, &ho_RegionUnion10);
				MoveRegion(ho_RegionMoved2, &ho_RegionMoved5, -100, 0);
				Union2(ho_RegionUnion10, ho_RegionMoved5, &ho_RegionUnion8);
				DilationCircle(ho_RegionUnion8, &ho_RegionDilation5, 5);
				Intersection(ho_Image, ho_RegionDilation5, &(*ho_camregion));
				AreaCenter((*ho_camregion), &hv_Area2, &hv_Row2, &hv_Column2);
				if (0 != (HTuple(int(hv_Area2 < 240000)).TupleOr(int(hv_Area2 > 260000))))
				{
					GenCircle(&ho_ROI_0, 557.528, 1076.9, 209.177);
					GenRectangle1(&ho_TMP_Region, -144.969, 864.463, 574.426, 1289.34);
					Union2(ho_ROI_0, ho_TMP_Region, &ho_ROI_0);
					Intersection(ho_Image, ho_ROI_0, &(*ho_camregion));
				}
			}

			if (0 != (int(hv_Number21 == 11)))
			{
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 80, 10);
				SobelAmp(ho_ImageMedian9, &ho_EdgeAmplitude3, "sum_abs", 5);
				ScaleImage(ho_EdgeAmplitude3, &ho_ImageScaled5, 100, -500);
				Threshold(ho_ImageScaled5, &ho_Region4, 220, 255);
				FillUp(ho_Region4, &ho_RegionFillUp4);
				OpeningCircle(ho_RegionFillUp4, &ho_RegionOpening1, 3.5);
				GenRectangle1(&ho_ROI_0, 364.223, 836.809, 814.783, 1297.61);
				Intersection(ho_RegionOpening1, ho_ROI_0, &ho_RegionIntersection6);
				Connection(ho_RegionIntersection6, &ho_ConnectedRegions3);
				SelectShape(ho_ConnectedRegions3, &ho_SelectedRegions4, (HTuple("area").Append("row")),
					"and", (HTuple(60000).Append(300)), (HTuple(2e+5).Append(800)));
				CountObj(ho_SelectedRegions4, &hv_Number);
				if (0 != (int(hv_Number == 1)))
				{
					ShapeTrans(ho_SelectedRegions4, &ho_RegionTrans1, "rectangle2");
					DilationRectangle1(ho_RegionTrans1, &ho_RegionDilation7, 5000, 10);
					Intersection(ho_ImageReduced9, ho_RegionDilation7, &(*ho_JTReg));
				}
			}

			if (0 != (int(hv_Number21 == 12)))
			{
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 80, 10);
				SobelAmp(ho_ImageMedian9, &ho_EdgeAmplitude3, "sum_abs", 5);
				ScaleImage(ho_EdgeAmplitude3, &ho_ImageScaled5, 150, -520);
				Threshold(ho_ImageScaled5, &ho_Region4, 220, 255);
				FillUp(ho_Region4, &ho_RegionFillUp4);
				OpeningCircle(ho_RegionFillUp4, &ho_RegionOpening1, 3.5);
				GenRectangle1(&ho_ROI_0, 1840.99, 956.94, 2050, 1284.62);
				Intersection(ho_RegionOpening1, ho_ROI_0, &ho_RegionIntersection6);
				Connection(ho_RegionIntersection6, &ho_ConnectedRegions3);
				SelectShape(ho_ConnectedRegions3, &ho_SelectedRegions4, (HTuple("area").Append("row")),
					"and", (HTuple(10000).Append(1800)), (HTuple(2e+5).Append(2050)));
				CountObj(ho_SelectedRegions4, &hv_Number);
				if (0 != (int(hv_Number == 1)))
				{
					ShapeTrans(ho_SelectedRegions4, &ho_RegionTrans1, "rectangle2");
					DilationRectangle1(ho_RegionTrans1, &ho_RegionDilation7, 5000, 10);
					Intersection(ho_ImageReduced9, ho_RegionDilation7, &ho_RegionIntersection14
						);
					DilationRectangle1(ho_RegionIntersection14, &(*ho_JTReg), 20, 1);
				}

			}

			if (0 != (int(hv_Number21 == 13)))
			{
				//median_rect (ImageReduced9, ImageMedian9, 80, 10)
				//sobel_amp (ImageMedian9, EdgeAmplitude3, 'sum_abs', 3)
				//scale_image (EdgeAmplitude3, ImageScaled5, 120, -200)
				//threshold (ImageScaled5, Region4, 200, 255)
				//fill_up (Region4, RegionFillUp4)
				//opening_circle (RegionFillUp4, RegionOpening1, 3.5)

				//gen_rectangle1 (ROI_0, -84.5046, 885.569, 137.591, 1346.66)
				//intersection (RegionOpening1, ROI_0, RegionIntersection7)
				//*             connection (RegionIntersection7, ConnectedRegions3)
				//select_shape (ConnectedRegions3, SelectedRegions4, ['area','row'], 'and', [10000,0], [2e+5,100])
				//count_obj (SelectedRegions4, Number)
				//if (Number==1)
				//shape_trans (SelectedRegions4, RegionTrans1, 'rectangle1')
				//dilation_rectangle1 (RegionTrans1, RegionDilation7, 5000, 5)
				//intersection (ImageReduced9, RegionDilation7, JTReg)
				//endif

				GenRectangle1(&ho_ROI_0, -81.6862, 517.643, 70, 1671.57);
				Intersection(ho_ImageReduced9, ho_ROI_0, &ho_RegionIntersection15);
				DilationRectangle1(ho_RegionIntersection15, &(*ho_JTReg), 20, 1);

				MedianRect(ho_Image, &ho_ImageMedian10, 15, 15);
				ScaleImage(ho_ImageMedian10, &ho_ImageScaled14, 2, -100);
				Threshold(ho_ImageScaled14, &ho_Region10, 0, 50);
				FillUp(ho_Region10, &ho_RegionFillUp15);
				Connection(ho_RegionFillUp15, &ho_ConnectedRegions23);
				SelectShape(ho_ConnectedRegions23, &ho_SelectedRegions20, (HTuple("area").Append("column")),
					"and", (HTuple(20000).Append(800)), (HTuple(50000).Append(1300)));
				CountObj(ho_SelectedRegions20, &hv_Number2);
				if (0 != (int(hv_Number2 == 4)))
				{
					ShapeTrans(ho_SelectedRegions20, &ho_RegionTrans15, "outer_circle");
					DilationRectangle1(ho_RegionTrans15, &ho_RegionDilation22, 1, 15);
					Union1(ho_RegionDilation22, &(*ho_camregion));
				}

			}

			if (0 != (int(hv_Number21 == 14)))
			{
				GenRectangle1(&ho_ROI_0, -25.4435, 875.378, 355.849, 1314.59);
				GenRectangle1(&ho_TMP_Region, 1813.45, 889.857, 2136.82, 1290.46);
				Union2(ho_ROI_0, ho_TMP_Region, &ho_ROI_0);
				ReduceDomain(ho_ImageReduced9, ho_ROI_0, &ho_ImageReduced1);
				MedianRect(ho_ImageReduced1, &ho_ImageMedian1, 8, 8);
				ScaleImage(ho_ImageMedian1, &ho_ImageScaled6, 3, -120);
				Threshold(ho_ImageScaled6, &ho_Region8, 0, 50);
				FillUp(ho_Region8, &ho_RegionFillUp6);
				Connection(ho_RegionFillUp6, &ho_ConnectedRegions6);
				SelectShape(ho_ConnectedRegions6, &ho_SelectedRegions6, (HTuple("area").Append("column")),
					"and", (HTuple(1000).Append(800)), (HTuple(99999).Append(1400)));
				Union1(ho_SelectedRegions6, &ho_RegionUnion9);
				DilationCircle(ho_RegionUnion9, &ho_RegionDilation23, 100);
				Connection(ho_RegionDilation23, &ho_ConnectedRegions24);
				CountObj(ho_ConnectedRegions24, &hv_Number3);
				if (0 != (int(hv_Number3 == 2)))
				{
					ShapeTrans(ho_ConnectedRegions24, &ho_RegionTrans16, "outer_circle");
					ErosionCircle(ho_RegionTrans16, &ho_RegionErosion, 88);
					MedianRect(ho_ImageReduced9, &ho_ImageMedian2, 8, 8);
					ScaleImage(ho_ImageMedian2, &ho_ImageScaled7, 6, -300);
					Threshold(ho_ImageScaled7, &ho_Region9, 0, 100);
					FillUp(ho_Region9, &ho_RegionFillUp7);
					OpeningCircle(ho_RegionFillUp7, &ho_RegionOpening2, 3.5);
					Connection(ho_RegionOpening2, &ho_ConnectedRegions7);
					SelectShape(ho_ConnectedRegions7, &ho_SelectedRegions7, ((HTuple("area").Append("column")).Append("row")),
						"and", ((HTuple(10000).Append(700)).Append(400)), ((HTuple(9e+5).Append(1400)).Append(1850)));
					Union1(ho_SelectedRegions7, &ho_RegionUnion14);
					ShapeTrans(ho_RegionUnion14, &ho_RegionTrans17, "rectangle1");
					DilationRectangle1(ho_RegionTrans17, &ho_RegionDilation24, 99, 118);
					OpeningCircle(ho_RegionDilation24, &ho_RegionOpening9, 220);
					Union2(ho_RegionErosion, ho_RegionOpening9, &ho_RegionUnion30);
					Union1(ho_RegionUnion30, &ho_RegionUnion31);
					Intersection(ho_Image, ho_RegionUnion31, &ho_RegionIntersection8);
					Connection(ho_RegionIntersection8, &ho_ConnectedRegions25);
					CountObj(ho_ConnectedRegions25, &hv_Number4);
					if (0 != (int(hv_Number4 == 3)))
					{
						MoveRegion(ho_ConnectedRegions25, &(*ho_camregion), 0, 0);
					}

				}
			}

			if (0 != (int(hv_Number21 == 15)))
			{
				MedianRect(ho_ImageReduced9, &ho_ImageMedian3, 10, 10);
				ScaleImage(ho_ImageMedian3, &ho_ImageScaled10, 6, -350);
				Threshold(ho_ImageScaled10, &ho_Region13, 0, 80);
				FillUp(ho_Region13, &ho_RegionFillUp10);
				Connection(ho_RegionFillUp10, &ho_ConnectedRegions14);
				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions8, (HTuple("area").Append("column")),
					"and", (HTuple(1000).Append(800)), (HTuple(8e+5).Append(1300)));
				Union1(ho_SelectedRegions8, &ho_RegionUnion32);
				DilationCircle(ho_RegionUnion32, &ho_RegionDilation25, 30);
				Connection(ho_RegionDilation25, &ho_ConnectedRegions26);
				CountObj(ho_ConnectedRegions26, &hv_Number5);
				if (0 != (int(hv_Number5 == 7)))
				{
					ShapeTrans(ho_ConnectedRegions26, &ho_RegionTrans18, "outer_circle");
					ErosionCircle(ho_RegionTrans18, &ho_RegionErosion1, 20);
					SortRegion(ho_RegionErosion1, &ho_SortedRegions1, "first_point", "true",
						"row");
					SelectObj(ho_SortedRegions1, &ho_ObjectSelected, 1);
					MoveRegion(ho_ObjectSelected, &ho_RegionMoved8, -80, 0);
					DilationCircle(ho_RegionMoved8, &ho_RegionDilation26, 58);
					GenRectangle1(&ho_ROI_0, 293.457, 842.371, 2197.63, 1374.72);
					Intersection(ho_RegionErosion1, ho_ROI_0, &ho_RegionIntersection9);
					Union2(ho_RegionDilation26, ho_RegionIntersection9, &ho_RegionUnion33);
					Union1(ho_RegionUnion33, &ho_RegionUnion34);
					Connection(ho_RegionUnion34, &ho_ConnectedRegions27);
					CountObj(ho_ConnectedRegions27, &hv_Number6);
					if (0 != (int(hv_Number6 == 7)))
					{
						Intersection(ho_Image, ho_ConnectedRegions27, &(*ho_camregion));
					}

				}
			}

			if (0 != (int(hv_Number21 == 16)))
			{
				GenCircle(&ho_ROI_0, -107.492, 1055.45, 157.583);
				Intersection(ho_Image, ho_ROI_0, &(*ho_camregion));
			}

			if (0 != (int(hv_Number21 == 17)))
			{
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 80, 10);
				SobelAmp(ho_ImageMedian9, &ho_EdgeAmplitude3, "sum_abs", 5);
				ScaleImage(ho_EdgeAmplitude3, &ho_ImageScaled5, 100, -500);
				Threshold(ho_ImageScaled5, &ho_Region4, 220, 255);
				FillUp(ho_Region4, &ho_RegionFillUp4);
				OpeningCircle(ho_RegionFillUp4, &ho_RegionOpening1, 3.5);
				GenRectangle1(&ho_ROI_0, 1260.73, 868.193, 1612.3, 1349.47);
				Intersection(ho_RegionOpening1, ho_ROI_0, &ho_RegionIntersection6);
				Connection(ho_RegionIntersection6, &ho_ConnectedRegions3);
				SelectShape(ho_ConnectedRegions3, &ho_SelectedRegions4, (HTuple("area").Append("row")),
					"and", (HTuple(50000).Append(1200)), (HTuple(2e+5).Append(1700)));
				CountObj(ho_SelectedRegions4, &hv_Number);
				if (0 != (int(hv_Number == 1)))
				{
					ShapeTrans(ho_SelectedRegions4, &ho_RegionTrans1, "rectangle2");
					DilationRectangle1(ho_RegionTrans1, &ho_RegionDilation7, 5000, 10);
					Intersection(ho_ImageReduced9, ho_RegionDilation7, &ho_RegionIntersection12
						);
					DilationRectangle1(ho_RegionIntersection12, &(*ho_JTReg), 40, 1);
				}
			}

			if (0 != (int(hv_Number21 == 18)))
			{
				//median_rect (ImageReduced9, ImageMedian9, 80, 3)
				//sobel_amp (ImageMedian9, EdgeAmplitude3, 'sum_abs', 3)
				//scale_image (EdgeAmplitude3, ImageScaled5, 120, -200)
				//threshold (ImageScaled5, Region4, 200, 255)
				//fill_up (Region4, RegionFillUp4)
				//opening_circle (RegionFillUp4, RegionOpening1, 3.5)
				//connection (RegionOpening1, ConnectedRegions3)
				//select_shape (ConnectedRegions3, SelectedRegions4, ['area','row'], 'and', [80000,1100], [2e+5,1800])
				//count_obj (SelectedRegions4, Number)
				//if (Number==1)
				//shape_trans (SelectedRegions4, RegionTrans1, 'rectangle1')
				//dilation_rectangle1 (RegionTrans1, RegionDilation7, 500, 20)
				//intersection (ImageReduced9, RegionDilation7, JTReg)
				//endif
			}

			if (0 != (int(hv_Number21 == 21)))
			{
				MedianRect(ho_ImageReduced9, &ho_ImageMedian8, 15, 15);
				ScaleImage(ho_ImageMedian8, &ho_ImageScaled13, 5, -120);
				Threshold(ho_ImageScaled13, &ho_Region7, 0, 100);
				FillUp(ho_Region7, &ho_RegionFillUp);
				OpeningCircle(ho_RegionFillUp, &ho_RegionOpening11, 3.5);
				Connection(ho_RegionOpening11, &ho_ConnectedRegions20);
				SelectShape(ho_ConnectedRegions20, &ho_SelectedRegions17, "area", "and",
					99999, 9999999);
				Union1(ho_SelectedRegions17, &ho_RegionUnion26);
				DilationCircle(ho_RegionUnion26, &(*ho_camregion), 8);
			}

			if (0 != (int(hv_Number21 == 22)))
			{
				MedianRect(ho_ImageReduced9, &ho_ImageMedian8, 15, 15);
				ScaleImage(ho_ImageMedian8, &ho_ImageScaled13, 5, -120);
				Threshold(ho_ImageScaled13, &ho_Region7, 0, 100);
				FillUp(ho_Region7, &ho_RegionFillUp);
				OpeningCircle(ho_RegionFillUp, &ho_RegionOpening11, 3.5);
				Connection(ho_RegionOpening11, &ho_ConnectedRegions20);
				SelectShape(ho_ConnectedRegions20, &ho_SelectedRegions17, "area", "and",
					1e+4, 5e+4);
				Union1(ho_SelectedRegions17, &ho_RegionUnion26);
				DilationCircle(ho_RegionUnion26, &(*ho_camregion), 8);
			}

			if (0 != (int(hv_Number21 == 23)))
			{
				MedianRect(ho_ImageReduced9, &ho_ImageMedian8, 3, 50);
				ScaleImage(ho_ImageMedian8, &ho_ImageScaled13, 5, -280);
				Threshold(ho_ImageScaled13, &ho_Region18, 0, 80);
				FillUp(ho_Region18, &ho_RegionFillUp17);
				Connection(ho_RegionFillUp17, &ho_ConnectedRegions29);
				SelectShape(ho_ConnectedRegions29, &ho_SelectedRegions21, (HTuple("area").Append("column")),
					"and", (HTuple(1e+4).Append(700)), (HTuple(9e+5).Append(1350)));
				Union1(ho_SelectedRegions21, &ho_RegionUnion20);
				ShapeTrans(ho_RegionUnion20, &ho_RegionTrans20, "convex");
				DilationCircle(ho_RegionTrans20, &(*ho_camregion), 5);

			}

			if (0 != (int(hv_Number21 == 24)))
			{
				//median_rect (ImageReduced9, ImageMedian6, 15, 15)
				//scale_image (ImageMedian6, ImageScaled11, 2, -180)
				//threshold (ImageScaled11, Region14, 128, 255)
				//fill_up (Region14, RegionFillUp12)
				//opening_circle (RegionFillUp12, RegionOpening6, 3.5)
				//connection (RegionOpening6, ConnectedRegions16)
				//select_shape (ConnectedRegions16, SelectedRegions12, ['area','column'], 'and', [5000,650], [20000,1500])
				//union1 (SelectedRegions12, RegionUnion21)

				//median_rect (ImageReduced9, ImageMedian11, 15, 15)
				//*            scale_image (ImageMedian11, ImageScaled15, 2, -90)
				//*            threshold (ImageScaled15, Region15, 0, 60)
				//fill_up (Region15, RegionFillUp11)
				//opening_circle (RegionFillUp11, RegionOpening5, 3.5)
				//connection (RegionOpening5, ConnectedRegions15)
				//select_shape (ConnectedRegions15, SelectedRegions11, ['area','column'], 'and', [1000,650], [8e+5,1500])
				//union1 (SelectedRegions11, RegionUnion19)
				//union2 (RegionUnion21, RegionUnion19, RegionUnion20)
				//*            dilation_circle (RegionUnion20, RegionDilation9, 8)
				//shape_trans (RegionDilation9, camregion, 'convex')

				MedianRect(ho_Image, &ho_ImageMedian13, 8, 8);
				SobelAmp(ho_ImageMedian13, &ho_EdgeAmplitude5, "sum_abs", 11);
				ScaleImage(ho_EdgeAmplitude5, &ho_ImageScaled16, 80, -1000);
				Threshold(ho_ImageScaled16, &ho_Region17, 128, 255);
				FillUp(ho_Region17, &ho_RegionFillUp16);
				Connection(ho_RegionFillUp16, &ho_ConnectedRegions28);
				SelectShape(ho_ConnectedRegions28, &ho_SelectedRegions11, (HTuple("area").Append("column")),
					"and", (HTuple(1000).Append(650)), (HTuple(8e+5).Append(1500)));
				Union1(ho_SelectedRegions11, &ho_RegionUnion35);
				ShapeTrans(ho_RegionUnion35, &ho_RegionTrans8, "convex");
				ShapeTrans(ho_RegionTrans8, &ho_RegionTrans19, "rectangle1");
				MoveRegion(ho_RegionTrans19, &ho_RegionMoved10, -188, 0);
				Union2(ho_RegionTrans8, ho_RegionMoved10, &ho_RegionUnion36);
				DilationCircle(ho_RegionUnion36, &ho_RegionDilation21, 18);
				Intersection(ho_Image, ho_RegionDilation21, &(*ho_camregion));
				AreaCenter((*ho_camregion), &hv_Area7, &hv_Row7, &hv_Column7);
				CountObj((*ho_camregion), &hv_Number10);
				if (0 != (HTuple(HTuple(int(hv_Area7 < 110000)).TupleOr(int(hv_Area7 > 140000))).TupleOr(int(hv_Number10 == 0))))
				{
					GenCircle(&ho_ROI_0, 73.4014, 1028.05, 237.759);
					GenRectangle1(&ho_TMP_Region, -119.725, 789.059, 104.784, 1264.63);
					Union2(ho_ROI_0, ho_TMP_Region, &ho_ROI_0);
					Intersection(ho_Image, ho_ROI_0, &(*ho_camregion));
				}

			}

			if (0 != (int(hv_Number21 == 25)))
			{
				//median_rect (ImageReduced9, ImageMedian6, 15, 15)
				//scale_image (ImageMedian6, ImageScaled11, 4, -180)
				//threshold (ImageScaled11, Region15, 0, 30)
				//*            fill_up (Region15, RegionFillUp11)
				//*            opening_circle (RegionFillUp11, RegionOpening5, 3.5)
				//*            connection (RegionOpening5, ConnectedRegions15)
				//*            select_shape (ConnectedRegions15, SelectedRegions11, ['area','column'], 'and', [5000,650], [8e+5,1500])
				//union1 (SelectedRegions11, RegionUnion19)
				//*            dilation_circle (RegionUnion19, RegionDilation9, 8)
				//*            shape_trans (RegionDilation9, camregion, 'convex')     
			}

			if (0 != (int(hv_Number21 == 26)))
			{
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 80, 5);
				SobelAmp(ho_ImageMedian9, &ho_EdgeAmplitude3, "sum_abs", 5);
				ScaleImage(ho_EdgeAmplitude3, &ho_ImageScaled5, 100, -500);
				Threshold(ho_ImageScaled5, &ho_Region4, 220, 255);
				FillUp(ho_Region4, &ho_RegionFillUp4);
				OpeningCircle(ho_RegionFillUp4, &ho_RegionOpening1, 3.5);
				GenRectangle1(&ho_ROI_0, 15.2867, 785.54, 363.447, 1297.54);
				Intersection(ho_RegionOpening1, ho_ROI_0, &ho_RegionIntersection6);
				Connection(ho_RegionIntersection6, &ho_ConnectedRegions3);
				SelectShape(ho_ConnectedRegions3, &ho_SelectedRegions4, (HTuple("area").Append("row")),
					"and", (HTuple(60000).Append(80)), (HTuple(2e+5).Append(350)));
				CountObj(ho_SelectedRegions4, &hv_Number);
				if (0 != (int(hv_Number == 1)))
				{
					ShapeTrans(ho_SelectedRegions4, &ho_RegionTrans1, "rectangle2");
					DilationRectangle1(ho_RegionTrans1, &ho_RegionDilation7, 5000, 10);
					Intersection(ho_ImageReduced9, ho_RegionDilation7, &(*ho_JTReg));
				}
			}

			if (0 != (int(hv_Number21 == 27)))
			{
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 80, 5);
				SobelAmp(ho_ImageMedian9, &ho_EdgeAmplitude3, "sum_abs", 5);
				ScaleImage(ho_EdgeAmplitude3, &ho_ImageScaled5, 100, -500);
				Threshold(ho_ImageScaled5, &ho_Region4, 220, 255);
				FillUp(ho_Region4, &ho_RegionFillUp4);
				OpeningCircle(ho_RegionFillUp4, &ho_RegionOpening1, 3.5);
				GenRectangle1(&ho_ROI_0, 1477.95, 737.802, 1888.2, 1374.9);
				Intersection(ho_RegionOpening1, ho_ROI_0, &ho_RegionIntersection6);
				Connection(ho_RegionIntersection6, &ho_ConnectedRegions3);
				SelectShape(ho_ConnectedRegions3, &ho_SelectedRegions4, (HTuple("area").Append("row")),
					"and", (HTuple(60000).Append(1500)), (HTuple(2e+5).Append(1850)));
				CountObj(ho_SelectedRegions4, &hv_Number);
				if (0 != (int(hv_Number == 1)))
				{
					ShapeTrans(ho_SelectedRegions4, &ho_RegionTrans1, "rectangle2");
					DilationRectangle1(ho_RegionTrans1, &ho_RegionDilation7, 5000, 10);
					Intersection(ho_ImageReduced9, ho_RegionDilation7, &(*ho_JTReg));
					DilationRectangle1((*ho_JTReg), &(*ho_JTReg), 20, 1);
				}
			}

			if (0 != (int(hv_Number21 == 29)))
			{
				//median_rect (ImageReduced9, ImageMedian9, 80, 3)
				//sobel_amp (ImageMedian9, EdgeAmplitude3, 'sum_abs', 3)
				//scale_image (EdgeAmplitude3, ImageScaled5, 120, -200)
				//threshold (ImageScaled5, Region4, 200, 255)
				//fill_up (Region4, RegionFillUp4)
				//opening_circle (RegionFillUp4, RegionOpening1, 3.5)
				//connection (RegionOpening1, ConnectedRegions3)
				//select_shape (ConnectedRegions3, SelectedRegions4, ['area','row'], 'and', [80000,600], [2e+5,1200])
				//count_obj (SelectedRegions4, Number)
				//if (Number==1)
				//shape_trans (SelectedRegions4, RegionTrans1, 'rectangle1')
				//dilation_rectangle1 (RegionTrans1, RegionDilation7, 500, 20)
				//intersection (ImageReduced9, RegionDilation7, JTReg)
				//endif
			}

		}
		else if (0 != (int(hv_Substring == HTuple("2_2"))))
		{

			MedianRect(ho_Image, &ho_ImageMedian, 15, 15);
			ScaleImage(ho_ImageMedian, &ho_ImageScaled, 2, 0);
			Threshold(ho_ImageScaled, &ho_Region, 180, 255);
			FillUp(ho_Region, &ho_RegionFillUp1);
			Connection(ho_RegionFillUp1, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, (HTuple("area").Append("column")),
				"and", (HTuple(5e+5).Append(0)), (HTuple(999999999).Append(1800)));
			Union1(ho_SelectedRegions, &ho_RegionUnion1);
			DilationRectangle1(ho_RegionUnion1, &ho_RegionDilation, 1, 10000);
			Intersection(ho_Image, ho_RegionDilation, &ho_RegionIntersection);
			ShapeTrans(ho_RegionIntersection, &ho_RegionUnion, "rectangle1");

			ReduceDomain(ho_Image, ho_RegionUnion, &ho_ImageReduced9);
			if (0 != (int(hv_Number21 == 2)))
			{
				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 25, 5);
				ScaleImage(ho_ImageMedian9, &ho_ImageScaled15, 4, -320);
				Threshold(ho_ImageScaled15, &ho_Region5, 0, 80);
				FillUp(ho_Region5, &ho_RegionFillUp20);
				OpeningRectangle1(ho_RegionFillUp20, &ho_RegionOpening21, 15, 15);
				Connection(ho_RegionOpening21, &ho_ConnectedRegions11);
				SelectShape(ho_ConnectedRegions11, &ho_SelectedRegions22, "area", "and",
					1e+5, 9e+5);
				DilationCircle(ho_SelectedRegions22, &ho_RegionDilation9, 8);
				Intersection(ho_ImageReduced9, ho_RegionDilation9, &(*ho_JTReg));
			}

			if (0 != (int(hv_Number21 == 3)))
			{
				MeanImage(ho_ImageReduced9, &ho_ImageMean3, 8, 8);
				ScaleImage(ho_ImageMean3, &ho_ImageScaled, 5, -580);
				Threshold(ho_ImageScaled, &ho_Region, 220, 255);
				OpeningCircle(ho_Region, &ho_RegionOpening5, 3.5);
				FillUp(ho_RegionOpening5, &ho_RegionFillUp2);
				Connection(ho_RegionFillUp2, &ho_ConnectedRegions5);
				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions3, ((HTuple("area").Append("column")).Append("row")),
					"and", ((HTuple(8000).Append(700)).Append(1000)), ((HTuple(9999999).Append(1500)).Append(2200)));
				Union1(ho_SelectedRegions3, &ho_RegionUnion5);
				ShapeTrans(ho_RegionUnion5, &ho_RegionTrans2, "convex");
				DilationCircle(ho_RegionTrans2, &ho_RegionDilation2, 8);

				Threshold(ho_ImageScaled, &ho_Region15, 0, 80);
				FillUp(ho_Region15, &ho_RegionFillUp11);
				OpeningCircle(ho_RegionFillUp11, &ho_RegionOpening3, 5);
				Connection(ho_RegionOpening3, &ho_ConnectedRegions15);
				SelectShape(ho_ConnectedRegions15, &ho_SelectedRegions23, ((HTuple("area").Append("column")).Append("row")),
					"and", ((HTuple(8000).Append(700)).Append(1000)), ((HTuple(9999999).Append(1500)).Append(2200)));
				Union2(ho_RegionDilation2, ho_SelectedRegions23, &ho_RegionUnion19);
				Union1(ho_RegionUnion19, &ho_RegionUnion37);
				ShapeTrans(ho_RegionUnion37, &ho_RegionTrans21, "convex");
				ShapeTrans(ho_RegionTrans21, &ho_RegionTrans22, "rectangle1");
				MoveRegion(ho_RegionTrans22, &ho_RegionMoved11, 220, 0);
				Union2(ho_RegionTrans21, ho_RegionMoved11, &ho_RegionUnion38);
				DilationCircle(ho_RegionUnion38, &ho_RegionDilation11, 3.5);
				MoveRegion(ho_RegionDilation11, &ho_RegionMoved12, -20, 0);
				Intersection(ho_Image, ho_RegionMoved12, &(*ho_camregion));
				AreaCenter((*ho_camregion), &hv_Area3, &hv_Row3, &hv_Column3);
				CountObj((*ho_camregion), &hv_Number7);
				if (0 != (HTuple(HTuple(int(hv_Area3 > 330000)).TupleOr(int(hv_Area3 < 250000))).TupleOr(int(hv_Number7 == 0))))
				{
					GenCircle(&ho_ROI_0, 1497.14, 1085.13, 220.286);
					GenRectangle1(&ho_TMP_Region, 1478.36, 863.268, 2114.95, 1307);
					Union2(ho_ROI_0, ho_TMP_Region, &ho_ROI_0);
					Intersection(ho_Image, ho_ROI_0, &(*ho_camregion));
				}
			}

			if (0 != (int(hv_Number21 == 4)))
			{
				MeanImage(ho_ImageReduced9, &ho_ImageMean3, 8, 8);
				SobelAmp(ho_ImageMean3, &ho_EdgeAmplitude, "sum_abs", 11);
				ScaleImage(ho_EdgeAmplitude, &ho_ImageScaled, 200, -1500);
				Threshold(ho_ImageScaled, &ho_Region6, 200, 255);
				FillUp(ho_Region6, &ho_RegionFillUp3);
				Connection(ho_RegionFillUp3, &ho_ConnectedRegions1);
				SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions2, ((HTuple("area").Append("row")).Append("column")),
					"and", ((HTuple(1000).Append(0)).Append(750)), ((HTuple(999999).Append(500)).Append(1500)));
				Union1(ho_SelectedRegions2, &ho_RegionUnion11);
				OpeningCircle(ho_RegionUnion11, &ho_RegionOpening12, 5);
				Connection(ho_RegionOpening12, &ho_ConnectedRegions22);
				SelectShape(ho_ConnectedRegions22, &ho_SelectedRegions19, ((HTuple("area").Append("row")).Append("column")),
					"and", ((HTuple(1000).Append(0)).Append(750)), ((HTuple(999999).Append(500)).Append(1500)));
				Union1(ho_SelectedRegions19, &ho_RegionUnion28);
				ShapeTrans(ho_RegionUnion28, &ho_RegionTrans, "convex");
				ShapeTrans(ho_RegionTrans, &ho_RegionTrans3, "rectangle1");
				MoveRegion(ho_RegionTrans3, &ho_RegionMoved2, -188, 0);
				Union2(ho_RegionTrans, ho_RegionMoved2, &ho_RegionUnion10);
				DilationCircle(ho_RegionUnion10, &ho_RegionDilation4, 8);

				MeanImage(ho_ImageReduced9, &ho_ImageMean3, 8, 8);
				SobelAmp(ho_ImageMean3, &ho_EdgeAmplitude2, "sum_abs", 3);
				ScaleImage(ho_EdgeAmplitude2, &ho_ImageScaled4, 25, -200);
				Threshold(ho_ImageScaled4, &ho_Region3, 200, 255);
				FillUp(ho_Region3, &ho_RegionFillUp3);
				Connection(ho_RegionFillUp3, &ho_ConnectedRegions1);
				SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions2, ((HTuple("area").Append("row")).Append("column")),
					"and", ((HTuple(1000).Append(600)).Append(750)), ((HTuple(999999).Append(2200)).Append(1500)));
				Union1(ho_SelectedRegions2, &ho_RegionUnion7);
				OpeningCircle(ho_RegionUnion7, &ho_RegionOpening13, 1);
				Connection(ho_RegionOpening13, &ho_ConnectedRegions21);
				SelectShape(ho_ConnectedRegions21, &ho_SelectedRegions18, ((HTuple("area").Append("row")).Append("column")),
					"and", ((HTuple(1000).Append(600)).Append(750)), ((HTuple(999999).Append(2200)).Append(1500)));
				Union1(ho_SelectedRegions18, &ho_RegionUnion27);
				ShapeTrans(ho_RegionUnion27, &ho_RegionTrans5, "convex");
				ShapeTrans(ho_RegionTrans5, &ho_RegionTrans6, "rectangle1");
				MoveRegion(ho_RegionTrans6, &ho_RegionMoved3, 200, 0);
				MoveRegion(ho_RegionMoved3, &ho_RegionMoved4, 150, 0);

				Union2(ho_RegionMoved3, ho_RegionMoved4, &ho_RegionUnion13);
				DilationRectangle1(ho_RegionUnion13, &ho_RegionDilation16, 50, 1);
				Union2(ho_RegionTrans5, ho_RegionDilation16, &ho_RegionUnion13);
				ClosingCircle(ho_RegionUnion13, &ho_RegionClosing1, 999);
				DilationCircle(ho_RegionClosing1, &ho_RegionDilation6, 8);
				Union2(ho_RegionDilation4, ho_RegionDilation6, &ho_RegionUnion12);
				Intersection(ho_Image, ho_RegionUnion12, &(*ho_camregion));
				AreaCenter((*ho_camregion), &hv_Area4, &hv_Row4, &hv_Column4);
				CountObj((*ho_camregion), &hv_Number8);
				if (0 != (HTuple(HTuple(int(hv_Area4 > 620000)).TupleOr(int(hv_Area4 < 580000))).TupleOr(int(hv_Number8 == 0))))
				{
					GenCircle(&ho_ROI_0, -72.6407, 1104.64, 234.867);
					GenCircle(&ho_TMP_Region, 921.617, 1099.82, 219.38);
					Union2(ho_ROI_0, ho_TMP_Region, &ho_ROI_0);
					GenRectangle1(&ho_TMP_Region, 897.484, 872.973, 2113.76, 1321.84);
					Union2(ho_ROI_0, ho_TMP_Region, &ho_ROI_0);
					Intersection(ho_Image, ho_ROI_0, &(*ho_camregion));
				}
			}

			if (0 != (int(hv_Number21 == 5)))
			{
				MeanImage(ho_ImageReduced9, &ho_ImageMean3, 8, 8);
				SobelAmp(ho_ImageMean3, &ho_EdgeAmplitude, "sum_abs", 11);
				ScaleImage(ho_EdgeAmplitude, &ho_ImageScaled, 200, -1500);
				Threshold(ho_ImageScaled, &ho_Region6, 200, 255);
				FillUp(ho_Region6, &ho_RegionFillUp3);
				Connection(ho_RegionFillUp3, &ho_ConnectedRegions1);
				SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions2, ((HTuple("area").Append("row")).Append("column")),
					"and", ((HTuple(1000).Append(0)).Append(750)), ((HTuple(999999).Append(500)).Append(1500)));
				Union1(ho_SelectedRegions2, &ho_RegionUnion11);
				OpeningCircle(ho_RegionUnion11, &ho_RegionOpening12, 5);
				Connection(ho_RegionOpening12, &ho_ConnectedRegions22);
				SelectShape(ho_ConnectedRegions22, &ho_SelectedRegions19, ((HTuple("area").Append("row")).Append("column")),
					"and", ((HTuple(1000).Append(0)).Append(750)), ((HTuple(999999).Append(500)).Append(1500)));
				Union1(ho_SelectedRegions19, &ho_RegionUnion28);
				ShapeTrans(ho_RegionUnion28, &ho_RegionTrans, "convex");
				ShapeTrans(ho_RegionTrans, &ho_RegionTrans3, "rectangle1");
				MoveRegion(ho_RegionTrans3, &ho_RegionMoved2, -180, 0);
				Union2(ho_RegionTrans, ho_RegionMoved2, &ho_RegionUnion10);
				DilationCircle(ho_RegionUnion10, &ho_RegionDilation4, 8);

				MeanImage(ho_ImageReduced9, &ho_ImageMean3, 8, 8);
				SobelAmp(ho_ImageMean3, &ho_EdgeAmplitude2, "sum_abs", 3);
				ScaleImage(ho_EdgeAmplitude2, &ho_ImageScaled4, 30, -200);
				Threshold(ho_ImageScaled4, &ho_Region3, 200, 255);
				FillUp(ho_Region3, &ho_RegionFillUp3);
				Connection(ho_RegionFillUp3, &ho_ConnectedRegions1);
				SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions2, ((HTuple("area").Append("row")).Append("column")),
					"and", ((HTuple(1000).Append(600)).Append(750)), ((HTuple(999999).Append(2200)).Append(1500)));
				Union1(ho_SelectedRegions2, &ho_RegionUnion7);
				OpeningCircle(ho_RegionUnion7, &ho_RegionOpening13, 1);
				Connection(ho_RegionOpening13, &ho_ConnectedRegions21);
				SelectShape(ho_ConnectedRegions21, &ho_SelectedRegions18, ((HTuple("area").Append("row")).Append("column")),
					"and", ((HTuple(1000).Append(600)).Append(750)), ((HTuple(999999).Append(2200)).Append(1500)));
				Union1(ho_SelectedRegions18, &ho_RegionUnion27);
				ShapeTrans(ho_RegionUnion27, &ho_RegionTrans5, "convex");
				ShapeTrans(ho_RegionTrans5, &ho_RegionTrans6, "rectangle1");
				MoveRegion(ho_RegionTrans6, &ho_RegionMoved3, 200, 0);
				MoveRegion(ho_RegionMoved3, &ho_RegionMoved4, 300, 0);

				Union2(ho_RegionMoved3, ho_RegionMoved4, &ho_RegionUnion13);
				DilationRectangle1(ho_RegionUnion13, &ho_RegionDilation16, 50, 1);
				Union2(ho_RegionTrans5, ho_RegionDilation16, &ho_RegionUnion13);
				ClosingCircle(ho_RegionUnion13, &ho_RegionClosing1, 999);
				DilationCircle(ho_RegionClosing1, &ho_RegionDilation6, 8);
				Union2(ho_RegionDilation4, ho_RegionDilation6, &ho_RegionUnion12);
				Intersection(ho_Image, ho_RegionUnion12, &(*ho_camregion));
				AreaCenter((*ho_camregion), &hv_Area4, &hv_Row4, &hv_Column4);
				CountObj((*ho_camregion), &hv_Number8);
				if (0 != (HTuple(HTuple(int(hv_Area4 > 740000)).TupleOr(int(hv_Area4 < 680000))).TupleOr(int(hv_Number8 == 0))))
				{
					GenCircle(&ho_ROI_0, 52.3181, 1099.84, 218.933);
					GenRectangle1(&ho_TMP_Region, -208.802, 879.684, 79.6248, 1318.3);
					Union2(ho_ROI_0, ho_TMP_Region, &ho_ROI_0);
					GenCircle(&ho_TMP_Region, 789.598, 1093.02, 219.65);
					Union2(ho_ROI_0, ho_TMP_Region, &ho_ROI_0);
					GenRectangle1(&ho_TMP_Region, 789.598, 874.564, 3000, 1311.47);
					Union2(ho_ROI_0, ho_TMP_Region, &ho_ROI_0);
					MoveRegion(ho_ROI_0, &ho_RegionMoved6, 10, -20);
					Intersection(ho_Image, ho_RegionMoved6, &(*ho_camregion));
				}
			}

			if (0 != (int(hv_Number21 == 6)))
			{
				MeanImage(ho_ImageReduced9, &ho_ImageMean3, 8, 8);
				ScaleImage(ho_ImageMean3, &ho_ImageScaled4, 2, -100);
				Threshold(ho_ImageScaled4, &ho_Region3, 0, 80);
				FillUp(ho_Region3, &ho_RegionFillUp3);
				Connection(ho_RegionFillUp3, &ho_ConnectedRegions1);
				SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions2, ((HTuple("area").Append("row")).Append("column")),
					"and", ((HTuple(8000).Append(0)).Append(700)), ((HTuple(999999).Append(300)).Append(1350)));
				Union1(ho_SelectedRegions2, &ho_RegionUnion7);
				ShapeTrans(ho_RegionUnion7, &ho_RegionTrans5, "convex");
				DilationCircle(ho_RegionTrans5, &ho_RegionDilation6, 8);
				Intersection(ho_ImageReduced9, ho_RegionDilation6, &(*ho_camregion));
			}

			if (0 != (int(hv_Number21 == 7)))
			{
				MeanImage(ho_ImageReduced9, &ho_ImageMean3, 8, 8);
				ScaleImage(ho_ImageMean3, &ho_ImageScaled, 3, -200);
				Threshold(ho_ImageScaled, &ho_Region6, 0, 80);
				FillUp(ho_Region6, &ho_RegionFillUp3);
				OpeningCircle(ho_RegionFillUp3, &ho_RegionOpening, 2);
				Connection(ho_RegionOpening, &ho_ConnectedRegions1);
				SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions2, ((HTuple("area").Append("row")).Append("column")),
					"and", ((HTuple(8000).Append(390)).Append(750)), ((HTuple(999999).Append(2200)).Append(1500)));
				Union1(ho_SelectedRegions2, &ho_RegionUnion11);
				ShapeTrans(ho_RegionUnion11, &ho_RegionTrans, "convex");
				ShapeTrans(ho_RegionTrans, &ho_RegionTrans3, "rectangle1");
				MoveRegion(ho_RegionTrans3, &ho_RegionMoved2, 220, 0);
				Union2(ho_RegionTrans, ho_RegionMoved2, &ho_RegionUnion10);
				DilationCircle(ho_RegionUnion10, &ho_RegionDilation5, 8);
				Intersection(ho_Image, ho_RegionDilation5, &(*ho_camregion));
			}

			if (0 != (int(hv_Number21 == 8)))
			{
				MeanImage(ho_ImageReduced9, &ho_ImageMean3, 8, 8);
				ScaleImage(ho_ImageMean3, &ho_ImageScaled, 4, -320);
				Threshold(ho_ImageScaled, &ho_Region6, 0, 40);
				FillUp(ho_Region6, &ho_RegionFillUp3);
				OpeningCircle(ho_RegionFillUp3, &ho_RegionOpening, 3);
				Connection(ho_RegionOpening, &ho_ConnectedRegions1);
				SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions2, ((HTuple("area").Append("row")).Append("column")),
					"and", ((HTuple(10000).Append(0)).Append(750)), ((HTuple(999999).Append(1000)).Append(1500)));
				Union1(ho_SelectedRegions2, &ho_RegionUnion11);
				ShapeTrans(ho_RegionUnion11, &ho_RegionTrans, "convex");
				ShapeTrans(ho_RegionTrans, &ho_RegionTrans3, "rectangle1");
				MoveRegion(ho_RegionTrans3, &ho_RegionMoved2, -220, 0);
				Union2(ho_RegionTrans, ho_RegionMoved2, &ho_RegionUnion10);
				MoveRegion(ho_RegionMoved2, &ho_RegionMoved5, -100, 0);
				Union2(ho_RegionUnion10, ho_RegionMoved5, &ho_RegionUnion8);
				DilationCircle(ho_RegionUnion8, &ho_RegionDilation5, 8);
				Intersection(ho_Image, ho_RegionDilation5, &(*ho_camregion));
			}

			if (0 != (int(hv_Number21 == 11)))
			{
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 8, 8);
				ScaleImage(ho_ImageMedian9, &ho_ImageScaled5, 4, -300);
				Threshold(ho_ImageScaled5, &ho_Region4, 0, 80);
				FillUp(ho_Region4, &ho_RegionFillUp4);
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion2, 15, 1);
				Intersection(ho_RegionFillUp4, ho_RegionErosion2, &ho_RegionIntersection7
					);
				OpeningCircle(ho_RegionIntersection7, &ho_RegionOpening1, 8);

				Connection(ho_RegionOpening1, &ho_ConnectedRegions3);
				SelectShape(ho_ConnectedRegions3, &ho_SelectedRegions4, (HTuple("area").Append("row")),
					"and", (HTuple(80000).Append(290)), (HTuple(2e+5).Append(650)));
				CountObj(ho_SelectedRegions4, &hv_Number);
				if (0 != (int(hv_Number == 1)))
				{
					DilationCircle(ho_SelectedRegions4, &ho_RegionDilation17, 18);
					Intersection(ho_ImageReduced9, ho_RegionDilation17, &(*ho_JTReg));
				}
			}

			if (0 != (int(hv_Number21 == 12)))
			{
				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 25, 5);
				ScaleImage(ho_ImageMedian9, &ho_ImageScaled15, 4, -350);
				Threshold(ho_ImageScaled15, &ho_Region5, 0, 80);
				FillUp(ho_Region5, &ho_RegionFillUp18);
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion2, 15, 1);
				Intersection(ho_RegionFillUp18, ho_RegionErosion2, &ho_RegionIntersection7
					);
				OpeningCircle(ho_RegionIntersection7, &ho_RegionOpening8, 8);
				Connection(ho_RegionOpening8, &ho_ConnectedRegions11);
				SelectShape(ho_ConnectedRegions11, &ho_SelectedRegions22, "area", "and",
					1e+5, 9e+5);
				DilationCircle(ho_SelectedRegions22, &ho_RegionDilation9, 18);
				Intersection(ho_ImageReduced9, ho_RegionDilation9, &(*ho_JTReg));
			}

			if (0 != (int(hv_Number21 == 13)))
			{
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 5, 5);
				ScaleImage(ho_ImageMedian9, &ho_ImageScaled5, 4, -300);
				Threshold(ho_ImageScaled5, &ho_Region4, 0, 100);
				FillUp(ho_Region4, &ho_RegionFillUp4);
				OpeningCircle(ho_RegionFillUp4, &ho_RegionOpening1, 12);
				Connection(ho_RegionOpening1, &ho_ConnectedRegions3);
				SelectShape(ho_ConnectedRegions3, &ho_SelectedRegions4, (HTuple("area").Append("column")),
					"and", (HTuple(10000).Append(900)), (HTuple(4e+5).Append(1350)));
				CountObj(ho_SelectedRegions4, &hv_Number);
				if (0 != (int(hv_Number == 5)))
				{
					DilationCircle(ho_SelectedRegions4, &ho_RegionDilation18, 3);

					GenRectangle1(&ho_ROI_0, 197.993, 817.727, 1737.64, 1396.91);
					Intersection(ho_RegionDilation18, ho_ROI_0, &ho_RegionIntersection10);
					ShapeTrans(ho_RegionIntersection10, &ho_RegionTrans23, "outer_circle");
					DilationRectangle1(ho_RegionTrans23, &ho_RegionDilation12, 1, 12);
					Difference(ho_RegionDilation18, ho_RegionDilation12, &ho_RegionDifference2
						);
					Union2(ho_RegionDilation12, ho_RegionDifference2, &ho_RegionUnion23);
					Intersection(ho_ImageReduced9, ho_RegionUnion23, &(*ho_camregion));
				}
			}

			if (0 != (int(hv_Number21 == 14)))
			{
				MedianRect(ho_ImageReduced9, &ho_ImageMedian1, 15, 15);
				ScaleImage(ho_ImageMedian1, &ho_ImageScaled6, 3, -120);
				Threshold(ho_ImageScaled6, &ho_Region8, 0, 100);
				FillUp(ho_Region8, &ho_RegionFillUp6);
				Connection(ho_RegionFillUp6, &ho_ConnectedRegions6);
				SelectShape(ho_ConnectedRegions6, &ho_SelectedRegions6, (HTuple("area").Append("column")),
					"and", (HTuple(1000).Append(800)), (HTuple(9999999).Append(1500)));
				ShapeTrans(ho_SelectedRegions6, &ho_RegionTrans7, "convex");
				DilationCircle(ho_RegionTrans7, &ho_RegionDilation8, 8);
				Union1(ho_RegionDilation8, &ho_RegionUnion17);
				Connection(ho_RegionUnion17, &ho_ConnectedRegions12);
				CountObj(ho_ConnectedRegions12, &hv_Number9);
				if (0 != (int(hv_Number9 == 3)))
				{
					Intersection(ho_Image, ho_ConnectedRegions12, &(*ho_camregion));
				}
			}

			if (0 != (int(hv_Number21 == 15)))
			{
				MedianRect(ho_ImageReduced9, &ho_ImageMedian3, 10, 10);
				ScaleImage(ho_ImageMedian3, &ho_ImageScaled10, 4, -250);
				Threshold(ho_ImageScaled10, &ho_Region13, 0, 120);
				FillUp(ho_Region13, &ho_RegionFillUp10);
				Connection(ho_RegionFillUp10, &ho_ConnectedRegions14);
				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions8, (HTuple("area").Append("column")),
					"and", (HTuple(1000).Append(900)), (HTuple(8e+4).Append(1300)));
				DilationCircle(ho_SelectedRegions8, &ho_RegionDilation13, 3.5);

				ShapeTrans(ho_RegionDilation13, &ho_RegionTrans10, "outer_circle");
				DilationCircle(ho_RegionTrans10, &ho_RegionDilation10, 3.5);
				DilationRectangle1(ho_RegionDilation10, &ho_RegionDilation27, 1, 10);
				Union1(ho_RegionDilation27, &ho_RegionUnion15);
				Intersection(ho_Image, ho_RegionUnion15, &(*ho_camregion));
			}

			if (0 != (int(hv_Number21 == 16)))
			{
				MedianRect(ho_ImageReduced9, &ho_ImageMedian5, 15, 15);
				ScaleImage(ho_ImageMedian5, &ho_ImageScaled8, 4, -50);
				Threshold(ho_ImageScaled8, &ho_Region11, 0, 100);
				FillUp(ho_Region11, &ho_RegionFillUp8);
				OpeningCircle(ho_RegionFillUp8, &ho_RegionOpening4, 3.5);
				Connection(ho_RegionOpening4, &ho_ConnectedRegions9);
				SelectShape(ho_ConnectedRegions9, &ho_SelectedRegions10, (HTuple("area").Append("column")),
					"and", (HTuple(10000).Append(800)), (HTuple(99999).Append(1300)));
				ShapeTrans(ho_SelectedRegions10, &ho_RegionTrans11, "outer_circle");
				Union1(ho_RegionTrans11, &ho_RegionUnion18);
				DilationCircle(ho_RegionUnion18, &(*ho_camregion), 3.5);
			}

			if (0 != (int(hv_Number21 == 17)))
			{
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 8, 8);
				ScaleImage(ho_ImageMedian9, &ho_ImageScaled5, 4, -300);
				Threshold(ho_ImageScaled5, &ho_Region4, 0, 80);
				FillUp(ho_Region4, &ho_RegionFillUp4);
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion3, 20, 1);
				Intersection(ho_RegionErosion3, ho_RegionFillUp4, &ho_RegionIntersection16
					);
				OpeningCircle(ho_RegionIntersection16, &ho_RegionOpening1, 2);

				Connection(ho_RegionOpening1, &ho_ConnectedRegions3);
				SelectShape(ho_ConnectedRegions3, &ho_SelectedRegions4, (HTuple("area").Append("row")),
					"and", (HTuple(80000).Append(1100)), (HTuple(2e+5).Append(1550)));
				CountObj(ho_SelectedRegions4, &hv_Number);
				if (0 != (int(hv_Number == 1)))
				{
					DilationCircle(ho_SelectedRegions4, &ho_RegionDilation17, 8);
					Intersection(ho_ImageReduced9, ho_RegionDilation17, &(*ho_JTReg));
				}
			}

			//if (Number21=18)
			//median_rect (ImageReduced9, ImageMedian9, 3, 3)
			//scale_image (ImageMedian9, ImageScaled5, 5, -300)
			//threshold (ImageScaled5, Region4, 0, 120)
			//fill_up (Region4, RegionFillUp4)
			//opening_circle (RegionFillUp4, RegionOpening1, 15)
			//closing_circle (RegionOpening1, RegionClosing4, 55)
			//*            connection (RegionClosing4, ConnectedRegions3)
			//select_shape (ConnectedRegions3, SelectedRegions4, ['area','row'], 'and', [80000,1100], [2e+5,1800])
			//count_obj (SelectedRegions4, Number)
			//if (Number==1)
			//dilation_circle (SelectedRegions4, RegionDilation19, 8)
			//*               intersection (ImageReduced9, RegionDilation19, JTReg)
			//endif
			//endif

			//if (Number21=21)
			//median_rect (ImageReduced9, ImageMedian8, 15, 15)
			//scale_image (ImageMedian8, ImageScaled13, 4, -200)
			//threshold (ImageScaled13, Region7, 0, 100)
			//fill_up (Region7, RegionFillUp)
			//opening_circle (RegionFillUp, RegionOpening11, 3.5)
			//connection (RegionOpening11, ConnectedRegions20)
			//select_shape (ConnectedRegions20, SelectedRegions17, 'area', 'and', 99999, 9999999)
			//union1 (SelectedRegions17, RegionUnion26)
			//dilation_circle (RegionUnion26, camregion, 8)
			//endif

			if (0 != (int(hv_Number21 == 22)))
			{
				MedianRect(ho_ImageReduced9, &ho_ImageMedian8, 15, 15);
				SobelAmp(ho_ImageMedian8, &ho_EdgeAmplitude6, "sum_abs", 11);
				ScaleImage(ho_EdgeAmplitude6, &ho_ImageScaled13, 100, -300);
				Threshold(ho_ImageScaled13, &ho_Region7, 200, 255);
				FillUp(ho_Region7, &ho_RegionFillUp);
				OpeningCircle(ho_RegionFillUp, &ho_RegionOpening11, 3.5);
				Connection(ho_RegionOpening11, &ho_ConnectedRegions20);
				SelectShape(ho_ConnectedRegions20, &ho_SelectedRegions17, (HTuple("area").Append("column")),
					"and", (HTuple(1000).Append(750)), (HTuple(9999999).Append(1350)));
				ShapeTrans(ho_SelectedRegions17, &ho_RegionTrans24, "convex");
				Union1(ho_RegionTrans24, &ho_RegionUnion26);
				DilationCircle(ho_RegionUnion26, &(*ho_camregion), 12);
				Intersection(ho_Image, (*ho_camregion), &(*ho_camregion));
				AreaCenter((*ho_camregion), &hv_Area5, &hv_Row5, &hv_Column5);

				if (0 != (HTuple(int(hv_Area5 < 60000)).TupleOr(int(hv_Area5 > 70000))))
				{
					GenCircle(&ho_ROI_0, 2070, 1042.25, 240);
					Intersection(ho_Image, ho_ROI_0, &(*ho_camregion));
				}
			}

			if (0 != (int(hv_Number21 == 23)))
			{
				MedianRect(ho_ImageReduced9, &ho_ImageMedian4, 3, 15);
				ScaleImage(ho_ImageMedian4, &ho_ImageScaled3, 3, -100);
				Threshold(ho_ImageScaled3, &ho_Region12, 0, 80);
				FillUp(ho_Region12, &ho_RegionFillUp9);
				Connection(ho_RegionFillUp9, &ho_ConnectedRegions8);
				SelectShape(ho_ConnectedRegions8, &ho_SelectedRegions9, "area", "and", 1e+5,
					9e+5);
				ShapeTrans(ho_SelectedRegions9, &ho_RegionTrans25, "convex");
				DilationCircle(ho_RegionTrans25, &ho_RegionDilation19, 58);
				Intersection(ho_Image, ho_RegionDilation19, &(*ho_camregion));

			}

			if (0 != (int(hv_Number21 == 24)))
			{
				MedianRect(ho_ImageReduced9, &ho_ImageMedian6, 8, 8);
				SobelAmp(ho_ImageMedian6, &ho_EdgeAmplitude7, "sum_abs", 3);
				ScaleImage(ho_EdgeAmplitude7, &ho_ImageScaled11, 25, -180);
				Threshold(ho_ImageScaled11, &ho_Region14, 200, 255);
				FillUp(ho_Region14, &ho_RegionFillUp12);
				OpeningCircle(ho_RegionFillUp12, &ho_RegionOpening6, 1);
				Connection(ho_RegionOpening6, &ho_ConnectedRegions16);
				SelectShape(ho_ConnectedRegions16, &ho_SelectedRegions12, (HTuple("area").Append("column")),
					"and", (HTuple(1000).Append(650)), (HTuple(9e+4).Append(1400)));
				Union1(ho_SelectedRegions12, &ho_RegionUnion21);

				ShapeTrans(ho_RegionUnion21, &ho_RegionTrans12, "convex");
				ShapeTrans(ho_RegionTrans12, &ho_RegionTrans13, "rectangle1");
				MoveRegion(ho_RegionTrans13, &ho_RegionMoved, -160, 0);
				Union2(ho_RegionTrans12, ho_RegionMoved, &ho_RegionUnion16);
				DilationCircle(ho_RegionUnion16, &ho_RegionDilation14, 8);
				Intersection(ho_Image, ho_RegionDilation14, &(*ho_camregion));
				AreaCenter((*ho_camregion), &hv_Area6, &hv_Row6, &hv_Column6);
				if (0 != (HTuple(int(hv_Area6 > 65000)).TupleOr(int(hv_Area6 < 50000))))
				{

					GenCircle(&ho_ROI_0, -19.9593, 1039.92, 229.051);
					Intersection(ho_Image, ho_ROI_0, &(*ho_camregion));
				}
			}

			if (0 != (int(hv_Number21 == 25)))
			{
				MeanImage(ho_ImageReduced9, &ho_ImageMean3, 20, 20);
				SobelAmp(ho_ImageMean3, &ho_EdgeAmplitude2, "sum_abs", 11);
				ScaleImage(ho_EdgeAmplitude2, &ho_ImageScaled4, 60, 0);
				Threshold(ho_ImageScaled4, &ho_Region3, 200, 255);
				FillUp(ho_Region3, &ho_RegionFillUp3);
				Connection(ho_RegionFillUp3, &ho_ConnectedRegions1);
				SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions2, ((HTuple("area").Append("row")).Append("column")),
					"and", ((HTuple(8000).Append(0)).Append(700)), ((HTuple(999999).Append(1200)).Append(1300)));
				Union1(ho_SelectedRegions2, &ho_RegionUnion7);
				ShapeTrans(ho_RegionUnion7, &ho_RegionTrans5, "convex");
				ShapeTrans(ho_RegionTrans5, &ho_RegionTrans6, "rectangle1");
				MoveRegion(ho_RegionTrans6, &ho_RegionMoved3, -250, 0);
				MoveRegion(ho_RegionMoved3, &ho_RegionMoved4, -150, 0);
				Union2(ho_RegionTrans5, ho_RegionMoved3, &ho_RegionUnion13);
				Union2(ho_RegionUnion13, ho_RegionMoved4, &ho_RegionUnion13);
				DilationCircle(ho_RegionUnion13, &ho_RegionDilation6, 8);
				Intersection(ho_ImageReduced9, ho_RegionDilation6, &(*ho_camregion));
			}

			if (0 != (int(hv_Number21 == 26)))
			{
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 8, 8);
				ScaleImage(ho_ImageMedian9, &ho_ImageScaled5, 4, -300);
				Threshold(ho_ImageScaled5, &ho_Region4, 0, 80);
				FillUp(ho_Region4, &ho_RegionFillUp4);
				OpeningCircle(ho_RegionFillUp4, &ho_RegionOpening1, 20);

				Connection(ho_RegionOpening1, &ho_ConnectedRegions3);
				SelectShape(ho_ConnectedRegions3, &ho_SelectedRegions4, (HTuple("area").Append("row")),
					"and", (HTuple(80000).Append(0)), (HTuple(2e+5).Append(500)));
				CountObj(ho_SelectedRegions4, &hv_Number);
				if (0 != (int(hv_Number == 1)))
				{
					DilationCircle(ho_SelectedRegions4, &ho_RegionDilation17, 8);
					Intersection(ho_ImageReduced9, ho_RegionDilation17, &(*ho_JTReg));
				}
			}

			if (0 != (int(hv_Number21 == 27)))
			{
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 3, 3);
				ScaleImage(ho_ImageMedian9, &ho_ImageScaled5, 4, -290);
				Threshold(ho_ImageScaled5, &ho_Region4, 0, 100);
				FillUp(ho_Region4, &ho_RegionFillUp4);
				OpeningCircle(ho_RegionFillUp4, &ho_RegionOpening1, 15);
				ClosingCircle(ho_RegionOpening1, &ho_RegionClosing5, 55);
				Connection(ho_RegionClosing5, &ho_ConnectedRegions3);
				SelectShape(ho_ConnectedRegions3, &ho_SelectedRegions4, (HTuple("area").Append("row")),
					"and", (HTuple(80000).Append(1100)), (HTuple(2e+5).Append(1800)));
				CountObj(ho_SelectedRegions4, &hv_Number);
				if (0 != (int(hv_Number == 1)))
				{
					DilationCircle(ho_SelectedRegions4, &ho_RegionDilation20, 8);
					Intersection(ho_ImageReduced9, ho_RegionDilation20, &(*ho_JTReg));
				}
			}

			//if (Number21=29)
			//median_rect (ImageReduced9, ImageMedian9, 3, 3)
			//scale_image (ImageMedian9, ImageScaled5, 4, -280)
			//threshold (ImageScaled5, Region4, 0, 100)
			//fill_up (Region4, RegionFillUp4)
			//opening_circle (RegionFillUp4, RegionOpening1, 15)
			//closing_circle (RegionOpening1, RegionClosing6, 55)
			//*            connection (RegionClosing6, ConnectedRegions3)
			//select_shape (ConnectedRegions3, SelectedRegions4, ['area','row'], 'and', [80000,600], [2e+5,1200])
			//count_obj (SelectedRegions4, Number)
			//if (Number==1)
			//dilation_circle (SelectedRegions4, RegionDilation21, 8)
			//*                intersection (ImageReduced9, RegionDilation21, JTReg)
			//endif
			//endif
		}
		else if (0 != (int(hv_Substring == HTuple("1_1"))))
		{

			MedianRect(ho_Image, &ho_ImageMedian12, 15, 15);
			Threshold(ho_ImageMedian12, &ho_Region2, 200, 255);
			FillUp(ho_Region2, &ho_RegionFillUp5);
			Connection(ho_RegionFillUp5, &ho_ConnectedRegions10);
			SelectShape(ho_ConnectedRegions10, &ho_SelectedRegions5, (HTuple("area").Append("column")),
				"and", (HTuple(5e+5).Append(0)), (HTuple(9999999).Append(1500)));
			MoveRegion(ho_SelectedRegions5, &ho_RegionMoved1, 0, 90);
			Difference(ho_RegionMoved1, ho_SelectedRegions5, &ho_RegionDifference1);

			GenRectangle1(&ho_ROI_0, -251.16, 800, 300, 1496.28);
			Intersection(ho_RegionDifference1, ho_ROI_0, &ho_RegionIntersection3);
			Connection(ho_RegionIntersection3, &ho_ConnectedRegions13);
			SelectShape(ho_ConnectedRegions13, &ho_SelectedRegions14, "area", "and", 10000,
				99999);
			DilationRectangle1(ho_SelectedRegions14, &ho_RegionDilation3, 1, 5000);
			Intersection(ho_Image, ho_RegionDilation3, &ho_RegionIntersection4);
			ShapeTrans(ho_RegionIntersection4, &ho_RegionUnion, "rectangle1");

		}
		else if (0 != (int(hv_Substring == HTuple("1_2"))))
		{
			MedianRect(ho_Image, &ho_ImageMedian7, 1, 15);
			ScaleImage(ho_ImageMedian7, &ho_ImageScaled12, 3, -400);
			Threshold(ho_ImageScaled12, &ho_Region16, 200, 255);
			FillUp(ho_Region16, &ho_RegionFillUp14);
			OpeningCircle(ho_RegionFillUp14, &ho_RegionOpening10, 3.5);
			Connection(ho_RegionOpening10, &ho_ConnectedRegions17);
			SelectShape(ho_ConnectedRegions17, &ho_SelectedRegions13, "area", "and", 100000,
				9999999);

			MoveRegion(ho_SelectedRegions13, &ho_RegionMoved7, 0, 110);
			Difference(ho_RegionMoved7, ho_SelectedRegions13, &ho_RegionDifference3);

			GenRectangle1(&ho_ROI_0, -98.2597, 886.186, 333.861, 1279.68);
			Intersection(ho_RegionDifference3, ho_ROI_0, &ho_RegionIntersection5);
			Connection(ho_RegionIntersection5, &ho_ConnectedRegions18);
			SelectShape(ho_ConnectedRegions18, &ho_SelectedRegions15, "area", "and", 10000,
				99999);
			ShapeTrans(ho_SelectedRegions15, &ho_RegionTrans14, "rectangle1");
			DilationRectangle1(ho_RegionTrans14, &ho_RegionDilation15, 1, 5000);
			Intersection(ho_Image, ho_RegionDilation15, &ho_RegionUnion);

		}
		CountObj(ho_RegionUnion, &hv_Number1);
		if (0 != (int(hv_Number1 > 0)))
		{
			//通过外轮廓提取拼接处区域
			SmallestRectangle2(ho_RegionUnion, &hv_Row16, &hv_Column16, &hv_Phi3, &hv_Length1,
				&hv_Length2);

			if (true)
			{
				MoveRegion(ho_RegionUnion, &ho_RegionUnion, 5, 0);
				//提取仿射最小外接矩形的四个顶点坐标
				GenRectangle2ContourXld(&(*ho_DetectRegion), hv_Row16, hv_Column16, hv_Phi3,
					hv_Length1, hv_Length2);
				TupleCos(hv_Phi3, &hv_Cos);
				TupleSin(hv_Phi3, &hv_Sin);
				if (true)
				{
					GenRectangle2ContourXld(&ho_RegionUnion, hv_Row16, hv_Column16, hv_Phi3,
						hv_Length1, hv_Length2);
					TupleCos(hv_Phi3, &hv_Cos);
					TupleSin(hv_Phi3, &hv_Sin);
					if (HDevWindowStack::IsOpen())
						SetColor(HDevWindowStack::GetActive(), "red");
					hv_a = ((-hv_Length1) * hv_Cos) - (hv_Length2 * hv_Sin);
					hv_b = ((-hv_Length1) * hv_Sin) + (hv_Length2 * hv_Cos);
					GenCrossContourXld(&ho_Cross1, hv_Row16 - hv_b, hv_Column16 + hv_a, 26, hv_Phi3);
					hv_c = (hv_Length1 * hv_Cos) - (hv_Length2 * hv_Sin);
					hv_d = (hv_Length1 * hv_Sin) + (hv_Length2 * hv_Cos);
					GenCrossContourXld(&ho_Cross2, hv_Row16 - hv_d, hv_Column16 + hv_c, 26, hv_Phi3);
					hv_e = (hv_Length1 * hv_Cos) + (hv_Length2 * hv_Sin);
					hv_f = (hv_Length1 * hv_Sin) - (hv_Length2 * hv_Cos);
					GenCrossContourXld(&ho_Cross3, hv_Row16 - hv_f, hv_Column16 + hv_e, 26, hv_Phi3);
					hv_g = ((-hv_Length1) * hv_Cos) + (hv_Length2 * hv_Sin);
					hv_h = ((-hv_Length1) * hv_Sin) - (hv_Length2 * hv_Cos);
					GenCrossContourXld(&ho_Cross4, hv_Row16 - hv_h, hv_Column16 + hv_g, 26, hv_Phi3);
					//xld转换region
					GenRegionContourXld(ho_Cross1, &ho_Cross1re, "filled");
					GenRegionContourXld(ho_Cross2, &ho_Cross2re, "filled");
					GenRegionContourXld(ho_Cross3, &ho_Cross3re, "filled");
					GenRegionContourXld(ho_Cross4, &ho_Cross4re, "filled");
					Union2(ho_Cross1re, ho_Cross2re, &ho_RegionUnion2);
					Union2(ho_RegionUnion2, ho_Cross3re, &ho_RegionUnion3);
					Union2(ho_RegionUnion3, ho_Cross4re, &ho_RegionUnion4);
					Connection(ho_RegionUnion4, &ho_ConnectedRegions4);

					SortRegion(ho_ConnectedRegions4, &ho_SortedRegions, "character", "true",
						"row");
					if (0 != (HTuple(HTuple(HTuple(int(hv_Substring == HTuple("1_1"))).TupleOr(int(hv_Substring == HTuple("2_1")))).TupleOr(int(hv_Substring == HTuple("2_2")))).TupleOr(int(hv_Substring == HTuple("1_2")))))
					{
						SelectObj(ho_SortedRegions, &(*ho_PointRegion), 1);

					}
					else
					{
						SelectObj(ho_SortedRegions, &(*ho_PointRegion), 2);

					}
					//gen_region_contour_xld (PointRegion, PointRegion, 'filled')
					AreaCenter((*ho_PointRegion), &hv_Area, &hv_Row, &hv_Column);

				}

			}
			if (HDevWindowStack::IsOpen())
				DispObj(ho_Image, HDevWindowStack::GetActive());
			if (HDevWindowStack::IsOpen())
				DispObj((*ho_camregion), HDevWindowStack::GetActive());
			if (HDevWindowStack::IsOpen())
				SetColor(HDevWindowStack::GetActive(), "green");
			if (HDevWindowStack::IsOpen())
				DispObj((*ho_PointRegion), HDevWindowStack::GetActive());
			if (HDevWindowStack::IsOpen())
				SetColor(HDevWindowStack::GetActive(), "red");
		}

		return 1;
	}
	catch (HException& ExceptionHandler)
	{
		HTuple err, hv_ProNum;
		ExceptionHandler.ToHTuple(&err);
		string strErr = err.ToString();
		string strerr = std::to_string(hv_ProNum.I()) + "-" + std::to_string(hv_StaNum.I()) + "_" + std::to_string(hv_CamNum.I()) + "_" + std::to_string(hv_ImageNum.I()) + "Image_OQC84_OuterPositioning_Blue error:" + strErr;
		VeErrMessage.push_back(QString::fromStdString(strerr));
	}
	reg = -1;
	return -1;
}

//四色OQC84内腔一工位检测缺陷算法
int JSZCAlgorithmsDLLOQC::ImageProcessOQC84lumen4ColourDefects1Machine1Station(HObject ho_Image, HTuple hv_ProNum,
	HTuple hv_StaNum, HTuple hv_CamNum, HTuple hv_ImageNum, HTuple hv_StrModel, HTuple* hv_dt)
{

	// Local iconic variables
	HObject  ho_reg, ho_EmptyRegion, ho_dectRegion;
	HObject  ho_CGLCRegion, ho_LaserRegion, ho_HoleRegion, ho_CGRTRegion;
	HObject  ho_AJZRegion, ho_PlasticRegion, ho_ROI_0, ho_ImageReduced;
	HObject  ho_ImageClosing, ho_ImageScaled, ho_Region, ho_RegionFillUp;
	HObject  ho_RegionClosing, ho_RegionOpening, ho_RegionTrans;
	HObject  ho_Region1, ho_Circle, ho_Circle1, ho_RegionDifference;
	HObject  ho_ImageOpening, ho_ImageSub, ho_ConnectedRegions;
	HObject  ho_SelectedRegions, ho_SortedRegions, ho_ImageReduced1;
	HObject  ho_ImageReduced2, ho_ImageMedian, ho_ImageSub1;
	HObject  ho_ImageSub2, ho_Region2, ho_TMP_Region, ho_ObjectSelected;
	HObject  ho_RegionMoved, ho_RegionUnion, ho_ROI_1, ho_RegionTrans1;
	HObject  ho___Tmp_Obj_0;

	// Local control variables
	HTuple  hv_Num, hv_N, hv_Row1, hv_Column1, hv_Row2;
	HTuple  hv_Column2, hv_R, hv_C, hv_R1, hv_C1, hv_Length;
	HTuple  hv_ROW, hv_COL, hv_Radius1, hv_Number, hv_GenParamValue;
	HTuple  hv_Index, hv_Area, hv_Row, hv_Column, hv_Exception;

	try
	{
		//缺陷暂存区域
		GenEmptyObj(&ho_reg);
		//缺陷个数
		hv_Num = HTuple();
		//屏蔽检测项
		hv_N = 0;
		//n[0]:崩胶       MOP_T     n[17]:过铣       DT56_T
		//n[1]:塑胶混铁屑 TUD_T     n[18]:焊穿       DT57_T
		//n[2]:腐蚀       DT41_T    n[19]:压伤       DT58_T
		//n[3]:划伤       DT42_T    n[20]:飞漆       DT59_T
		//n[4]:打磨纹     DT43_T    n[21]:毛刺       DT60_T
		//n[5]:打磨痕     DT44_T    n[22]:溢胶       DT61_T
		//n[6]:刀纹       DT45_T    n[23]:堆漆       DT62_T
		//n[7]:阳极膜破损  DT46_T    n[24]:二维码打穿 DT63_T
		//n[8]:镭雕缺陷    DT47_T    n[25]:倒角大     DT64_T
		//n[9]:异物       DT48_T     n[26]:抓胶槽偏位DT65_T
		//n[10]:焊点裂纹  DT49_T     n[27]:混版本     DT66_T
		//n[11]:卷边      DT50_T     n[28]:BLC结构不良DT67_T
		//n[12]:脏污      DT51_T     n[29]:IO偏位    DT68_T
		//n[13]:拉丝不均   DT52_T    n[30]:LC未涂到位 DT69_T
		//n[14]:擦伤       DT53_T    n[31]:A基准飞漆  DT70_T
		//n[15]:气孔       DT54_T    n[32]:漏镭射线   DT71_T
		//n[16]:变形       DT55_T
		//缺陷字典输出初始化
		CreateDict(&(*hv_dt));
		GenEmptyRegion(&ho_EmptyRegion);
		//初始化检测区域
		GenEmptyObj(&ho_dectRegion);
		//初始化CGLC检测区域
		GenEmptyObj(&ho_CGLCRegion);
		//初始化镭射检测区域
		GenEmptyObj(&ho_LaserRegion);
		//初始化孔检测区域
		GenEmptyObj(&ho_HoleRegion);
		//初始化0.14CGRT检测区域
		GenEmptyObj(&ho_CGRTRegion);
		//初始化0.14CGRT检测区域
		GenEmptyObj(&ho_AJZRegion);
		//初始化塑胶检测区域
		GenEmptyObj(&ho_PlasticRegion);
		if (0 != (HTuple(int(hv_StaNum == 1)).TupleAnd(int(hv_CamNum == 1))))
		{
			//*************************************一工位1-27 检测C面&边框&A基准区域******************
			if (0 != (int(hv_ImageNum == 1)))
			{
				//1-1-1
				//提取定位点
				GenRectangle1(&ho_ROI_0, 935.212, 2401.36, 1908.94, 3048.34);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 60, 60);
				ScaleImage(ho_ImageClosing, &ho_ImageScaled, 1.5, -80);
				Threshold(ho_ImageScaled, &ho_Region, 0, 30);
				FillUp(ho_Region, &ho_RegionFillUp);
				ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 50, 50);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 100, 100);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
				SmallestRectangle1(ho_RegionTrans, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

				//偏移距离
				hv_R = hv_Row1 - 990;
				hv_C = hv_Column1 - 2610;

				//生成LC底板检测区域
				hv_R1.Clear();
				hv_R1[0] = 0;
				hv_R1[1] = 181;
				hv_R1[2] = 256;
				hv_R1[3] = 388;
				hv_R1[4] = 420;
				hv_R1[5] = 531;
				hv_R1[6] = 933;
				hv_R1[7] = 996;
				hv_R1[8] = 996;
				hv_R1[9] = 918;
				hv_R1[10] = 840;
				hv_R1[11] = 782;
				hv_R1[12] = 752;
				hv_R1[13] = 655;
				hv_R1[14] = 635;
				hv_R1[15] = 605;
				hv_R1[16] = 142;
				hv_R1[17] = 142;
				hv_R1[18] = 0;
				hv_R1[19] = 0;
				hv_C1.Clear();
				hv_C1[0] = 1468;
				hv_C1[1] = 1468;
				hv_C1[2] = 1431;
				hv_C1[3] = 1426;
				hv_C1[4] = 1396;
				hv_C1[5] = 1354;
				hv_C1[6] = 1351;
				hv_C1[7] = 1328;
				hv_C1[8] = 988;
				hv_C1[9] = 997;
				hv_C1[10] = 971;
				hv_C1[11] = 917;
				hv_C1[12] = 846;
				hv_C1[13] = 846;
				hv_C1[14] = 880;
				hv_C1[15] = 894;
				hv_C1[16] = 883;
				hv_C1[17] = 1082;
				hv_C1[18] = 1083;
				hv_C1[19] = 1468;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R, &hv_ROW);
				TupleGenConst(hv_Length, hv_C, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGLCRegion, &ho_CGLCRegion);

				hv_R1.Clear();
				hv_R1[0] = 180;
				hv_R1[1] = 180;
				hv_R1[2] = 318;
				hv_R1[3] = 412;
				hv_R1[4] = 417;
				hv_R1[5] = 180;
				hv_R1[6] = 180;
				hv_C1.Clear();
				hv_C1[0] = 2634;
				hv_C1[1] = 2880;
				hv_C1[2] = 2865;
				hv_C1[3] = 2880;
				hv_C1[4] = 1890;
				hv_C1[5] = 1890;
				hv_C1[6] = 2634;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R, &hv_ROW);
				TupleGenConst(hv_Length, hv_C, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGLCRegion, &ho_CGLCRegion);

				hv_R1.Clear();
				hv_R1[0] = 515;
				hv_R1[1] = 552;
				hv_R1[2] = 566;
				hv_R1[3] = 540;
				hv_R1[4] = 947;
				hv_R1[5] = 960;
				hv_R1[6] = 1000;
				hv_R1[7] = 1070;
				hv_R1[8] = 1117;
				hv_R1[9] = 1235;
				hv_R1[10] = 1238;
				hv_R1[11] = 1199;
				hv_R1[12] = 1162;
				hv_R1[13] = 527;
				hv_R1[14] = 515;
				hv_C1.Clear();
				hv_C1[0] = 3260;
				hv_C1[1] = 3316;
				hv_C1[2] = 3371;
				hv_C1[3] = 3485;
				hv_C1[4] = 3486;
				hv_C1[5] = 2662;
				hv_C1[6] = 2594;
				hv_C1[7] = 2542;
				hv_C1[8] = 2527;
				hv_C1[9] = 2526;
				hv_C1[10] = 1570;
				hv_C1[11] = 1488;
				hv_C1[12] = 1463;
				hv_C1[13] = 1461;
				hv_C1[14] = 3260;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R, &hv_ROW);
				TupleGenConst(hv_Length, hv_C, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGLCRegion, &ho_CGLCRegion);

				hv_R1.Clear();
				hv_R1[0] = 1337;
				hv_R1[1] = 1873;
				hv_R1[2] = 1930;
				hv_R1[3] = 2011;
				hv_R1[4] = 2011;
				hv_R1[5] = 1915;
				hv_R1[6] = 1856;
				hv_R1[7] = 1848;
				hv_R1[8] = 1612;
				hv_R1[9] = 1469;
				hv_R1[10] = 1338;
				hv_R1[11] = 1337;
				hv_C1.Clear();
				hv_C1[0] = 2462;
				hv_C1[1] = 2462;
				hv_C1[2] = 2372;
				hv_C1[3] = 2333;
				hv_C1[4] = 2157;
				hv_C1[5] = 2117;
				hv_C1[6] = 2028;
				hv_C1[7] = 1992;
				hv_C1[8] = 1991;
				hv_C1[9] = 1943;
				hv_C1[10] = 1943;
				hv_C1[11] = 2462;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R, &hv_ROW);
				TupleGenConst(hv_Length, hv_C + 50, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGLCRegion, &ho_CGLCRegion);

				hv_R1.Clear();
				hv_R1[0] = 1722;
				hv_R1[1] = 1749;
				hv_R1[2] = 1790;
				hv_R1[3] = 2229;
				hv_R1[4] = 2233;
				hv_R1[5] = 2164;
				hv_R1[6] = 2095;
				hv_R1[7] = 2017;
				hv_R1[8] = 1930;
				hv_R1[9] = 1872;
				hv_R1[10] = 1724;
				hv_R1[11] = 1722;
				hv_C1.Clear();
				hv_C1[0] = 3511;
				hv_C1[1] = 3563;
				hv_C1[2] = 3590;
				hv_C1[3] = 3594;
				hv_C1[4] = 2655;
				hv_C1[5] = 2655;
				hv_C1[6] = 2690;
				hv_C1[7] = 2693;
				hv_C1[8] = 2652;
				hv_C1[9] = 2560;
				hv_C1[10] = 2560;
				hv_C1[11] = 3511;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R + 20, &hv_ROW);
				TupleGenConst(hv_Length, hv_C + 50, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGLCRegion, &ho_CGLCRegion);

				Union1(ho_CGLCRegion, &ho_CGLCRegion);

				//检测LC区域缺陷 脏污 划伤
				OQC84lumen_CGLC_DetectionRegion_1Machine1Station(ho_Image, ho_CGLCRegion,
					hv_ImageNum, (*hv_dt), &(*hv_dt));

				//提取孔检测区域
				hv_R1 = 2033.5;
				hv_C1 = 1974.5;
				hv_Radius1.Clear();
				hv_Radius1[0] = 66.8363;
				hv_Radius1[1] = 110;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R + 40, &hv_ROW);
				TupleGenConst(hv_Length, hv_C + 20, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenCircle(&ho_Circle, HTuple(hv_R1[0]), HTuple(hv_C1[0]), HTuple(hv_Radius1[0]));
				GenCircle(&ho_Circle1, HTuple(hv_R1[0]), HTuple(hv_C1[0]), HTuple(hv_Radius1[1]));
				Difference(ho_Circle1, ho_Circle, &ho_RegionDifference);
				ConcatObj(ho_RegionDifference, ho_HoleRegion, &ho_HoleRegion);
				Union1(ho_HoleRegion, &ho_HoleRegion);

				//检测孔区域缺陷 过铣
				OQC84lumen_Hole_DetectionRegion_1Machine1Station(ho_Image, ho_HoleRegion,
					hv_ImageNum, (*hv_dt), &(*hv_dt));

			}

			if (0 != (int(hv_ImageNum == 2)))
			{
				//1-1-2
				//提取定位点
				GenRectangle1(&ho_ROI_0, 935.212, 2401.36, 1908.94, 3048.34);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 60, 60);
				ScaleImage(ho_ImageClosing, &ho_ImageScaled, 2, -100);
				Threshold(ho_ImageScaled, &ho_Region, 0, 30);
				FillUp(ho_Region, &ho_RegionFillUp);
				ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 50, 50);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 100, 300);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
				SmallestRectangle1(ho_RegionTrans, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

				//偏移距离
				hv_R = hv_Row1 - 980;
				hv_C = hv_Column1 - 2566;

				//提取边框检测区域
				GenRectangle1(&ho_ROI_0, -46.1253, 0, 3000, 1740.09);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayOpeningRect(ho_ImageReduced, &ho_ImageOpening, 30, 30);
				SubImage(ho_ImageOpening, ho_ImageReduced, &ho_ImageSub, 3, 128);
				Threshold(ho_ImageSub, &ho_Region, 0, 50);
				OpeningRectangle1(ho_Region, &ho_RegionOpening, 5, 5);
				ClosingRectangle1(ho_RegionOpening, &ho_RegionClosing, 10, 100);
				Connection(ho_RegionClosing, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, (HTuple("width").Append("height")),
					"and", (HTuple(2).Append(1000)), (HTuple(2000).Append(3100)));
				CountObj(ho_SelectedRegions, &hv_Number);
				if (0 != (int(hv_Number > 1)))
				{
					SortRegion(ho_SelectedRegions, &ho_SortedRegions, "upper_right", "true",
						"column");
					SelectObj(ho_SortedRegions, &ho_SelectedRegions, 1);
				}
				ConcatObj(ho_SelectedRegions, ho_CGRTRegion, &ho_CGRTRegion);

				GenRectangle1(&ho_ROI_0, 2655.3, 1740.93, 3050.09, 4132.61);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayOpeningRect(ho_ImageReduced, &ho_ImageOpening, 30, 30);
				SubImage(ho_ImageOpening, ho_ImageReduced, &ho_ImageSub, 2, 128);
				Threshold(ho_ImageSub, &ho_Region, 0, 50);
				OpeningRectangle1(ho_Region, &ho_RegionOpening, 3, 5);
				ClosingRectangle1(ho_RegionOpening, &ho_RegionClosing, 100, 10);
				Connection(ho_RegionClosing, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, (HTuple("width").Append("height")),
					"and", (HTuple(1000).Append(2)), (HTuple(3000).Append(30)));
				CountObj(ho_SelectedRegions, &hv_Number);
				if (0 != (int(hv_Number > 1)))
				{
					SortRegion(ho_SelectedRegions, &ho_SortedRegions, "upper_right", "true",
						"column");
					SelectObj(ho_SortedRegions, &ho_SelectedRegions, 2);
				}
				ConcatObj(ho_SelectedRegions, ho_CGRTRegion, &ho_CGRTRegion);

				Union1(ho_CGRTRegion, &ho_CGRTRegion);

				//检测0.14CGRT区域缺陷
				OQC84lumen_CGRT_DetectionRegion_1Machine1Station(ho_Image, ho_CGRTRegion,
					hv_ImageNum, (*hv_dt), &(*hv_dt));

				//提取A基准区域
				hv_R1.Clear();
				hv_R1[0] = 2377;
				hv_R1[1] = 2378;
				hv_R1[2] = 2468;
				hv_R1[3] = 2515;
				hv_R1[4] = 2520;
				hv_R1[5] = 2533;
				hv_R1[6] = 2529;
				hv_R1[7] = 2497;
				hv_R1[8] = 2436;
				hv_R1[9] = 2433;
				hv_R1[10] = 2507;
				hv_R1[11] = 2519;
				hv_R1[12] = 2625;
				hv_R1[13] = 2625;
				hv_R1[14] = 2402;
				hv_R1[15] = 2377;
				hv_C1.Clear();
				hv_C1[0] = 2463;
				hv_C1[1] = 2539;
				hv_C1[2] = 2557;
				hv_C1[3] = 2618;
				hv_C1[4] = 2837;
				hv_C1[5] = 2878;
				hv_C1[6] = 3492;
				hv_C1[7] = 3566;
				hv_C1[8] = 3601;
				hv_C1[9] = 3911;
				hv_C1[10] = 3971;
				hv_C1[11] = 4085;
				hv_C1[12] = 4084;
				hv_C1[13] = 2387;
				hv_C1[14] = 2391;
				hv_C1[15] = 2463;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R + 40, &hv_ROW);
				TupleGenConst(hv_Length, hv_C, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_AJZRegion, &ho_AJZRegion);

				Union1(ho_AJZRegion, &ho_AJZRegion);
				ConcatObj(ho_AJZRegion, ho_CGRTRegion, &ho_AJZRegion);

				//检测A基准区域缺陷
				OQC84lumen_AJZ_DetectionRegion_1Machine1Station(ho_Image, ho_AJZRegion, hv_ImageNum,
					(*hv_dt), &(*hv_dt));

			}

			if (0 != (int(hv_ImageNum == 3)))
			{
				//1-1-3
				//提取定位点
				GenRectangle1(&ho_ROI_0, 1450, 2324.78, 2100.49, 2954.64);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 30, 30);
				ScaleImage(ho_ImageClosing, &ho_ImageScaled, 2.5, -80);
				Threshold(ho_ImageScaled, &ho_Region, 0, 60);
				FillUp(ho_Region, &ho_RegionFillUp);
				ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 50, 50);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 30, 30);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
				SmallestRectangle1(ho_RegionTrans, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

				//偏移距离
				hv_R = hv_Row1 - 1436;
				hv_C = hv_Column1 - 2417;

				//生成LC底板检测区域
				hv_R1.Clear();
				hv_R1[0] = 97;
				hv_R1[1] = 98;
				hv_R1[2] = 291;
				hv_R1[3] = 303;
				hv_R1[4] = 354;
				hv_R1[5] = 611;
				hv_R1[6] = 644;
				hv_R1[7] = 905;
				hv_R1[8] = 928;
				hv_R1[9] = 929;
				hv_R1[10] = 2145;
				hv_R1[11] = 2146;
				hv_R1[12] = 1972;
				hv_R1[13] = 1898;
				hv_R1[14] = 1834;
				hv_R1[15] = 1826;
				hv_R1[16] = 1867;
				hv_R1[17] = 1948;
				hv_R1[18] = 2091;
				hv_R1[19] = 2148;
				hv_R1[20] = 2148;
				hv_R1[21] = 2018;
				hv_R1[22] = 1953;
				hv_R1[23] = 1930;
				hv_R1[24] = 1930;
				hv_R1[25] = 1785;
				hv_R1[26] = 1671;
				hv_R1[27] = 1572;
				hv_R1[28] = 1510;
				hv_R1[29] = 1456;
				hv_R1[30] = 1399;
				hv_R1[31] = 1399;
				hv_R1[32] = 1448;
				hv_R1[33] = 1572;
				hv_R1[34] = 1702;
				hv_R1[35] = 1749;
				hv_R1[36] = 1801;
				hv_R1[37] = 1934;
				hv_R1[38] = 1935;
				hv_R1[39] = 1002;
				hv_R1[40] = 915;
				hv_R1[41] = 872;
				hv_R1[42] = 866;
				hv_R1[43] = 119;
				hv_R1[44] = 97;
				hv_C1.Clear();
				hv_C1[0] = 4013;
				hv_C1[1] = 4055;
				hv_C1[2] = 4055;
				hv_C1[3] = 3387;
				hv_C1[4] = 3344;
				hv_C1[5] = 3344;
				hv_C1[6] = 3366;
				hv_C1[7] = 3352;
				hv_C1[8] = 3378;
				hv_C1[9] = 4055;
				hv_C1[10] = 4055;
				hv_C1[11] = 3561;
				hv_C1[12] = 3571;
				hv_C1[13] = 3504;
				hv_C1[14] = 3420;
				hv_C1[15] = 3270;
				hv_C1[16] = 3191;
				hv_C1[17] = 3132;
				hv_C1[18] = 3124;
				hv_C1[19] = 3153;
				hv_C1[20] = 3045;
				hv_C1[21] = 3045;
				hv_C1[22] = 3008;
				hv_C1[23] = 2953;
				hv_C1[24] = 2812;
				hv_C1[25] = 2812;
				hv_C1[26] = 2872;
				hv_C1[27] = 2872;
				hv_C1[28] = 2830;
				hv_C1[29] = 2738;
				hv_C1[30] = 2626;
				hv_C1[31] = 2521;
				hv_C1[32] = 2457;
				hv_C1[33] = 2387;
				hv_C1[34] = 2391;
				hv_C1[35] = 2433;
				hv_C1[36] = 2524;
				hv_C1[37] = 2524;
				hv_C1[38] = 2110;
				hv_C1[39] = 2100;
				hv_C1[40] = 2043;
				hv_C1[41] = 1961;
				hv_C1[42] = 1617;
				hv_C1[43] = 1614;
				hv_C1[44] = 4013;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R, &hv_ROW);
				TupleGenConst(hv_Length, hv_C, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGLCRegion, &ho_CGLCRegion);

				hv_R1.Clear();
				hv_R1[0] = 1538;
				hv_R1[1] = 1575;
				hv_R1[2] = 1627;
				hv_R1[3] = 2210;
				hv_R1[4] = 2224;
				hv_R1[5] = 2222;
				hv_R1[6] = 2082;
				hv_R1[7] = 2026;
				hv_R1[8] = 1538;
				hv_R1[9] = 1538;
				hv_C1.Clear();
				hv_C1[0] = 654;
				hv_C1[1] = 734;
				hv_C1[2] = 765;
				hv_C1[3] = 767;
				hv_C1[4] = 722;
				hv_C1[5] = 491;
				hv_C1[6] = 491;
				hv_C1[7] = 506;
				hv_C1[8] = 506;
				hv_C1[9] = 654;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R, &hv_ROW);
				TupleGenConst(hv_Length, hv_C - 30, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGLCRegion, &ho_CGLCRegion);

				Union1(ho_CGLCRegion, &ho_CGLCRegion);
				ReduceDomain(ho_Image, ho_CGLCRegion, &ho_ImageReduced1);

				//检测LC区域缺陷 脏污 划伤
				OQC84lumen_CGLC_DetectionRegion_1Machine1Station(ho_Image, ho_CGLCRegion,
					hv_ImageNum, (*hv_dt), &(*hv_dt));

				//提取毛刺区域
				hv_R1.Clear();
				hv_R1[0] = 2210;
				hv_R1[1] = 2210;
				hv_R1[2] = 2257;
				hv_R1[3] = 2267;
				hv_R1[4] = 2210;
				hv_C1.Clear();
				hv_C1[0] = 2070;
				hv_C1[1] = 4130;
				hv_C1[2] = 4130;
				hv_C1[3] = 2111;
				hv_C1[4] = 2070;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R + 30, &hv_ROW);
				TupleGenConst(hv_Length, hv_C, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGRTRegion, &ho_CGRTRegion);

				Union1(ho_CGRTRegion, &ho_CGRTRegion);
				ReduceDomain(ho_Image, ho_CGRTRegion, &ho_ImageReduced2);

			}

			if (0 != (int(hv_ImageNum == 4)))
			{
				//1-1-4
				//提取定位点
				GenRectangle1(&ho_ROI_0, 1491.1, 2334.78, 2011.49, 2934.64);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 30, 30);
				ScaleImage(ho_ImageClosing, &ho_ImageScaled, 2.5, -80);
				Threshold(ho_ImageScaled, &ho_Region, 0, 30);
				FillUp(ho_Region, &ho_RegionFillUp);
				ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 50, 50);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 30, 30);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
				SmallestRectangle1(ho_RegionTrans, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

				//偏移距离
				hv_R = hv_Row1 - 1433;
				hv_C = hv_Column1 - 2419;

				//提取边框检测区域
				GenRectangle1(&ho_ROI_0, 2290.47, -76.7496, 3018.61, 4143.29);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				MedianRect(ho_ImageReduced, &ho_ImageMedian, 25, 3);
				GrayOpeningRect(ho_ImageMedian, &ho_ImageOpening, 30, 10);
				SubImage(ho_ImageMedian, ho_ImageOpening, &ho_ImageSub, 1, 128);
				SubImage(ho_ImageOpening, ho_ImageMedian, &ho_ImageSub1, 1, 128);
				SubImage(ho_ImageSub1, ho_ImageSub, &ho_ImageSub2, 2, 128);
				Threshold(ho_ImageSub2, &ho_Region, 0, 80);
				ClosingRectangle1(ho_Region, &ho_Region2, 50, 1);
				Connection(ho_Region, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, ((HTuple("row").Append("width")).Append("inner_radius")),
					"and", ((HTuple(2650).Append(4000)).Append(3)), ((HTuple(2950).Append(99999)).Append(15)));
				ConcatObj(ho_SelectedRegions, ho_CGRTRegion, &ho_CGRTRegion);

				//检测0.14CGRT区域缺陷
				OQC84lumen_CGRT_DetectionRegion_1Machine1Station(ho_Image, ho_CGRTRegion,
					hv_ImageNum, (*hv_dt), &(*hv_dt));

				//提取A基准区域
				hv_R1.Clear();
				hv_R1[0] = 2603;
				hv_R1[1] = 2604;
				hv_R1[2] = 2687;
				hv_R1[3] = 2694;
				hv_R1[4] = 2696;
				hv_R1[5] = 2668;
				hv_R1[6] = 2611;
				hv_R1[7] = 2610;
				hv_R1[8] = 2610;
				hv_R1[9] = 2695;
				hv_R1[10] = 2701;
				hv_R1[11] = 2683;
				hv_R1[12] = 2651;
				hv_R1[13] = 2648;
				hv_R1[14] = 2797;
				hv_R1[15] = 2797;
				hv_R1[16] = 2603;
				hv_R1[17] = 2603;
				hv_C1.Clear();
				hv_C1[0] = 51;
				hv_C1[1] = 78;
				hv_C1[2] = 155;
				hv_C1[3] = 286;
				hv_C1[4] = 1063;
				hv_C1[5] = 1129;
				hv_C1[6] = 1168;
				hv_C1[7] = 1243;
				hv_C1[8] = 1432;
				hv_C1[9] = 1516;
				hv_C1[10] = 1668;
				hv_C1[11] = 3580;
				hv_C1[12] = 3658;
				hv_C1[13] = 4095;
				hv_C1[14] = 4096;
				hv_C1[15] = 0;
				hv_C1[16] = 0;
				hv_C1[17] = 51;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R - 150, &hv_ROW);
				TupleGenConst(hv_Length, hv_C + 41, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGRTRegion, &ho_AJZRegion);

				Union1(ho_AJZRegion, &ho_AJZRegion);

				//检测A基准区域缺陷
				OQC84lumen_AJZ_DetectionRegion_1Machine1Station(ho_Image, ho_AJZRegion, hv_ImageNum,
					(*hv_dt), &(*hv_dt));

			}

			if (0 != (int(hv_ImageNum == 5)))
			{
				//1-1-5
				//提取定位点
				GenRectangle1(&ho_ROI_0, 2042.85, 2251.94, 2448.87, 3737.98);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 30, 30);
				ScaleImage(ho_ImageClosing, &ho_ImageScaled, 1.5, -80);
				Threshold(ho_ImageScaled, &ho_Region, 0, 60);
				FillUp(ho_Region, &ho_RegionFillUp);
				ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 50, 50);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 30, 30);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
				SmallestRectangle1(ho_RegionTrans, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

				//偏移距离
				hv_R = hv_Row1 - 1982;
				hv_C = hv_Column1 - 2389;

				//生成LC底板检测区域
				hv_R1.Clear();
				hv_R1[0] = 90;
				hv_R1[1] = 91;
				hv_R1[2] = 295;
				hv_R1[3] = 360;
				hv_R1[4] = 409;
				hv_R1[5] = 464;
				hv_R1[6] = 467;
				hv_R1[7] = 1083;
				hv_R1[8] = 1200;
				hv_R1[9] = 1325;
				hv_R1[10] = 2200;
				hv_R1[11] = 2200;
				hv_R1[12] = 928;
				hv_R1[13] = 924;
				hv_R1[14] = 901;
				hv_R1[15] = 865;
				hv_R1[16] = 324;
				hv_R1[17] = 287;
				hv_R1[18] = 287;
				hv_R1[19] = 96;
				hv_R1[20] = 90;
				hv_C1.Clear();
				hv_C1[0] = 1412;
				hv_C1[1] = 1475;
				hv_C1[2] = 1480;
				hv_C1[3] = 1507;
				hv_C1[4] = 1548;
				hv_C1[5] = 1656;
				hv_C1[6] = 1832;
				hv_C1[7] = 1837;
				hv_C1[8] = 1750;
				hv_C1[9] = 1719;
				hv_C1[10] = 1724;
				hv_C1[11] = 40;
				hv_C1[12] = 40;
				hv_C1[13] = 210;
				hv_C1[14] = 238;
				hv_C1[15] = 245;
				hv_C1[16] = 239;
				hv_C1[17] = 195;
				hv_C1[18] = 40;
				hv_C1[19] = 40;
				hv_C1[20] = 1412;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R - 60, &hv_ROW);
				TupleGenConst(hv_Length, hv_C, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGLCRegion, &ho_CGLCRegion);

				Union1(ho_CGLCRegion, &ho_CGLCRegion);

				//检测LC区域缺陷 脏污 划伤
				OQC84lumen_CGLC_DetectionRegion_1Machine1Station(ho_Image, ho_CGLCRegion,
					hv_ImageNum, (*hv_dt), &(*hv_dt));

				//提取毛刺区域
				hv_R1.Clear();
				hv_R1[0] = 2172;
				hv_R1[1] = 2229;
				hv_R1[2] = 2233;
				hv_R1[3] = 2187;
				hv_R1[4] = 2172;
				hv_C1.Clear();
				hv_C1[0] = 1869;
				hv_C1[1] = 1888;
				hv_C1[2] = 3;
				hv_C1[3] = 0;
				hv_C1[4] = 1869;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R, &hv_ROW);
				TupleGenConst(hv_Length, hv_C, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGRTRegion, &ho_CGRTRegion);

				Union1(ho_CGRTRegion, &ho_CGRTRegion);
				ReduceDomain(ho_Image, ho_CGRTRegion, &ho_ImageReduced2);

			}

			if (0 != (int(hv_ImageNum == 6)))
			{
				//1-1-6
				//提取定位点
				GenRectangle1(&ho_ROI_0, 2042.85, 2251.94, 2448.87, 3737.98);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 30, 30);
				ScaleImage(ho_ImageClosing, &ho_ImageScaled, 1.5, -80);
				Threshold(ho_ImageScaled, &ho_Region, 0, 60);
				FillUp(ho_Region, &ho_RegionFillUp);
				ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 50, 50);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 30, 30);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
				SmallestRectangle1(ho_RegionTrans, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

				//偏移距离
				hv_R = hv_Row1 - 1986;
				hv_C = hv_Column1 - 2393;

				//提取边框检测区域
				GenRectangle1(&ho_ROI_0, 2300.47, -76.7496, 3018.61, 4143.29);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				MedianRect(ho_ImageReduced, &ho_ImageMedian, 25, 3);
				GrayOpeningRect(ho_ImageMedian, &ho_ImageOpening, 30, 10);
				SubImage(ho_ImageMedian, ho_ImageOpening, &ho_ImageSub, 1, 128);
				SubImage(ho_ImageOpening, ho_ImageMedian, &ho_ImageSub1, 1, 128);
				SubImage(ho_ImageSub1, ho_ImageSub, &ho_ImageSub2, 2, 128);
				Threshold(ho_ImageSub2, &ho_Region, 0, 80);
				ClosingRectangle1(ho_Region, &ho_Region, 50, 1);
				Connection(ho_Region, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, ((HTuple("row").Append("width")).Append("inner_radius")),
					"and", ((HTuple(2550).Append(4000)).Append(3)), ((HTuple(2900).Append(99999)).Append(15)));
				ConcatObj(ho_SelectedRegions, ho_CGRTRegion, &ho_CGRTRegion);

				//检测0.14CGRT区域缺陷
				OQC84lumen_CGRT_DetectionRegion_1Machine1Station(ho_Image, ho_CGRTRegion,
					hv_ImageNum, (*hv_dt), &(*hv_dt));

				//提取A基准区域
				hv_R1.Clear();
				hv_R1[0] = 2530;
				hv_R1[1] = 2536;
				hv_R1[2] = 2676;
				hv_R1[3] = 2720;
				hv_R1[4] = 2713;
				hv_R1[5] = 2660;
				hv_R1[6] = 2665;
				hv_R1[7] = 2712;
				hv_R1[8] = 2708;
				hv_R1[9] = 2666;
				hv_R1[10] = 2675;
				hv_R1[11] = 2676;
				hv_R1[12] = 2795;
				hv_R1[13] = 2795;
				hv_R1[14] = 2634;
				hv_R1[15] = 2641;
				hv_R1[16] = 2607;
				hv_R1[17] = 2532;
				hv_R1[18] = 2530;
				hv_C1.Clear();
				hv_C1[0] = 1866;
				hv_C1[1] = 1905;
				hv_C1[2] = 1941;
				hv_C1[3] = 2018;
				hv_C1[4] = 2136;
				hv_C1[5] = 2227;
				hv_C1[6] = 2700;
				hv_C1[7] = 2831;
				hv_C1[8] = 3086;
				hv_C1[9] = 3191;
				hv_C1[10] = 4077;
				hv_C1[11] = 4095;
				hv_C1[12] = 4096;
				hv_C1[13] = 0;
				hv_C1[14] = 2;
				hv_C1[15] = 1641;
				hv_C1[16] = 1714;
				hv_C1[17] = 1749;
				hv_C1[18] = 1866;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R - 173, &hv_ROW);
				TupleGenConst(hv_Length, hv_C + 73, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGRTRegion, &ho_AJZRegion);

				Union1(ho_AJZRegion, &ho_AJZRegion);

				//检测A基准区域缺陷
				OQC84lumen_AJZ_DetectionRegion_1Machine1Station(ho_Image, ho_AJZRegion, hv_ImageNum,
					(*hv_dt), &(*hv_dt));

			}

			if (0 != (int(hv_ImageNum == 7)))
			{
				//1-1-7
				//提取定位点
				GenRectangle1(&ho_ROI_0, 2304.01, 1357.55, 2441.95, 1916.86);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 30, 30);
				ScaleImage(ho_ImageClosing, &ho_ImageScaled, 2.5, -80);
				Threshold(ho_ImageScaled, &ho_Region, 0, 60);
				FillUp(ho_Region, &ho_RegionFillUp);
				ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 50, 50);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 160, 60);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
				SmallestRectangle1(ho_RegionTrans, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

				//偏移距离
				hv_R = hv_Row1 - 2127;
				hv_C = hv_Column1 - 1515;

				//生成LC底板镭雕检测区域
				hv_R1.Clear();
				hv_R1[0] = 1158;
				hv_R1[1] = 2020;
				hv_R1[2] = 2026;
				hv_R1[3] = 2150;
				hv_R1[4] = 2147;
				hv_R1[5] = 1158;
				hv_R1[6] = 1158;
				hv_C1.Clear();
				hv_C1[0] = 2582;
				hv_C1[1] = 2582;
				hv_C1[2] = 2432;
				hv_C1[3] = 2313;
				hv_C1[4] = 2040;
				hv_C1[5] = 2040;
				hv_C1[6] = 2582;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R - 202, &hv_ROW);
				TupleGenConst(hv_Length, hv_C + 86, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_LaserRegion, &ho_LaserRegion);

				hv_R1.Clear();
				hv_R1[0] = 1630;
				hv_R1[1] = 1666;
				hv_R1[2] = 1748;
				hv_R1[3] = 2082;
				hv_R1[4] = 2082;
				hv_R1[5] = 2071;
				hv_R1[6] = 1746;
				hv_R1[7] = 1662;
				hv_R1[8] = 1630;
				hv_C1.Clear();
				hv_C1[0] = 1791;
				hv_C1[1] = 1881;
				hv_C1[2] = 1940;
				hv_C1[3] = 1951;
				hv_C1[4] = 1648;
				hv_C1[5] = 1619;
				hv_C1[6] = 1629;
				hv_C1[7] = 1694;
				hv_C1[8] = 1791;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R, &hv_ROW);
				TupleGenConst(hv_Length, hv_C - 10, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_LaserRegion, &ho_LaserRegion);

				Union1(ho_LaserRegion, &ho_LaserRegion);

				//检测LC镭雕区域缺陷 脏污
				OQC84lumen_CGLC_Laser_DetectionRegion_1Machine1Station(ho_Image, ho_LaserRegion,
					hv_ImageNum, (*hv_dt), &(*hv_dt));

			}

			if (0 != (int(hv_ImageNum == 8)))
			{
				//1-1-8
				//提取定位点
				GenRectangle1(&ho_ROI_0, 2284.01, 1357.55, 2441.95, 1916.86);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 30, 30);
				ScaleImage(ho_ImageClosing, &ho_ImageScaled, 3, -80);
				Threshold(ho_ImageScaled, &ho_Region, 0, 60);
				FillUp(ho_Region, &ho_RegionFillUp);
				ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 50, 50);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 100, 60);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
				SmallestRectangle1(ho_RegionTrans, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

				//偏移距离
				hv_R = hv_Row1 - 2314;
				hv_C = hv_Column1 - 1435;

				//提取边框检测区域
				GenRectangle1(&ho_ROI_0, 128.868, 3712.71, 2350.51, 4126.35);
				GenRectangle2(&ho_TMP_Region, 2626.3, 3222.47, HTuple(24.854).TupleRad(),
					801.978, 437.347);
				Union2(ho_ROI_0, ho_TMP_Region, &ho_ROI_0);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayOpeningRect(ho_ImageReduced, &ho_ImageOpening, 30, 30);
				SubImage(ho_ImageOpening, ho_ImageReduced, &ho_ImageSub, 5, 128);
				Threshold(ho_ImageSub, &ho_Region, 0, 50);
				OpeningRectangle1(ho_Region, &ho_RegionOpening, 5, 5);
				ClosingRectangle1(ho_RegionOpening, &ho_RegionClosing, 10, 60);
				Connection(ho_RegionClosing, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, (HTuple("width").Append("height")),
					"and", (HTuple(2).Append(1000)), (HTuple(2000).Append(3100)));
				CountObj(ho_SelectedRegions, &hv_Number);
				if (0 != (int(hv_Number > 2)))
				{
					SortRegion(ho_SelectedRegions, &ho_SortedRegions, "upper_right", "true",
						"column");
					SelectObj(ho_SortedRegions, &ho_ObjectSelected, 1);
					ConcatObj(ho_ObjectSelected, ho_CGRTRegion, &ho_CGRTRegion);
					SelectObj(ho_SortedRegions, &ho_ObjectSelected, 2);
					ConcatObj(ho_ObjectSelected, ho_CGRTRegion, &ho_CGRTRegion);
				}
				else
				{
					ConcatObj(ho_SelectedRegions, ho_CGRTRegion, &ho_CGRTRegion);
				}

				GenRectangle1(&ho_ROI_0, 2735.75, -9.76632, 2952.46, 2411.52);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayOpeningRect(ho_ImageReduced, &ho_ImageOpening, 30, 30);
				SubImage(ho_ImageOpening, ho_ImageReduced, &ho_ImageSub, 2, 128);
				Threshold(ho_ImageSub, &ho_Region, 0, 50);
				OpeningRectangle1(ho_Region, &ho_RegionOpening, 3, 5);
				ClosingRectangle1(ho_RegionOpening, &ho_RegionClosing, 100, 10);
				Connection(ho_RegionClosing, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, (HTuple("width").Append("height")),
					"and", (HTuple(1000).Append(2)), (HTuple(3000).Append(3100)));
				ConcatObj(ho_SelectedRegions, ho_CGRTRegion, &ho_CGRTRegion);

				Union1(ho_CGRTRegion, &ho_CGRTRegion);
				//检测0.14CGRT区域缺陷
				OQC84lumen_CGRT_DetectionRegion_1Machine1Station(ho_Image, ho_CGRTRegion,
					hv_ImageNum, (*hv_dt), &(*hv_dt));

				//提取A基准区域
				hv_R1.Clear();
				hv_R1[0] = 2649;
				hv_R1[1] = 2711;
				hv_R1[2] = 2710;
				hv_R1[3] = 2668;
				hv_R1[4] = 2740;
				hv_R1[5] = 2776;
				hv_R1[6] = 2776;
				hv_R1[7] = 2660;
				hv_R1[8] = 2649;
				hv_C1.Clear();
				hv_C1[0] = 985;
				hv_C1[1] = 1119;
				hv_C1[2] = 1493;
				hv_C1[3] = 1631;
				hv_C1[4] = 1647;
				hv_C1[5] = 1638;
				hv_C1[6] = 5;
				hv_C1[7] = 0;
				hv_C1[8] = 985;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R, &hv_ROW);
				TupleGenConst(hv_Length, hv_C, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGRTRegion, &ho_AJZRegion);

				Union1(ho_AJZRegion, &ho_AJZRegion);

				//检测A基准区域缺陷
				OQC84lumen_AJZ_DetectionRegion_1Machine1Station(ho_Image, ho_AJZRegion, hv_ImageNum,
					(*hv_dt), &(*hv_dt));

			}

			if (0 != (int(hv_ImageNum == 9)))
			{
				//1-1-9
				//提取定位点
				GenRectangle1(&ho_ROI_0, 1070.23, 636.813, 2100, 1389.74);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 30, 30);
				ScaleImage(ho_ImageClosing, &ho_ImageScaled, 3, -100);
				Threshold(ho_ImageScaled, &ho_Region, 0, 60);
				FillUp(ho_Region, &ho_RegionFillUp);
				ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 50, 50);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 160, 160);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
				SmallestRectangle1(ho_RegionTrans, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

				//偏移距离
				hv_R = hv_Row1 - 1106;
				hv_C = hv_Column2 - 1276;

				//生成LC底板检测区域
				hv_R1.Clear();
				hv_R1[0] = 40;
				hv_R1[1] = 193;
				hv_R1[2] = 250;
				hv_R1[3] = 636;
				hv_R1[4] = 667;
				hv_R1[5] = 730;
				hv_R1[6] = 772;
				hv_R1[7] = 872;
				hv_R1[8] = 929;
				hv_R1[9] = 979;
				hv_R1[10] = 1020;
				hv_R1[11] = 1047;
				hv_R1[12] = 1147;
				hv_R1[13] = 1197;
				hv_R1[14] = 1221;
				hv_R1[15] = 1221;
				hv_R1[16] = 1239;
				hv_R1[17] = 1771;
				hv_R1[18] = 1774;
				hv_R1[19] = 1797;
				hv_R1[20] = 1797;
				hv_R1[21] = 1841;
				hv_R1[22] = 1873;
				hv_R1[23] = 1980;
				hv_R1[24] = 2031;
				hv_R1[25] = 2074;
				hv_R1[26] = 2334;
				hv_R1[27] = 2398;
				hv_R1[28] = 2398;
				hv_R1[29] = 2398;
				hv_R1[30] = 2398;
				hv_R1[31] = 2402;
				hv_R1[32] = 2261;
				hv_R1[33] = 2206;
				hv_R1[34] = 2075;
				hv_R1[35] = 2000;
				hv_R1[36] = 1946;
				hv_R1[37] = 1938;
				hv_R1[38] = 2001;
				hv_R1[39] = 1960;
				hv_R1[40] = 1960;
				hv_R1[41] = 1073;
				hv_R1[42] = 1066;
				hv_R1[43] = 1042;
				hv_R1[44] = 991;
				hv_R1[45] = 893;
				hv_R1[46] = 40;
				hv_R1[47] = 40;
				hv_C1.Clear();
				hv_C1[0] = 3021;
				hv_C1[1] = 3026;
				hv_C1[2] = 3055;
				hv_C1[3] = 3058;
				hv_C1[4] = 2986;
				hv_C1[5] = 2930;
				hv_C1[6] = 2913;
				hv_C1[7] = 2913;
				hv_C1[8] = 2940;
				hv_C1[9] = 2834;
				hv_C1[10] = 2792;
				hv_C1[11] = 2778;
				hv_C1[12] = 2778;
				hv_C1[13] = 2817;
				hv_C1[14] = 2872;
				hv_C1[15] = 3301;
				hv_C1[16] = 3451;
				hv_C1[17] = 3449;
				hv_C1[18] = 3354;
				hv_C1[19] = 3288;
				hv_C1[20] = 2884;
				hv_C1[21] = 2802;
				hv_C1[22] = 2781;
				hv_C1[23] = 2784;
				hv_C1[24] = 2828;
				hv_C1[25] = 2915;
				hv_C1[26] = 2915;
				hv_C1[27] = 2874;
				hv_C1[28] = 2861;
				hv_C1[29] = 2382;
				hv_C1[30] = 2370;
				hv_C1[31] = 2322;
				hv_C1[32] = 2322;
				hv_C1[33] = 2347;
				hv_C1[34] = 2352;
				hv_C1[35] = 2313;
				hv_C1[36] = 2239;
				hv_C1[37] = 2115;
				hv_C1[38] = 2017;
				hv_C1[39] = 1928;
				hv_C1[40] = 1336;
				hv_C1[41] = 1336;
				hv_C1[42] = 1940;
				hv_C1[43] = 2006;
				hv_C1[44] = 2059;
				hv_C1[45] = 2091;
				hv_C1[46] = 2091;
				hv_C1[47] = 3021;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R, &hv_ROW);
				TupleGenConst(hv_Length, hv_C, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGLCRegion, &ho_CGLCRegion);

				Union1(ho_CGLCRegion, &ho_CGLCRegion);

				//检测LC区域缺陷 脏污 划伤
				OQC84lumen_CGLC_DetectionRegion_1Machine1Station(ho_Image, ho_CGLCRegion,
					hv_ImageNum, (*hv_dt), &(*hv_dt));

			}

			if (0 != (int(hv_ImageNum == 10)))
			{
				//1-1-10
				//提取边框检测区域
				GenRectangle1(&ho_ROI_0, -70.0283, 3791.42, 3201.55, 4062.24);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayOpeningRect(ho_ImageReduced, &ho_ImageOpening, 30, 30);
				SubImage(ho_ImageOpening, ho_ImageReduced, &ho_ImageSub, 5, 128);
				Threshold(ho_ImageSub, &ho_Region, 0, 50);
				OpeningRectangle1(ho_Region, &ho_RegionOpening, 5, 10);
				ClosingRectangle1(ho_RegionOpening, &ho_RegionClosing, 10, 100);
				Connection(ho_RegionClosing, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, (HTuple("width").Append("height")),
					"and", (HTuple(2).Append(1000)), (HTuple(2000).Append(3100)));
				CountObj(ho_SelectedRegions, &hv_Number);
				if (0 != (int(hv_Number > 1)))
				{
					SortRegion(ho_SelectedRegions, &ho_SortedRegions, "upper_right", "true",
						"column");
					SelectObj(ho_SortedRegions, &ho_ObjectSelected, 1);
					ConcatObj(ho_ObjectSelected, ho_CGRTRegion, &ho_CGRTRegion);
				}
				else
				{
					ConcatObj(ho_SelectedRegions, ho_CGRTRegion, &ho_CGRTRegion);
				}

				Union1(ho_CGRTRegion, &ho_CGRTRegion);
				//检测0.14CGRT区域缺陷
				OQC84lumen_CGRT_DetectionRegion_1Machine1Station(ho_Image, ho_CGRTRegion,
					hv_ImageNum, (*hv_dt), &(*hv_dt));

			}

			if (0 != (int(hv_ImageNum == 11)))
			{
				//1-1-11
				//提取定位点
				GenRectangle1(&ho_ROI_0, 1109.17, 2940.2, 2119.15, 4110.11);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 30, 30);
				ScaleImage(ho_ImageClosing, &ho_ImageScaled, 3, -140);
				Threshold(ho_ImageScaled, &ho_Region, 0, 60);
				FillUp(ho_Region, &ho_RegionFillUp);
				ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 50, 50);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 800, 160);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
				SmallestRectangle1(ho_RegionTrans, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

				//偏移距离
				hv_R = hv_Row1 - 1227;
				hv_C = hv_Column1 - 3005;

				//生成LC底板检测区域
				hv_R1.Clear();
				hv_R1[0] = 2582;
				hv_R1[1] = 2594;
				hv_R1[2] = 2645;
				hv_R1[3] = 2723;
				hv_R1[4] = 2822;
				hv_R1[5] = 2907;
				hv_R1[6] = 2980;
				hv_R1[7] = 3010;
				hv_R1[8] = 2997;
				hv_R1[9] = 2934;
				hv_R1[10] = 3059;
				hv_R1[11] = 3059;
				hv_R1[12] = 2802;
				hv_R1[13] = 2801;
				hv_R1[14] = 2583;
				hv_R1[15] = 2582;
				hv_C1.Clear();
				hv_C1[0] = 55;
				hv_C1[1] = 1521;
				hv_C1[2] = 1454;
				hv_C1[3] = 1412;
				hv_C1[4] = 1405;
				hv_C1[5] = 1432;
				hv_C1[6] = 1503;
				hv_C1[7] = 1593;
				hv_C1[8] = 1707;
				hv_C1[9] = 1793;
				hv_C1[10] = 1795;
				hv_C1[11] = 149;
				hv_C1[12] = 149;
				hv_C1[13] = 10;
				hv_C1[14] = 10;
				hv_C1[15] = 55;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R, &hv_ROW);
				TupleGenConst(hv_Length, hv_C, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGLCRegion, &ho_CGLCRegion);

				Union1(ho_CGLCRegion, &ho_CGLCRegion);

				//检测LC区域缺陷 脏污 划伤
				OQC84lumen_CGLC_DetectionRegion_1Machine1Station(ho_Image, ho_CGLCRegion,
					hv_ImageNum, (*hv_dt), &(*hv_dt));

			}

			if (0 != (int(hv_ImageNum == 12)))
			{
				//1-1-12
				//提取定位点
				GenRectangle1(&ho_ROI_0, 623.859, 9.93442, 1382.28, 584.436);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 30, 30);
				ScaleImage(ho_ImageClosing, &ho_ImageScaled, 4, -80);
				Threshold(ho_ImageScaled, &ho_Region, 0, 60);
				FillUp(ho_Region, &ho_RegionFillUp);
				ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 50, 50);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 160, 160);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
				SmallestRectangle1(ho_RegionTrans, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

				//偏移距离
				hv_R = hv_Row1 - 736;
				hv_C = hv_Column2 - 273;

				//生成LC底板检测区域
				hv_R1.Clear();
				hv_R1[0] = 1171;
				hv_R1[1] = 1184;
				hv_R1[2] = 1970;
				hv_R1[3] = 2470;
				hv_R1[4] = 2474;
				hv_R1[5] = 2498;
				hv_R1[6] = 2553;
				hv_R1[7] = 2500;
				hv_R1[8] = 2356;
				hv_R1[9] = 2234;
				hv_R1[10] = 2112;
				hv_R1[11] = 1171;
				hv_R1[12] = 1171;
				hv_C1.Clear();
				hv_C1[0] = 840;
				hv_C1[1] = 1258;
				hv_C1[2] = 1253;
				hv_C1[3] = 1338;
				hv_C1[4] = 1276;
				hv_C1[5] = 1064;
				hv_C1[6] = 963;
				hv_C1[7] = 845;
				hv_C1[8] = 733;
				hv_C1[9] = 752;
				hv_C1[10] = 825;
				hv_C1[11] = 824;
				hv_C1[12] = 840;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R, &hv_ROW);
				TupleGenConst(hv_Length, hv_C, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGLCRegion, &ho_CGLCRegion);

				Union1(ho_CGLCRegion, &ho_CGLCRegion);

				//检测LC区域缺陷 脏污 划伤
				OQC84lumen_CGLC_DetectionRegion_1Machine1Station(ho_Image, ho_CGLCRegion,
					hv_ImageNum, (*hv_dt), &(*hv_dt));

			}

			if (0 != (int(hv_ImageNum == 13)))
			{
				//1-1-13
				//提取定位点
				GenRectangle1(&ho_ROI_0, 688.391, 3418.24, 1327.69, 4106.17);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 30, 30);
				ScaleImage(ho_ImageClosing, &ho_ImageScaled, 4, -80);
				Threshold(ho_ImageScaled, &ho_Region, 0, 60);
				FillUp(ho_Region, &ho_RegionFillUp);
				ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 50, 50);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 160, 160);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
				SmallestRectangle1(ho_RegionTrans, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

				//偏移距离
				hv_R = hv_Row1 - 680;
				hv_C = hv_Column1 - 3460;

				//生成LC底板检测区域
				hv_R1.Clear();
				hv_R1[0] = 1485;
				hv_R1[1] = 2309;
				hv_R1[2] = 2310;
				hv_R1[3] = 2288;
				hv_R1[4] = 2090;
				hv_R1[5] = 2088;
				hv_R1[6] = 1724;
				hv_R1[7] = 1723;
				hv_R1[8] = 1582;
				hv_R1[9] = 1488;
				hv_R1[10] = 1485;
				hv_C1.Clear();
				hv_C1[0] = 4055;
				hv_C1[1] = 4055;
				hv_C1[2] = 3541;
				hv_C1[3] = 3496;
				hv_C1[4] = 3491;
				hv_C1[5] = 3839;
				hv_C1[6] = 3839;
				hv_C1[7] = 3518;
				hv_C1[8] = 3518;
				hv_C1[9] = 3559;
				hv_C1[10] = 4055;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R, &hv_ROW);
				TupleGenConst(hv_Length, hv_C, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGLCRegion, &ho_CGLCRegion);

				hv_R1.Clear();
				hv_R1[0] = 1768;
				hv_R1[1] = 2626;
				hv_R1[2] = 2746;
				hv_R1[3] = 2905;
				hv_R1[4] = 3008;
				hv_R1[5] = 3012;
				hv_R1[6] = 2671;
				hv_R1[7] = 2666;
				hv_R1[8] = 2558;
				hv_R1[9] = 2560;
				hv_R1[10] = 2475;
				hv_R1[11] = 2437;
				hv_R1[12] = 2430;
				hv_R1[13] = 2140;
				hv_R1[14] = 2134;
				hv_R1[15] = 2051;
				hv_R1[16] = 2041;
				hv_R1[17] = 1780;
				hv_R1[18] = 1768;
				hv_C1.Clear();
				hv_C1[0] = 1435;
				hv_C1[1] = 1422;
				hv_C1[2] = 1349;
				hv_C1[3] = 1347;
				hv_C1[4] = 1302;
				hv_C1[5] = 840;
				hv_C1[6] = 843;
				hv_C1[7] = 1015;
				hv_C1[8] = 1006;
				hv_C1[9] = 1168;
				hv_C1[10] = 1173;
				hv_C1[11] = 1170;
				hv_C1[12] = 1006;
				hv_C1[13] = 1016;
				hv_C1[14] = 788;
				hv_C1[15] = 803;
				hv_C1[16] = 1216;
				hv_C1[17] = 1239;
				hv_C1[18] = 1435;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R - 70, &hv_ROW);
				TupleGenConst(hv_Length, hv_C - 33, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGLCRegion, &ho_CGLCRegion);

				Union1(ho_CGLCRegion, &ho_CGLCRegion);

				//检测LC区域缺陷 脏污 划伤
				OQC84lumen_CGLC_DetectionRegion_1Machine1Station(ho_Image, ho_CGLCRegion,
					hv_ImageNum, (*hv_dt), &(*hv_dt));

			}

			if (0 != (int(hv_ImageNum == 14)))
			{
				//1-1-14
				//提取边框检测区域
				GenRectangle1(&ho_ROI_0, -71.6864, 131.384, 3113.23, 423.861);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayOpeningRect(ho_ImageReduced, &ho_ImageOpening, 30, 30);
				SubImage(ho_ImageOpening, ho_ImageReduced, &ho_ImageSub, 4, 128);
				Threshold(ho_ImageSub, &ho_Region, 0, 50);
				OpeningRectangle1(ho_Region, &ho_RegionOpening, 5, 5);
				ClosingRectangle1(ho_RegionOpening, &ho_RegionClosing, 10, 100);
				Connection(ho_RegionClosing, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, (HTuple("width").Append("height")),
					"and", (HTuple(2).Append(1000)), (HTuple(2000).Append(3100)));
				CountObj(ho_SelectedRegions, &hv_Number);
				if (0 != (int(hv_Number > 1)))
				{
					SortRegion(ho_SelectedRegions, &ho_SortedRegions, "upper_right", "true",
						"column");
					SelectObj(ho_SortedRegions, &ho_ObjectSelected, 1);
					ConcatObj(ho_ObjectSelected, ho_CGRTRegion, &ho_CGRTRegion);
				}
				else
				{
					ConcatObj(ho_SelectedRegions, ho_CGRTRegion, &ho_CGRTRegion);
				}

				Union1(ho_CGRTRegion, &ho_CGRTRegion);

				//检测0.14CGRT区域缺陷
				OQC84lumen_CGRT_DetectionRegion_1Machine1Station(ho_Image, ho_CGRTRegion,
					hv_ImageNum, (*hv_dt), &(*hv_dt));

			}

			if (0 != (int(hv_ImageNum == 15)))
			{
				//1-1-15
				//提取定位点
				GenRectangle1(&ho_ROI_0, 1100.45, 2289.44, 2300.26, 2912.36);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 30, 30);
				ScaleImage(ho_ImageClosing, &ho_ImageScaled, 4, -200);
				Threshold(ho_ImageScaled, &ho_Region, 0, 60);
				FillUp(ho_Region, &ho_RegionFillUp);
				ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 50, 50);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 160, 160);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
				MoveRegion(ho_RegionTrans, &ho_RegionMoved, 0, 150);
				Difference(ho_RegionOpening, ho_RegionMoved, &ho_RegionDifference);
				ShapeTrans(ho_RegionDifference, &ho_RegionUnion, "rectangle1");
				SmallestRectangle1(ho_RegionUnion, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

				//偏移距离
				hv_R = hv_Row1 - 1269;
				hv_C = hv_Column1 - 2365;

				//生成LC底板检测区域
				hv_R1.Clear();
				hv_R1[0] = 844;
				hv_R1[1] = 845;
				hv_R1[2] = 998;
				hv_R1[3] = 1204;
				hv_R1[4] = 1197;
				hv_R1[5] = 1018;
				hv_R1[6] = 922;
				hv_R1[7] = 867;
				hv_R1[8] = 857;
				hv_R1[9] = 883;
				hv_R1[10] = 950;
				hv_R1[11] = 1071;
				hv_R1[12] = 1212;
				hv_R1[13] = 1276;
				hv_R1[14] = 1344;
				hv_R1[15] = 1424;
				hv_R1[16] = 2037;
				hv_R1[17] = 2037;
				hv_R1[18] = 1872;
				hv_R1[19] = 1692;
				hv_R1[20] = 1570;
				hv_R1[21] = 1401;
				hv_R1[22] = 1286;
				hv_R1[23] = 1154;
				hv_R1[24] = 1085;
				hv_R1[25] = 1019;
				hv_R1[26] = 1019;
				hv_R1[27] = 1046;
				hv_R1[28] = 1039;
				hv_R1[29] = 1067;
				hv_R1[30] = 1072;
				hv_R1[31] = 1133;
				hv_R1[32] = 1232;
				hv_R1[33] = 1285;
				hv_R1[34] = 1295;
				hv_R1[35] = 1208;
				hv_R1[36] = 1164;
				hv_R1[37] = 1114;
				hv_R1[38] = 1050;
				hv_R1[39] = 1001;
				hv_R1[40] = 952;
				hv_R1[41] = 972;
				hv_R1[42] = 899;
				hv_R1[43] = 905;
				hv_R1[44] = 851;
				hv_R1[45] = 844;
				hv_C1.Clear();
				hv_C1[0] = 3967;
				hv_C1[1] = 4007;
				hv_C1[2] = 4065;
				hv_C1[3] = 4065;
				hv_C1[4] = 4033;
				hv_C1[5] = 3834;
				hv_C1[6] = 3655;
				hv_C1[7] = 3462;
				hv_C1[8] = 3264;
				hv_C1[9] = 3095;
				hv_C1[10] = 2919;
				hv_C1[11] = 2736;
				hv_C1[12] = 2587;
				hv_C1[13] = 2420;
				hv_C1[14] = 2361;
				hv_C1[15] = 2332;
				hv_C1[16] = 2334;
				hv_C1[17] = 2216;
				hv_C1[18] = 2264;
				hv_C1[19] = 2271;
				hv_C1[20] = 2252;
				hv_C1[21] = 2188;
				hv_C1[22] = 2116;
				hv_C1[23] = 1985;
				hv_C1[24] = 1882;
				hv_C1[25] = 1714;
				hv_C1[26] = 1886;
				hv_C1[27] = 1925;
				hv_C1[28] = 1993;
				hv_C1[29] = 2048;
				hv_C1[30] = 2114;
				hv_C1[31] = 2090;
				hv_C1[32] = 2112;
				hv_C1[33] = 2175;
				hv_C1[34] = 2259;
				hv_C1[35] = 2422;
				hv_C1[36] = 2461;
				hv_C1[37] = 2477;
				hv_C1[38] = 2472;
				hv_C1[39] = 2445;
				hv_C1[40] = 2355;
				hv_C1[41] = 2263;
				hv_C1[42] = 2263;
				hv_C1[43] = 2793;
				hv_C1[44] = 2979;
				hv_C1[45] = 3967;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R, &hv_ROW);
				TupleGenConst(hv_Length, hv_C + 15, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGLCRegion, &ho_CGLCRegion);

				hv_R1.Clear();
				hv_R1[0] = 1020;
				hv_R1[1] = 1022;
				hv_R1[2] = 1082;
				hv_R1[3] = 1178;
				hv_R1[4] = 1366;
				hv_R1[5] = 1513;
				hv_R1[6] = 1300;
				hv_R1[7] = 1249;
				hv_R1[8] = 1119;
				hv_R1[9] = 1060;
				hv_R1[10] = 1022;
				hv_R1[11] = 1020;
				hv_C1.Clear();
				hv_C1[0] = 1140;
				hv_C1[1] = 1314;
				hv_C1[2] = 1159;
				hv_C1[3] = 1022;
				hv_C1[4] = 866;
				hv_C1[5] = 800;
				hv_C1[6] = 807;
				hv_C1[7] = 868;
				hv_C1[8] = 939;
				hv_C1[9] = 990;
				hv_C1[10] = 1042;
				hv_C1[11] = 1140;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R - 30, &hv_ROW);
				TupleGenConst(hv_Length, hv_C - 30, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGLCRegion, &ho_CGLCRegion);

				hv_R1.Clear();
				hv_R1[0] = 1974;
				hv_R1[1] = 2128;
				hv_R1[2] = 2252;
				hv_R1[3] = 2381;
				hv_R1[4] = 2458;
				hv_R1[5] = 2527;
				hv_R1[6] = 2517;
				hv_R1[7] = 2517;
				hv_R1[8] = 1974;
				hv_C1.Clear();
				hv_C1[0] = 797;
				hv_C1[1] = 864;
				hv_C1[2] = 956;
				hv_C1[3] = 1105;
				hv_C1[4] = 1261;
				hv_C1[5] = 1181;
				hv_C1[6] = 1069;
				hv_C1[7] = 794;
				hv_C1[8] = 797;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R + 40, &hv_ROW);
				TupleGenConst(hv_Length, hv_C - 40, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGLCRegion, &ho_CGLCRegion);

				Union1(ho_CGLCRegion, &ho_CGLCRegion);

				//检测LC区域缺陷 脏污 划伤
				OQC84lumen_CGLC_DetectionRegion_1Machine1Station(ho_Image, ho_CGLCRegion,
					hv_ImageNum, (*hv_dt), &(*hv_dt));

				//生成LC底板镭雕检测区域
				hv_R1.Clear();
				hv_R1[0] = 2107;
				hv_R1[1] = 2207;
				hv_R1[2] = 2284;
				hv_R1[3] = 2430;
				hv_R1[4] = 2515;
				hv_R1[5] = 2599;
				hv_R1[6] = 2632;
				hv_R1[7] = 2614;
				hv_R1[8] = 2558;
				hv_R1[9] = 2465;
				hv_R1[10] = 2280;
				hv_R1[11] = 2277;
				hv_R1[12] = 2940;
				hv_R1[13] = 2966;
				hv_R1[14] = 2966;
				hv_R1[15] = 2825;
				hv_R1[16] = 2713;
				hv_R1[17] = 2671;
				hv_R1[18] = 2648;
				hv_R1[19] = 2587;
				hv_R1[20] = 2553;
				hv_R1[21] = 2551;
				hv_R1[22] = 2653;
				hv_R1[23] = 2619;
				hv_R1[24] = 2569;
				hv_R1[25] = 2530;
				hv_R1[26] = 2531;
				hv_R1[27] = 2398;
				hv_R1[28] = 2260;
				hv_R1[29] = 2107;
				hv_R1[30] = 2107;
				hv_C1.Clear();
				hv_C1[0] = 2342;
				hv_C1[1] = 2408;
				hv_C1[2] = 2597;
				hv_C1[3] = 2750;
				hv_C1[4] = 2874;
				hv_C1[5] = 3078;
				hv_C1[6] = 3253;
				hv_C1[7] = 3500;
				hv_C1[8] = 3675;
				hv_C1[9] = 3837;
				hv_C1[10] = 4041;
				hv_C1[11] = 4065;
				hv_C1[12] = 4062;
				hv_C1[13] = 4019;
				hv_C1[14] = 3290;
				hv_C1[15] = 3221;
				hv_C1[16] = 3096;
				hv_C1[17] = 3003;
				hv_C1[18] = 2854;
				hv_C1[19] = 2710;
				hv_C1[20] = 2563;
				hv_C1[21] = 2300;
				hv_C1[22] = 1959;
				hv_C1[23] = 1973;
				hv_C1[24] = 1966;
				hv_C1[25] = 1935;
				hv_C1[26] = 1901;
				hv_C1[27] = 1901;
				hv_C1[28] = 2069;
				hv_C1[29] = 2183;
				hv_C1[30] = 2342;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R + 50, &hv_ROW);
				TupleGenConst(hv_Length, hv_C + 20, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_LaserRegion, &ho_LaserRegion);

				Union1(ho_LaserRegion, &ho_LaserRegion);

				//检测LC镭雕区域缺陷 脏污
				OQC84lumen_CGLC_Laser_DetectionRegion_1Machine1Station(ho_Image, ho_LaserRegion,
					hv_ImageNum, (*hv_dt), &(*hv_dt));

			}

			if (0 != (int(hv_ImageNum == 16)))
			{
				//1-1-16
				//提取定位点
				GenRectangle1(&ho_ROI_0, 1100.45, 2289.44, 2300.26, 2912.36);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 30, 30);
				ScaleImage(ho_ImageClosing, &ho_ImageScaled, 4, -200);
				Threshold(ho_ImageScaled, &ho_Region, 0, 60);
				FillUp(ho_Region, &ho_RegionFillUp);
				ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 50, 50);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 160, 160);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
				MoveRegion(ho_RegionTrans, &ho_RegionMoved, 0, 150);
				Difference(ho_RegionOpening, ho_RegionMoved, &ho_RegionDifference);
				ShapeTrans(ho_RegionDifference, &ho_RegionUnion, "rectangle1");
				SmallestRectangle1(ho_RegionUnion, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

				//偏移距离
				hv_R = hv_Row1 - 1271;
				hv_C = hv_Column1 - 2365;

				//提取边框检测区域
				GenRectangle1(&ho_ROI_0, 0, 100.07, 3072, 1740.09);
				GenCircle(&ho_ROI_1, 1871.44, 1692.59, 1285.97);
				Difference(ho_ROI_0, ho_ROI_1, &ho_ROI_0);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayOpeningRect(ho_ImageReduced, &ho_ImageOpening, 30, 30);
				SubImage(ho_ImageOpening, ho_ImageReduced, &ho_ImageSub, 3, 128);
				Threshold(ho_ImageSub, &ho_Region, 0, 50);
				OpeningRectangle1(ho_Region, &ho_RegionOpening, 5, 5);
				ClosingRectangle1(ho_RegionOpening, &ho_RegionClosing, 10, 60);
				Connection(ho_RegionClosing, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, (HTuple("width").Append("height")),
					"and", (HTuple(2).Append(1000)), (HTuple(2000).Append(3100)));
				CountObj(ho_SelectedRegions, &hv_Number);
				if (0 != (int(hv_Number > 2)))
				{
					SortRegion(ho_SelectedRegions, &ho_SortedRegions, "upper_right", "true",
						"column");
					SelectObj(ho_SortedRegions, &ho_SelectedRegions, 1);
				}
				ConcatObj(ho_SelectedRegions, ho_CGRTRegion, &ho_CGRTRegion);

				GenRectangle1(&ho_ROI_0, 363.559, 1632.14, 566.638, 4202.67);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayOpeningRect(ho_ImageReduced, &ho_ImageOpening, 30, 30);
				SubImage(ho_ImageOpening, ho_ImageReduced, &ho_ImageSub, 4, 128);
				Threshold(ho_ImageSub, &ho_Region, 0, 50);
				OpeningRectangle1(ho_Region, &ho_RegionOpening, 3, 5);
				ClosingRectangle1(ho_RegionOpening, &ho_RegionClosing, 100, 10);
				Connection(ho_RegionClosing, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, (HTuple("width").Append("height")),
					"and", (HTuple(1600).Append(2)), (HTuple(3000).Append(3100)));
				CountObj(ho_SelectedRegions, &hv_Number);
				if (0 != (int(hv_Number > 1)))
				{
					SortRegion(ho_SelectedRegions, &ho_SortedRegions, "upper_right", "true",
						"column");
					SelectObj(ho_SortedRegions, &ho_SelectedRegions, 2);
				}
				ConcatObj(ho_SelectedRegions, ho_CGRTRegion, &ho_CGRTRegion);

				Union1(ho_CGRTRegion, &ho_CGRTRegion);

				//检测0.14CGRT区域缺陷
				OQC84lumen_CGRT_DetectionRegion_1Machine1Station(ho_Image, ho_CGRTRegion,
					hv_ImageNum, (*hv_dt), &(*hv_dt));

				//提取A基准区域
				hv_R1.Clear();
				hv_R1[0] = 540;
				hv_R1[1] = 621;
				hv_R1[2] = 626;
				hv_R1[3] = 628;
				hv_R1[4] = 540;
				hv_R1[5] = 540;
				hv_C1.Clear();
				hv_C1[0] = 4094;
				hv_C1[1] = 4095;
				hv_C1[2] = 4066;
				hv_C1[3] = 3007;
				hv_C1[4] = 3005;
				hv_C1[5] = 4094;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R - 15, &hv_ROW);
				TupleGenConst(hv_Length, hv_C, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGRTRegion, &ho_AJZRegion);

				Union1(ho_AJZRegion, &ho_AJZRegion);

				//检测A基准区域缺陷
				OQC84lumen_AJZ_DetectionRegion_1Machine1Station(ho_Image, ho_AJZRegion, hv_ImageNum,
					(*hv_dt), &(*hv_dt));

			}

			if (0 != (int(hv_ImageNum == 17)))
			{
				//1-1-17
				//提取定位点
				GenRectangle1(&ho_ROI_0, 1101.85, 149.117, 2373.55, 647.019);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 30, 30);
				ScaleImage(ho_ImageClosing, &ho_ImageScaled, 4, -200);
				Threshold(ho_ImageScaled, &ho_Region, 0, 60);
				FillUp(ho_Region, &ho_RegionFillUp);
				ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 50, 50);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 160, 160);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
				MoveRegion(ho_RegionTrans, &ho_RegionMoved, 0, -150);
				Difference(ho_RegionOpening, ho_RegionMoved, &ho_RegionDifference);
				ShapeTrans(ho_RegionDifference, &ho_RegionUnion, "rectangle1");
				SmallestRectangle1(ho_RegionUnion, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

				//偏移距离
				hv_R = hv_Row1 - 1260;
				hv_C = hv_Column2 - 525;

				//生成LC底板检测区域
				hv_R1.Clear();
				hv_R1[0] = 840;
				hv_R1[1] = 841;
				hv_R1[2] = 984;
				hv_R1[3] = 1066;
				hv_R1[4] = 1121;
				hv_R1[5] = 1179;
				hv_R1[6] = 1180;
				hv_R1[7] = 1155;
				hv_R1[8] = 1202;
				hv_R1[9] = 1204;
				hv_R1[10] = 1255;
				hv_R1[11] = 2022;
				hv_R1[12] = 2022;
				hv_R1[13] = 1398;
				hv_R1[14] = 1336;
				hv_R1[15] = 1254;
				hv_R1[16] = 1193;
				hv_R1[17] = 1062;
				hv_R1[18] = 979;
				hv_R1[19] = 841;
				hv_R1[20] = 840;
				hv_C1.Clear();
				hv_C1[0] = 223;
				hv_C1[1] = 260;
				hv_C1[2] = 311;
				hv_C1[3] = 373;
				hv_C1[4] = 442;
				hv_C1[5] = 598;
				hv_C1[6] = 715;
				hv_C1[7] = 772;
				hv_C1[8] = 774;
				hv_C1[9] = 687;
				hv_C1[10] = 648;
				hv_C1[11] = 645;
				hv_C1[12] = 560;
				hv_C1[13] = 554;
				hv_C1[14] = 531;
				hv_C1[15] = 446;
				hv_C1[16] = 287;
				hv_C1[17] = 153;
				hv_C1[18] = 30;
				hv_C1[19] = 30;
				hv_C1[20] = 223;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R - 5, &hv_ROW);
				TupleGenConst(hv_Length, hv_C, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGLCRegion, &ho_CGLCRegion);

				hv_R1.Clear();
				hv_R1[0] = 2091;
				hv_R1[1] = 2587;
				hv_R1[2] = 2698;
				hv_R1[3] = 2740;
				hv_R1[4] = 2740;
				hv_R1[5] = 2764;
				hv_R1[6] = 2817;
				hv_R1[7] = 2916;
				hv_R1[8] = 2959;
				hv_R1[9] = 2969;
				hv_R1[10] = 2968;
				hv_R1[11] = 2501;
				hv_R1[12] = 2420;
				hv_R1[13] = 2269;
				hv_R1[14] = 2233;
				hv_R1[15] = 2194;
				hv_R1[16] = 2091;
				hv_R1[17] = 2091;
				hv_C1.Clear();
				hv_C1[0] = 640;
				hv_C1[1] = 646;
				hv_C1[2] = 627;
				hv_C1[3] = 600;
				hv_C1[4] = 455;
				hv_C1[5] = 394;
				hv_C1[6] = 352;
				hv_C1[7] = 326;
				hv_C1[8] = 279;
				hv_C1[9] = 76;
				hv_C1[10] = 30;
				hv_C1[11] = 30;
				hv_C1[12] = 147;
				hv_C1[13] = 303;
				hv_C1[14] = 424;
				hv_C1[15] = 487;
				hv_C1[16] = 551;
				hv_C1[17] = 640;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R + 30, &hv_ROW);
				TupleGenConst(hv_Length, hv_C, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGLCRegion, &ho_CGLCRegion);

				Union1(ho_CGLCRegion, &ho_CGLCRegion);

				//检测LC区域缺陷 脏污 划伤
				OQC84lumen_CGLC_DetectionRegion_1Machine1Station(ho_Image, ho_CGLCRegion,
					hv_ImageNum, (*hv_dt), &(*hv_dt));

			}

			if (0 != (int(hv_ImageNum == 18)))
			{
				//1-1-18
				//提取定位点
				GenRectangle1(&ho_ROI_0, 1101.85, 149.117, 2373.55, 647.019);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 30, 30);
				ScaleImage(ho_ImageClosing, &ho_ImageScaled, 5, -200);
				Threshold(ho_ImageScaled, &ho_Region, 0, 60);
				FillUp(ho_Region, &ho_RegionFillUp);
				ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 50, 50);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 160, 160);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
				MoveRegion(ho_RegionTrans, &ho_RegionMoved, 0, -150);
				Difference(ho_RegionOpening, ho_RegionMoved, &ho_RegionDifference);
				ShapeTrans(ho_RegionDifference, &ho_RegionUnion, "rectangle1");
				SmallestRectangle1(ho_RegionUnion, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

				//偏移距离
				hv_R = hv_Row1 - 1259;
				hv_C = hv_Column2 - 527;

				//提取边框检测区域
				GenRectangle1(&ho_ROI_0, 300.873, -9.40334, 524.09, 4226.59);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayOpeningRect(ho_ImageReduced, &ho_ImageOpening, 30, 30);
				SubImage(ho_ImageOpening, ho_ImageReduced, &ho_ImageSub, 7, 128);
				Threshold(ho_ImageSub, &ho_Region, 0, 50);
				OpeningRectangle1(ho_Region, &ho_RegionOpening, 5, 5);
				ClosingRectangle1(ho_RegionOpening, &ho_RegionClosing, 100, 10);
				Connection(ho_RegionClosing, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, (HTuple("width").Append("height")),
					"and", (HTuple(2000).Append(2)), (HTuple(4100).Append(50)));
				CountObj(ho_SelectedRegions, &hv_Number);
				if (0 != (int(hv_Number > 1)))
				{
					SortRegion(ho_SelectedRegions, &ho_SortedRegions, "upper_right", "true",
						"row");
					SelectObj(ho_SortedRegions, &ho_SelectedRegions, 1);
				}
				ConcatObj(ho_SelectedRegions, ho_CGRTRegion, &ho_CGRTRegion);

				Union1(ho_CGRTRegion, &ho_CGRTRegion);

				//检测0.14CGRT区域缺陷
				OQC84lumen_CGRT_DetectionRegion_1Machine1Station(ho_Image, ho_CGRTRegion,
					hv_ImageNum, (*hv_dt), &(*hv_dt));

				//提取A基准区域
				hv_R1.Clear();
				hv_R1[0] = 442;
				hv_R1[1] = 569;
				hv_R1[2] = 563;
				hv_R1[3] = 643;
				hv_R1[4] = 641;
				hv_R1[5] = 583;
				hv_R1[6] = 580;
				hv_R1[7] = 536;
				hv_R1[8] = 535;
				hv_R1[9] = 580;
				hv_R1[10] = 581;
				hv_R1[11] = 580;
				hv_R1[12] = 534;
				hv_R1[13] = 540;
				hv_R1[14] = 442;
				hv_R1[15] = 442;
				hv_C1.Clear();
				hv_C1[0] = 4096;
				hv_C1[1] = 4093;
				hv_C1[2] = 3305;
				hv_C1[3] = 3190;
				hv_C1[4] = 2952;
				hv_C1[5] = 2871;
				hv_C1[6] = 2299;
				hv_C1[7] = 2223;
				hv_C1[8] = 1147;
				hv_C1[9] = 1047;
				hv_C1[10] = 918;
				hv_C1[11] = 615;
				hv_C1[12] = 534;
				hv_C1[13] = 0;
				hv_C1[14] = 0;
				hv_C1[15] = 4096;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R + 61, &hv_ROW);
				TupleGenConst(hv_Length, hv_C + 27, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGLCRegion, &ho_AJZRegion);

				Union1(ho_AJZRegion, &ho_AJZRegion);

				//检测A基准区域缺陷
				OQC84lumen_AJZ_DetectionRegion_1Machine1Station(ho_Image, ho_AJZRegion, hv_ImageNum,
					(*hv_dt), &(*hv_dt));

			}

			if (0 != (int(hv_ImageNum == 19)))
			{
				//1-1-19
				//提取定位点
				GenRectangle1(&ho_ROI_0, 662.284, 3348.5, 1302.17, 4110.78);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 30, 30);
				ScaleImage(ho_ImageClosing, &ho_ImageScaled, 4, -200);
				Threshold(ho_ImageScaled, &ho_Region, 0, 60);
				FillUp(ho_Region, &ho_RegionFillUp);
				ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 50, 50);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 160, 160);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
				SmallestRectangle1(ho_RegionTrans, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

				//偏移距离
				hv_R = hv_Row2 - 1111;
				hv_C = hv_Column1 - 3468;

				//生成LC底板检测区域
				hv_R1.Clear();
				hv_R1[0] = 854;
				hv_R1[1] = 938;
				hv_R1[2] = 1063;
				hv_R1[3] = 1559;
				hv_R1[4] = 1559;
				hv_R1[5] = 1441;
				hv_R1[6] = 1372;
				hv_R1[7] = 1345;
				hv_R1[8] = 1340;
				hv_R1[9] = 910;
				hv_R1[10] = 856;
				hv_R1[11] = 854;
				hv_C1.Clear();
				hv_C1[0] = 1512;
				hv_C1[1] = 1448;
				hv_C1[2] = 1406;
				hv_C1[3] = 1409;
				hv_C1[4] = 1259;
				hv_C1[5] = 934;
				hv_C1[6] = 614;
				hv_C1[7] = 394;
				hv_C1[8] = 99;
				hv_C1[9] = 91;
				hv_C1[10] = 75;
				hv_C1[11] = 1512;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R, &hv_ROW);
				TupleGenConst(hv_Length, hv_C, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGLCRegion, &ho_CGLCRegion);

				Union1(ho_CGLCRegion, &ho_CGLCRegion);

				//检测LC区域缺陷 脏污 划伤
				OQC84lumen_CGLC_DetectionRegion_1Machine1Station(ho_Image, ho_CGLCRegion,
					hv_ImageNum, (*hv_dt), &(*hv_dt));

				hv_R1.Clear();
				hv_R1[0] = 632;
				hv_R1[1] = 717;
				hv_R1[2] = 723;
				hv_R1[3] = 720;
				hv_R1[4] = 675;
				hv_R1[5] = 665;
				hv_R1[6] = 695;
				hv_R1[7] = 695;
				hv_R1[8] = 774;
				hv_R1[9] = 788;
				hv_R1[10] = 748;
				hv_R1[11] = 748;
				hv_R1[12] = 633;
				hv_R1[13] = 632;
				hv_C1.Clear();
				hv_C1[0] = 523;
				hv_C1[1] = 573;
				hv_C1[2] = 667;
				hv_C1[3] = 979;
				hv_C1[4] = 1099;
				hv_C1[5] = 3158;
				hv_C1[6] = 3244;
				hv_C1[7] = 3406;
				hv_C1[8] = 3405;
				hv_C1[9] = 413;
				hv_C1[10] = 328;
				hv_C1[11] = 10;
				hv_C1[12] = 10;
				hv_C1[13] = 523;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R - 30, &hv_ROW);
				TupleGenConst(hv_Length, hv_C - 10, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGRTRegion, &ho_CGRTRegion);

				Union1(ho_CGRTRegion, &ho_CGRTRegion);

			}

			if (0 != (int(hv_ImageNum == 20)))
			{
				//1-1-20
				//提取定位点
				GenRectangle1(&ho_ROI_0, 662.284, 3348.5, 1302.17, 4110.78);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 30, 30);
				ScaleImage(ho_ImageClosing, &ho_ImageScaled, 4, -200);
				Threshold(ho_ImageScaled, &ho_Region, 0, 60);
				FillUp(ho_Region, &ho_RegionFillUp);
				ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 50, 50);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 160, 160);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
				SmallestRectangle1(ho_RegionTrans, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

				//偏移距离
				hv_R = hv_Row2 - 1098;
				hv_C = hv_Column1 - 3423;

				//提取边框检测区域
				GenRectangle1(&ho_ROI_0, 300.873, -9.40334, 524.09, 4226.59);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayOpeningRect(ho_ImageReduced, &ho_ImageOpening, 30, 30);
				SubImage(ho_ImageOpening, ho_ImageReduced, &ho_ImageSub, 12, 128);
				Threshold(ho_ImageSub, &ho_Region, 0, 50);
				OpeningRectangle1(ho_Region, &ho_RegionOpening, 5, 5);
				ClosingRectangle1(ho_RegionOpening, &ho_RegionClosing, 100, 10);
				Connection(ho_RegionClosing, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, (HTuple("width").Append("height")),
					"and", (HTuple(2000).Append(2)), (HTuple(4100).Append(50)));
				CountObj(ho_SelectedRegions, &hv_Number);
				if (0 != (int(hv_Number > 1)))
				{
					SortRegion(ho_SelectedRegions, &ho_SortedRegions, "upper_right", "true",
						"row");
					SelectObj(ho_SortedRegions, &ho_SelectedRegions, 1);
				}
				ConcatObj(ho_SelectedRegions, ho_CGRTRegion, &ho_CGRTRegion);

				Union1(ho_CGRTRegion, &ho_CGRTRegion);

				//检测0.14CGRT区域缺陷
				OQC84lumen_CGRT_DetectionRegion_1Machine1Station(ho_Image, ho_CGRTRegion,
					hv_ImageNum, (*hv_dt), &(*hv_dt));

				//提取A基准区域
				hv_R1.Clear();
				hv_R1[0] = 442;
				hv_R1[1] = 596;
				hv_R1[2] = 594;
				hv_R1[3] = 630;
				hv_R1[4] = 626;
				hv_R1[5] = 597;
				hv_R1[6] = 593;
				hv_R1[7] = 597;
				hv_R1[8] = 641;
				hv_R1[9] = 638;
				hv_R1[10] = 566;
				hv_R1[11] = 553;
				hv_R1[12] = 553;
				hv_R1[13] = 442;
				hv_R1[14] = 442;
				hv_C1.Clear();
				hv_C1[0] = 4096;
				hv_C1[1] = 4095;
				hv_C1[2] = 3653;
				hv_C1[3] = 3545;
				hv_C1[4] = 3238;
				hv_C1[5] = 3151;
				hv_C1[6] = 1120;
				hv_C1[7] = 1012;
				hv_C1[8] = 920;
				hv_C1[9] = 716;
				hv_C1[10] = 649;
				hv_C1[11] = 606;
				hv_C1[12] = 0;
				hv_C1[13] = 0;
				hv_C1[14] = 4096;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R + 6, &hv_ROW);
				TupleGenConst(hv_Length, hv_C + 33, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGRTRegion, &ho_AJZRegion);

				Union1(ho_AJZRegion, &ho_AJZRegion);

				//检测A基准区域缺陷
				OQC84lumen_AJZ_DetectionRegion_1Machine1Station(ho_Image, ho_AJZRegion, hv_ImageNum,
					(*hv_dt), &(*hv_dt));

			}

			if (0 != (int(hv_ImageNum == 21)))
			{
				//1-1-21
				//提取定位点
				GenRectangle1(&ho_ROI_0, 600, 0, 1302.17, 1000);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 30, 30);
				ScaleImage(ho_ImageClosing, &ho_ImageScaled, 4, -200);
				Threshold(ho_ImageScaled, &ho_Region, 0, 60);
				FillUp(ho_Region, &ho_RegionFillUp);
				ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 50, 50);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 160, 160);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
				SmallestRectangle1(ho_RegionTrans, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

				//偏移距离
				hv_R = hv_Row2 - 1091;
				hv_C = hv_Column2 - 678;

				//生成LC底板检测区域
				hv_R1.Clear();
				hv_R1[0] = 862;
				hv_R1[1] = 868;
				hv_R1[2] = 898;
				hv_R1[3] = 1139;
				hv_R1[4] = 1320;
				hv_R1[5] = 1386;
				hv_R1[6] = 1416;
				hv_R1[7] = 2209;
				hv_R1[8] = 2196;
				hv_R1[9] = 1438;
				hv_R1[10] = 1444;
				hv_R1[11] = 1716;
				hv_R1[12] = 1847;
				hv_R1[13] = 3038;
				hv_R1[14] = 3035;
				hv_R1[15] = 1483;
				hv_R1[16] = 1386;
				hv_R1[17] = 965;
				hv_R1[18] = 862;
				hv_C1.Clear();
				hv_C1[0] = 1609;
				hv_C1[1] = 1816;
				hv_C1[2] = 1859;
				hv_C1[3] = 1853;
				hv_C1[4] = 1976;
				hv_C1[5] = 2114;
				hv_C1[6] = 2365;
				hv_C1[7] = 2357;
				hv_C1[8] = 2856;
				hv_C1[9] = 2838;
				hv_C1[10] = 2917;
				hv_C1[11] = 2920;
				hv_C1[12] = 2999;
				hv_C1[13] = 2993;
				hv_C1[14] = 2002;
				hv_C1[15] = 1999;
				hv_C1[16] = 1953;
				hv_C1[17] = 1502;
				hv_C1[18] = 1609;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R + 21, &hv_ROW);
				TupleGenConst(hv_Length, hv_C + 91, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGLCRegion, &ho_CGLCRegion);

				Union1(ho_CGLCRegion, &ho_CGLCRegion);

				//检测LC区域缺陷 脏污 划伤
				OQC84lumen_CGLC_DetectionRegion_1Machine1Station(ho_Image, ho_CGLCRegion,
					hv_ImageNum, (*hv_dt), &(*hv_dt));

				hv_R1.Clear();
				hv_R1[0] = 629;
				hv_R1[1] = 633;
				hv_R1[2] = 667;
				hv_R1[3] = 674;
				hv_R1[4] = 687;
				hv_R1[5] = 682;
				hv_R1[6] = 656;
				hv_R1[7] = 756;
				hv_R1[8] = 759;
				hv_R1[9] = 676;
				hv_R1[10] = 631;
				hv_R1[11] = 629;
				hv_C1.Clear();
				hv_C1[0] = 800;
				hv_C1[1] = 931;
				hv_C1[2] = 956;
				hv_C1[3] = 1021;
				hv_C1[4] = 1025;
				hv_C1[5] = 1316;
				hv_C1[6] = 1352;
				hv_C1[7] = 1341;
				hv_C1[8] = 693;
				hv_C1[9] = 679;
				hv_C1[10] = 649;
				hv_C1[11] = 800;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R, &hv_ROW);
				TupleGenConst(hv_Length, hv_C, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGRTRegion, &ho_CGRTRegion);

				Union1(ho_CGRTRegion, &ho_CGRTRegion);

			}

			if (0 != (int(hv_ImageNum == 22)))
			{
				//1-1-22
				//提取定位点
				GenRectangle1(&ho_ROI_0, 600, 0, 1302.17, 1000);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 30, 30);
				ScaleImage(ho_ImageClosing, &ho_ImageScaled, 4, -200);
				Threshold(ho_ImageScaled, &ho_Region, 0, 60);
				FillUp(ho_Region, &ho_RegionFillUp);
				ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 50, 50);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 160, 160);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
				SmallestRectangle1(ho_RegionTrans, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

				//偏移距离
				hv_R = hv_Row2 - 1088;
				hv_C = hv_Column2 - 673;

				//提取边框检测区域
				GenRectangle1(&ho_ROI_0, 146.918, 2382.87, 3136.84, 4256.88);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayOpeningRect(ho_ImageReduced, &ho_ImageOpening, 30, 30);
				SubImage(ho_ImageOpening, ho_ImageReduced, &ho_ImageSub, 4, 128);
				Threshold(ho_ImageSub, &ho_Region, 0, 50);
				OpeningRectangle1(ho_Region, &ho_RegionOpening, 5, 5);
				ClosingRectangle1(ho_RegionOpening, &ho_RegionClosing, 10, 100);
				Connection(ho_RegionClosing, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, (HTuple("width").Append("height")),
					"and", (HTuple(2).Append(1000)), (HTuple(2000).Append(3100)));
				CountObj(ho_SelectedRegions, &hv_Number);
				if (0 != (int(hv_Number > 1)))
				{
					SortRegion(ho_SelectedRegions, &ho_SortedRegions, "upper_right", "true",
						"column");
					SelectObj(ho_SortedRegions, &ho_SelectedRegions, 1);
				}
				ConcatObj(ho_SelectedRegions, ho_CGRTRegion, &ho_CGRTRegion);

				GenRectangle1(&ho_ROI_0, 331.664, -15.6619, 496.426, 2466.52);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayOpeningRect(ho_ImageReduced, &ho_ImageOpening, 30, 30);
				SubImage(ho_ImageOpening, ho_ImageReduced, &ho_ImageSub, 4, 128);
				Threshold(ho_ImageSub, &ho_Region, 0, 50);
				OpeningRectangle1(ho_Region, &ho_RegionOpening, 3, 5);
				ClosingRectangle1(ho_RegionOpening, &ho_RegionClosing, 100, 10);
				Connection(ho_RegionClosing, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, (HTuple("width").Append("height")),
					"and", (HTuple(1000).Append(2)), (HTuple(3000).Append(3100)));
				CountObj(ho_SelectedRegions, &hv_Number);
				if (0 != (int(hv_Number > 1)))
				{
					SortRegion(ho_SelectedRegions, &ho_SortedRegions, "upper_right", "true",
						"column");
					SelectObj(ho_SortedRegions, &ho_SelectedRegions, 2);
				}
				ConcatObj(ho_SelectedRegions, ho_CGRTRegion, &ho_CGRTRegion);

				Union1(ho_CGRTRegion, &ho_CGRTRegion);

				//检测0.14CGRT区域缺陷
				OQC84lumen_CGRT_DetectionRegion_1Machine1Station(ho_Image, ho_CGRTRegion,
					hv_ImageNum, (*hv_dt), &(*hv_dt));

				//提取A基准区域
				hv_R1.Clear();
				hv_R1[0] = 471;
				hv_R1[1] = 623;
				hv_R1[2] = 635;
				hv_R1[3] = 601;
				hv_R1[4] = 606;
				hv_R1[5] = 471;
				hv_R1[6] = 471;
				hv_C1.Clear();
				hv_C1[0] = 1497;
				hv_C1[1] = 1491;
				hv_C1[2] = 1104;
				hv_C1[3] = 1035;
				hv_C1[4] = 0;
				hv_C1[5] = 0;
				hv_C1[6] = 1497;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R - 10, &hv_ROW);
				TupleGenConst(hv_Length, hv_C, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGRTRegion, &ho_AJZRegion);

				Union1(ho_AJZRegion, &ho_AJZRegion);

				//检测A基准区域缺陷
				OQC84lumen_AJZ_DetectionRegion_1Machine1Station(ho_Image, ho_AJZRegion, hv_ImageNum,
					(*hv_dt), &(*hv_dt));

			}
			//*************************************一工位23-32 检测塑胶区域***************************
			if (0 != (int(hv_ImageNum == 23)))
			{
				//1-1-23
				//提取定位点
				GenRectangle1(&ho_ROI_0, 600, 0, 1302.17, 1000);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 30, 30);
				ScaleImage(ho_ImageClosing, &ho_ImageScaled, 4, -200);
				Threshold(ho_ImageScaled, &ho_Region, 0, 60);
				FillUp(ho_Region, &ho_RegionFillUp);
				ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 50, 50);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 160, 160);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
				SmallestRectangle1(ho_RegionTrans, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

				//偏移距离
				hv_R = hv_Row2 - 1074;
				hv_C = hv_Column2 - 570;

				//生成塑胶检测区域
				hv_R1.Clear();
				hv_R1[0] = 756;
				hv_R1[1] = 821;
				hv_R1[2] = 930;
				hv_R1[3] = 983;
				hv_R1[4] = 996;
				hv_R1[5] = 972;
				hv_R1[6] = 906;
				hv_R1[7] = 941;
				hv_R1[8] = 1136;
				hv_R1[9] = 1279;
				hv_R1[10] = 1287;
				hv_R1[11] = 1238;
				hv_R1[12] = 1216;
				hv_R1[13] = 1148;
				hv_R1[14] = 1145;
				hv_R1[15] = 1194;
				hv_R1[16] = 1148;
				hv_R1[17] = 1148;
				hv_R1[18] = 1194;
				hv_R1[19] = 1192;
				hv_R1[20] = 1157;
				hv_R1[21] = 1018;
				hv_R1[22] = 927;
				hv_R1[23] = 845;
				hv_R1[24] = 844;
				hv_R1[25] = 772;
				hv_R1[26] = 756;
				hv_C1.Clear();
				hv_C1[0] = 2483;
				hv_C1[1] = 2694;
				hv_C1[2] = 2758;
				hv_C1[3] = 2834;
				hv_C1[4] = 2972;
				hv_C1[5] = 3044;
				hv_C1[6] = 3114;
				hv_C1[7] = 3190;
				hv_C1[8] = 3137;
				hv_C1[9] = 3192;
				hv_C1[10] = 2997;
				hv_C1[11] = 2985;
				hv_C1[12] = 2890;
				hv_C1[13] = 2808;
				hv_C1[14] = 2729;
				hv_C1[15] = 2664;
				hv_C1[16] = 2572;
				hv_C1[17] = 2454;
				hv_C1[18] = 2409;
				hv_C1[19] = 2377;
				hv_C1[20] = 2349;
				hv_C1[21] = 2344;
				hv_C1[22] = 2227;
				hv_C1[23] = 2204;
				hv_C1[24] = 2392;
				hv_C1[25] = 2433;
				hv_C1[26] = 2483;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R, &hv_ROW);
				TupleGenConst(hv_Length, hv_C, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_PlasticRegion, &ho_PlasticRegion);

				Union1(ho_PlasticRegion, &ho_PlasticRegion);

				//检测塑胶区域缺陷
				OQC84lumen_Plastic_DetectionRegion_1Machine1Station(ho_Image, ho_PlasticRegion,
					hv_ImageNum, (*hv_dt), hv_StrModel, &(*hv_dt));

			}

			if (0 != (int(hv_ImageNum == 24)))
			{
				//1-1-24
				//提取定位点
				GenRectangle1(&ho_ROI_0, 600, 0, 1302.17, 1000);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 30, 30);
				ScaleImage(ho_ImageClosing, &ho_ImageScaled, 4, -200);
				Threshold(ho_ImageScaled, &ho_Region, 0, 60);
				FillUp(ho_Region, &ho_RegionFillUp);
				ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 50, 50);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 160, 160);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
				SmallestRectangle1(ho_RegionTrans, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

				//偏移距离
				hv_R = hv_Row2 - 1074;
				hv_C = hv_Column2 - 611;

				//生成塑胶检测区域
				hv_R1.Clear();
				hv_R1[0] = 520;
				hv_R1[1] = 530;
				hv_R1[2] = 600;
				hv_R1[3] = 768;
				hv_R1[4] = 867;
				hv_R1[5] = 1219;
				hv_R1[6] = 1430;
				hv_R1[7] = 3061;
				hv_R1[8] = 3061;
				hv_R1[9] = 1464;
				hv_R1[10] = 1317;
				hv_R1[11] = 1225;
				hv_R1[12] = 998;
				hv_R1[13] = 941;
				hv_R1[14] = 904;
				hv_R1[15] = 832;
				hv_R1[16] = 622;
				hv_R1[17] = 628;
				hv_R1[18] = 665;
				hv_R1[19] = 668;
				hv_R1[20] = 615;
				hv_R1[21] = 613;
				hv_R1[22] = 521;
				hv_R1[23] = 520;
				hv_C1.Clear();
				hv_C1[0] = 1660;
				hv_C1[1] = 2691;
				hv_C1[2] = 3151;
				hv_C1[3] = 3439;
				hv_C1[4] = 3548;
				hv_C1[5] = 3720;
				hv_C1[6] = 3760;
				hv_C1[7] = 3755;
				hv_C1[8] = 3712;
				hv_C1[9] = 3723;
				hv_C1[10] = 3663;
				hv_C1[11] = 3562;
				hv_C1[12] = 3549;
				hv_C1[13] = 3499;
				hv_C1[14] = 3366;
				hv_C1[15] = 3298;
				hv_C1[16] = 2999;
				hv_C1[17] = 2874;
				hv_C1[18] = 2788;
				hv_C1[19] = 2386;
				hv_C1[20] = 2328;
				hv_C1[21] = 1571;
				hv_C1[22] = 1575;
				hv_C1[23] = 1660;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R, &hv_ROW);
				TupleGenConst(hv_Length, hv_C, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_PlasticRegion, &ho_PlasticRegion);

				Union1(ho_PlasticRegion, &ho_PlasticRegion);

				//检测塑胶区域缺陷
				OQC84lumen_Plastic_DetectionRegion_1Machine1Station(ho_Image, ho_PlasticRegion,
					hv_ImageNum, (*hv_dt), hv_StrModel, &(*hv_dt));

			}

			if (0 != (int(hv_ImageNum == 25)))
			{
				//1-1-25
				//提取定位点
				GenRectangle1(&ho_ROI_0, 1000, 3100, 1470.73, 3709.59);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 30, 30);
				ScaleImage(ho_ImageClosing, &ho_ImageScaled, 4, -200);
				Threshold(ho_ImageScaled, &ho_Region, 0, 60);
				FillUp(ho_Region, &ho_RegionFillUp);
				ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 50, 50);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 160, 80);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
				SmallestRectangle1(ho_RegionTrans, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

				//偏移距离
				hv_R = hv_Row2 - 1291;
				hv_C = hv_Column1 - 3161;

				//生成塑胶检测区域
				hv_R1.Clear();
				hv_R1[0] = 10;
				hv_R1[1] = 3058;
				hv_R1[2] = 3058;
				hv_R1[3] = 787;
				hv_R1[4] = 740;
				hv_R1[5] = 10;
				hv_R1[6] = 10;
				hv_C1.Clear();
				hv_C1[0] = 3762;
				hv_C1[1] = 3748;
				hv_C1[2] = 3706;
				hv_C1[3] = 3689;
				hv_C1[4] = 3732;
				hv_C1[5] = 3723;
				hv_C1[6] = 3762;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R, &hv_ROW);
				TupleGenConst(hv_Length, hv_C, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_PlasticRegion, &ho_PlasticRegion);

				Union1(ho_PlasticRegion, &ho_PlasticRegion);

				//检测塑胶区域缺陷
				OQC84lumen_Plastic_DetectionRegion_1Machine1Station(ho_Image, ho_PlasticRegion,
					hv_ImageNum, (*hv_dt), hv_StrModel, &(*hv_dt));

			}

			if (0 != (int(hv_ImageNum == 26)))
			{
				//1-1-26
				//提取定位点
				GenRectangle1(&ho_ROI_0, 2209.93, 1309.3, 2540.41, 2053.89);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 30, 30);
				ScaleImage(ho_ImageClosing, &ho_ImageScaled, 4, -200);
				Threshold(ho_ImageScaled, &ho_Region, 0, 60);
				FillUp(ho_Region, &ho_RegionFillUp);
				ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 50, 50);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 60, 120);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
				SmallestRectangle1(ho_RegionTrans, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

				//偏移距离
				hv_R = hv_Row1 - 2315;
				hv_C = hv_Column1 - 1432;

				//生成塑胶检测区域
				hv_R1.Clear();
				hv_R1[0] = 418;
				hv_R1[1] = 1886;
				hv_R1[2] = 2162;
				hv_R1[3] = 2370;
				hv_R1[4] = 2542;
				hv_R1[5] = 2658;
				hv_R1[6] = 2707;
				hv_R1[7] = 2707;
				hv_R1[8] = 2548;
				hv_R1[9] = 2537;
				hv_R1[10] = 2576;
				hv_R1[11] = 2568;
				hv_R1[12] = 2546;
				hv_R1[13] = 2546;
				hv_R1[14] = 2499;
				hv_R1[15] = 2379;
				hv_R1[16] = 2201;
				hv_R1[17] = 1989;
				hv_R1[18] = 1886;
				hv_R1[19] = 1799;
				hv_R1[20] = 1713;
				hv_R1[21] = 1623;
				hv_R1[22] = 1530;
				hv_R1[23] = 1290;
				hv_R1[24] = 1233;
				hv_R1[25] = 1183;
				hv_R1[26] = 421;
				hv_R1[27] = 418;
				hv_C1.Clear();
				hv_C1[0] = 3774;
				hv_C1[1] = 3734;
				hv_C1[2] = 3643;
				hv_C1[3] = 3516;
				hv_C1[4] = 3323;
				hv_C1[5] = 3022;
				hv_C1[6] = 2649;
				hv_C1[7] = 1903;
				hv_C1[8] = 1960;
				hv_C1[9] = 2479;
				hv_C1[10] = 2486;
				hv_C1[11] = 2928;
				hv_C1[12] = 2960;
				hv_C1[13] = 3247;
				hv_C1[14] = 3303;
				hv_C1[15] = 3365;
				hv_C1[16] = 3505;
				hv_C1[17] = 3588;
				hv_C1[18] = 3586;
				hv_C1[19] = 3670;
				hv_C1[20] = 3692;
				hv_C1[21] = 3672;
				hv_C1[22] = 3585;
				hv_C1[23] = 3591;
				hv_C1[24] = 3691;
				hv_C1[25] = 3719;
				hv_C1[26] = 3719;
				hv_C1[27] = 3774;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R, &hv_ROW);
				TupleGenConst(hv_Length, hv_C, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_PlasticRegion, &ho_PlasticRegion);

				Union1(ho_PlasticRegion, &ho_PlasticRegion);

				//检测塑胶区域缺陷
				OQC84lumen_Plastic_DetectionRegion_1Machine1Station(ho_Image, ho_PlasticRegion,
					hv_ImageNum, (*hv_dt), hv_StrModel, &(*hv_dt));

			}

			if (0 != (int(hv_ImageNum == 27)))
			{
				//1-1-27
				//提取定位点
				GenRectangle1(&ho_ROI_0, 2209.93, 1309.3, 2540.41, 2000);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 30, 30);
				ScaleImage(ho_ImageClosing, &ho_ImageScaled, 4, -200);
				Threshold(ho_ImageScaled, &ho_Region, 0, 60);
				FillUp(ho_Region, &ho_RegionFillUp);
				ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 50, 50);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 60, 120);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
				SmallestRectangle1(ho_RegionTrans, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

				//偏移距离
				hv_R = hv_Row1 - 2318;
				hv_C = hv_Column1 - 1526;

				//生成塑胶检测区域
				hv_R1.Clear();
				hv_R1[0] = 756;
				hv_R1[1] = 771;
				hv_R1[2] = 875;
				hv_R1[3] = 910;
				hv_R1[4] = 920;
				hv_R1[5] = 888;
				hv_R1[6] = 1004;
				hv_R1[7] = 1161;
				hv_R1[8] = 1233;
				hv_R1[9] = 1402;
				hv_R1[10] = 1470;
				hv_R1[11] = 1560;
				hv_R1[12] = 1642;
				hv_R1[13] = 1756;
				hv_R1[14] = 1953;
				hv_R1[15] = 2038;
				hv_R1[16] = 2239;
				hv_R1[17] = 2195;
				hv_R1[18] = 2195;
				hv_R1[19] = 2230;
				hv_R1[20] = 2382;
				hv_R1[21] = 2386;
				hv_R1[22] = 2335;
				hv_R1[23] = 2325;
				hv_R1[24] = 2289;
				hv_R1[25] = 2143;
				hv_R1[26] = 2120;
				hv_R1[27] = 2059;
				hv_R1[28] = 1970;
				hv_R1[29] = 1703;
				hv_R1[30] = 1575;
				hv_R1[31] = 1517;
				hv_R1[32] = 1133;
				hv_R1[33] = 1058;
				hv_R1[34] = 1024;
				hv_R1[35] = 956;
				hv_R1[36] = 779;
				hv_R1[37] = 756;
				hv_C1.Clear();
				hv_C1[0] = 3115;
				hv_C1[1] = 3161;
				hv_C1[2] = 3221;
				hv_C1[3] = 3295;
				hv_C1[4] = 3609;
				hv_C1[5] = 3694;
				hv_C1[6] = 3710;
				hv_C1[7] = 3695;
				hv_C1[8] = 3614;
				hv_C1[9] = 3589;
				hv_C1[10] = 3557;
				hv_C1[11] = 3455;
				hv_C1[12] = 3419;
				hv_C1[13] = 3430;
				hv_C1[14] = 3562;
				hv_C1[15] = 3549;
				hv_C1[16] = 3445;
				hv_C1[17] = 3310;
				hv_C1[18] = 3200;
				hv_C1[19] = 3125;
				hv_C1[20] = 3005;
				hv_C1[21] = 2642;
				hv_C1[22] = 2660;
				hv_C1[23] = 2725;
				hv_C1[24] = 2772;
				hv_C1[25] = 2834;
				hv_C1[26] = 2960;
				hv_C1[27] = 3038;
				hv_C1[28] = 3074;
				hv_C1[29] = 3079;
				hv_C1[30] = 3226;
				hv_C1[31] = 3257;
				hv_C1[32] = 3228;
				hv_C1[33] = 3164;
				hv_C1[34] = 3064;
				hv_C1[35] = 3025;
				hv_C1[36] = 3047;
				hv_C1[37] = 3115;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R, &hv_ROW);
				TupleGenConst(hv_Length, hv_C + 60, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_PlasticRegion, &ho_PlasticRegion);

				Union1(ho_PlasticRegion, &ho_PlasticRegion);

				//检测塑胶区域缺陷
				//OQC84lumen_Plastic_DetectionRegion_1Machine1Station (Image, PlasticRegion, ImageNum, dt, StrModel, dt)

			}

			if (0 != (int(hv_ImageNum == 28)))
			{
				//1-1-28
				//提取定位点
				GenRectangle1(&ho_ROI_0, 1000, 2368.63, 2042.46, 3132.4);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 30, 30);
				ScaleImage(ho_ImageClosing, &ho_ImageScaled, 4, -300);
				Threshold(ho_ImageScaled, &ho_Region, 0, 60);
				FillUp(ho_Region, &ho_RegionFillUp);
				ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 50, 50);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 60, 60);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
				SmallestRectangle1(ho_RegionTrans, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

				//偏移距离
				hv_R = hv_Row1 - 1170;
				hv_C = hv_Column1 - 2600;

				//生成塑胶检测区域
				hv_R1.Clear();
				hv_R1[0] = 1251;
				hv_R1[1] = 1364;
				hv_R1[2] = 1389;
				hv_R1[3] = 1530;
				hv_R1[4] = 1557;
				hv_R1[5] = 1647;
				hv_R1[6] = 1847;
				hv_R1[7] = 1985;
				hv_R1[8] = 2148;
				hv_R1[9] = 2376;
				hv_R1[10] = 2425;
				hv_R1[11] = 2443;
				hv_R1[12] = 2404;
				hv_R1[13] = 2331;
				hv_R1[14] = 2159;
				hv_R1[15] = 2086;
				hv_R1[16] = 2018;
				hv_R1[17] = 2014;
				hv_R1[18] = 1958;
				hv_R1[19] = 1732;
				hv_R1[20] = 1611;
				hv_R1[21] = 1347;
				hv_R1[22] = 1277;
				hv_R1[23] = 1251;
				hv_C1.Clear();
				hv_C1[0] = 610;
				hv_C1[1] = 771;
				hv_C1[2] = 1307;
				hv_C1[3] = 1495;
				hv_C1[4] = 1724;
				hv_C1[5] = 1841;
				hv_C1[6] = 1930;
				hv_C1[7] = 1926;
				hv_C1[8] = 1797;
				hv_C1[9] = 1784;
				hv_C1[10] = 1689;
				hv_C1[11] = 1110;
				hv_C1[12] = 1018;
				hv_C1[13] = 983;
				hv_C1[14] = 997;
				hv_C1[15] = 966;
				hv_C1[16] = 855;
				hv_C1[17] = 684;
				hv_C1[18] = 628;
				hv_C1[19] = 616;
				hv_C1[20] = 541;
				hv_C1[21] = 497;
				hv_C1[22] = 529;
				hv_C1[23] = 610;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R, &hv_ROW);
				TupleGenConst(hv_Length, hv_C, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_PlasticRegion, &ho_PlasticRegion);

				Union1(ho_PlasticRegion, &ho_PlasticRegion);

				//检测塑胶区域缺陷
				//OQC84lumen_Plastic_DetectionRegion_1Machine1Station (Image, PlasticRegion, ImageNum, dt, StrModel, dt)

			}

			if (0 != (int(hv_ImageNum == 29)))
			{
				//1-1-29
				//提取定位点
				GenRectangle1(&ho_ROI_0, 1000, 2368.63, 2042.46, 3132.4);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 30, 30);
				ScaleImage(ho_ImageClosing, &ho_ImageScaled, 4, -300);
				Threshold(ho_ImageScaled, &ho_Region, 0, 60);
				FillUp(ho_Region, &ho_RegionFillUp);
				ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 50, 50);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 60, 60);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
				SmallestRectangle1(ho_RegionTrans, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

				//偏移距离
				hv_R = hv_Row1 - 1121;
				hv_C = hv_Column1 - 2543;

				//生成塑胶检测区域
				hv_R1.Clear();
				hv_R1[0] = 408;
				hv_R1[1] = 718;
				hv_R1[2] = 776;
				hv_R1[3] = 1549;
				hv_R1[4] = 1615;
				hv_R1[5] = 1862;
				hv_R1[6] = 1951;
				hv_R1[7] = 2150;
				hv_R1[8] = 2346;
				hv_R1[9] = 2525;
				hv_R1[10] = 2606;
				hv_R1[11] = 2627;
				hv_R1[12] = 2609;
				hv_R1[13] = 2557;
				hv_R1[14] = 2554;
				hv_R1[15] = 2575;
				hv_R1[16] = 2718;
				hv_R1[17] = 2727;
				hv_R1[18] = 2691;
				hv_R1[19] = 2564;
				hv_R1[20] = 2390;
				hv_R1[21] = 2294;
				hv_R1[22] = 2143;
				hv_R1[23] = 1759;
				hv_R1[24] = 411;
				hv_R1[25] = 408;
				hv_C1.Clear();
				hv_C1[0] = 393;
				hv_C1[1] = 396;
				hv_C1[2] = 359;
				hv_C1[3] = 362;
				hv_C1[4] = 396;
				hv_C1[5] = 404;
				hv_C1[6] = 457;
				hv_C1[7] = 463;
				hv_C1[8] = 556;
				hv_C1[9] = 775;
				hv_C1[10] = 920;
				hv_C1[11] = 1006;
				hv_C1[12] = 1091;
				hv_C1[13] = 1124;
				hv_C1[14] = 2203;
				hv_C1[15] = 2243;
				hv_C1[16] = 2243;
				hv_C1[17] = 1425;
				hv_C1[18] = 1068;
				hv_C1[19] = 766;
				hv_C1[20] = 549;
				hv_C1[21] = 475;
				hv_C1[22] = 405;
				hv_C1[23] = 308;
				hv_C1[24] = 314;
				hv_C1[25] = 393;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R, &hv_ROW);
				TupleGenConst(hv_Length, hv_C, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_PlasticRegion, &ho_PlasticRegion);

				Union1(ho_PlasticRegion, &ho_PlasticRegion);

				//检测塑胶区域缺陷
				OQC84lumen_Plastic_DetectionRegion_1Machine1Station(ho_Image, ho_PlasticRegion,
					hv_ImageNum, (*hv_dt), hv_StrModel, &(*hv_dt));

			}

			if (0 != (int(hv_ImageNum == 30)))
			{
				//1-1-30
				//提取定位点
				GenRectangle1(&ho_ROI_0, 698.364, 3408.97, 1426.14, 4136.67);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 30, 30);
				ScaleImage(ho_ImageClosing, &ho_ImageScaled, 4, -300);
				Threshold(ho_ImageScaled, &ho_Region, 0, 60);
				FillUp(ho_Region, &ho_RegionFillUp);
				ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 50, 50);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 60, 60);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
				SmallestRectangle1(ho_RegionTrans, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

				//偏移距离
				hv_R = hv_Row1 - 762;
				hv_C = hv_Column1 - 3466;

				//生成塑胶检测区域
				hv_R1.Clear();
				hv_R1[0] = 587;
				hv_R1[1] = 1327;
				hv_R1[2] = 1410;
				hv_R1[3] = 2519;
				hv_R1[4] = 2692;
				hv_R1[5] = 2694;
				hv_R1[6] = 2658;
				hv_R1[7] = 2628;
				hv_R1[8] = 587;
				hv_R1[9] = 587;
				hv_C1.Clear();
				hv_C1[0] = 372;
				hv_C1[1] = 389;
				hv_C1[2] = 433;
				hv_C1[3] = 436;
				hv_C1[4] = 390;
				hv_C1[5] = 335;
				hv_C1[6] = 324;
				hv_C1[7] = 279;
				hv_C1[8] = 257;
				hv_C1[9] = 372;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R, &hv_ROW);
				TupleGenConst(hv_Length, hv_C, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_PlasticRegion, &ho_PlasticRegion);

				Union1(ho_PlasticRegion, &ho_PlasticRegion);

				//检测塑胶区域缺陷
				OQC84lumen_Plastic_DetectionRegion_1Machine1Station(ho_Image, ho_PlasticRegion,
					hv_ImageNum, (*hv_dt), hv_StrModel, &(*hv_dt));

			}

			if (0 != (int(hv_ImageNum == 32)))
			{
				//1-1-32
				//提取定位点
				GenRectangle1(&ho_ROI_0, 1101.51, 2298.58, 2285.47, 2742.82);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 30, 30);
				ScaleImage(ho_ImageClosing, &ho_ImageScaled, 4, -400);
				Threshold(ho_ImageScaled, &ho_Region, 0, 60);
				FillUp(ho_Region, &ho_RegionFillUp);
				ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 50, 50);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 60, 120);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
				MoveRegion(ho_RegionTrans, &ho_RegionMoved, 0, 150);
				Difference(ho_RegionOpening, ho_RegionMoved, &ho_RegionDifference);
				ShapeTrans(ho_RegionDifference, &ho_RegionTrans1, "convex");
				SmallestRectangle1(ho_RegionTrans1, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

				//偏移距离
				hv_R = hv_Row1 - 1295;
				hv_C = hv_Column1 - 2420;

				//生成塑胶检测区域
				hv_R1.Clear();
				hv_R1[0] = 595;
				hv_R1[1] = 599;
				hv_R1[2] = 618;
				hv_R1[3] = 629;
				hv_R1[4] = 616;
				hv_R1[5] = 643;
				hv_R1[6] = 627;
				hv_R1[7] = 663;
				hv_R1[8] = 754;
				hv_R1[9] = 775;
				hv_R1[10] = 817;
				hv_R1[11] = 855;
				hv_R1[12] = 907;
				hv_R1[13] = 997;
				hv_R1[14] = 1094;
				hv_R1[15] = 1134;
				hv_R1[16] = 1277;
				hv_R1[17] = 1356;
				hv_R1[18] = 1561;
				hv_R1[19] = 1592;
				hv_R1[20] = 1654;
				hv_R1[21] = 1772;
				hv_R1[22] = 1847;
				hv_R1[23] = 2251;
				hv_R1[24] = 2276;
				hv_R1[25] = 1508;
				hv_R1[26] = 1302;
				hv_R1[27] = 1043;
				hv_R1[28] = 869;
				hv_R1[29] = 700;
				hv_R1[30] = 660;
				hv_R1[31] = 602;
				hv_R1[32] = 595;
				hv_C1.Clear();
				hv_C1[0] = 1933;
				hv_C1[1] = 2990;
				hv_C1[2] = 2981;
				hv_C1[3] = 2799;
				hv_C1[4] = 1962;
				hv_C1[5] = 1818;
				hv_C1[6] = 1698;
				hv_C1[7] = 1623;
				hv_C1[8] = 1557;
				hv_C1[9] = 1050;
				hv_C1[10] = 1028;
				hv_C1[11] = 959;
				hv_C1[12] = 934;
				hv_C1[13] = 752;
				hv_C1[14] = 654;
				hv_C1[15] = 577;
				hv_C1[16] = 534;
				hv_C1[17] = 534;
				hv_C1[18] = 537;
				hv_C1[19] = 494;
				hv_C1[20] = 471;
				hv_C1[21] = 476;
				hv_C1[22] = 524;
				hv_C1[23] = 524;
				hv_C1[24] = 359;
				hv_C1[25] = 374;
				hv_C1[26] = 402;
				hv_C1[27] = 519;
				hv_C1[28] = 660;
				hv_C1[29] = 916;
				hv_C1[30] = 1054;
				hv_C1[31] = 1509;
				hv_C1[32] = 1933;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R, &hv_ROW);
				TupleGenConst(hv_Length, hv_C, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_PlasticRegion, &ho_PlasticRegion);

				Union1(ho_PlasticRegion, &ho_PlasticRegion);

				//检测塑胶区域缺陷
				OQC84lumen_Plastic_DetectionRegion_1Machine1Station(ho_Image, ho_PlasticRegion,
					hv_ImageNum, (*hv_dt), hv_StrModel, &(*hv_dt));

			}

			//*************************************一工位33-35 检测LC底板区域*************************
			if (0 != (int(hv_ImageNum == 33)))
			{
				//1-1-33
				//提取定位点
				GenRectangle1(&ho_ROI_0, 500, 9.13291, 2002.67, 550);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 60, 60);
				ScaleImage(ho_ImageClosing, &ho_ImageScaled, 3, -100);
				Threshold(ho_ImageScaled, &ho_Region, 0, 30);
				FillUp(ho_Region, &ho_RegionFillUp);
				ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 50, 50);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 60, 100);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
				MoveRegion(ho_RegionTrans, &ho_RegionMoved, 0, -150);
				Difference(ho_RegionOpening, ho_RegionMoved, &ho_RegionDifference);
				ShapeTrans(ho_RegionDifference, &ho_RegionTrans1, "rectangle1");
				SmallestRectangle1(ho_RegionTrans1, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

				//偏移距离
				hv_R = hv_Row1 - 697;
				hv_C = hv_Column2 - 230;

				//生成LC底板检测区域
				hv_R1.Clear();
				hv_R1[0] = 315;
				hv_R1[1] = 344;
				hv_R1[2] = 759;
				hv_R1[3] = 782;
				hv_R1[4] = 865;
				hv_R1[5] = 1031;
				hv_R1[6] = 1256;
				hv_R1[7] = 1687;
				hv_R1[8] = 2045;
				hv_R1[9] = 2309;
				hv_R1[10] = 2587;
				hv_R1[11] = 2905;
				hv_R1[12] = 2891;
				hv_R1[13] = 2799;
				hv_R1[14] = 2397;
				hv_R1[15] = 370;
				hv_R1[16] = 337;
				hv_R1[17] = 315;
				hv_C1.Clear();
				hv_C1[0] = 3408;
				hv_C1[1] = 3436;
				hv_C1[2] = 3437;
				hv_C1[3] = 3214;
				hv_C1[4] = 2875;
				hv_C1[5] = 2473;
				hv_C1[6] = 2109;
				hv_C1[7] = 1640;
				hv_C1[8] = 1377;
				hv_C1[9] = 1239;
				hv_C1[10] = 1129;
				hv_C1[11] = 1050;
				hv_C1[12] = 626;
				hv_C1[13] = 595;
				hv_C1[14] = 596;
				hv_C1[15] = 591;
				hv_C1[16] = 613;
				hv_C1[17] = 3408;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R, &hv_ROW);
				TupleGenConst(hv_Length, hv_C, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGLCRegion, &ho_CGLCRegion);

				//检测LC区域缺陷 脏污 划伤
				OQC84lumen_CGLC_DetectionRegion_1Machine1Station(ho_Image, ho_CGLCRegion,
					hv_ImageNum, (*hv_dt), &(*hv_dt));

			}

			if (0 != (int(hv_ImageNum == 34)))
			{
				//1-1-34
				//提取定位点
				GenRectangle1(&ho_ROI_0, 145.728, 1503.31, 666.665, 2881.87);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 60, 60);
				ScaleImage(ho_ImageClosing, &ho_ImageScaled, 2, -100);
				Threshold(ho_ImageScaled, &ho_Region, 0, 60);
				FillUp(ho_Region, &ho_RegionFillUp);
				ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 50, 50);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 60, 60);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
				SmallestRectangle1(ho_RegionTrans, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

				//偏移距离
				hv_R = hv_Row2 - 530;
				hv_C = hv_Column1 - 1689;

				//生成LC底板检测区域
				hv_R1.Clear();
				hv_R1[0] = 284;
				hv_R1[1] = 296;
				hv_R1[2] = 383;
				hv_R1[3] = 446;
				hv_R1[4] = 887;
				hv_R1[5] = 944;
				hv_R1[6] = 2780;
				hv_R1[7] = 2821;
				hv_R1[8] = 2853;
				hv_R1[9] = 2846;
				hv_R1[10] = 2805;
				hv_R1[11] = 2730;
				hv_R1[12] = 2437;
				hv_R1[13] = 2108;
				hv_R1[14] = 1764;
				hv_R1[15] = 1433;
				hv_R1[16] = 1224;
				hv_R1[17] = 297;
				hv_R1[18] = 291;
				hv_R1[19] = 462;
				hv_R1[20] = 547;
				hv_R1[21] = 581;
				hv_R1[22] = 581;
				hv_R1[23] = 566;
				hv_R1[24] = 475;
				hv_R1[25] = 285;
				hv_R1[26] = 284;
				hv_C1.Clear();
				hv_C1[0] = 3282;
				hv_C1[1] = 3328;
				hv_C1[2] = 3374;
				hv_C1[3] = 3487;
				hv_C1[4] = 3943;
				hv_C1[5] = 3978;
				hv_C1[6] = 3971;
				hv_C1[7] = 3943;
				hv_C1[8] = 2708;
				hv_C1[9] = 1221;
				hv_C1[10] = 1140;
				hv_C1[11] = 1078;
				hv_C1[12] = 967;
				hv_C1[13] = 818;
				hv_C1[14] = 595;
				hv_C1[15] = 305;
				hv_C1[16] = 40;
				hv_C1[17] = 40;
				hv_C1[18] = 1648;
				hv_C1[19] = 1654;
				hv_C1[20] = 1706;
				hv_C1[21] = 1796;
				hv_C1[22] = 2025;
				hv_C1[23] = 2628;
				hv_C1[24] = 2715;
				hv_C1[25] = 2725;
				hv_C1[26] = 3282;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R, &hv_ROW);
				TupleGenConst(hv_Length, hv_C, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGLCRegion, &ho_CGLCRegion);
				ErosionRectangle1(ho_CGLCRegion, &ho_CGLCRegion, 30, 60);

				//检测LC区域缺陷 脏污 划伤
				OQC84lumen_CGLC_DetectionRegion_1Machine1Station(ho_Image, ho_CGLCRegion,
					hv_ImageNum, (*hv_dt), &(*hv_dt));

			}

			if (0 != (int(hv_ImageNum == 35)))
			{
				//1-1-35
				//提取定位点
				GenRectangle1(&ho_ROI_0, 2292.72, 422.572, 2859.62, 2030.89);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 60, 60);
				ScaleImage(ho_ImageClosing, &ho_ImageScaled, 2, -100);
				Threshold(ho_ImageScaled, &ho_Region, 0, 60);
				FillUp(ho_Region, &ho_RegionFillUp);
				ClosingRectangle1(ho_RegionFillUp, &ho_RegionClosing, 50, 50);
				OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 60, 60);
				ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
				SmallestRectangle1(ho_RegionTrans, &hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);

				//偏移距离
				hv_R = hv_Row1 - 2497;
				hv_C = hv_Column1 - 632;

				//生成LC底板检测区域
				hv_R1.Clear();
				hv_R1[0] = 159;
				hv_R1[1] = 160;
				hv_R1[2] = 195;
				hv_R1[3] = 385;
				hv_R1[4] = 528;
				hv_R1[5] = 2082;
				hv_R1[6] = 2086;
				hv_R1[7] = 2171;
				hv_R1[8] = 2358;
				hv_R1[9] = 2620;
				hv_R1[10] = 2665;
				hv_R1[11] = 2730;
				hv_R1[12] = 2746;
				hv_R1[13] = 2533;
				hv_R1[14] = 2478;
				hv_R1[15] = 2455;
				hv_R1[16] = 2463;
				hv_R1[17] = 2496;
				hv_R1[18] = 2557;
				hv_R1[19] = 2727;
				hv_R1[20] = 2717;
				hv_R1[21] = 2554;
				hv_R1[22] = 2456;
				hv_R1[23] = 1784;
				hv_R1[24] = 1681;
				hv_R1[25] = 1478;
				hv_R1[26] = 1126;
				hv_R1[27] = 843;
				hv_R1[28] = 269;
				hv_R1[29] = 215;
				hv_R1[30] = 166;
				hv_R1[31] = 159;
				hv_C1.Clear();
				hv_C1[0] = 3810;
				hv_C1[1] = 3924;
				hv_C1[2] = 3966;
				hv_C1[3] = 3966;
				hv_C1[4] = 3995;
				hv_C1[5] = 3996;
				hv_C1[6] = 3741;
				hv_C1[7] = 3611;
				hv_C1[8] = 3563;
				hv_C1[9] = 3569;
				hv_C1[10] = 3510;
				hv_C1[11] = 3482;
				hv_C1[12] = 1906;
				hv_C1[13] = 1883;
				hv_C1[14] = 1828;
				hv_C1[15] = 1740;
				hv_C1[16] = 744;
				hv_C1[17] = 676;
				hv_C1[18] = 632;
				hv_C1[19] = 619;
				hv_C1[20] = 224;
				hv_C1[21] = 130;
				hv_C1[22] = 107;
				hv_C1[23] = 121;
				hv_C1[24] = 195;
				hv_C1[25] = 440;
				hv_C1[26] = 718;
				hv_C1[27] = 886;
				hv_C1[28] = 1107;
				hv_C1[29] = 1161;
				hv_C1[30] = 1291;
				hv_C1[31] = 3810;
				TupleLength(hv_C1, &hv_Length);
				TupleGenConst(hv_Length, hv_R, &hv_ROW);
				TupleGenConst(hv_Length, hv_C, &hv_COL);
				TupleAdd(hv_R1, hv_ROW, &hv_R1);
				TupleAdd(hv_C1, hv_COL, &hv_C1);
				GenRegionPolygonFilled(&ho_Region1, hv_R1, hv_C1);
				ConcatObj(ho_Region1, ho_CGLCRegion, &ho_CGLCRegion);
				ErosionRectangle1(ho_CGLCRegion, &ho_CGLCRegion, 11, 11);

				//检测LC区域缺陷 脏污 划伤
				OQC84lumen_CGLC_DetectionRegion_1Machine1Station(ho_Image, ho_CGLCRegion,
					hv_ImageNum, (*hv_dt), &(*hv_dt));

			}
		}

		//***************************删除缺陷字典里的空区域*********************
		GetDictParam((*hv_dt), "keys", HTuple(), &hv_GenParamValue);
		{
			HTuple end_val1688 = (hv_GenParamValue.TupleLength()) - 1;
			HTuple step_val1688 = 1;
			for (hv_Index = 0; hv_Index.Continue(end_val1688, step_val1688); hv_Index += step_val1688)
			{
				Union1((*hv_dt).TupleGetDictObject(HTuple(hv_GenParamValue[hv_Index])), &ho_RegionUnion
					);
				AreaCenter(ho_RegionUnion, &hv_Area, &hv_Row, &hv_Column);
				if (0 != (int(hv_Area == 0)))
				{
					RemoveDictKey((*hv_dt), HTuple(hv_GenParamValue[hv_Index]));
				}
				else if (0 != hv_Area)
				{
					Connection(ho_RegionUnion, &ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_GenParamValue[hv_Index]));
				}
			}
		}
		return 1;

	}
	catch (HException& ExceptionHandler)
	{
		HTuple err;
		ExceptionHandler.ToHTuple(&err);
		string strErr = err.ToString();
		string strerr = std::to_string(hv_ProNum.I()) + "-" + std::to_string(hv_StaNum.I()) + "_" + std::to_string(hv_CamNum.I()) + "_" + std::to_string(hv_ImageNum.I()) + "ImageProcessOQC84lumen4ColourDefects1Machine1Station error:" + strErr;
		VeErrMessage.push_back(QString::fromStdString(strerr));
	}
	reg = -1;
	return -1;
}

//四色OQC84内腔一工位检测缺陷算法-A基准区域
int JSZCAlgorithmsDLLOQC::OQC84lumen_AJZ_DetectionRegion_1Machine1Station(HObject ho_Image, HObject ho_AJZRegion,
	HTuple hv_ImageNum, HTuple hv_inputdt, HTuple *hv_dt)
{

	// Local iconic variables
	HObject  ho_EmptyRegion, ho_ImageReduced, ho_Region;
	HObject  ho_RegionClosing, ho_RegionOpening, ho_Region1;
	HObject  ho_RegionClosing1, ho_RegionOpening1, ho_ConnectedRegions;
	HObject  ho_ObjectSelected, ho_RegionDilation1, ho_RegionDifference;
	HObject  ho_ConnectedRegions1, ho_SortedRegions, ho_ImageReduced1;
	HObject  ho_ImageMedian1, ho_ImageMedian2, ho_RegionDynThresh;
	HObject  ho_SelectedRegions1, ho_SelectedRegions, ho_RegionUnion;
	HObject  ho_Object, ho___Tmp_Obj_0;

	// Local control variables
	HTuple  hv_Number, hv_d, hv_s, hv_g, hv_GenParamValue;
	HTuple  hv_Index, hv_i, hv_Exception;

	try
	{
		//缺陷字典输出初始化
		CreateDict(&(*hv_dt));
		GenEmptyRegion(&ho_EmptyRegion);

		//检测LC区域
		ReduceDomain(ho_Image, ho_AJZRegion, &ho_ImageReduced);

		//堆漆DT62_T 初始化
		SetDictObject(ho_EmptyRegion, (*hv_dt), "DT62_T");

		//提取A基准金属区域
		Threshold(ho_ImageReduced, &ho_Region, 128, 255);
		ClosingRectangle1(ho_Region, &ho_RegionClosing, 30, 30);
		OpeningRectangle1(ho_RegionClosing, &ho_RegionOpening, 10, 10);

		//提取A基准喷漆区域
		Threshold(ho_ImageReduced, &ho_Region1, 0, 80);
		ClosingRectangle1(ho_Region1, &ho_RegionClosing1, 30, 10);
		OpeningRectangle1(ho_RegionClosing1, &ho_RegionOpening1, 300, 20);

		//减去CGRT区域
		Connection(ho_AJZRegion, &ho_ConnectedRegions);
		SelectShape(ho_ConnectedRegions, &ho_ObjectSelected, "rb", "and", 0, 30);
		DilationRectangle1(ho_ObjectSelected, &ho_RegionDilation1, 1, 25);
		Difference(ho_RegionOpening1, ho_RegionDilation1, &ho_RegionDifference);

		Connection(ho_RegionDifference, &ho_ConnectedRegions1);
		CountObj(ho_ConnectedRegions1, &hv_Number);
		if (0 != (int(hv_Number > 1)))
		{
			SortRegion(ho_ConnectedRegions1, &ho_SortedRegions, "last_point", "true", "row");
			SelectObj(ho_SortedRegions, &ho_RegionDifference, 2);
		}
		ReduceDomain(ho_Image, ho_RegionDifference, &ho_ImageReduced1);

		//检测堆漆/白色缺陷 n[23]:堆漆       DT62_T
		MedianRect(ho_ImageReduced1, &ho_ImageMedian1, 5, 5);
		MedianRect(ho_ImageReduced1, &ho_ImageMedian2, 100, 20);
		DynThreshold(ho_ImageMedian1, ho_ImageMedian2, &ho_RegionDynThresh, 35, "light");
		Connection(ho_RegionDynThresh, &ho_ConnectedRegions1);
		SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions1, "area", "and", 180, 99999);
		CountObj(ho_SelectedRegions1, &hv_Number);
		if (0 != hv_Number)
		{
			ConcatObj((*hv_dt).TupleGetDictObject("DT62_T"), ho_SelectedRegions1, &ho___Tmp_Obj_0
				);
			SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT62_T");
		}

		//检测堆漆/黑色缺陷 n[23]:堆漆       DT62_T
		DynThreshold(ho_ImageMedian1, ho_ImageMedian2, &ho_RegionDynThresh, 45, "dark");
		Connection(ho_RegionDynThresh, &ho_ConnectedRegions1);
		SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions1, "area", "and", 120, 99999);
		CountObj(ho_SelectedRegions1, &hv_Number);
		if (0 != (HTuple(int(hv_Number < 5)).TupleAnd(int(hv_Number>0))))
		{
			ConcatObj((*hv_dt).TupleGetDictObject("DT62_T"), ho_SelectedRegions1, &ho___Tmp_Obj_0
				);
			SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT62_T");
		}

		//***************************二次筛选缺陷*****************************
		//缺陷名称
		hv_d = "DT62_T";
		//面积限度
		hv_s = 10;
		//灰度限度
		hv_g = 60;

		GetDictParam((*hv_dt), "keys", HTuple(), &hv_GenParamValue);
		{
			HTuple end_val66 = (hv_GenParamValue.TupleLength()) - 1;
			HTuple step_val66 = 1;
			for (hv_Index = 0; hv_Index.Continue(end_val66, step_val66); hv_Index += step_val66)
			{
				TupleFind(hv_d, HTuple(hv_GenParamValue[hv_Index]), &hv_i);
				Connection((*hv_dt).TupleGetDictObject(HTuple(hv_GenParamValue[hv_Index])),
					&ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", HTuple(hv_s[hv_i]),
					9999999);
				SelectGray(ho_SelectedRegions, ho_Image, &ho_SelectedRegions, "mean", "and",
					0, HTuple(hv_g[hv_i]));
				Union1(ho_SelectedRegions, &ho_RegionUnion);
				CountObj(ho_RegionUnion, &hv_Number);
				if (0 != hv_Number)
				{
					Connection(ho_RegionUnion, &ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_GenParamValue[hv_Index]));
				}
				else
				{
					RemoveDictKey((*hv_dt), HTuple(hv_GenParamValue[hv_Index]));
				}
			}
		}

		//***************************合并缺陷字典*****************************
		GetDictParam(hv_inputdt, "keys", HTuple(), &hv_GenParamValue);
		if (0 != (hv_GenParamValue.TupleLength()))
		{
			{
				HTuple end_val84 = (hv_GenParamValue.TupleLength()) - 1;
				HTuple step_val84 = 1;
				for (hv_Index = 0; hv_Index.Continue(end_val84, step_val84); hv_Index += step_val84)
				{
					GetDictObject(&ho_Object, hv_inputdt, HTuple(hv_GenParamValue[hv_Index]));
					//缺陷字典区域 初始化
					SetDictObject(ho_EmptyRegion, (*hv_dt), HTuple(hv_GenParamValue[hv_Index]));
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_GenParamValue[hv_Index])),
						ho_Object, &ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_GenParamValue[hv_Index]));
				}
			}
		}
		return 1;

	}
	catch (HException& ExceptionHandler)
	{
		HTuple err;
		ExceptionHandler.ToHTuple(&err);
		string strErr = err.ToString();
		string strerr = "OQC84lumen_AJZ_DetectionRegion_1Machine1Station error:" + strErr;
		VeErrMessage.push_back(QString::fromStdString(strerr));
	}
	reg = -1;
	return -1;
}

//四色OQC84内腔一工位检测缺陷算法-CGLC区域
int JSZCAlgorithmsDLLOQC::OQC84lumen_CGLC_DetectionRegion_1Machine1Station(HObject ho_Image, HObject ho_CGLCRegion,
	HTuple hv_ImageNum, HTuple hv_inputdt, HTuple *hv_dt)
{

	// Local iconic variables
	HObject  ho_EmptyRegion, ho_ROI_0, ho_ConnectedRegions1;
	HObject  ho_SortedRegions, ho_ImageReduced, ho_ImageMedian;
	HObject  ho_ImageScaled, ho_Region, ho_ConnectedRegions;
	HObject  ho_SelectedRegions, ho_ImageMedian1, ho_RegionDynThresh;
	HObject  ho_RegionOpening, ho_ImageClosing, ho_ImageClosing1;
	HObject  ho_ImageSub, ho_Region1, ho_RegionClosing, ho_ImageReduced1;
	HObject  ho_RegionUnion, ho_RegionTrans, ho_ImageReduced2;
	HObject  ho_RegionMoved, ho_RegionDifference, ho_Object;
	HObject  ho___Tmp_Obj_0;

	// Local control variables
	HTuple  hv_Number, hv_Area, hv_Max, hv_d, hv_s;
	HTuple  hv_g, hv_GenParamValue, hv_Index, hv_i, hv_Exception;

	try
	{
		//缺陷字典输出初始化
		CreateDict(&(*hv_dt));
		GenEmptyRegion(&ho_EmptyRegion);

		if (0 != (int(hv_ImageNum == 3)))
		{
			GenRectangle1(&ho_ROI_0, 1163.47, 2009.89, 1699.83, 2399.94);
			Difference(ho_CGLCRegion, ho_ROI_0, &ho_CGLCRegion);
		}
		else if (0 != (int(hv_ImageNum == 9)))
		{
			//删除二维码区域
			GenRectangle1(&ho_ROI_0, 1276.04, 2010.44, 1975.12, 2693.26);
			Difference(ho_CGLCRegion, ho_ROI_0, &ho_CGLCRegion);
		}
		else if (0 != (int(hv_ImageNum == 12)))
		{
			//分离LC区域和组件区域
			Connection(ho_CGLCRegion, &ho_ConnectedRegions1);
			SortRegion(ho_ConnectedRegions1, &ho_SortedRegions, "first_point", "true",
				"row");
			//LC区域
			SelectObj(ho_SortedRegions, &ho_CGLCRegion, 2);
			//组件区域
			SelectObj(ho_SortedRegions, &ho_ROI_0, 1);
		}
		else if (0 != (int(hv_ImageNum == 17)))
		{
			//分离LC区域和组件区域
			Connection(ho_CGLCRegion, &ho_ConnectedRegions1);
			SortRegion(ho_ConnectedRegions1, &ho_SortedRegions, "first_point", "true",
				"row");
			//LC区域
			SelectObj(ho_SortedRegions, &ho_CGLCRegion, 1);
			//组件区域
			SelectObj(ho_SortedRegions, &ho_ROI_0, 2);
		}
		else if (0 != (int(hv_ImageNum == 21)))
		{
			//删除多字体区域
			GenRectangle1(&ho_ROI_0, 1504.26, 1990.39, 2462.67, 2332.58);
			Difference(ho_CGLCRegion, ho_ROI_0, &ho_CGLCRegion);
		}
		//检测LC区域
		ReduceDomain(ho_Image, ho_CGLCRegion, &ho_ImageReduced);

		//脏污DT51_T 初始化
		SetDictObject(ho_EmptyRegion, (*hv_dt), "DT51_T");

		//检测残胶/脏污/大面黑色缺陷1  脏污      DT51_T
		MedianRect(ho_ImageReduced, &ho_ImageMedian, 10, 10);
		ScaleImage(ho_ImageMedian, &ho_ImageScaled, 10.01, -400);
		Threshold(ho_ImageScaled, &ho_Region, 0, 60);
		Connection(ho_Region, &ho_ConnectedRegions);
		SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, (HTuple("rb").Append("area")),
			"and", (HTuple(5).Append(500)), (HTuple(3e+7).Append(3e+7)));

		//脏污DT51_T 赋值输出
		CountObj(ho_SelectedRegions, &hv_Number);
		if (0 != hv_Number)
		{
			ConcatObj((*hv_dt).TupleGetDictObject("DT51_T"), ho_SelectedRegions, &ho___Tmp_Obj_0
				);
			SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT51_T");
		}

		//检测残胶/脏污/大面黑色缺陷2  脏污      DT51_T
		MedianRect(ho_ImageReduced, &ho_ImageMedian1, 300, 300);
		DynThreshold(ho_ImageMedian, ho_ImageMedian1, &ho_RegionDynThresh, 15, "dark");
		OpeningRectangle1(ho_RegionDynThresh, &ho_RegionOpening, 20, 20);
		Connection(ho_RegionOpening, &ho_ConnectedRegions);
		SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, (HTuple("rb").Append("area")),
			"and", (HTuple(18).Append(1000)), (HTuple(3e+7).Append(3e+7)));

		//脏污DT51_T 赋值输出
		CountObj(ho_SelectedRegions, &hv_Number);
		if (0 != hv_Number)
		{
			ConcatObj((*hv_dt).TupleGetDictObject("DT51_T"), ho_SelectedRegions, &ho___Tmp_Obj_0
				);
			SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT51_T");
		}

		if (0 != (int(hv_ImageNum < 30)))
		{
			//划伤DT42_T 初始化
			SetDictObject(ho_EmptyRegion, (*hv_dt), "DT42_T");

			//检测划伤  划伤       DT42_T
			GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 7, 7);
			MedianRect(ho_ImageClosing, &ho_ImageMedian, 5, 5);
			GrayClosingRect(ho_ImageMedian, &ho_ImageClosing1, 30, 30);
			SubImage(ho_ImageMedian, ho_ImageClosing1, &ho_ImageSub, 1.5, 128);
			Threshold(ho_ImageSub, &ho_Region1, 0, 50);
			ClosingCircle(ho_Region1, &ho_RegionClosing, 3.5);
			Connection(ho_RegionClosing, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, (HTuple("rb").Append("area")),
				"and", (HTuple(12).Append(1000)), (HTuple(3e+7).Append(3e+7)));

			//划伤DT42_T 赋值输出
			CountObj(ho_SelectedRegions, &hv_Number);
			if (0 != hv_Number)
			{
				ConcatObj((*hv_dt).TupleGetDictObject("DT42_T"), ho_SelectedRegions, &ho___Tmp_Obj_0
					);
				SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT42_T");
			}
		}

		if (0 != (int(hv_ImageNum > 32)))
		{
			//笔印DT125_T 初始化
			SetDictObject(ho_EmptyRegion, (*hv_dt), "DT125_T");

			//检测笔印     DT125_T
			MedianRect(ho_ImageReduced, &ho_ImageMedian1, 200, 200);
			DynThreshold(ho_ImageMedian, ho_ImageMedian1, &ho_RegionDynThresh, 25, "dark");
			OpeningRectangle1(ho_RegionDynThresh, &ho_RegionOpening, 5, 15);
			Connection(ho_RegionOpening, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, ((HTuple("ra").Append("rb")).Append("area")),
				"and", ((HTuple(100).Append(15)).Append(3000)), ((HTuple(3e+7).Append(3e+7)).Append(3e+7)));
			CountObj(ho_SelectedRegions, &hv_Number);
			if (0 != hv_Number)
			{
				RegionFeatures(ho_SelectedRegions, "area", &hv_Area);
				TupleMax(hv_Area, &hv_Max);

				//笔印DT125_T 赋值输出
				if (0 != (HTuple(int(hv_Number > 5)).TupleOr(int(hv_Max > 6e+4))))
				{
					ConcatObj((*hv_dt).TupleGetDictObject("DT125_T"), ho_SelectedRegions, &ho___Tmp_Obj_0
						);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT125_T");
				}
			}
		}

		if (0 != (int(hv_ImageNum == 17)))
		{
			//检测组件区域
			ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced1);

			//变形DT55_T 初始化
			SetDictObject(ho_EmptyRegion, (*hv_dt), "DT55_T");

			//检测变形     DT55_T
			Threshold(ho_ImageReduced1, &ho_Region, 10, 60);
			OpeningRectangle1(ho_Region, &ho_RegionOpening, 35, 300);
			Connection(ho_RegionOpening, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 800, 3e+5);
			Union1(ho_SelectedRegions, &ho_RegionUnion);
			ShapeTrans(ho_RegionUnion, &ho_RegionTrans, "convex");

			ReduceDomain(ho_Image, ho_RegionTrans, &ho_ImageReduced2);

			Threshold(ho_ImageReduced2, &ho_Region1, 160, 255);
			Connection(ho_Region1, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 1000,
				3e+5);
			CountObj(ho_SelectedRegions, &hv_Number);
			if (0 != hv_Number)
			{
				//变形DT55_T 赋值输出
				ConcatObj((*hv_dt).TupleGetDictObject("DT55_T"), ho_SelectedRegions, &ho___Tmp_Obj_0
					);
				SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT55_T");
			}

			//褶皱DT128_T 初始化
			SetDictObject(ho_EmptyRegion, (*hv_dt), "DT128_T");

			//检测褶皱    DT128_T
			ShapeTrans(ho_RegionUnion, &ho_RegionTrans, "rectangle2");
			MoveRegion(ho_RegionTrans, &ho_RegionMoved, 100, 0);
			Difference(ho_RegionTrans, ho_RegionMoved, &ho_RegionDifference);
			OpeningRectangle1(ho_RegionDifference, &ho_RegionOpening, 30, 30);

			ReduceDomain(ho_Image, ho_RegionOpening, &ho_ImageReduced2);

			Threshold(ho_ImageReduced2, &ho_Region1, 160, 255);
			Connection(ho_Region1, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, (HTuple("row").Append("area")),
				"and", (HTuple(1000).Append(1000)), (HTuple(1700).Append(3e+5)));
			CountObj(ho_SelectedRegions, &hv_Number);
			//褶皱  DT128_T 赋值输出
			if (0 != hv_Number)
			{
				ConcatObj((*hv_dt).TupleGetDictObject("DT128_T"), ho_SelectedRegions, &ho___Tmp_Obj_0
					);
				SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT128_T");
			}
		}

		//***************************二次筛选缺陷*****************************
		//缺陷名称
		hv_d.Clear();
		hv_d[0] = "DT51_T";
		hv_d[1] = "DT42_T";
		hv_d[2] = "DT125_T";
		hv_d[3] = "DT55_T";
		hv_d[4] = "DT128_T";
		//面积限度
		if (0 != (int(hv_ImageNum > 32)))
		{
			hv_s.Clear();
			hv_s[0] = 4000;
			hv_s[1] = 4000;
			hv_s[2] = 3000;
			hv_s[3] = 1000;
			hv_s[4] = 1000;
		}
		else
		{
			hv_s.Clear();
			hv_s[0] = 500;
			hv_s[1] = 50;
			hv_s[2] = 1500;
			hv_s[3] = 1000;
			hv_s[4] = 1000;
		}

		//灰度限度
		if (0 != (int(hv_ImageNum > 32)))
		{
			hv_g.Clear();
			hv_g[0] = 90;
			hv_g[1] = 100;
			hv_g[2] = 180;
			hv_g[3] = 255;
			hv_g[4] = 255;
		}
		else
		{
			hv_g.Clear();
			hv_g[0] = 70;
			hv_g[1] = 85;
			hv_g[2] = 80;
			hv_g[3] = 255;
			hv_g[4] = 255;
		}
		GetDictParam((*hv_dt), "keys", HTuple(), &hv_GenParamValue);
		{
			HTuple end_val178 = (hv_GenParamValue.TupleLength()) - 1;
			HTuple step_val178 = 1;
			for (hv_Index = 0; hv_Index.Continue(end_val178, step_val178); hv_Index += step_val178)
			{
				TupleFind(hv_d, HTuple(hv_GenParamValue[hv_Index]), &hv_i);
				Connection((*hv_dt).TupleGetDictObject(HTuple(hv_GenParamValue[hv_Index])),
					&ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", HTuple(hv_s[hv_i]),
					9999999);
				SelectGray(ho_SelectedRegions, ho_Image, &ho_SelectedRegions, "mean", "and",
					0, HTuple(hv_g[hv_i]));
				Union1(ho_SelectedRegions, &ho_RegionUnion);
				CountObj(ho_RegionUnion, &hv_Number);
				if (0 != hv_Number)
				{
					Connection(ho_RegionUnion, &ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_GenParamValue[hv_Index]));
				}
				else
				{
					RemoveDictKey((*hv_dt), HTuple(hv_GenParamValue[hv_Index]));
				}
			}
		}

		//***************************合并缺陷字典*****************************
		GetDictParam(hv_inputdt, "keys", HTuple(), &hv_GenParamValue);
		if (0 != (hv_GenParamValue.TupleLength()))
		{
			{
				HTuple end_val196 = (hv_GenParamValue.TupleLength()) - 1;
				HTuple step_val196 = 1;
				for (hv_Index = 0; hv_Index.Continue(end_val196, step_val196); hv_Index += step_val196)
				{
					GetDictObject(&ho_Object, hv_inputdt, HTuple(hv_GenParamValue[hv_Index]));
					//缺陷字典区域 初始化
					SetDictObject(ho_EmptyRegion, (*hv_dt), HTuple(hv_GenParamValue[hv_Index]));
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_GenParamValue[hv_Index])),
						ho_Object, &ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_GenParamValue[hv_Index]));
				}
			}
		}
		return 1;

	}
	catch (HException& ExceptionHandler)
	{
		HTuple err;
		ExceptionHandler.ToHTuple(&err);
		string strErr = err.ToString();
		string strerr = "OQC84lumen_CGLC_DetectionRegion_1Machine1Station error:" + strErr;
		VeErrMessage.push_back(QString::fromStdString(strerr));
	}
	reg = -1;
	return -1;
}

//四色OQC84内腔一工位检测缺陷算法-CGLC_Laser区域
int JSZCAlgorithmsDLLOQC::OQC84lumen_CGLC_Laser_DetectionRegion_1Machine1Station(HObject ho_Image, HObject ho_LaserRegion,
	HTuple hv_ImageNum, HTuple hv_inputdt, HTuple *hv_dt)
{

	// Local iconic variables
	HObject  ho_EmptyRegion, ho_ImageReduced, ho_ImageMedian;
	HObject  ho_ImageScaled, ho_Region, ho_ConnectedRegions;
	HObject  ho_SelectedRegions, ho_ImageMedian1, ho_RegionDynThresh;
	HObject  ho_RegionUnion, ho_Object, ho___Tmp_Obj_0;

	// Local control variables
	HTuple  hv_Number, hv_d, hv_s, hv_g, hv_GenParamValue;
	HTuple  hv_Index, hv_i, hv_Exception;

	try
	{
		//缺陷字典输出初始化
		CreateDict(&(*hv_dt));
		GenEmptyRegion(&ho_EmptyRegion);

		//检测LC镭雕区域
		ReduceDomain(ho_Image, ho_LaserRegion, &ho_ImageReduced);

		//脏污DT51_T 初始化
		SetDictObject(ho_EmptyRegion, (*hv_dt), "DT51_T");

		//检测残胶/脏污/大面黑色缺陷1  脏污      DT51_T
		MedianRect(ho_ImageReduced, &ho_ImageMedian, 15, 15);
		ScaleImage(ho_ImageMedian, &ho_ImageScaled, 11.01, -450);
		Threshold(ho_ImageScaled, &ho_Region, 0, 80);
		Connection(ho_Region, &ho_ConnectedRegions);
		SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, (HTuple("rb").Append("area")),
			"and", (HTuple(12).Append(500)), (HTuple(3e+7).Append(3e+7)));

		//脏污DT51_T 赋值输出
		CountObj(ho_SelectedRegions, &hv_Number);
		if (0 != hv_Number)
		{
			ConcatObj((*hv_dt).TupleGetDictObject("DT51_T"), ho_SelectedRegions, &ho___Tmp_Obj_0
				);
			SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT51_T");
		}

		//检测残胶/脏污/大面黑色缺陷2  脏污      DT51_T
		MedianRect(ho_ImageReduced, &ho_ImageMedian1, 100, 200);
		DynThreshold(ho_ImageMedian, ho_ImageMedian1, &ho_RegionDynThresh, 15, "dark");
		Connection(ho_RegionDynThresh, &ho_ConnectedRegions);
		SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, (HTuple("rb").Append("area")),
			"and", (HTuple(12).Append(1000)), (HTuple(3e+7).Append(3e+7)));

		//脏污DT51_T 赋值输出
		CountObj(ho_SelectedRegions, &hv_Number);
		if (0 != hv_Number)
		{
			ConcatObj((*hv_dt).TupleGetDictObject("DT51_T"), ho_SelectedRegions, &ho___Tmp_Obj_0
				);
			SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT51_T");
		}

		//***************************二次筛选缺陷*****************************
		//缺陷名称
		hv_d = "DT51_T";
		//面积限度
		hv_s = 500;
		//灰度限度
		hv_g = 40;

		GetDictParam((*hv_dt), "keys", HTuple(), &hv_GenParamValue);
		{
			HTuple end_val47 = (hv_GenParamValue.TupleLength()) - 1;
			HTuple step_val47 = 1;
			for (hv_Index = 0; hv_Index.Continue(end_val47, step_val47); hv_Index += step_val47)
			{
				TupleFind(hv_d, HTuple(hv_GenParamValue[hv_Index]), &hv_i);
				Connection((*hv_dt).TupleGetDictObject(HTuple(hv_GenParamValue[hv_Index])),
					&ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", HTuple(hv_s[hv_i]),
					9999999);
				SelectGray(ho_SelectedRegions, ho_Image, &ho_SelectedRegions, "mean", "and",
					0, HTuple(hv_g[hv_i]));
				Union1(ho_SelectedRegions, &ho_RegionUnion);
				CountObj(ho_RegionUnion, &hv_Number);
				if (0 != hv_Number)
				{
					Connection(ho_RegionUnion, &ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_GenParamValue[hv_Index]));
				}
				else
				{
					RemoveDictKey((*hv_dt), HTuple(hv_GenParamValue[hv_Index]));
				}
			}
		}

		//***************************合并缺陷字典*****************************
		GetDictParam(hv_inputdt, "keys", HTuple(), &hv_GenParamValue);
		if (0 != (hv_GenParamValue.TupleLength()))
		{
			{
				HTuple end_val65 = (hv_GenParamValue.TupleLength()) - 1;
				HTuple step_val65 = 1;
				for (hv_Index = 0; hv_Index.Continue(end_val65, step_val65); hv_Index += step_val65)
				{
					GetDictObject(&ho_Object, hv_inputdt, HTuple(hv_GenParamValue[hv_Index]));
					//缺陷字典区域 初始化
					SetDictObject(ho_EmptyRegion, (*hv_dt), HTuple(hv_GenParamValue[hv_Index]));
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_GenParamValue[hv_Index])),
						ho_Object, &ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_GenParamValue[hv_Index]));
				}
			}
		}
		return 1;

	}
	catch (HException& ExceptionHandler)
	{
		HTuple err;
		ExceptionHandler.ToHTuple(&err);
		string strErr = err.ToString();
		string strerr = "OQC84lumen_CGLC_Laser_DetectionRegion_1Machine1Station error:" + strErr;
		VeErrMessage.push_back(QString::fromStdString(strerr));
	}
	reg = -1;
	return -1;
}

//四色OQC84内腔一工位检测缺陷算法-CGRT区域
int JSZCAlgorithmsDLLOQC::OQC84lumen_CGRT_DetectionRegion_1Machine1Station(HObject ho_Image, HObject ho_CGRTRegion,
	HTuple hv_ImageNum, HTuple hv_inputdt, HTuple *hv_dt)
{

	// Local iconic variables
	HObject  ho_EmptyRegion, ho_ImageReduced, ho_RegionDilation;
	HObject  ho_ImageMedian, ho_ImageClosing, ho_ImageSub, ho_ImageMedian1;
	HObject  ho_RegionDynThresh, ho_RegionOpening, ho_ConnectedRegions;
	HObject  ho_SelectedRegions, ho_ImageMean, ho_ImageMean1;
	HObject  ho_RegionOpening1, ho_SelectedRegions1, ho_ConnectedRegions1;
	HObject  ho_RegionUnion, ho_Object, ho___Tmp_Obj_0;

	// Local control variables
	HTuple  hv_Number, hv_Index1, hv_d, hv_s, hv_g;
	HTuple  hv_GenParamValue, hv_Index, hv_i, hv_Exception;

	try
	{
		//缺陷字典输出初始化
		CreateDict(&(*hv_dt));
		GenEmptyRegion(&ho_EmptyRegion);

		//检测0.14CGRT区域
		ReduceDomain(ho_Image, ho_CGRTRegion, &ho_ImageReduced);

		//飞漆DT59_T 初始化
		SetDictObject(ho_EmptyRegion, (*hv_dt), "DT59_T");

		//检测飞漆 n[20]:飞漆       DT59_T
		DilationRectangle1(ho_CGRTRegion, &ho_RegionDilation, 6, 1);
		ReduceDomain(ho_Image, ho_RegionDilation, &ho_ImageReduced);
		MedianRect(ho_ImageReduced, &ho_ImageMedian, 5, 5);
		GrayClosingShape(ho_ImageMedian, &ho_ImageClosing, 150, 150, "rectangle");
		SubImage(ho_ImageMedian, ho_ImageClosing, &ho_ImageSub, 1, 128);
		MedianRect(ho_ImageSub, &ho_ImageMedian1, 10, 10);
		DynThreshold(ho_ImageSub, ho_ImageMedian1, &ho_RegionDynThresh, 100, "dark");
		OpeningCircle(ho_RegionDynThresh, &ho_RegionOpening, 1);
		Connection(ho_RegionOpening, &ho_ConnectedRegions);
		SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, (HTuple("area").Append("circularity")),
			"and", (HTuple(30).Append(0.3)), (HTuple(99999).Append(1)));

		//飞漆DT59_T 赋值输出
		CountObj(ho_SelectedRegions, &hv_Number);
		if (0 != hv_Number)
		{
			ConcatObj((*hv_dt).TupleGetDictObject("DT59_T"), ho_SelectedRegions, &ho___Tmp_Obj_0
				);
			SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT59_T");
		}

		//打磨纹DT43_T 初始化
		SetDictObject(ho_EmptyRegion, (*hv_dt), "DT43_T");

		for (hv_Index1 = 1; hv_Index1 <= 2; hv_Index1 += 1)
		{
			if (0 != (HTuple(int(hv_ImageNum == 10)).TupleOr(int(hv_ImageNum == 14))))
			{
				//检测竖打磨纹 n[4]:打磨纹     DT43_T
				MeanImage(ho_ImageReduced, &ho_ImageMean, 5, 25);
				MeanImage(ho_ImageReduced, &ho_ImageMean1, 5, 100);
			}
			else if (0 != (HTuple(HTuple(HTuple(int(hv_ImageNum == 4)).TupleOr(int(hv_ImageNum == 6))).TupleOr(int(hv_ImageNum == 18))).TupleOr(int(hv_ImageNum == 20))))
			{
				//检测横打磨纹 n[4]:打磨纹     DT43_T
				MeanImage(ho_ImageReduced, &ho_ImageMean, 5, 25);
				MeanImage(ho_ImageReduced, &ho_ImageMean1, 5, 60);
			}
			else if (0 != (HTuple(HTuple(HTuple(int(hv_ImageNum == 2)).TupleOr(int(hv_ImageNum == 8))).TupleOr(int(hv_ImageNum == 16))).TupleOr(int(hv_ImageNum == 22))))
			{
				if (0 != (int(hv_Index1 == 1)))
				{
					OpeningRectangle1(ho_CGRTRegion, &ho_RegionOpening1, 100, 10);
					ReduceDomain(ho_Image, ho_RegionOpening1, &ho_ImageReduced);
					MeanImage(ho_ImageReduced, &ho_ImageMean, 25, 5);
					MeanImage(ho_ImageReduced, &ho_ImageMean1, 100, 5);
				}
				else
				{
					OpeningRectangle1(ho_CGRTRegion, &ho_RegionOpening1, 10, 100);
					ReduceDomain(ho_Image, ho_RegionOpening1, &ho_ImageReduced);
					MeanImage(ho_ImageReduced, &ho_ImageMean, 5, 25);
					MeanImage(ho_ImageReduced, &ho_ImageMean1, 5, 100);
				}
			}

			DynThreshold(ho_ImageMean1, ho_ImageMean, &ho_RegionDynThresh, 12, "light");
			Connection(ho_RegionDynThresh, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions1, "area", "and", 140,
				99999);
			CountObj(ho_SelectedRegions1, &hv_Number);
			if (0 != (int(hv_Number > 10)))
			{
				ConcatObj((*hv_dt).TupleGetDictObject("DT43_T"), ho_SelectedRegions1, &ho___Tmp_Obj_0
					);
				SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT43_T");
			}
			else
			{
				DynThreshold(ho_ImageMean1, ho_ImageMean, &ho_RegionDynThresh, 35, "dark");
				Connection(ho_RegionDynThresh, &ho_ConnectedRegions1);
				SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions1, "area", "and", 140,
					1e+4);
				CountObj(ho_SelectedRegions1, &hv_Number);
				if (0 != (int(hv_Number > 6)))
				{
					ConcatObj((*hv_dt).TupleGetDictObject("DT43_T"), ho_SelectedRegions1, &ho___Tmp_Obj_0
						);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT43_T");
				}
			}
		}
		//***************************二次筛选缺陷*****************************
		//缺陷名称
		hv_d.Clear();
		hv_d[0] = "DT59_T";
		hv_d[1] = "DT43_T";
		//面积限度
		hv_s.Clear();
		hv_s[0] = 10;
		hv_s[1] = 10;
		//灰度限度
		hv_g.Clear();
		hv_g[0] = 60;
		hv_g[1] = 255;

		GetDictParam((*hv_dt), "keys", HTuple(), &hv_GenParamValue);
		{
			HTuple end_val83 = (hv_GenParamValue.TupleLength()) - 1;
			HTuple step_val83 = 1;
			for (hv_Index = 0; hv_Index.Continue(end_val83, step_val83); hv_Index += step_val83)
			{
				TupleFind(hv_d, HTuple(hv_GenParamValue[hv_Index]), &hv_i);
				Connection((*hv_dt).TupleGetDictObject(HTuple(hv_GenParamValue[hv_Index])),
					&ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", HTuple(hv_s[hv_i]),
					9999999);
				SelectGray(ho_SelectedRegions, ho_Image, &ho_SelectedRegions, "mean", "and",
					0, HTuple(hv_g[hv_i]));
				Union1(ho_SelectedRegions, &ho_RegionUnion);
				CountObj(ho_RegionUnion, &hv_Number);
				if (0 != hv_Number)
				{
					Connection(ho_RegionUnion, &ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_GenParamValue[hv_Index]));
				}
				else
				{
					RemoveDictKey((*hv_dt), HTuple(hv_GenParamValue[hv_Index]));
				}
			}
		}

		//***************************合并缺陷字典*****************************
		GetDictParam(hv_inputdt, "keys", HTuple(), &hv_GenParamValue);
		if (0 != (hv_GenParamValue.TupleLength()))
		{
			{
				HTuple end_val101 = (hv_GenParamValue.TupleLength()) - 1;
				HTuple step_val101 = 1;
				for (hv_Index = 0; hv_Index.Continue(end_val101, step_val101); hv_Index += step_val101)
				{
					GetDictObject(&ho_Object, hv_inputdt, HTuple(hv_GenParamValue[hv_Index]));
					//缺陷字典区域 初始化
					SetDictObject(ho_EmptyRegion, (*hv_dt), HTuple(hv_GenParamValue[hv_Index]));
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_GenParamValue[hv_Index])),
						ho_Object, &ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_GenParamValue[hv_Index]));
				}
			}
		}
		return 1;

	}
	catch (HException& ExceptionHandler)
	{
		HTuple err;
		ExceptionHandler.ToHTuple(&err);
		string strErr = err.ToString();
		string strerr = "OQC84lumen_CGRT_DetectionRegion_1Machine1Station error:" + strErr;
		VeErrMessage.push_back(QString::fromStdString(strerr));
	}
	reg = -1;
	return -1;
}

//四色OQC84内腔一工位检测缺陷算法-Hole区域
int JSZCAlgorithmsDLLOQC::OQC84lumen_Hole_DetectionRegion_1Machine1Station(HObject ho_Image, HObject ho_HoleRegion,
	HTuple hv_ImageNum, HTuple hv_inputdt, HTuple *hv_dt)
{

	// Local iconic variables
	HObject  ho_EmptyRegion, ho_ImageReduced, ho_Region;
	HObject  ho_ConnectedRegions, ho_SelectedRegions, ho_RegionUnion;
	HObject  ho_Object, ho___Tmp_Obj_0;

	// Local control variables
	HTuple  hv_Area, hv_Row, hv_Column, hv_Number;
	HTuple  hv_d, hv_s, hv_g, hv_GenParamValue, hv_Index, hv_i;
	HTuple  hv_Exception;

	try
	{
		//缺陷字典输出初始化
		CreateDict(&(*hv_dt));
		GenEmptyRegion(&ho_EmptyRegion);

		//检测LC区域
		ReduceDomain(ho_Image, ho_HoleRegion, &ho_ImageReduced);

		//过铣DT56_T 初始化
		SetDictObject(ho_EmptyRegion, (*hv_dt), "DT56_T");

		if (0 != (int(hv_ImageNum == 1)))
		{
			//检测孔过铣  过铣       DT56_T
			AreaCenter(ho_HoleRegion, &hv_Area, &hv_Row, &hv_Column);
			Threshold(ho_ImageReduced, &ho_Region, 0, 80);
			Connection(ho_Region, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, ((HTuple("height").Append("row")).Append("area")),
				"and", (HTuple(15).TupleConcat(hv_Row + 80)).TupleConcat(690), ((HTuple(9999).Append(2300)).Append(99999)));

			//过铣DT56_T 赋值输出
			CountObj(ho_SelectedRegions, &hv_Number);
			if (0 != hv_Number)
			{
				ConcatObj((*hv_dt).TupleGetDictObject("DT56_T"), ho_SelectedRegions, &ho___Tmp_Obj_0
					);
				SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT56_T");
			}
		}

		//***************************二次筛选缺陷*****************************
		//缺陷名称
		hv_d = "DT56_T";
		//面积限度
		hv_s = 30;
		//灰度限度
		hv_g = 80;

		GetDictParam((*hv_dt), "keys", HTuple(), &hv_GenParamValue);
		{
			HTuple end_val35 = (hv_GenParamValue.TupleLength()) - 1;
			HTuple step_val35 = 1;
			for (hv_Index = 0; hv_Index.Continue(end_val35, step_val35); hv_Index += step_val35)
			{
				TupleFind(hv_d, HTuple(hv_GenParamValue[hv_Index]), &hv_i);
				Connection((*hv_dt).TupleGetDictObject(HTuple(hv_GenParamValue[hv_Index])),
					&ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", HTuple(hv_s[hv_i]),
					9999999);
				SelectGray(ho_SelectedRegions, ho_Image, &ho_SelectedRegions, "mean", "and",
					0, HTuple(hv_g[hv_i]));
				Union1(ho_SelectedRegions, &ho_RegionUnion);
				CountObj(ho_RegionUnion, &hv_Number);
				if (0 != hv_Number)
				{
					Connection(ho_RegionUnion, &ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_GenParamValue[hv_Index]));
				}
			}
		}

		//***************************合并缺陷字典*****************************
		GetDictParam(hv_inputdt, "keys", HTuple(), &hv_GenParamValue);
		if (0 != (hv_GenParamValue.TupleLength()))
		{
			{
				HTuple end_val51 = (hv_GenParamValue.TupleLength()) - 1;
				HTuple step_val51 = 1;
				for (hv_Index = 0; hv_Index.Continue(end_val51, step_val51); hv_Index += step_val51)
				{
					GetDictObject(&ho_Object, hv_inputdt, HTuple(hv_GenParamValue[hv_Index]));
					//缺陷字典区域 初始化
					SetDictObject(ho_EmptyRegion, (*hv_dt), HTuple(hv_GenParamValue[hv_Index]));
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_GenParamValue[hv_Index])),
						ho_Object, &ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_GenParamValue[hv_Index]));
				}
			}
		}
		return 1;

	}
	catch (HException& ExceptionHandler)
	{
		HTuple err;
		ExceptionHandler.ToHTuple(&err);
		string strErr = err.ToString();
		string strerr = "OQC84lumen_Hole_DetectionRegion_1Machine1Station error:" + strErr;
		VeErrMessage.push_back(QString::fromStdString(strerr));
	}
	reg = -1;
	return -1;
}

//四色OQC84内腔一工位检测缺陷算法-塑胶区域
int JSZCAlgorithmsDLLOQC::OQC84lumen_Plastic_DetectionRegion_1Machine1Station(HObject ho_Image, HObject ho_PlasticRegion,
	HTuple hv_ImageNum, HTuple hv_inputdt, HTuple hv_StrModel, HTuple *hv_dt)
{

	// Local iconic variables
	HObject  ho_EmptyRegion, ho_ConnectedRegions1;
	HObject  ho_SortedRegions, ho_ROI_0, ho_ImageReduced, ho_ImageScaled;
	HObject  ho_Region, ho_RegionClosing, ho_ConnectedRegions;
	HObject  ho_SelectedRegions, ho_Region1, ho_RegionClosing1;
	HObject  ho_RegionFillUp, ho_ImageReduced1, ho_RegionOpening;
	HObject  ho_ImageMedian, ho_ImageMedian1, ho_RegionDynThresh;
	HObject  ho_RegionUnion, ho_Object, ho___Tmp_Obj_0;

	// Local control variables
	HTuple  hv_Number, hv_d, hv_s, hv_g, hv_GenParamValue;
	HTuple  hv_Index, hv_i, hv_Exception;

	try
	{
		//缺陷字典输出初始化
		CreateDict(&(*hv_dt));
		GenEmptyRegion(&ho_EmptyRegion);

		if (0 != (int(hv_ImageNum == 24)))
		{
			//分离塑胶区域和堆漆区域
			Connection(ho_PlasticRegion, &ho_ConnectedRegions1);
			SortRegion(ho_ConnectedRegions1, &ho_SortedRegions, "first_point", "true",
				"row");
			//塑胶区域
			SelectObj(ho_SortedRegions, &ho_PlasticRegion, 2);
			//堆漆区域
			SelectObj(ho_SortedRegions, &ho_ROI_0, 1);
		}

		//检测塑胶区域
		ReduceDomain(ho_Image, ho_PlasticRegion, &ho_ImageReduced);

		if (0 != (int(hv_ImageNum == 30)))
		{
			//漏镭射线 DT71_T  初始化
			SetDictObject(ho_EmptyRegion, (*hv_dt), "DT71_T");

			//检测上 漏镭射线缺陷 DT71_T
			if (hv_StrModel == "OQC84_内腔_灰色")
			{
				ScaleImage(ho_ImageReduced, &ho_ImageScaled, 5, -150);
			}
			else if (hv_StrModel == "OQC84_内腔_蓝色")
			{
				ScaleImage(ho_ImageReduced, &ho_ImageScaled, 7, -150);
			}
			else if (hv_StrModel == "OQC84_内腔_黑色")
			{
				ScaleImage(ho_ImageReduced, &ho_ImageScaled, 8, -100);
			}
			else if (hv_StrModel == "OQC84_内腔_银色")
			{
				ScaleImage(ho_ImageReduced, &ho_ImageScaled, 5, -150);
			}
			Threshold(ho_ImageScaled, &ho_Region, 0, 30);
			ClosingRectangle1(ho_Region, &ho_RegionClosing, 3, 3);
			Connection(ho_RegionClosing, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, ((HTuple("row").Append("ra")).Append("area")),
				"and", ((HTuple(0).Append(30)).Append(600)), ((HTuple(1200).Append(100)).Append(5000)));
			CountObj(ho_SelectedRegions, &hv_Number);
			if (0 != (int(hv_Number == 0)))
			{
				GenRectangle1(&ho_ROI_0, 647.873, 277.47, 750.102, 373.02);
				ConcatObj((*hv_dt).TupleGetDictObject("DT71_T"), ho_ROI_0, &ho___Tmp_Obj_0
					);
				SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT71_T");
			}
			//检测下 漏镭射线缺陷 DT71_T
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, ((HTuple("row").Append("ra")).Append("area")),
				"and", ((HTuple(2400).Append(30)).Append(600)), ((HTuple(3100).Append(100)).Append(7000)));
			CountObj(ho_SelectedRegions, &hv_Number);
			if (0 != (int(hv_Number == 0)))
			{
				GenRectangle1(&ho_ROI_0, 2489.84, 277.771, 2609.48, 418.593);
				ConcatObj((*hv_dt).TupleGetDictObject("DT71_T"), ho_ROI_0, &ho___Tmp_Obj_0
					);
				SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT71_T");
			}
		}
		else
		{
			//A基准飞漆 DT70_T  初始化
			SetDictObject(ho_EmptyRegion, (*hv_dt), "DT70_T");


			//检测A基准飞漆  DT70_T
			ScaleImage(ho_ImageReduced, &ho_ImageScaled, 6.01, -100);
			Threshold(ho_ImageScaled, &ho_Region1, 128, 255);
			ClosingRectangle1(ho_Region1, &ho_RegionClosing1, 30, 30);
			FillUp(ho_RegionClosing1, &ho_RegionFillUp);
			ReduceDomain(ho_ImageReduced, ho_RegionFillUp, &ho_ImageReduced1);

			ScaleImage(ho_ImageReduced1, &ho_ImageScaled, 6.01, -100);
			Threshold(ho_ImageScaled, &ho_Region, 0, 30);
			Connection(ho_Region, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 90, 99999);
			Union1(ho_SelectedRegions, &ho_Region);
			if (0 != (HTuple(int(hv_ImageNum == 24)).TupleOr(int(hv_ImageNum == 32))))
			{
				ClosingRectangle1(ho_Region, &ho_RegionClosing, 30, 60);
			}
			else if (0 != (int(hv_ImageNum == 25)))
			{
				ClosingRectangle1(ho_Region, &ho_RegionClosing, 10, 30);
			}
			else
			{
				ClosingRectangle1(ho_Region, &ho_RegionClosing, 30, 10);
			}
			Connection(ho_RegionClosing, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, (HTuple("area").Append("circularity")),
				"and", (HTuple(120).Append(0.5)), (HTuple(1000).Append(1)));
			CountObj(ho_SelectedRegions, &hv_Number);
			if (0 != hv_Number)
			{
				ConcatObj((*hv_dt).TupleGetDictObject("DT70_T"), ho_SelectedRegions, &ho___Tmp_Obj_0
					);
				SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT70_T");
			}
		}

		if (0 != (int(hv_ImageNum == 24)))
		{
			//检测塑胶区域
			ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced1);
			//漏铁屑/混铁屑TUD_T 初始化
			SetDictObject(ho_EmptyRegion, (*hv_dt), "DT134_T");

			//二次筛选检测区域
			Threshold(ho_ImageReduced1, &ho_Region, 0, 180);
			OpeningRectangle1(ho_Region, &ho_RegionOpening, 10, 5);
			FillUp(ho_RegionOpening, &ho_RegionFillUp);
			ReduceDomain(ho_Image, ho_RegionFillUp, &ho_ImageReduced1);
			//检测漏铁屑/混铁屑     TUD_T
			MedianRect(ho_ImageReduced1, &ho_ImageMedian, 5, 5);
			MedianRect(ho_ImageReduced1, &ho_ImageMedian1, 15, 15);
			DynThreshold(ho_ImageMedian1, ho_ImageMedian, &ho_RegionDynThresh, 100, "dark");
			//threshold (ImageReduced1, Region, 200, 255)
			ClosingRectangle1(ho_RegionDynThresh, &ho_RegionClosing, 60, 1);
			Connection(ho_RegionClosing, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, (HTuple("area").Append("circularity")),
				"and", (HTuple(60).Append(0.4)), (HTuple(99999).Append(1)));
			CountObj(ho_SelectedRegions, &hv_Number);
			//漏铁屑/混铁屑TUD_T 赋值
			if (0 != hv_Number)
			{
				ConcatObj((*hv_dt).TupleGetDictObject("DT134_T"), ho_SelectedRegions, &ho___Tmp_Obj_0
					);
				SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT134_T");
			}
		}
		//***************************二次筛选缺陷*****************************
		//缺陷名称
		hv_d.Clear();
		hv_d[0] = "DT70_T";
		hv_d[1] = "DT71_T";
		hv_d[2] = "DT134_T";
		//面积限度
		hv_s.Clear();
		hv_s[0] = 10;
		hv_s[1] = 10;
		hv_s[2] = 50;
		//灰度限度
		hv_g.Clear();
		hv_g[0] = 60;
		hv_g[1] = 40;
		hv_g[2] = 255;

		GetDictParam((*hv_dt), "keys", HTuple(), &hv_GenParamValue);
		{
			HTuple end_val114 = (hv_GenParamValue.TupleLength()) - 1;
			HTuple step_val114 = 1;
			for (hv_Index = 0; hv_Index.Continue(end_val114, step_val114); hv_Index += step_val114)
			{
				TupleFind(hv_d, HTuple(hv_GenParamValue[hv_Index]), &hv_i);
				Connection((*hv_dt).TupleGetDictObject(HTuple(hv_GenParamValue[hv_Index])),
					&ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", HTuple(hv_s[hv_i]),
					9999999);
				SelectGray(ho_SelectedRegions, ho_Image, &ho_SelectedRegions, "mean", "and",
					0, HTuple(hv_g[hv_i]));
				Union1(ho_SelectedRegions, &ho_RegionUnion);
				CountObj(ho_RegionUnion, &hv_Number);
				if (0 != hv_Number)
				{
					Connection(ho_RegionUnion, &ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_GenParamValue[hv_Index]));
				}
				else
				{
					RemoveDictKey((*hv_dt), HTuple(hv_GenParamValue[hv_Index]));
				}
			}
		}

		//***************************合并缺陷字典*****************************
		GetDictParam(hv_inputdt, "keys", HTuple(), &hv_GenParamValue);
		if (0 != (hv_GenParamValue.TupleLength()))
		{
			{
				HTuple end_val132 = (hv_GenParamValue.TupleLength()) - 1;
				HTuple step_val132 = 1;
				for (hv_Index = 0; hv_Index.Continue(end_val132, step_val132); hv_Index += step_val132)
				{
					GetDictObject(&ho_Object, hv_inputdt, HTuple(hv_GenParamValue[hv_Index]));
					//缺陷字典区域 初始化
					SetDictObject(ho_EmptyRegion, (*hv_dt), HTuple(hv_GenParamValue[hv_Index]));
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_GenParamValue[hv_Index])),
						ho_Object, &ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_GenParamValue[hv_Index]));
				}
			}
		}
		return 1;

	}
	catch (HException& ExceptionHandler)
	{
		HTuple err;
		ExceptionHandler.ToHTuple(&err);
		string strErr = err.ToString();
		string strerr = "OQC84lumen_Plastic_DetectionRegion_1Machine1Station error:" + strErr;
		VeErrMessage.push_back(QString::fromStdString(strerr));
	}
	reg = -1;
	return -1;
}

int JSZCAlgorithmsDLLOQC::ImageProcessOQC84lumenBlueDefects1Machine2Station(HObject ho_Image, HTuple hv_ProNum,
	HTuple hv_StaNum, HTuple hv_CamNum, HTuple hv_ImageNum, HTuple* hv_dt)
{

	// Local iconic variables
	HObject  ho_reg, ho_EmptyRegion, ho_Reg, ho_ImageMedian;
	HObject  ho_ImageScaled, ho_Region, ho_RegionFillUp, ho_RegionOpening1;
	HObject  ho_ConnectedRegions, ho_SelectedRegions, ho_BLCRegion;
	HObject  ho_ImageReduced, ho_ImageMedian1, ho_ROI_0, ho_TMP_Region;
	HObject  ho_ImageReduced1, ho_ImageScaled1, ho_Region1, ho_RegionFillUp1;
	HObject  ho_RegionOpening2, ho_ConnectedRegions1, ho_SelectedRegions1;
	HObject  ho_zhuajiaocaoRegion, ho_ImageMedian2, ho_ImageScaled2;
	HObject  ho_Region2, ho_RegionFillUp2, ho_RegionOpening3;
	HObject  ho_RegionErosion, ho_ConnectedRegions2, ho_SelectedRegions2;
	HObject  ho_handianRegion, ho_sujiaoRegion, ho_ImageMedian21;
	HObject  ho_ImageScaled20, ho_Region21, ho_RegionOpening15;
	HObject  ho_RegionFillUp21, ho_ConnectedRegions21, ho_SelectedRegions22;
	HObject  ho_RegionIntersection11, ho_EdgeRegion, ho_RegionUnion21;
	HObject  ho_RegionUnion22, ho_RegionUnion23, ho_RegionUnion24;
	HObject  ho_ImageReduced12, ho_ImageScaled21, ho_Region24;
	HObject  ho_RegionOpening12, ho_RegionFillUp25, ho_ConnectedRegions26;
	HObject  ho_SelectedRegions27, ho_RegionUnion17, ho_ImageMedian15;
	HObject  ho_ImageScaled10, ho_Region11, ho_RegionFillUp11;
	HObject  ho_ConnectedRegions11, ho_SelectedRegions11, ho_RegionIntersection4;
	HObject  ho_RegionUnion8, ho_ImageReduced7, ho_ImageMedian16;
	HObject  ho_ImageScaled11, ho_Region12, ho_RegionFillUp12;
	HObject  ho_RegionErosion4, ho_RegionIntersection5, ho_ConnectedRegions12;
	HObject  ho_SelectedRegions12, ho_RegionUnion9, ho_ImageMedian20;
	HObject  ho_ImageScaled17, ho_Region18, ho_RegionFillUp18;
	HObject  ho_RegionOpening6, ho_ConnectedRegions18, ho_SelectedRegions18;
	HObject  ho_RegionErosion6, ho_RegionDifference1, ho_RegionIntersection9;
	HObject  ho_ImageReduced10, ho_ImageMedian22, ho_ImageSub6;
	HObject  ho_ImageSub7, ho_ImageSub8, ho_ImageSub9, ho_ImageSub10;
	HObject  ho_ImageMedian23, ho_ImageScaled18, ho_Region19;
	HObject  ho_RegionFillUp19, ho_RegionOpening7, ho_ConnectedRegions19;
	HObject  ho_SelectedRegions19, ho_SelectedRegions20, ho_RegionErosion7;
	HObject  ho_RegionIntersection10, ho_RegionUnion14, ho_ImageMedian3;
	HObject  ho_ImageScaled6, ho_Region6, ho_RegionFillUp6, ho_RegionOpening5;
	HObject  ho_ConnectedRegions3, ho_SelectedRegions3, ho_RegionErosion2;
	HObject  ho_RegionUnion6, ho_ImageMedian4, ho_RegionUnion2;
	HObject  ho_ImageScaled22, ho_Region22, ho_RegionFillUp22;
	HObject  ho_ConnectedRegions22, ho_SelectedRegions23, ho_RegionErosion9;
	HObject  ho_RegionUnion25, ho_RegionUnion31, ho_RegionUnion32;
	HObject  ho_RegionUnion33, ho_ImageMedian25, ho_ImageMedian26;
	HObject  ho_RegionDynThresh, ho_ImageSub, ho_ImageSub1, ho_ImageSub2;
	HObject  ho_RegionUnion, ho_RegionIntersection, ho_ImageMedian5;
	HObject  ho_RegionOpening, ho_RegionUnion1, ho_ImageScaled7;
	HObject  ho_ImageScaled8, ho_Region7, ho_RegionFillUp7, ho_ConnectedRegions4;
	HObject  ho_SelectedRegions4, ho_RegionUnion7, ho_RegionUnion34;
	HObject  ho_RegionUnion35, ho_RegionUnion36, ho_ImageReduced5;
	HObject  ho_RegionFillUp23, ho_ConnectedRegions23, ho_SelectedRegions24;
	HObject  ho_RegionDilation4, ho_RegionDifference4, ho_RegionTrans6;
	HObject  ho_RegionMoved2, ho_RegionDifference5, ho_ConnectedRegions24;
	HObject  ho_SelectedRegions25, ho_RegionUnion26, ho_RegionUnion37;
	HObject  ho_RegionUnion38, ho_ImageMedian13, ho_Region9;
	HObject  ho_RegionFillUp9, ho_ConnectedRegions9, ho_SelectedRegions9;
	HObject  ho_RegionTrans, ho_ObjectSelected1, ho_ObjectSelected2;
	HObject  ho_ImageMedian6, ho_ImageScaled9, ho_ConnectedRegions8;
	HObject  ho_SelectedRegions8, ho_RegionDilation, ho_RegionDilation1;
	HObject  ho_RegionDifference, ho_ImageReduced3, ho_ImageMedian10;
	HObject  ho_Region10, ho_RegionFillUp10, ho_RegionOpening8;
	HObject  ho_ImageMedian11, ho_RegionOpening9, ho_ConnectedRegions10;
	HObject  ho_SelectedRegions10, ho_RegionIntersection1, ho_RegionUnion10;
	HObject  ho_RegionUnion39, ho_RegionUnion40, ho_ImageMedian12;
	HObject  ho_ImageScaled12, ho_RegionDifference2, ho_RegionUnion11;
	HObject  ho_RegionErosion5, ho_RegionDifference3, ho_Region13;
	HObject  ho_RegionFillUp13, ho_RegionOpening10, ho_RegionDilation2;
	HObject  ho_RegionIntersection3, ho_RegionUnion12, ho_ImageMedian17;
	HObject  ho_ConnectedRegions13, ho_SelectedRegions13, ho_RegionIntersection6;
	HObject  ho_RegionTrans1, ho_ImageReduced8, ho_ImageScaled13;
	HObject  ho_Region14, ho_RegionFillUp14, ho_ConnectedRegions14;
	HObject  ho_SelectedRegions14, ho_RegionUnion13, ho_ImageMedian18;
	HObject  ho_ImageScaled14, ho_Region15, ho_RegionFillUp15;
	HObject  ho_ConnectedRegions15, ho_SelectedRegions15, ho_RegionIntersection7;
	HObject  ho_ImageReduced9, ho_ImageScaled15, ho_Region16;
	HObject  ho_RegionFillUp16, ho_ConnectedRegions16, ho_SelectedRegions16;
	HObject  ho_ImageMedian14, ho_RegionOpening11, ho_RegionUnion15;
	HObject  ho_ImageMedian24, ho_ImageScaled23, ho_Region23;
	HObject  ho_RegionOpening16, ho_RegionFillUp24, ho_ConnectedRegions25;
	HObject  ho_SelectedRegions26, ho_RegionUnion16, ho_RegionClosing2;
	HObject  ho_RegionTrans2, ho_RegionErosion8, ho_RegionUnion41;
	HObject  ho_RegionUnion42, ho_RegionUnion43, ho_RegionUnion44;
	HObject  ho_ImageMedian7, ho_ImageScaled3, ho_Region3, ho_RegionFillUp3;
	HObject  ho_ConnectedRegions5, ho_SelectedRegions5, ho_RegionUnion3;
	HObject  ho_ImageMedian8, ho_ImageScaled4, ho_Region4, ho_RegionFillUp4;
	HObject  ho_ConnectedRegions6, ho_SelectedRegions6, ho_RegionIntersection2;
	HObject  ho_RegionUnion4, ho_RegionClosing, ho_RegionErosion1;
	HObject  ho_ImageReduced4, ho_Region8, ho_RegionFillUp8;
	HObject  ho_RegionClosing1, ho_RegionErosion3, ho_ImageReduced2;
	HObject  ho_ImageMedian9, ho_ImageScaled5, ho_Region5, ho_RegionFillUp5;
	HObject  ho_ConnectedRegions7, ho_SelectedRegions7, ho_RegionUnion5;
	HObject  ho_ImageMedian19, ho_ImageScaled16, ho_Region17;
	HObject  ho_RegionFillUp17, ho_RegionOpening4, ho_ConnectedRegions17;
	HObject  ho_SelectedRegions17, ho_RegionIntersection8, ho_ImageScaled19;
	HObject  ho_Region20, ho_RegionFillUp20, ho_ConnectedRegions20;
	HObject  ho_SelectedRegions21, ho_ImageReduced11, ho_ImageSub3;
	HObject  ho_ImageSub4, ho_ImageSub5, ho_ImageScaled24, ho_Region25;
	HObject  ho_RegionFillUp26, ho_ConnectedRegions27, ho_SelectedRegions28;
	HObject  ho_RegionIntersection12, ho_RegionDilation3, ho_RegionDifference6;
	HObject  ho_RegionIntersection13, ho_ImageReduced13, ho_ImageScaled25;
	HObject  ho_ImageMedian27, ho_ImageSub11, ho_ImageSub12;
	HObject  ho_ImageSub13, ho_Region26, ho_RegionFillUp27, ho_ConnectedRegions28;
	HObject  ho_SelectedRegions29, ho_RegionUnion18, ho_ImageReduced6;
	HObject  ho_ConnectedRegions100, ho___Tmp_Obj_0;

	// Local control variables
	HTuple  hv_Num, hv_N, hv_Mean11, hv_Deviation11;
	HTuple  hv_Mean6, hv_Deviation6, hv_Area3, hv_Row3, hv_Column3;
	HTuple  hv_Number4, hv_Area4, hv_Row4, hv_Column4, hv_Mean9;
	HTuple  hv_Deviation9, hv_Number, hv_Number1, hv_Mean, hv_Deviation;
	HTuple  hv_Area, hv_Row, hv_Column, hv_Mean1, hv_Deviation1;
	HTuple  hv_Area1, hv_Row1, hv_Column1, hv_Number5, hv_Value1;
	HTuple  hv_Value2, hv_Abs, hv_Mean7, hv_Deviation7, hv_Number2;
	HTuple  hv_Mean8, hv_Deviation8, hv_Mean2, hv_Deviation2;
	HTuple  hv_Mean3, hv_Deviation3, hv_Number3, hv_Value, hv_Area5;
	HTuple  hv_Row5, hv_Column5, hv_Mean10, hv_Deviation10;
	HTuple  hv_Mean4, hv_Deviation4, hv_Area2, hv_Row2, hv_Column2;
	HTuple  hv_Mean12, hv_Deviation12, hv_Mean5, hv_Deviation5;
	HTuple  hv_GenParamValue, hv_Index, hv_Exception;

	try
	{
		//缺陷暂存区域
		GenEmptyObj(&ho_reg);
		//缺陷个数
		hv_Num = HTuple();
		//屏蔽检测项
		hv_N = 0;
		//n[0]:崩胶       MOP_T      n[17]:过铣       DT56_T
		//n[1]:塑胶混铁屑 TUD_T      n[18]:焊穿       DT57_T
		//n[2]:腐蚀       DT41_T     n[19]:压伤       DT58_T
		//n[3]:划伤       DT42_T     n[20]:飞漆       DT59_T
		//n[4]:打磨纹     DT43_T     n[21]:毛刺       DT60_T
		//n[5]:打磨痕     DT44_T     n[22]:溢胶       DT61_T
		//n[6]:刀纹       DT45_T     n[23]:堆漆       DT62_T
		//n[7]:阳极膜破损  DT46_T     n[24]:二维码打穿 DT63_T
		//n[8]:镭雕缺陷    DT47_T     n[25]:倒角大     DT64_T
		//n[9]:异物       DT48_T      n[25]:抓胶槽偏位DT65_T
		//n[10]:          DT49_T     n[25]:混版本     DT66_T
		//n[11]:          DT50_T     n[25]:BLC结构不良  DT67_T
		//n[12]:脏污      DT51_T     n[25]:IO偏位    DT68_T
		//n[13]:拉丝不均   DT52_T    n[25]:LC未涂到位   DT69_T
		//n[14]:擦伤       DT53_T
		//n[15]:气孔       DT54_T
		//n[16]:变形       DT55_T

		//缺陷字典输出初始化
		CreateDict(&(*hv_dt));
		GenEmptyRegion(&ho_EmptyRegion);
		GenEmptyObj(&ho_Reg);
		if (0 != (HTuple(int(hv_StaNum == 2)).TupleAnd(int(hv_CamNum == 1))))
		{
			if (0 != (int(hv_ImageNum == 1)))
			{
				SetDictObject(ho_EmptyRegion, (*hv_dt), "DT49_T");

				//划伤DT42_T 初始化
				SetDictObject(ho_EmptyRegion, (*hv_dt), "DT42_T");

				//脏污DT51_T 初始化
				SetDictObject(ho_EmptyRegion, (*hv_dt), "DT51_T");

				//塑胶混铁屑TUD_T 初始化
				SetDictObject(ho_EmptyRegion, (*hv_dt), "TUD_T");

				//提取BLC
				MedianRect(ho_Image, &ho_ImageMedian, 8, 8);
				ScaleImage(ho_ImageMedian, &ho_ImageScaled, 4, -450);
				Threshold(ho_ImageScaled, &ho_Region, 200, 255);
				FillUp(ho_Region, &ho_RegionFillUp);
				OpeningCircle(ho_RegionFillUp, &ho_RegionOpening1, 5);
				Connection(ho_RegionOpening1, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 1e+6,
					2e+6);
				ErosionCircle(ho_SelectedRegions, &ho_BLCRegion, 5);
				ReduceDomain(ho_ImageScaled, ho_BLCRegion, &ho_ImageReduced);

				//提取抓胶槽
				MedianRect(ho_Image, &ho_ImageMedian1, 15, 15);
				GenRectangle1(&ho_ROI_0, 820, 834.844, 1800, 2130.38);
				GenRectangle1(&ho_TMP_Region, 2500, 387.121, 3200.24, 882.475);
				Union2(ho_ROI_0, ho_TMP_Region, &ho_ROI_0);
				ReduceDomain(ho_ImageMedian1, ho_ROI_0, &ho_ImageReduced1);
				ScaleImage(ho_ImageReduced1, &ho_ImageScaled1, 2, -100);
				Threshold(ho_ImageScaled1, &ho_Region1, 0, 100);
				FillUp(ho_Region1, &ho_RegionFillUp1);
				OpeningCircle(ho_RegionFillUp1, &ho_RegionOpening2, 3.5);
				Connection(ho_RegionOpening2, &ho_ConnectedRegions1);
				SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions1, (HTuple("area").Append("circularity")),
					"and", (HTuple(4500).Append(0.5)), (HTuple(8500).Append(1)));
				Union1(ho_SelectedRegions1, &ho_zhuajiaocaoRegion);

				//提取焊点
				MedianRect(ho_Image, &ho_ImageMedian2, 15, 15);
				ScaleImage(ho_ImageMedian2, &ho_ImageScaled2, 3, -70);
				Threshold(ho_ImageScaled2, &ho_Region2, 80, 130);
				FillUp(ho_Region2, &ho_RegionFillUp2);
				OpeningCircle(ho_RegionFillUp2, &ho_RegionOpening3, 3.5);
				ErosionCircle(ho_RegionOpening3, &ho_RegionErosion, 3.5);
				Connection(ho_RegionErosion, &ho_ConnectedRegions2);
				SelectShape(ho_ConnectedRegions2, &ho_SelectedRegions2, (HTuple("area").Append("row")),
					"and", (HTuple(1e+5).Append(200)), (HTuple(1.6e+5).Append(600)));
				Union1(ho_SelectedRegions2, &ho_handianRegion);

				//提取塑胶中框
				GenRectangle1(&ho_sujiaoRegion, 971.077, 1172.97, 1530.17, 1755.69);

				//提取0.14
				MedianRect(ho_Image, &ho_ImageMedian21, 3, 3);
				ScaleImage(ho_ImageMedian21, &ho_ImageScaled20, 5, -200);
				Threshold(ho_ImageScaled20, &ho_Region21, 150, 255);
				OpeningCircle(ho_Region21, &ho_RegionOpening15, 2);
				FillUp(ho_RegionOpening15, &ho_RegionFillUp21);
				Connection(ho_RegionFillUp21, &ho_ConnectedRegions21);
				SelectShape(ho_ConnectedRegions21, &ho_SelectedRegions22, (HTuple("area").Append("width")),
					"and", (HTuple(10000).Append(1000)), (HTuple(40000).Append(3000)));
				GenRectangle1(&ho_ROI_0, 296.269, 879.999, 561.779, 4183.95);
				GenRectangle1(&ho_TMP_Region, 960.045, 36.873, 3084.13, 605.811);
				Union2(ho_ROI_0, ho_TMP_Region, &ho_ROI_0);
				GenRectangle1(&ho_TMP_Region, 370.022, 311.06, 1232.93, 1078.78);
				Union2(ho_ROI_0, ho_TMP_Region, &ho_ROI_0);
				Intersection(ho_SelectedRegions22, ho_ROI_0, &ho_RegionIntersection11);
				Union1(ho_RegionIntersection11, &ho_EdgeRegion);

				if (false)
				{
					Union2(ho_BLCRegion, ho_zhuajiaocaoRegion, &ho_RegionUnion21);
					Union2(ho_handianRegion, ho_sujiaoRegion, &ho_RegionUnion22);
					Union2(ho_RegionUnion21, ho_RegionUnion22, &ho_RegionUnion23);
					Union2(ho_EdgeRegion, ho_RegionUnion23, &ho_RegionUnion24);
					ConcatObj((*hv_dt).TupleGetDictObject("DT49_T"), ho_RegionUnion24, &ho___Tmp_Obj_0
						);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT49_T");
				}

				//检测塑胶混铁屑
				GenRectangle1(&ho_ROI_0, 945.988, 167.896, 1580.92, 465.028);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced12);
				ScaleImage(ho_ImageReduced12, &ho_ImageScaled21, 5, -100);
				Threshold(ho_ImageScaled21, &ho_Region24, 150, 255);
				OpeningCircle(ho_Region24, &ho_RegionOpening12, 1);
				FillUp(ho_RegionOpening12, &ho_RegionFillUp25);
				Connection(ho_RegionFillUp25, &ho_ConnectedRegions26);
				SelectShape(ho_ConnectedRegions26, &ho_SelectedRegions27, "area", "and",
					300, 800);
				Union1(ho_SelectedRegions27, &ho_RegionUnion17);
				Intensity(ho_RegionUnion17, ho_ImageScaled21, &hv_Mean11, &hv_Deviation11);
				if (0 != (int(hv_Mean11 > 220)))
				{
					ConcatObj((*hv_dt).TupleGetDictObject("TUD_T"), ho_RegionUnion17, &ho___Tmp_Obj_0
						);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "TUD_T");
				}

				//划伤
				MedianRect(ho_Image, &ho_ImageMedian15, 15, 15);
				ScaleImage(ho_ImageMedian15, &ho_ImageScaled10, 2, -120);
				Threshold(ho_ImageScaled10, &ho_Region11, 80, 150);
				FillUp(ho_Region11, &ho_RegionFillUp11);
				OpeningCircle(ho_RegionFillUp11, &ho_RegionOpening3, 3.5);
				Connection(ho_RegionOpening3, &ho_ConnectedRegions11);
				SelectShape(ho_ConnectedRegions11, &ho_SelectedRegions11, "area", "and",
					30000, 50000);
				GenRectangle1(&ho_ROI_0, 2013, 3474.3, 2742.54, 3745.2);
				Intersection(ho_SelectedRegions11, ho_ROI_0, &ho_RegionIntersection4);
				Union1(ho_RegionIntersection4, &ho_RegionUnion8);
				ReduceDomain(ho_Image, ho_RegionUnion8, &ho_ImageReduced7);

				MedianRect(ho_ImageReduced7, &ho_ImageMedian16, 15, 15);
				ScaleImage(ho_ImageMedian16, &ho_ImageScaled11, 2, -120);
				Threshold(ho_ImageScaled11, &ho_Region12, 0, 90);
				FillUp(ho_Region12, &ho_RegionFillUp12);
				ErosionCircle(ho_RegionUnion8, &ho_RegionErosion4, 5);
				Intersection(ho_RegionFillUp12, ho_RegionErosion4, &ho_RegionIntersection5
					);
				Connection(ho_RegionIntersection5, &ho_ConnectedRegions12);
				SelectShape(ho_ConnectedRegions12, &ho_SelectedRegions12, "area", "and",
					100, 99999);
				Union1(ho_SelectedRegions12, &ho_RegionUnion9);
				Intensity(ho_RegionUnion9, ho_ImageScaled11, &hv_Mean6, &hv_Deviation6);
				AreaCenter(ho_RegionUnion9, &hv_Area3, &hv_Row3, &hv_Column3);
				if (0 != (HTuple(HTuple(int(hv_Mean6 < 85)).TupleAnd(int(hv_Area3 > 700))).TupleAnd(int(hv_Area3 < 5000))))
				{
					ConcatObj((*hv_dt).TupleGetDictObject("DT42_T"), ho_RegionUnion9, &ho___Tmp_Obj_0
						);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT42_T");
				}

				//脏污
				MedianRect(ho_Image, &ho_ImageMedian20, 30, 30);
				ScaleImage(ho_ImageMedian20, &ho_ImageScaled17, 2, -100);
				Threshold(ho_ImageScaled17, &ho_Region18, 70, 170);
				FillUp(ho_Region18, &ho_RegionFillUp18);
				OpeningCircle(ho_RegionFillUp18, &ho_RegionOpening6, 3.5);
				Connection(ho_RegionOpening6, &ho_ConnectedRegions18);
				SelectShape(ho_ConnectedRegions18, &ho_SelectedRegions18, (HTuple("area").Append("row")),
					"and", (HTuple(1e+6).Append(500)), (HTuple(2e+6).Append(2200)));
				ErosionCircle(ho_SelectedRegions18, &ho_RegionErosion6, 5);
				CountObj(ho_RegionErosion6, &hv_Number4);
				if (0 != (int(hv_Number4 == 1)))
				{
					GenCircle(&ho_ROI_0, 744.859, 1920.28, 117.438);
					GenCircle(&ho_TMP_Region, 730.703, 2461.53, 122.142);
					Union2(ho_ROI_0, ho_TMP_Region, &ho_ROI_0);
					Difference(ho_RegionErosion6, ho_ROI_0, &ho_RegionDifference1);
					GenRectangle1(&ho_ROI_0, 680, 1900, 1600, 3800);
					Intersection(ho_RegionDifference1, ho_ROI_0, &ho_RegionIntersection9);
					ReduceDomain(ho_Image, ho_RegionIntersection9, &ho_ImageReduced10);

					MedianRect(ho_ImageReduced10, &ho_ImageMedian21, 3, 3);
					MedianRect(ho_ImageReduced10, &ho_ImageMedian22, 50, 50);
					SubImage(ho_ImageMedian21, ho_ImageMedian22, &ho_ImageSub6, 1, 128);
					SubImage(ho_ImageMedian22, ho_ImageMedian21, &ho_ImageSub7, 1, 128);
					SubImage(ho_ImageSub6, ho_ImageSub7, &ho_ImageSub8, 1, 128);

					SubImage(ho_ImageSub7, ho_ImageSub6, &ho_ImageSub9, 1, 128);
					SubImage(ho_ImageSub8, ho_ImageSub9, &ho_ImageSub10, 1, 128);

					MedianRect(ho_ImageSub10, &ho_ImageMedian23, 5, 5);
					ScaleImage(ho_ImageMedian23, &ho_ImageScaled18, 2, -90);
					Threshold(ho_ImageScaled18, &ho_Region19, 0, 90);
					FillUp(ho_Region19, &ho_RegionFillUp19);
					OpeningCircle(ho_RegionFillUp19, &ho_RegionOpening7, 2);
					Connection(ho_RegionOpening7, &ho_ConnectedRegions19);
					SelectShape(ho_ConnectedRegions19, &ho_SelectedRegions19, "area", "and",
						200, 9999);
					SelectGray(ho_SelectedRegions19, ho_ImageScaled18, &ho_SelectedRegions20,
						"mean", "and", 0, 50);
					ErosionCircle(ho_RegionIntersection9, &ho_RegionErosion7, 15);
					Intersection(ho_SelectedRegions20, ho_RegionErosion7, &ho_RegionIntersection10
						);
					SelectShape(ho_RegionIntersection10, &ho_SelectedRegions19, "area", "and",
						200, 9999);
					Union1(ho_SelectedRegions19, &ho_RegionUnion14);
					AreaCenter(ho_RegionUnion14, &hv_Area4, &hv_Row4, &hv_Column4);
					Intensity(ho_RegionUnion14, ho_ImageScaled18, &hv_Mean9, &hv_Deviation9);
					if (0 != (HTuple(HTuple(int(hv_Area4 > 800)).TupleAnd(int(hv_Area4 < 5000))).TupleAnd(int(hv_Mean9 < 50))))
					{
						ConcatObj((*hv_dt).TupleGetDictObject("DT51_T"), ho_RegionUnion14, &ho___Tmp_Obj_0
							);
						SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT51_T");
					}

				}
			}
			if (0 != (int(hv_ImageNum == 2)))
			{
				//二维码击穿DT63_T 初始化
				SetDictObject(ho_EmptyRegion, (*hv_dt), "DT63_T");

				//提取B基准
				MedianRect(ho_Image, &ho_ImageMedian3, 50, 15);
				ScaleImage(ho_ImageMedian3, &ho_ImageScaled6, 3, -50);
				Threshold(ho_ImageScaled6, &ho_Region6, 200, 255);
				FillUp(ho_Region6, &ho_RegionFillUp6);
				OpeningCircle(ho_RegionFillUp6, &ho_RegionOpening5, 3.5);
				Connection(ho_RegionOpening5, &ho_ConnectedRegions3);
				SelectShape(ho_ConnectedRegions3, &ho_SelectedRegions3, (HTuple("area").Append("row")),
					"and", (HTuple(3e+5).Append(180)), (HTuple(4e+5).Append(420)));
				ErosionCircle(ho_SelectedRegions3, &ho_RegionErosion2, 3.5);
				Union1(ho_RegionErosion2, &ho_RegionUnion6);

				//提取焊点
				MedianRect(ho_Image, &ho_ImageMedian4, 8, 8);
				ScaleImage(ho_ImageMedian4, &ho_ImageScaled2, 3, -50);
				Threshold(ho_ImageScaled2, &ho_Region2, 80, 150);
				FillUp(ho_Region2, &ho_RegionFillUp2);
				OpeningCircle(ho_RegionFillUp2, &ho_RegionOpening3, 3.5);
				ErosionCircle(ho_RegionOpening3, &ho_RegionErosion, 3.5);
				Connection(ho_RegionErosion, &ho_ConnectedRegions2);
				SelectShape(ho_ConnectedRegions2, &ho_SelectedRegions2, (HTuple("area").Append("row")),
					"and", (HTuple(40000).Append(350)), (HTuple(2e+5).Append(650)));
				Union1(ho_SelectedRegions2, &ho_RegionUnion2);

				//提取BLC二维码打穿
				GenRectangle1(&ho_ROI_0, 1993.03, 753.514, 2655.21, 1398.63);

				//提取0.14
				MedianRect(ho_Image, &ho_ImageMedian23, 30, 3);
				ScaleImage(ho_ImageMedian23, &ho_ImageScaled22, 15, -200);
				Threshold(ho_ImageScaled22, &ho_Region22, 120, 255);
				FillUp(ho_Region22, &ho_RegionFillUp22);
				Connection(ho_RegionFillUp22, &ho_ConnectedRegions22);
				SelectShape(ho_ConnectedRegions22, &ho_SelectedRegions23, (HTuple("area").Append("row")),
					"and", (HTuple(30000).Append(80)), (HTuple(1e+5).Append(300)));
				ErosionRectangle1(ho_SelectedRegions23, &ho_RegionErosion9, 1, 8);
				Union1(ho_RegionErosion9, &ho_RegionUnion25);

				Union2(ho_RegionUnion6, ho_RegionUnion2, &ho_RegionUnion31);
				Union2(ho_RegionUnion31, ho_ROI_0, &ho_RegionUnion32);
				Union2(ho_RegionUnion25, ho_RegionUnion32, &ho_RegionUnion33);

				if (false)
				{
					ConcatObj((*hv_dt).TupleGetDictObject("DT63_T"), ho_RegionUnion33, &ho___Tmp_Obj_0
						);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT63_T");
				}

				//检测DR
				//reduce_domain (Image, RegionUnion6, ImageReduced12)
				//*             median_rect (ImageReduced12, ImageMedian25, 10, 10)
				//*             median_rect (ImageReduced12, ImageMedian26, 25, 25)
				//*             dyn_threshold (ImageMedian25, ImageMedian26, RegionDynThresh1, 5, 'dark')
				//*             connection (RegionDynThresh1, ConnectedRegions26)
				//*             select_shape (ConnectedRegions26, SelectedRegions27, ['area','width'], 'and', [800,80], [99999,120])
				//*             union1 (SelectedRegions27, RegionUnion17)
				//*             area_center (RegionUnion17, Area6, Row6, Column6)
				//*             if(Area6>1500 and Area6<3000)
				//*                 concat_obj (dt.['DT63_T'], RegionUnion17, dt.['DT63_T'])
				//*             endif

				//提取二维码击穿检测区域
				//gen_rectangle1 (ROI_0, 2344.34, 1184.41, 2642.05, 1498.23)
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				//检测二维码击穿 n[24]:二维码打穿 DT63_T
				MedianRect(ho_ImageReduced, &ho_ImageMedian1, 5, 5);
				MedianRect(ho_ImageReduced, &ho_ImageMedian2, 100, 100);
				DynThreshold(ho_ImageMedian1, ho_ImageMedian2, &ho_RegionDynThresh, 35, "dark");
				Connection(ho_RegionDynThresh, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 10,
					99999);
				CountObj(ho_SelectedRegions, &hv_Number);
				if (0 != (int(hv_Number > 6)))
				{
					//concat_obj (dt.['DT63_T'], SelectedRegions, dt.['DT63_T'])
				}

				MedianRect(ho_ImageReduced, &ho_ImageMedian, 5, 5);
				MedianRect(ho_ImageReduced, &ho_ImageMedian3, 50, 50);
				SubImage(ho_ImageMedian, ho_ImageMedian3, &ho_ImageSub, 1, 128);
				SubImage(ho_ImageMedian3, ho_ImageMedian, &ho_ImageSub1, 1, 128);
				SubImage(ho_ImageSub, ho_ImageSub1, &ho_ImageSub2, 1, 128);

				MedianRect(ho_ImageSub2, &ho_ImageMedian4, 10, 10);
				ScaleImage(ho_ImageMedian4, &ho_ImageScaled, 2, -130);
				Threshold(ho_ImageScaled, &ho_Region, 0, 75);
				FillUp(ho_Region, &ho_RegionFillUp);
				Connection(ho_RegionFillUp, &ho_ConnectedRegions1);
				SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions1, ((HTuple("area").Append("width")).Append("height")),
					"and", ((HTuple(30).Append(0)).Append(0)), ((HTuple(99999).Append(20)).Append(20)));
				SelectGray(ho_SelectedRegions1, ho_ImageScaled, &ho_SelectedRegions2, "mean",
					"and", 0, 80);
				Union1(ho_SelectedRegions2, &ho_RegionUnion);
				ErosionCircle(ho_ROI_0, &ho_RegionErosion, 5);
				Intersection(ho_RegionUnion, ho_RegionErosion, &ho_RegionIntersection);

				Connection(ho_RegionIntersection, &ho_ConnectedRegions2);
				CountObj(ho_ConnectedRegions2, &hv_Number1);
				Intensity(ho_RegionIntersection, ho_ImageScaled, &hv_Mean, &hv_Deviation);
				AreaCenter(ho_RegionIntersection, &hv_Area, &hv_Row, &hv_Column);
				if (0 != (HTuple(HTuple(int(hv_Number1 > 6)).TupleAnd(int(hv_Mean < 70))).TupleAnd(int(hv_Area > 200))))
				{
					//concat_obj (dt.['DT63_T'], RegionIntersection, dt.['DT63_T'])
				}

				//大二维码击穿
				MedianRect(ho_ImageReduced, &ho_ImageMedian5, 15, 15);
				ScaleImage(ho_ImageMedian5, &ho_ImageScaled1, 2.5, -160);
				Threshold(ho_ImageScaled1, &ho_Region1, 0, 120);
				FillUp(ho_Region1, &ho_RegionFillUp1);
				OpeningCircle(ho_RegionFillUp1, &ho_RegionOpening, 3);
				Connection(ho_RegionOpening, &ho_ConnectedRegions3);
				SelectShape(ho_ConnectedRegions3, &ho_SelectedRegions3, "area", "and", 500,
					65000);
				Union1(ho_SelectedRegions3, &ho_RegionUnion1);
				Intensity(ho_RegionUnion1, ho_ImageScaled1, &hv_Mean1, &hv_Deviation1);
				AreaCenter(ho_RegionUnion1, &hv_Area1, &hv_Row1, &hv_Column1);
				if (0 != (HTuple(HTuple(int(hv_Mean1 < 110)).TupleAnd(int(hv_Area1 < 40000))).TupleAnd(int(hv_Area1 > 1000))))
				{
					//concat_obj (dt.['DT63_T'], RegionUnion1, dt.['DT63_T'])
				}
			}

			if (0 != (int(hv_ImageNum == 3)))
			{
				//二维码击穿DT63_T 初始化
				SetDictObject(ho_EmptyRegion, (*hv_dt), "DT63_T");
				//提取B基准
				MedianRect(ho_Image, &ho_ImageMedian3, 40, 8);
				ScaleImage(ho_ImageMedian3, &ho_ImageScaled6, 2.5, -50);
				Threshold(ho_ImageScaled6, &ho_Region6, 200, 255);
				FillUp(ho_Region6, &ho_RegionFillUp6);
				OpeningCircle(ho_RegionFillUp6, &ho_RegionOpening5, 3.5);
				Connection(ho_RegionOpening5, &ho_ConnectedRegions3);
				SelectShape(ho_ConnectedRegions3, &ho_SelectedRegions3, (HTuple("area").Append("row")),
					"and", (HTuple(2e+5).Append(250)), (HTuple(4e+5).Append(480)));
				ErosionCircle(ho_SelectedRegions3, &ho_RegionErosion2, 3.5);
				Union1(ho_RegionErosion2, &ho_RegionUnion6);

				//提取焊点
				MedianRect(ho_Image, &ho_ImageMedian4, 8, 8);
				ScaleImage(ho_ImageMedian4, &ho_ImageScaled2, 3, -50);
				Threshold(ho_ImageScaled2, &ho_Region2, 80, 150);

				OpeningCircle(ho_Region2, &ho_RegionOpening3, 3.5);
				FillUp(ho_RegionOpening3, &ho_RegionFillUp2);
				ErosionCircle(ho_RegionFillUp2, &ho_RegionErosion, 3.5);
				Connection(ho_RegionErosion, &ho_ConnectedRegions2);
				SelectShape(ho_ConnectedRegions2, &ho_SelectedRegions2, ((HTuple("area").Append("row")).Append("height")),
					"and", ((HTuple(5000).Append(300)).Append(80)), ((HTuple(2.2e+5).Append(680)).Append(150)));
				Union1(ho_SelectedRegions2, &ho_RegionUnion2);

				//提取BLC小方框区域
				MedianRect(ho_Image, &ho_ImageMedian5, 3, 3);
				ScaleImage(ho_ImageMedian5, &ho_ImageScaled7, 4, -100);
				ScaleImage(ho_ImageScaled7, &ho_ImageScaled8, 3, -300);
				Threshold(ho_ImageScaled8, &ho_Region7, 188, 255);
				FillUp(ho_Region7, &ho_RegionFillUp7);
				OpeningCircle(ho_RegionFillUp7, &ho_RegionOpening6, 3.5);
				Connection(ho_RegionOpening6, &ho_ConnectedRegions4);
				SelectShape(ho_ConnectedRegions4, &ho_SelectedRegions4, ((HTuple("area").Append("row")).Append("column")),
					"and", ((HTuple(1e+5).Append(800)).Append(1100)), ((HTuple(1.6e+5).Append(1600)).Append(1800)));
				Union1(ho_SelectedRegions4, &ho_RegionUnion7);

				//提取0.14
				MedianRect(ho_Image, &ho_ImageMedian23, 15, 3);
				ScaleImage(ho_ImageMedian23, &ho_ImageScaled22, 18, -200);
				Threshold(ho_ImageScaled22, &ho_Region22, 180, 255);
				FillUp(ho_Region22, &ho_RegionFillUp22);
				Connection(ho_RegionFillUp22, &ho_ConnectedRegions22);
				SelectShape(ho_ConnectedRegions22, &ho_SelectedRegions23, (HTuple("area").Append("row")),
					"and", (HTuple(40000).Append(100)), (HTuple(80000).Append(350)));
				Union1(ho_SelectedRegions23, &ho_RegionUnion25);

				Union2(ho_RegionUnion6, ho_RegionUnion2, &ho_RegionUnion34);
				Union2(ho_RegionUnion7, ho_RegionUnion34, &ho_RegionUnion35);
				Union2(ho_RegionUnion25, ho_RegionUnion35, &ho_RegionUnion36);

				if (false)
				{
					ConcatObj((*hv_dt).TupleGetDictObject("DT63_T"), ho_RegionUnion36, &ho___Tmp_Obj_0
						);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT63_T");
				}
			}

			if (0 != (int(hv_ImageNum == 4)))
			{
				//塑胶混铁屑TUD_T 初始化
				SetDictObject(ho_EmptyRegion, (*hv_dt), "TUD_T");

				SetDictObject(ho_EmptyRegion, (*hv_dt), "DT63_T");

				//提取焊点
				MedianRect(ho_Image, &ho_ImageMedian4, 8, 8);
				ScaleImage(ho_ImageMedian4, &ho_ImageScaled2, 4, -100);
				Threshold(ho_ImageScaled2, &ho_Region2, 80, 150);
				FillUp(ho_Region2, &ho_RegionFillUp2);
				OpeningCircle(ho_RegionFillUp2, &ho_RegionOpening3, 3.5);
				ErosionCircle(ho_RegionOpening3, &ho_RegionErosion, 3.5);
				Connection(ho_RegionErosion, &ho_ConnectedRegions2);
				SelectShape(ho_ConnectedRegions2, &ho_SelectedRegions2, ((HTuple("area").Append("row")).Append("width")),
					"and", ((HTuple(1.2e+5).Append(480)).Append(1000)), ((HTuple(2e+5).Append(750)).Append(1500)));
				Union1(ho_SelectedRegions2, &ho_RegionUnion2);

				//提取抓胶槽
				MedianRect(ho_Image, &ho_ImageMedian1, 15, 15);
				GenRectangle1(&ho_ROI_0, 554.504, 2270.93, 766.929, 2502.66);
				GenRectangle1(&ho_TMP_Region, 742.79, 2637.83, 950.386, 2845.42);
				Union2(ho_ROI_0, ho_TMP_Region, &ho_ROI_0);
				GenRectangle1(&ho_TMP_Region, 1157.98, 2956.46, 1486.28, 3178.53);
				Union2(ho_ROI_0, ho_TMP_Region, &ho_ROI_0);
				GenRectangle1(&ho_TMP_Region, 1993.2, 2903.36, 2345.63, 3130.26);
				Union2(ho_ROI_0, ho_TMP_Region, &ho_ROI_0);
				ReduceDomain(ho_ImageMedian1, ho_ROI_0, &ho_ImageReduced1);
				ScaleImage(ho_ImageReduced1, &ho_ImageScaled1, 2, -100);
				Threshold(ho_ImageScaled1, &ho_Region1, 0, 100);
				FillUp(ho_Region1, &ho_RegionFillUp1);
				OpeningCircle(ho_RegionFillUp1, &ho_RegionOpening2, 3.5);
				Connection(ho_RegionOpening2, &ho_ConnectedRegions1);
				SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions1, (HTuple("area").Append("circularity")),
					"and", (HTuple(6500).Append(0.5)), (HTuple(8500).Append(1)));
				Union1(ho_SelectedRegions1, &ho_RegionUnion1);

				//提取塑铝结合
				GenRectangle1(&ho_ROI_0, 617.266, 1865.41, 998.665, 2430.25);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced5);
				MedianRect(ho_ImageReduced5, &ho_ImageMedian4, 15, 15);
				ScaleImage(ho_ImageMedian4, &ho_ImageScaled2, 2, -50);
				Threshold(ho_ImageScaled2, &ho_Region2, 0, 100);
				FillUp(ho_Region2, &ho_RegionFillUp23);
				Connection(ho_RegionFillUp23, &ho_ConnectedRegions23);
				SelectShape(ho_ConnectedRegions23, &ho_SelectedRegions24, "area", "and",
					1e+5, 1.5e+5);
				DilationCircle(ho_SelectedRegions24, &ho_RegionDilation4, 30);
				Difference(ho_RegionDilation4, ho_SelectedRegions24, &ho_RegionDifference4
					);
				ShapeTrans(ho_RegionDifference4, &ho_RegionTrans6, "rectangle1");
				MoveRegion(ho_RegionTrans6, &ho_RegionMoved2, -160, 0);
				Difference(ho_RegionDifference4, ho_RegionMoved2, &ho_RegionDifference5);
				Connection(ho_RegionDifference5, &ho_ConnectedRegions24);
				SelectShape(ho_ConnectedRegions24, &ho_SelectedRegions25, "area", "and",
					15000, 30000);
				Union1(ho_SelectedRegions25, &ho_RegionUnion26);

				Union2(ho_RegionUnion2, ho_RegionUnion1, &ho_RegionUnion37);
				Union2(ho_RegionUnion26, ho_RegionUnion37, &ho_RegionUnion38);

				if (false)
				{
					ConcatObj((*hv_dt).TupleGetDictObject("DT63_T"), ho_RegionUnion38, &ho___Tmp_Obj_0
						);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT63_T");
				}

				//检测塑胶混铁屑
				GenRectangle1(&ho_ROI_0, 0.839651, 2471.06, 288.582, 2675.49);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced12);
				ScaleImage(ho_ImageReduced12, &ho_ImageScaled21, 5, -150);
				Threshold(ho_ImageScaled21, &ho_Region24, 200, 255);
				OpeningCircle(ho_Region24, &ho_RegionOpening12, 1);
				FillUp(ho_RegionOpening12, &ho_RegionFillUp25);
				Connection(ho_RegionFillUp25, &ho_ConnectedRegions26);
				SelectShape(ho_ConnectedRegions26, &ho_SelectedRegions27, "area", "and",
					300, 800);
				Union1(ho_SelectedRegions27, &ho_RegionUnion17);
				Intensity(ho_RegionUnion17, ho_ImageScaled21, &hv_Mean11, &hv_Deviation11);
				if (0 != (int(hv_Mean11 > 240)))
				{
					ConcatObj((*hv_dt).TupleGetDictObject("TUD_T"), ho_RegionUnion17, &ho___Tmp_Obj_0
						);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "TUD_T");
				}
			}

			if (0 != (int(hv_ImageNum == 5)))
			{
				//抓胶槽偏位 DT65_T 初始化
				SetDictObject(ho_EmptyRegion, (*hv_dt), "DT65_T");
				//抓胶槽偏位
				MedianRect(ho_Image, &ho_ImageMedian13, 8, 8);
				GenRectangle1(&ho_ROI_0, 917.242, 3201.64, 2080.75, 3756.83);
				ReduceDomain(ho_ImageMedian13, ho_ROI_0, &ho_ImageReduced5);
				Threshold(ho_ImageReduced5, &ho_Region9, 180, 255);
				FillUp(ho_Region9, &ho_RegionFillUp9);
				Connection(ho_RegionFillUp9, &ho_ConnectedRegions9);
				SelectShape(ho_ConnectedRegions9, &ho_SelectedRegions9, "area", "and", 1000,
					4000);
				ShapeTrans(ho_SelectedRegions9, &ho_RegionTrans, "rectangle1");

				CountObj(ho_RegionTrans, &hv_Number5);
				if (0 != (int(hv_Number5 == 2)))
				{
					SelectObj(ho_RegionTrans, &ho_ObjectSelected1, 1);
					SelectObj(ho_RegionTrans, &ho_ObjectSelected2, 2);

					RegionFeatures(ho_ObjectSelected1, "column1", &hv_Value1);
					RegionFeatures(ho_ObjectSelected2, "column1", &hv_Value2);
					TupleAbs(hv_Value1 - hv_Value2, &hv_Abs);
					if (0 != (int(hv_Abs > 10)))
					{
						ConcatObj((*hv_dt).TupleGetDictObject("DT65_T"), ho_RegionTrans, &ho___Tmp_Obj_0
							);
						SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT65_T");
					}
				}

				//提取BLC边缘
				MedianRect(ho_Image, &ho_ImageMedian6, 15, 15);
				ScaleImage(ho_ImageMedian6, &ho_ImageScaled9, 5, -200);
				Threshold(ho_ImageScaled9, &ho_Region9, 0, 100);
				FillUp(ho_Region9, &ho_RegionFillUp9);
				OpeningCircle(ho_RegionFillUp9, &ho_RegionOpening7, 3.5);
				Connection(ho_RegionOpening7, &ho_ConnectedRegions8);
				SelectShape(ho_ConnectedRegions8, &ho_SelectedRegions8, (HTuple("area").Append("column")),
					"and", (HTuple(5e+5).Append(0)), (HTuple(1e+6).Append(1500)));
				DilationCircle(ho_SelectedRegions8, &ho_RegionDilation, 2);
				DilationCircle(ho_RegionDilation, &ho_RegionDilation1, 99);
				Difference(ho_RegionDilation1, ho_RegionDilation, &ho_RegionDifference);
				Intersection(ho_Image, ho_RegionDifference, &ho_RegionIntersection);
				Union1(ho_RegionIntersection, &ho_RegionUnion8);

				//提取抓胶槽
				GenRectangle1(&ho_ROI_0, 917.242, 3201.64, 2080.75, 3756.83);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced3);
				MedianRect(ho_ImageReduced3, &ho_ImageMedian10, 6, 6);
				ScaleImage(ho_ImageMedian10, &ho_ImageScaled10, 2, -100);
				Threshold(ho_ImageScaled10, &ho_Region10, 200, 255);
				FillUp(ho_Region10, &ho_RegionFillUp10);
				OpeningCircle(ho_RegionFillUp10, &ho_RegionOpening8, 3.5);
				Connection(ho_RegionOpening8, &ho_ConnectedRegions9);
				SelectShape(ho_ConnectedRegions9, &ho_SelectedRegions9, "area", "and", 1000,
					3000);
				Union1(ho_SelectedRegions9, &ho_RegionUnion9);

				//提取Bracket支架
				MedianRect(ho_Image, &ho_ImageMedian11, 3, 3);
				ScaleImage(ho_ImageMedian11, &ho_ImageScaled11, 20, -200);
				Threshold(ho_ImageScaled11, &ho_Region11, 100, 255);
				FillUp(ho_Region11, &ho_RegionFillUp11);
				OpeningCircle(ho_RegionFillUp11, &ho_RegionOpening9, 3.5);
				Connection(ho_RegionOpening9, &ho_ConnectedRegions10);
				SelectShape(ho_ConnectedRegions10, &ho_SelectedRegions10, (HTuple("area").Append("height")),
					"and", (HTuple(30000).Append(600)), (HTuple(90000).Append(820)));
				GenRectangle1(&ho_ROI_0, 2235.67, 3270.86, 3186.4, 3670.53);
				Intersection(ho_SelectedRegions10, ho_ROI_0, &ho_RegionIntersection1);
				Union1(ho_RegionIntersection1, &ho_RegionUnion10);

				Union2(ho_RegionUnion8, ho_RegionUnion9, &ho_RegionUnion39);
				Union2(ho_RegionUnion10, ho_RegionUnion39, &ho_RegionUnion40);

				if (false)
				{
					ConcatObj((*hv_dt).TupleGetDictObject("DT65_T"), ho_RegionUnion40, &ho___Tmp_Obj_0
						);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT65_T");
				}

			}

			if (0 != (int(hv_ImageNum == 6)))
			{
				SetDictObject(ho_EmptyRegion, (*hv_dt), "DT65_T");

				//提取BLC边缘
				MedianRect(ho_Image, &ho_ImageMedian12, 15, 15);
				ScaleImage(ho_ImageMedian12, &ho_ImageScaled12, 5, -100);
				Threshold(ho_ImageScaled12, &ho_Region12, 200, 255);
				FillUp(ho_Region12, &ho_RegionFillUp12);
				Connection(ho_RegionFillUp12, &ho_ConnectedRegions11);
				SelectShape(ho_ConnectedRegions11, &ho_SelectedRegions11, "area", "and",
					1e+6, 4e+6);
				ErosionCircle(ho_SelectedRegions11, &ho_RegionErosion4, 80);
				Difference(ho_SelectedRegions11, ho_RegionErosion4, &ho_RegionDifference1
					);
				GenRectangle1(&ho_ROI_0, -267.977, -208.685, 647.118, 311.222);
				GenRectangle1(&ho_TMP_Region, -407.071, 120.833, 259.118, 1848.98);
				Union2(ho_ROI_0, ho_TMP_Region, &ho_ROI_0);
				GenRectangle1(&ho_TMP_Region, -209.411, 2405.5, 134.665, 4104.35);
				Union2(ho_ROI_0, ho_TMP_Region, &ho_ROI_0);
				GenRectangle1(&ho_TMP_Region, -392.43, 3935.93, 1232.78, 4463.16);
				Union2(ho_ROI_0, ho_TMP_Region, &ho_ROI_0);
				GenRectangle1(&ho_TMP_Region, 2111.27, 3987.18, 3143.5, 4463.16);
				Union2(ho_ROI_0, ho_TMP_Region, &ho_ROI_0);
				GenRectangle1(&ho_TMP_Region, 2960.48, 2551.95, 3238.67, 4324.03);
				Union2(ho_ROI_0, ho_TMP_Region, &ho_ROI_0);
				Difference(ho_RegionDifference1, ho_ROI_0, &ho_RegionDifference2);
				Union1(ho_RegionDifference2, &ho_RegionUnion11);

				if (false)
				{
					ConcatObj((*hv_dt).TupleGetDictObject("DT65_T"), ho_RegionUnion11, &ho___Tmp_Obj_0
						);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT65_T");
				}
			}

			if (0 != (int(hv_ImageNum == 7)))
			{
				SetDictObject(ho_EmptyRegion, (*hv_dt), "DT65_T");
				//提取BLC边缘
				MedianRect(ho_Image, &ho_ImageMedian12, 15, 15);
				ScaleImage(ho_ImageMedian12, &ho_ImageScaled12, 4, -200);
				Threshold(ho_ImageScaled12, &ho_Region12, 180, 255);
				FillUp(ho_Region12, &ho_RegionFillUp12);
				Connection(ho_RegionFillUp12, &ho_ConnectedRegions11);
				SelectShape(ho_ConnectedRegions11, &ho_SelectedRegions12, "area", "and",
					1.6e+6, 1.8e+6);
				ErosionCircle(ho_SelectedRegions12, &ho_RegionErosion5, 85);
				Difference(ho_SelectedRegions12, ho_RegionErosion5, &ho_RegionDifference3
					);
				Threshold(ho_ImageScaled12, &ho_Region13, 0, 120);
				FillUp(ho_Region13, &ho_RegionFillUp13);
				OpeningCircle(ho_RegionFillUp13, &ho_RegionOpening10, 20);
				DilationCircle(ho_RegionOpening10, &ho_RegionDilation2, 88);
				Intersection(ho_RegionDifference3, ho_RegionDilation2, &ho_RegionIntersection3
					);
				Union1(ho_RegionIntersection3, &ho_RegionUnion12);

				if (false)
				{
					ConcatObj((*hv_dt).TupleGetDictObject("DT65_T"), ho_RegionUnion12, &ho___Tmp_Obj_0
						);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT65_T");
				}
			}

			if (0 != (int(hv_ImageNum == 8)))
			{
				//压伤 DT58_T 初始化
				SetDictObject(ho_EmptyRegion, (*hv_dt), "DT58_T");
				//压伤
				MedianRect(ho_Image, &ho_ImageMedian17, 10, 30);
				ScaleImage(ho_ImageMedian17, &ho_ImageScaled12, 4, -50);
				Threshold(ho_ImageScaled12, &ho_Region13, 200, 255);
				FillUp(ho_Region13, &ho_RegionFillUp13);
				Connection(ho_RegionFillUp13, &ho_ConnectedRegions13);
				SelectShape(ho_ConnectedRegions13, &ho_SelectedRegions13, "area", "and",
					30000, 650000);
				GenRectangle1(&ho_ROI_0, 1436.25, 3400.15, 1588.21, 3569.89);
				Intersection(ho_SelectedRegions13, ho_ROI_0, &ho_RegionIntersection6);
				ShapeTrans(ho_RegionIntersection6, &ho_RegionTrans1, "rectangle1");
				Union1(ho_RegionTrans1, &ho_RegionUnion10);

				ReduceDomain(ho_ImageScaled12, ho_RegionUnion10, &ho_ImageReduced8);
				ScaleImage(ho_ImageReduced8, &ho_ImageScaled13, 2, -150);
				Threshold(ho_ImageScaled13, &ho_Region14, 0, 100);
				FillUp(ho_Region14, &ho_RegionFillUp14);
				Connection(ho_RegionFillUp14, &ho_ConnectedRegions14);
				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions14, (HTuple("area").Append("width")),
					"and", (HTuple(300).Append(0)), (HTuple(500).Append(8)));
				Union1(ho_SelectedRegions14, &ho_RegionUnion11);
				Intensity(ho_RegionUnion11, ho_ImageScaled13, &hv_Mean7, &hv_Deviation7);
				if (0 != (int(hv_Mean7 < 70)))
				{
					ConcatObj((*hv_dt).TupleGetDictObject("DT58_T"), ho_RegionUnion11, &ho___Tmp_Obj_0
						);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT58_T");
				}

				//提取BLC边缘
				MedianRect(ho_Image, &ho_ImageMedian12, 15, 15);
				ScaleImage(ho_ImageMedian12, &ho_ImageScaled12, 4, -150);
				Threshold(ho_ImageScaled12, &ho_Region12, 180, 255);
				FillUp(ho_Region12, &ho_RegionFillUp12);
				GenRectangle1(&ho_ROI_0, 1053.65, 1354.87, 2832.59, 1962.65);
				Intersection(ho_RegionFillUp12, ho_ROI_0, &ho_RegionIntersection4);
				Connection(ho_RegionIntersection4, &ho_ConnectedRegions12);
				CountObj(ho_ConnectedRegions12, &hv_Number1);
				if (0 != (int(hv_Number1 == 1)))
				{
					Union1(ho_ConnectedRegions12, &ho_RegionUnion13);
					if (false)
					{
						ConcatObj((*hv_dt).TupleGetDictObject("DT58_T"), ho_RegionUnion13, &ho___Tmp_Obj_0
							);
						SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT58_T");
					}
				}

			}

			if (0 != (int(hv_ImageNum == 9)))
			{
				//混版本 DT66_T 初始化
				SetDictObject(ho_EmptyRegion, (*hv_dt), "DT66_T");
				//混版本
				MedianRect(ho_Image, &ho_ImageMedian18, 50, 10);
				ScaleImage(ho_ImageMedian18, &ho_ImageScaled14, 3, -50);
				Threshold(ho_ImageScaled14, &ho_Region15, 0, 120);
				FillUp(ho_Region15, &ho_RegionFillUp15);
				Connection(ho_RegionFillUp15, &ho_ConnectedRegions15);
				SelectShape(ho_ConnectedRegions15, &ho_SelectedRegions15, "area", "and",
					18000, 28000);
				GenRectangle1(&ho_ROI_0, 2606.97, 3072.58, 2696.36, 4113.4);
				Intersection(ho_SelectedRegions15, ho_ROI_0, &ho_RegionIntersection7);
				ErosionRectangle1(ho_RegionIntersection7, &ho_RegionErosion5, 1, 8);
				Union1(ho_RegionErosion5, &ho_RegionUnion13);
				ReduceDomain(ho_Image, ho_RegionUnion13, &ho_ImageReduced9);

				ScaleImage(ho_ImageReduced9, &ho_ImageScaled15, 4.2, -50);
				Threshold(ho_ImageScaled15, &ho_Region16, 150, 255);
				FillUp(ho_Region16, &ho_RegionFillUp16);
				Connection(ho_RegionFillUp16, &ho_ConnectedRegions16);
				SelectShape(ho_ConnectedRegions16, &ho_SelectedRegions16, "area", "and",
					30, 150);
				CountObj(ho_SelectedRegions16, &hv_Number2);
				if (0 != (int(hv_Number2 > 20)))
				{
					Union1(ho_SelectedRegions16, &ho_RegionUnion12);
					Intensity(ho_RegionUnion12, ho_ImageScaled15, &hv_Mean8, &hv_Deviation8);
					if (0 != (int(hv_Mean8 > 210)))
					{
						ConcatObj((*hv_dt).TupleGetDictObject("DT66_T"), ho_RegionUnion12, &ho___Tmp_Obj_0
							);
						SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT66_T");
					}
				}

				//提取BLC边缘
				MedianRect(ho_Image, &ho_ImageMedian12, 15, 15);
				ScaleImage(ho_ImageMedian12, &ho_ImageScaled12, 4, -150);
				Threshold(ho_ImageScaled12, &ho_Region12, 180, 255);
				//fill_up (Region12, RegionFillUp12)
				Connection(ho_Region12, &ho_ConnectedRegions13);
				SelectShape(ho_ConnectedRegions13, &ho_SelectedRegions13, "area", "and",
					2e+6, 6e+6);
				GenRectangle1(&ho_ROI_0, -61.6554, 1389.07, 509.364, 1799.14);
				GenRectangle1(&ho_TMP_Region, 1120.65, 2095.71, 1947.89, 2557.03);
				Union2(ho_ROI_0, ho_TMP_Region, &ho_ROI_0);
				GenRectangle2(&ho_TMP_Region, 692.383, 2919.5, HTuple(21.0326).TupleRad(),
					509.946, 261.868);
				Union2(ho_ROI_0, ho_TMP_Region, &ho_ROI_0);
				Intersection(ho_SelectedRegions13, ho_ROI_0, &ho_RegionIntersection5);
				Union1(ho_RegionIntersection5, &ho_RegionUnion14);

				//提取焊点
				MedianRect(ho_Image, &ho_ImageMedian13, 5, 5);
				ScaleImage(ho_ImageMedian13, &ho_ImageScaled2, 5, -250);
				Threshold(ho_ImageScaled2, &ho_Region2, 20, 150);
				FillUp(ho_Region2, &ho_RegionFillUp2);
				OpeningCircle(ho_RegionFillUp2, &ho_RegionOpening3, 18);
				ErosionCircle(ho_RegionOpening3, &ho_RegionErosion, 8);
				Connection(ho_RegionErosion, &ho_ConnectedRegions2);
				SelectShape(ho_ConnectedRegions2, &ho_SelectedRegions2, ((HTuple("area").Append("row")).Append("column")),
					"and", ((HTuple(50000).Append(2450)).Append(3000)), ((HTuple(1e+5).Append(2750)).Append(4200)));
				ShapeTrans(ho_SelectedRegions2, &ho_RegionTrans, "convex");
				Union1(ho_RegionTrans, &ho_RegionUnion2);

				//提取焊缝槽下方
				MedianRect(ho_Image, &ho_ImageMedian14, 18, 3);
				ScaleImage(ho_ImageMedian14, &ho_ImageScaled13, 4, -130);
				Threshold(ho_ImageScaled13, &ho_Region14, 180, 255);
				FillUp(ho_Region14, &ho_RegionFillUp14);
				OpeningCircle(ho_RegionFillUp14, &ho_RegionOpening11, 1);
				Connection(ho_RegionOpening11, &ho_ConnectedRegions14);
				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions14, ((HTuple("area").Append("width")).Append("column")),
					"and", ((HTuple(10000).Append(1100)).Append(2800)), ((HTuple(31000).Append(1300)).Append(4200)));
				Union1(ho_SelectedRegions14, &ho_RegionUnion15);

				//提取B基准喷漆区域
				MedianRect(ho_Image, &ho_ImageMedian24, 20, 3);
				ScaleImage(ho_ImageMedian24, &ho_ImageScaled23, 5, -60);
				Threshold(ho_ImageScaled23, &ho_Region23, 50, 120);
				OpeningCircle(ho_Region23, &ho_RegionOpening16, 6);
				FillUp(ho_RegionOpening16, &ho_RegionFillUp24);
				Connection(ho_RegionFillUp24, &ho_ConnectedRegions25);
				SelectShape(ho_ConnectedRegions25, &ho_SelectedRegions26, (HTuple("area").Append("row")),
					"and", (HTuple(40000).Append(2400)), (HTuple(2e+5).Append(2900)));
				Union1(ho_SelectedRegions26, &ho_RegionUnion16);
				ClosingCircle(ho_RegionUnion16, &ho_RegionClosing2, 88);
				ShapeTrans(ho_RegionClosing2, &ho_RegionTrans2, "convex");
				ErosionRectangle1(ho_RegionTrans2, &ho_RegionErosion8, 11, 11);
				Union1(ho_RegionErosion8, &ho_RegionUnion41);

				Union2(ho_RegionUnion14, ho_RegionUnion2, &ho_RegionUnion42);
				Union2(ho_RegionUnion15, ho_RegionUnion42, &ho_RegionUnion43);
				Union2(ho_RegionUnion41, ho_RegionUnion43, &ho_RegionUnion44);

				if (false)
				{
					ConcatObj((*hv_dt).TupleGetDictObject("DT66_T"), ho_RegionUnion44, &ho___Tmp_Obj_0
						);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT66_T");
				}

			}

			if (0 != (int(hv_ImageNum == 10)))
			{
				//混版本
			}

			if (0 != (int(hv_ImageNum == 11)))
			{
				//焊点气孔 DT54_T 初始化
				SetDictObject(ho_EmptyRegion, (*hv_dt), "DT54_T");
				//焊点气孔
				MedianRect(ho_Image, &ho_ImageMedian6, 50, 15);
				ScaleImage(ho_ImageMedian6, &ho_ImageScaled2, 3, -150);
				Threshold(ho_ImageScaled2, &ho_Region2, 50, 100);
				FillUp(ho_Region2, &ho_RegionFillUp2);
				OpeningCircle(ho_RegionFillUp2, &ho_RegionOpening5, 3.5);
				Connection(ho_RegionOpening5, &ho_ConnectedRegions4);
				SelectShape(ho_ConnectedRegions4, &ho_SelectedRegions4, (HTuple("area").Append("row")),
					"and", (HTuple(100000).Append(2300)), (HTuple(500000).Append(2800)));
				Union1(ho_SelectedRegions4, &ho_RegionUnion2);
				GenRectangle1(&ho_ROI_0, 2307.93, -82.7685, 2674.63, 3639.61);
				Intersection(ho_RegionUnion2, ho_ROI_0, &ho_RegionIntersection1);
				ReduceDomain(ho_Image, ho_RegionIntersection1, &ho_ImageReduced1);
				MedianRect(ho_ImageReduced1, &ho_ImageMedian7, 8, 8);
				ScaleImage(ho_ImageMedian7, &ho_ImageScaled3, 5, -100);
				Threshold(ho_ImageScaled3, &ho_Region3, 0, 100);
				FillUp(ho_Region3, &ho_RegionFillUp3);
				Connection(ho_RegionFillUp3, &ho_ConnectedRegions5);
				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions5, (HTuple("area").Append("circularity")),
					"and", (HTuple(188).Append(0.3)), (HTuple(99999).Append(1)));
				Union1(ho_SelectedRegions5, &ho_RegionUnion3);
				Intensity(ho_RegionUnion3, ho_ImageScaled3, &hv_Mean2, &hv_Deviation2);
				if (0 != (int(hv_Mean2 < 70)))
				{
					ConcatObj((*hv_dt).TupleGetDictObject("DT54_T"), ho_RegionUnion3, &ho___Tmp_Obj_0
						);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT54_T");
				}
			}

			if (0 != (int(hv_ImageNum == 12)))
			{
				//焊点裂纹 DT49_T 初始化
				SetDictObject(ho_EmptyRegion, (*hv_dt), "DT49_T");

				//结构不良 DT67_T 初始化
				SetDictObject(ho_EmptyRegion, (*hv_dt), "DT67_T");

				//焊点气孔 DT54_T 初始化
				SetDictObject(ho_EmptyRegion, (*hv_dt), "DT54_T");

				//镭雕缺陷 DT47_T 初始化
				SetDictObject(ho_EmptyRegion, (*hv_dt), "DT47_T");

				//焊点裂纹
				MedianRect(ho_Image, &ho_ImageMedian8, 35, 15);
				ScaleImage(ho_ImageMedian8, &ho_ImageScaled4, 3.5, -100);
				Threshold(ho_ImageScaled4, &ho_Region4, 128, 255);
				FillUp(ho_Region4, &ho_RegionFillUp4);
				Connection(ho_RegionFillUp4, &ho_ConnectedRegions6);
				SelectShape(ho_ConnectedRegions6, &ho_SelectedRegions6, "area", "and", 500000,
					9999999);
				GenRectangle1(&ho_ROI_0, 2432.77, 619.142, 2670, 1486.16);
				Intersection(ho_SelectedRegions6, ho_ROI_0, &ho_RegionIntersection2);
				Union1(ho_RegionIntersection2, &ho_RegionUnion4);
				ClosingRectangle1(ho_RegionUnion4, &ho_RegionClosing, 10, 50);
				ErosionCircle(ho_RegionClosing, &ho_RegionErosion1, 3.5);
				ReduceDomain(ho_ImageScaled4, ho_RegionErosion1, &ho_ImageReduced4);
				Threshold(ho_ImageReduced4, &ho_Region8, 100, 170);
				FillUp(ho_Region8, &ho_RegionFillUp8);
				ClosingRectangle1(ho_RegionFillUp8, &ho_RegionClosing1, 10, 50);
				ErosionCircle(ho_RegionClosing1, &ho_RegionErosion3, 3.5);
				ReduceDomain(ho_Image, ho_RegionErosion3, &ho_ImageReduced2);

				MedianRect(ho_ImageReduced2, &ho_ImageMedian9, 3, 3);
				ScaleImage(ho_ImageMedian9, &ho_ImageScaled5, 3, -50);
				Threshold(ho_ImageScaled5, &ho_Region5, 0, 120);
				FillUp(ho_Region5, &ho_RegionFillUp5);
				Connection(ho_RegionFillUp5, &ho_ConnectedRegions7);
				SelectShape(ho_ConnectedRegions7, &ho_SelectedRegions7, (HTuple("area").Append("width")),
					"and", (HTuple(3000).Append(300)), (HTuple(99999).Append(700)));
				Union1(ho_SelectedRegions7, &ho_RegionUnion5);
				Intensity(ho_RegionUnion5, ho_ImageScaled5, &hv_Mean3, &hv_Deviation3);
				if (0 != (int(hv_Mean3 < 60)))
				{
					ConcatObj((*hv_dt).TupleGetDictObject("DT49_T"), ho_RegionUnion5, &ho___Tmp_Obj_0
						);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT49_T");
				}

				//结构不良
				MedianRect(ho_Image, &ho_ImageMedian19, 30, 15);
				ScaleImage(ho_ImageMedian19, &ho_ImageScaled16, 2.2, -120);
				Threshold(ho_ImageScaled16, &ho_Region17, 180, 255);
				FillUp(ho_Region17, &ho_RegionFillUp17);
				OpeningCircle(ho_RegionFillUp17, &ho_RegionOpening4, 5);
				Connection(ho_RegionOpening4, &ho_ConnectedRegions17);
				SelectShape(ho_ConnectedRegions17, &ho_SelectedRegions17, ((HTuple("area").Append("row")).Append("height")),
					"and", ((HTuple(30000).Append(2400)).Append(80)), ((HTuple(180000).Append(2900)).Append(250)));
				CountObj(ho_SelectedRegions17, &hv_Number3);
				if (0 != (int(hv_Number3 == 1)))
				{
					GenRectangle1(&ho_ROI_0, 2607.45, 723.125, 2851.01, 1302.69);
					Intersection(ho_SelectedRegions17, ho_ROI_0, &ho_RegionIntersection8);
					RegionFeatures(ho_RegionIntersection8, "height", &hv_Value);
					if (0 != (int(hv_Value > 50)))
					{
						ConcatObj((*hv_dt).TupleGetDictObject("DT67_T"), ho_RegionIntersection8,
							&ho___Tmp_Obj_0);
						SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT67_T");
					}
				}

				//焊点气孔
				MedianRect(ho_Image, &ho_ImageMedian8, 35, 15);
				ScaleImage(ho_ImageMedian8, &ho_ImageScaled4, 3.5, -100);
				Threshold(ho_ImageScaled4, &ho_Region4, 128, 255);
				FillUp(ho_Region4, &ho_RegionFillUp4);
				Connection(ho_RegionFillUp4, &ho_ConnectedRegions6);
				SelectShape(ho_ConnectedRegions6, &ho_SelectedRegions6, "area", "and", 500000,
					9999999);
				GenRectangle1(&ho_ROI_0, 2432.77, 619.142, 2670, 1486.16);
				Intersection(ho_SelectedRegions6, ho_ROI_0, &ho_RegionIntersection2);
				Union1(ho_RegionIntersection2, &ho_RegionUnion4);
				ClosingRectangle1(ho_RegionUnion4, &ho_RegionClosing, 10, 50);
				ErosionCircle(ho_RegionClosing, &ho_RegionErosion1, 3.5);
				ReduceDomain(ho_ImageScaled4, ho_RegionErosion1, &ho_ImageReduced4);
				Threshold(ho_ImageReduced4, &ho_Region8, 100, 170);
				FillUp(ho_Region8, &ho_RegionFillUp8);
				ClosingRectangle1(ho_RegionFillUp8, &ho_RegionClosing1, 10, 50);
				ErosionCircle(ho_RegionClosing1, &ho_RegionErosion3, 3.5);
				ReduceDomain(ho_Image, ho_RegionErosion3, &ho_ImageReduced2);

				MedianRect(ho_ImageReduced2, &ho_ImageMedian7, 8, 8);
				ScaleImage(ho_ImageMedian7, &ho_ImageScaled3, 5, -100);
				Threshold(ho_ImageScaled3, &ho_Region3, 0, 100);
				FillUp(ho_Region3, &ho_RegionFillUp3);
				Connection(ho_RegionFillUp3, &ho_ConnectedRegions5);
				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions5, (HTuple("area").Append("circularity")),
					"and", (HTuple(188).Append(0.2)), (HTuple(99999).Append(1)));
				Union1(ho_SelectedRegions5, &ho_RegionUnion3);
				Intensity(ho_RegionUnion3, ho_ImageScaled3, &hv_Mean2, &hv_Deviation2);
				if (0 != (int(hv_Mean2 < 70)))
				{
					ConcatObj((*hv_dt).TupleGetDictObject("DT54_T"), ho_RegionUnion3, &ho___Tmp_Obj_0
						);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT54_T");
				}

				//镭雕缺陷
				MedianRect(ho_Image, &ho_ImageMedian24, 15, 15);
				ScaleImage(ho_ImageMedian24, &ho_ImageScaled19, 2, -100);
				Threshold(ho_ImageScaled19, &ho_Region20, 100, 180);
				FillUp(ho_Region20, &ho_RegionFillUp20);
				OpeningCircle(ho_RegionFillUp20, &ho_RegionOpening8, 3.5);
				ClosingRectangle1(ho_RegionOpening8, &ho_RegionClosing2, 500, 20);
				Connection(ho_RegionClosing2, &ho_ConnectedRegions20);
				SelectShape(ho_ConnectedRegions20, &ho_SelectedRegions21, "area", "and",
					6e+6, 8e+6);
				ReduceDomain(ho_ImageScaled19, ho_SelectedRegions21, &ho_ImageReduced11);
				Threshold(ho_ImageReduced11, &ho_Region21, 200, 255);
				OpeningCircle(ho_Region21, &ho_RegionOpening9, 3.5);
				Connection(ho_RegionOpening9, &ho_ConnectedRegions21);
				SelectShape(ho_ConnectedRegions21, &ho_SelectedRegions22, "area", "and",
					5000, 99999);
				Union1(ho_SelectedRegions22, &ho_RegionUnion15);
				AreaCenter(ho_RegionUnion15, &hv_Area5, &hv_Row5, &hv_Column5);
				Intensity(ho_RegionUnion15, ho_ImageReduced11, &hv_Mean10, &hv_Deviation10);
				if (0 != (HTuple(int(hv_Area5 > 6000)).TupleAnd(int(hv_Mean10 > 250))))
				{
					ConcatObj((*hv_dt).TupleGetDictObject("DT47_T"), ho_RegionUnion15, &ho___Tmp_Obj_0
						);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT47_T");
				}

			}

			if (0 != (int(hv_ImageNum == 13)))
			{
				//塑胶混铁屑TUD_T 初始化
				SetDictObject(ho_EmptyRegion, (*hv_dt), "TUD_T");

				//检测塑胶混铁屑
				GenRectangle1(&ho_ROI_0, 0.839651, 2471.06, 288.582, 2675.49);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced12);
				ScaleImage(ho_ImageReduced12, &ho_ImageScaled21, 5, -600);
				Threshold(ho_ImageScaled21, &ho_Region24, 200, 255);
				OpeningCircle(ho_Region24, &ho_RegionOpening12, 1);
				FillUp(ho_RegionOpening12, &ho_RegionFillUp25);
				Connection(ho_RegionFillUp25, &ho_ConnectedRegions26);
				SelectShape(ho_ConnectedRegions26, &ho_SelectedRegions27, "area", "and",
					300, 800);
				Union1(ho_SelectedRegions27, &ho_RegionUnion17);
				Intensity(ho_RegionUnion17, ho_ImageScaled21, &hv_Mean11, &hv_Deviation11);
				if (0 != (int(hv_Mean11 > 240)))
				{
					ConcatObj((*hv_dt).TupleGetDictObject("TUD_T"), ho_RegionUnion17, &ho___Tmp_Obj_0
						);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "TUD_T");
				}

			}

			if (0 != (int(hv_ImageNum == 18)))
			{
				//崩胶 MOP_T 初始化
				SetDictObject(ho_EmptyRegion, (*hv_dt), "MOP_T");

				//塑胶混铁屑TUD_T 初始化
				SetDictObject(ho_EmptyRegion, (*hv_dt), "TUD_T");

				//崩胶
				MedianRect(ho_Image, &ho_ImageMedian10, 50, 50);
				ScaleImage(ho_ImageMedian10, &ho_ImageScaled6, 2, -100);
				Threshold(ho_ImageScaled6, &ho_Region6, 50, 180);
				FillUp(ho_Region6, &ho_RegionFillUp6);
				OpeningCircle(ho_RegionFillUp6, &ho_RegionOpening1, 20);
				ErosionCircle(ho_RegionOpening1, &ho_RegionErosion2, 15);
				GenRectangle1(&ho_ROI_0, 729.137, 912.917, 1644.14, 1896.36);
				Intersection(ho_RegionErosion2, ho_ROI_0, &ho_RegionIntersection3);
				GenRectangle1(&ho_ROI_0, 600, 800, 1400, 1100);
				Difference(ho_RegionIntersection3, ho_ROI_0, &ho_RegionDifference);
				ReduceDomain(ho_Image, ho_RegionDifference, &ho_ImageReduced3);

				ScaleImage(ho_ImageReduced3, &ho_ImageScaled7, 3, -180);
				MedianRect(ho_ImageScaled7, &ho_ImageMedian11, 15, 15);
				MedianRect(ho_ImageScaled7, &ho_ImageMedian12, 50, 50);
				SubImage(ho_ImageMedian11, ho_ImageMedian12, &ho_ImageSub3, 1, 128);
				SubImage(ho_ImageMedian12, ho_ImageMedian11, &ho_ImageSub4, 1, 128);
				SubImage(ho_ImageSub3, ho_ImageSub4, &ho_ImageSub5, 1, 128);

				ScaleImage(ho_ImageSub5, &ho_ImageScaled8, 3, -120);
				Threshold(ho_ImageScaled8, &ho_Region7, 0, 80);
				FillUp(ho_Region7, &ho_RegionFillUp7);
				Connection(ho_RegionFillUp7, &ho_ConnectedRegions8);
				SelectShape(ho_ConnectedRegions8, &ho_SelectedRegions8, "area", "and", 250,
					999);
				Union1(ho_SelectedRegions8, &ho_RegionUnion6);
				Intensity(ho_RegionUnion6, ho_ImageScaled8, &hv_Mean4, &hv_Deviation4);
				AreaCenter(ho_RegionUnion6, &hv_Area2, &hv_Row2, &hv_Column2);
				if (0 != (HTuple(HTuple(int(hv_Mean4 < 40)).TupleAnd(int(hv_Area2 < 5000))).TupleAnd(int(hv_Area2 > 1500))))
				{
					ConcatObj((*hv_dt).TupleGetDictObject("MOP_T"), ho_RegionUnion6, &ho___Tmp_Obj_0
						);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "MOP_T");
				}

				//检测塑胶混铁屑
				GenRectangle1(&ho_ROI_0, 945.988, 167.896, 1580.92, 465.028);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced12);
				ScaleImage(ho_ImageReduced12, &ho_ImageScaled21, 5, -500);
				Threshold(ho_ImageScaled21, &ho_Region24, 150, 255);
				OpeningCircle(ho_Region24, &ho_RegionOpening12, 1);
				FillUp(ho_RegionOpening12, &ho_RegionFillUp25);
				Connection(ho_RegionFillUp25, &ho_ConnectedRegions26);
				SelectShape(ho_ConnectedRegions26, &ho_SelectedRegions27, "area", "and",
					300, 800);
				Union1(ho_SelectedRegions27, &ho_RegionUnion17);
				Intensity(ho_RegionUnion17, ho_ImageScaled21, &hv_Mean11, &hv_Deviation11);
				if (0 != (int(hv_Mean11 > 240)))
				{
					ConcatObj((*hv_dt).TupleGetDictObject("TUD_T"), ho_RegionUnion17, &ho___Tmp_Obj_0
						);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "TUD_T");
				}

			}

			if (0 != (int(hv_ImageNum == 30)))
			{
				//变形 DT55_T 初始化
				SetDictObject(ho_EmptyRegion, (*hv_dt), "DT55_T");

				//提取BLB边缘
				MedianRect(ho_Image, &ho_ImageMedian25, 15, 15);
				ScaleImage(ho_ImageMedian25, &ho_ImageScaled24, 3, -100);
				Threshold(ho_ImageScaled24, &ho_Region25, 0, 50);
				FillUp(ho_Region25, &ho_RegionFillUp26);
				Connection(ho_RegionFillUp26, &ho_ConnectedRegions27);
				SelectShape(ho_ConnectedRegions27, &ho_SelectedRegions28, "area", "and",
					1e+6, 1.5e+6);
				GenRectangle1(&ho_ROI_0, 1795.25, -605.973, 3744.34, 2740.8);
				Intersection(ho_SelectedRegions28, ho_ROI_0, &ho_RegionIntersection12);
				DilationCircle(ho_RegionIntersection12, &ho_RegionDilation3, 300);
				Difference(ho_RegionDilation3, ho_RegionIntersection12, &ho_RegionDifference6
					);
				Intersection(ho_Image, ho_RegionDifference6, &ho_RegionIntersection13);

				ReduceDomain(ho_Image, ho_RegionIntersection13, &ho_ImageReduced13);
				ScaleImage(ho_ImageReduced13, &ho_ImageScaled25, 2, -100);
				MedianRect(ho_ImageScaled25, &ho_ImageMedian26, 15, 15);
				MedianRect(ho_ImageMedian26, &ho_ImageMedian27, 50, 50);
				SubImage(ho_ImageMedian26, ho_ImageMedian27, &ho_ImageSub11, 5, 128);
				SubImage(ho_ImageMedian27, ho_ImageMedian26, &ho_ImageSub12, 5, 128);
				SubImage(ho_ImageSub11, ho_ImageSub12, &ho_ImageSub13, 1, 128);
				Threshold(ho_ImageSub13, &ho_Region26, 0, 50);
				FillUp(ho_Region26, &ho_RegionFillUp27);
				Connection(ho_RegionFillUp27, &ho_ConnectedRegions28);
				SelectShape(ho_ConnectedRegions28, &ho_SelectedRegions29, "area", "and",
					2000, 9999);
				Union1(ho_SelectedRegions29, &ho_RegionUnion18);
				Intensity(ho_RegionUnion18, ho_ImageSub13, &hv_Mean12, &hv_Deviation12);
				if (0 != (int(hv_Mean12 < 20)))
				{
					ConcatObj((*hv_dt).TupleGetDictObject("DT55_T"), ho_RegionUnion18, &ho___Tmp_Obj_0
						);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT55_T");
				}
			}

			if (0 != (int(hv_ImageNum == 35)))
			{
				//变形 DT55_T 初始化
				SetDictObject(ho_EmptyRegion, (*hv_dt), "DT55_T");
				//变形
				GenRectangle1(&ho_ROI_0, 1026.95, 2891.2, 1283.03, 3465.74);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced6);
				MedianRect(ho_ImageReduced6, &ho_ImageMedian14, 3, 3);
				ScaleImage(ho_ImageMedian14, &ho_ImageScaled9, 2.2, -50);
				Threshold(ho_ImageScaled9, &ho_Region10, 220, 255);
				FillUp(ho_Region10, &ho_RegionFillUp10);
				OpeningCircle(ho_RegionFillUp10, &ho_RegionOpening2, 3.5);
				Connection(ho_RegionOpening2, &ho_ConnectedRegions10);
				SelectShape(ho_ConnectedRegions10, &ho_SelectedRegions10, "area", "and",
					30000, 99999);
				Union1(ho_SelectedRegions10, &ho_RegionUnion7);
				Intensity(ho_RegionUnion7, ho_ImageScaled9, &hv_Mean5, &hv_Deviation5);
				if (0 != (int(hv_Mean5 > 240)))
				{
					ConcatObj((*hv_dt).TupleGetDictObject("DT55_T"), ho_RegionUnion7, &ho___Tmp_Obj_0
						);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT55_T");
				}
			}
		}

		//删除缺陷字典里的空区域
		GetDictParam((*hv_dt), "keys", HTuple(), &hv_GenParamValue);
		{
			HTuple end_val1014 = (hv_GenParamValue.TupleLength()) - 1;
			HTuple step_val1014 = 1;
			for (hv_Index = 0; hv_Index.Continue(end_val1014, step_val1014); hv_Index += step_val1014)
			{
				Connection((*hv_dt).TupleGetDictObject(HTuple(hv_GenParamValue[hv_Index])),
					&ho_ConnectedRegions100);
				CountObj(ho_ConnectedRegions100, &hv_Number);
				if (0 != (int(hv_Number == 1)))
				{
					RemoveDictKey((*hv_dt), HTuple(hv_GenParamValue[hv_Index]));
				}
				else if (0 != hv_Number)
				{
					Union1(ho_ConnectedRegions100, &ho_RegionUnion);
					Connection(ho_RegionUnion, &ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_GenParamValue[hv_Index]));
				}
			}
		}
		return 1;

	}
	catch (HException& ExceptionHandler)
	{
		HTuple err;
		ExceptionHandler.ToHTuple(&err);
		string strErr = err.ToString();
		string strerr = std::to_string(hv_ProNum.I()) + "-" + std::to_string(hv_StaNum.I()) + "_" + std::to_string(hv_CamNum.I()) + "_" + std::to_string(hv_ImageNum.I()) + "ImageProcessOQC84lumenBlueDefects1Machine2Station error:" + strErr;
		VeErrMessage.push_back(QString::fromStdString(strerr));
	}
	reg = -1;
	return -1;
}

//四色OQC84内腔四工位检测缺陷算法
int JSZCAlgorithmsDLLOQC::ImageProcessOQC84lumenBlueDefects1Machine4Station(HObject ho_Image, HTuple hv_ProNum,
	HTuple hv_StaNum, HTuple hv_CamNum, HTuple hv_ImageNum, HTuple *hv_dt)
{

	// Local iconic variables
	HObject  ho_reg, ho_EmptyRegion, ho_ImageMedian;
	HObject  ho_ImageScaled, ho_Region, ho_RegionFillUp, ho_ConnectedRegions;
	HObject  ho_SelectedRegions, ho_RegionOpening, ho_RegionOpening1;
	HObject  ho_RegionTrans, ho_RegionUnion, ho_ImageReduced;
	HObject  ho_RegionMoved, ho_RegionUnion1, ho_RegionClosing;
	HObject  ho_RegionDifference, ho_RegionErosion, ho_ImageMedian1;
	HObject  ho_ImageMedian2, ho_RegionDynThresh, ho_RegionDifference1;
	HObject  ho_ConnectedRegions100, ho___Tmp_Obj_0;

	// Local control variables
	HTuple  hv_Num, hv_N, hv_Number, hv_GenParamValue;
	HTuple  hv_Index, hv_Exception;

	try
	{
		//缺陷暂存区域
		GenEmptyObj(&ho_reg);
		//缺陷个数
		hv_Num = HTuple();
		//屏蔽检测项
		hv_N = 0;
		//缺陷字典输出初始化
		CreateDict(&(*hv_dt));
		GenEmptyRegion(&ho_EmptyRegion);

		if (0 != (HTuple(int(hv_StaNum == 4)).TupleAnd(int(hv_CamNum == 1))))
		{
			if (0 != (int(hv_ImageNum == 1)))
			{
				//4-1-1
				//局部脱落 DT130_T 初始化

			}

			if (0 != (int(hv_ImageNum == 11)))
			{
				//4-1-11
				//局部脱落 DT130_T 初始化
				SetDictObject(ho_EmptyRegion, (*hv_dt), "DT130_T");
				//提取检测区域
				MedianRect(ho_Image, &ho_ImageMedian, 15, 15);
				ScaleImage(ho_ImageMedian, &ho_ImageScaled, 4, -300);
				Threshold(ho_ImageScaled, &ho_Region, 128, 255);
				FillUp(ho_Region, &ho_RegionFillUp);
				Connection(ho_RegionFillUp, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, (HTuple("area").Append("row")),
					"and", (HTuple(1e+5).Append(1100)), (HTuple(9e+5).Append(1700)));
				OpeningCircle(ho_SelectedRegions, &ho_RegionOpening, 60.5);
				OpeningRectangle1(ho_RegionOpening, &ho_RegionOpening1, 100, 60);
				ShapeTrans(ho_RegionOpening1, &ho_RegionTrans, "convex");
				Union1(ho_RegionTrans, &ho_RegionUnion);
				ReduceDomain(ho_Image, ho_RegionUnion, &ho_ImageReduced);

				//检测局部脱离 DT130_T
				Threshold(ho_ImageReduced, &ho_Region, 0, 60);
				Connection(ho_Region, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 150,
					99999);
				CountObj(ho_SelectedRegions, &hv_Number);
				if (0 != hv_Number)
				{
					ConcatObj((*hv_dt).TupleGetDictObject("DT130_T"), ho_SelectedRegions, &ho___Tmp_Obj_0
						);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT130_T");
				}
			}

			if (0 != (int(hv_ImageNum == 12)))
			{
				//4-1-12
				//局部脱落 DT130_T 初始化
				SetDictObject(ho_EmptyRegion, (*hv_dt), "DT130_T");
				//提取检测区域
				MedianRect(ho_Image, &ho_ImageMedian, 15, 15);
				Threshold(ho_ImageMedian, &ho_Region, 220, 255);
				Connection(ho_Region, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, ((HTuple("area").Append("row")).Append("column")),
					"and", ((HTuple(2e+4).Append(1100)).Append(700)), ((HTuple(5e+4).Append(1700)).Append(3400)));
				ShapeTrans(ho_SelectedRegions, &ho_RegionTrans, "convex");
				Union1(ho_RegionTrans, &ho_RegionUnion);
				MoveRegion(ho_RegionUnion, &ho_RegionMoved, 230, 0);
				Union2(ho_RegionTrans, ho_RegionMoved, &ho_RegionUnion1);
				Union1(ho_RegionUnion1, &ho_RegionUnion1);
				ClosingRectangle1(ho_RegionUnion1, &ho_RegionClosing, 10, 400);
				Difference(ho_RegionClosing, ho_RegionUnion, &ho_RegionDifference);
				ErosionRectangle1(ho_RegionDifference, &ho_RegionErosion, 1, 30);
				MoveRegion(ho_RegionErosion, &ho_RegionMoved, 10, 0);
				ReduceDomain(ho_Image, ho_RegionMoved, &ho_ImageReduced);

				//检测局部脱离 DT130_T
				MedianRect(ho_ImageReduced, &ho_ImageMedian1, 5, 5);
				MedianRect(ho_ImageReduced, &ho_ImageMedian2, 60, 60);
				DynThreshold(ho_ImageMedian1, ho_ImageMedian2, &ho_RegionDynThresh, 25, "dark");
				Connection(ho_RegionDynThresh, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 150,
					99999);
				CountObj(ho_SelectedRegions, &hv_Number);
				if (0 != hv_Number)
				{
					ConcatObj((*hv_dt).TupleGetDictObject("DT130_T"), ho_SelectedRegions, &ho___Tmp_Obj_0
						);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT130_T");
				}
			}

			if (0 != (int(hv_ImageNum == 15)))
			{
				//4-1-15
				//局部脱落 DT130_T 初始化
				SetDictObject(ho_EmptyRegion, (*hv_dt), "DT130_T");
				//提取检测区域
				MedianRect(ho_Image, &ho_ImageMedian, 15, 15);
				Threshold(ho_ImageMedian, &ho_Region, 200, 255);
				FillUp(ho_Region, &ho_RegionFillUp);
				Connection(ho_RegionFillUp, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, (((HTuple("area").Append("row")).Append("column")).Append("rb")),
					"and", (((HTuple(5e+4).Append(1100)).Append(700)).Append(130)), (((HTuple(2e+5).Append(1700)).Append(3400)).Append(250)));

				MoveRegion(ho_SelectedRegions, &ho_RegionMoved, 80, -150);

				Difference(ho_RegionMoved, ho_SelectedRegions, &ho_RegionDifference);
				OpeningCircle(ho_RegionDifference, &ho_RegionOpening, 60.5);
				Connection(ho_RegionOpening, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 5e+4,
					2e+5);
				ErosionCircle(ho_SelectedRegions, &ho_RegionErosion, 10.5);
				ReduceDomain(ho_Image, ho_RegionErosion, &ho_ImageReduced);

				//检测局部脱离 DT130_T
				MedianRect(ho_ImageReduced, &ho_ImageMedian1, 5, 5);
				MedianRect(ho_ImageReduced, &ho_ImageMedian2, 30, 30);
				DynThreshold(ho_ImageMedian1, ho_ImageMedian2, &ho_RegionDynThresh, 18, "dark");
				Connection(ho_RegionDynThresh, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 100,
					99999);
				CountObj(ho_SelectedRegions, &hv_Number);
				if (0 != hv_Number)
				{
					ConcatObj((*hv_dt).TupleGetDictObject("DT130_T"), ho_SelectedRegions, &ho___Tmp_Obj_0
						);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT130_T");
				}
			}

			if (0 != (int(hv_ImageNum == 17)))
			{
				//4-1-17
				//局部脱落 DT130_T 初始化
				SetDictObject(ho_EmptyRegion, (*hv_dt), "DT130_T");
				//提取检测区域
				MedianRect(ho_Image, &ho_ImageMedian, 15, 15);
				Threshold(ho_ImageMedian, &ho_Region, 240, 255);
				FillUp(ho_Region, &ho_RegionFillUp);
				Connection(ho_RegionFillUp, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, (((HTuple("area").Append("row")).Append("column")).Append("rb")),
					"and", (((HTuple(8e+4).Append(1000)).Append(1700)).Append(100)), (((HTuple(2e+5).Append(1500)).Append(2400)).Append(200)));

				MoveRegion(ho_SelectedRegions, &ho_RegionMoved, 80, -160);

				Difference(ho_RegionMoved, ho_SelectedRegions, &ho_RegionDifference);
				OpeningCircle(ho_RegionDifference, &ho_RegionOpening, 20.5);
				Connection(ho_RegionOpening, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 5e+4,
					2e+5);
				ErosionCircle(ho_SelectedRegions, &ho_RegionErosion, 10.5);
				ReduceDomain(ho_Image, ho_RegionErosion, &ho_ImageReduced);

				//检测局部脱离 DT130_T
				MedianRect(ho_ImageReduced, &ho_ImageMedian1, 5, 5);
				MedianRect(ho_ImageReduced, &ho_ImageMedian2, 30, 30);
				DynThreshold(ho_ImageMedian1, ho_ImageMedian2, &ho_RegionDynThresh, 18, "dark");
				Connection(ho_RegionDynThresh, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 100,
					99999);
				CountObj(ho_SelectedRegions, &hv_Number);
				if (0 != hv_Number)
				{
					ConcatObj((*hv_dt).TupleGetDictObject("DT130_T"), ho_SelectedRegions, &ho___Tmp_Obj_0
						);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT130_T");
				}
			}

			if (0 != (int(hv_ImageNum == 19)))
			{
				//4-1-19
				//局部脱落 DT130_T 初始化
				SetDictObject(ho_EmptyRegion, (*hv_dt), "DT130_T");
				//提取检测区域
				MedianRect(ho_Image, &ho_ImageMedian, 15, 15);
				Threshold(ho_ImageMedian, &ho_Region, 240, 255);
				FillUp(ho_Region, &ho_RegionFillUp);
				Connection(ho_RegionFillUp, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, (((HTuple("area").Append("row")).Append("column")).Append("rb")),
					"and", (((HTuple(8e+4).Append(1000)).Append(1700)).Append(100)), (((HTuple(2e+5).Append(1500)).Append(2400)).Append(200)));

				MoveRegion(ho_SelectedRegions, &ho_RegionMoved, 80, 150);

				Difference(ho_RegionMoved, ho_SelectedRegions, &ho_RegionDifference);
				OpeningCircle(ho_RegionDifference, &ho_RegionOpening, 20.5);
				Connection(ho_RegionOpening, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 5e+4,
					2e+5);
				ErosionCircle(ho_SelectedRegions, &ho_RegionErosion, 10.5);
				ReduceDomain(ho_Image, ho_RegionErosion, &ho_ImageReduced);

				//检测局部脱离 DT130_T
				MedianRect(ho_ImageReduced, &ho_ImageMedian1, 5, 5);
				MedianRect(ho_ImageReduced, &ho_ImageMedian2, 30, 30);
				DynThreshold(ho_ImageMedian1, ho_ImageMedian2, &ho_RegionDynThresh, 18, "dark");
				Connection(ho_RegionDynThresh, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 100,
					99999);
				CountObj(ho_SelectedRegions, &hv_Number);
				if (0 != hv_Number)
				{
					ConcatObj((*hv_dt).TupleGetDictObject("DT130_T"), ho_SelectedRegions, &ho___Tmp_Obj_0
						);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT130_T");
				}

				//检测局部脱离 DT130_T
				Threshold(ho_ImageReduced, &ho_Region, 0, 60);
				Connection(ho_Region, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 100,
					99999);
				CountObj(ho_SelectedRegions, &hv_Number);
				if (0 != hv_Number)
				{
					ConcatObj((*hv_dt).TupleGetDictObject("DT130_T"), ho_SelectedRegions, &ho___Tmp_Obj_0
						);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT130_T");
				}
			}

			if (0 != (int(hv_ImageNum == 22)))
			{
				//4-1-22
				//热钻孔未见光 DT137_T 初始化
				//dt.['DT137_T'] := EmptyRegion

				//提取检测区域
				//median_rect (Image, ImageMedian, 15, 15)
				//scale_image (ImageMedian, ImageScaled, 4, -700)
				//threshold (ImageScaled, Region, 0, 60)
				//fill_up (Region, RegionFillUp)
				//connection (RegionFillUp, ConnectedRegions)
				//select_shape (ConnectedRegions, SelectedRegions, ['area','row','column','rb','ra'], 'and', [1e+5,1100,500,150,250], [3e+5,1500,3800,250,380])
				//shape_trans (SelectedRegions, RegionTrans, 'convex')
				//union1 (RegionTrans, RegionUnion)
				//erosion_circle (RegionUnion, RegionErosion, 20.5)
				//erosion_rectangle1 (RegionErosion, RegionErosion1, 30, 180)
				//*             move_region (RegionErosion1, RegionMoved, 50, 0)
				//reduce_domain (Image, RegionMoved, ImageReduced)

				//scale_image (ImageReduced, ImageScaled, 3, -100)
				//threshold (ImageScaled, Region, 200, 255)
				//fill_up (Region, RegionFillUp)
				//connection (RegionFillUp, ConnectedRegions)
				//select_shape (ConnectedRegions, SelectedRegions, 'area', 'and', 1e+4, 3e+5)
				//closing_circle (SelectedRegions, RegionClosing, 60.5)
				//union1 (RegionClosing, RegionUnion)
				//reduce_domain (Image, RegionUnion, ImageReduced)

				//检测局部脱离 DT130_T
				//median_rect (ImageReduced, ImageMedian1, 5, 5)
				//median_rect (ImageReduced, ImageMedian2, 100, 100)
				//dyn_threshold (ImageMedian1, ImageMedian2, RegionDynThresh, 25, 'dark')
				//connection (RegionDynThresh, ConnectedRegions)
				//select_shape (ConnectedRegions, SelectedRegions, 'area', 'and', 150, 99999)
				//count_obj (SelectedRegions, Number)
				//if (Number)
				//concat_obj (dt.['DT137_T'], SelectedRegions, dt.['DT137_T'])
				//endif
			}

			if (0 != (int(hv_ImageNum == 23)))
			{
				//4-1-23
				//局部脱落 DT130_T 初始化
				SetDictObject(ho_EmptyRegion, (*hv_dt), "DT130_T");
				//提取检测区域
				MedianRect(ho_Image, &ho_ImageMedian, 15, 15);
				Threshold(ho_ImageMedian, &ho_Region, 240, 255);
				FillUp(ho_Region, &ho_RegionFillUp);
				Connection(ho_RegionFillUp, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, ((((HTuple("area").Append("row")).Append("column")).Append("rb")).Append("ra")),
					"and", ((((HTuple(8e+4).Append(1000)).Append(1700)).Append(100)).Append(200)),
					((((HTuple(2e+5).Append(1500)).Append(2600)).Append(200)).Append(350)));

				MoveRegion(ho_SelectedRegions, &ho_RegionMoved, 80, -160);

				Difference(ho_RegionMoved, ho_SelectedRegions, &ho_RegionDifference);
				OpeningCircle(ho_RegionDifference, &ho_RegionOpening, 20.5);
				Connection(ho_RegionOpening, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 5e+4,
					2e+5);
				ErosionCircle(ho_SelectedRegions, &ho_RegionErosion, 10.5);
				ReduceDomain(ho_Image, ho_RegionErosion, &ho_ImageReduced);

				//检测局部脱离 DT130_T
				MedianRect(ho_ImageReduced, &ho_ImageMedian1, 5, 5);
				MedianRect(ho_ImageReduced, &ho_ImageMedian2, 30, 30);
				DynThreshold(ho_ImageMedian1, ho_ImageMedian2, &ho_RegionDynThresh, 18, "dark");
				Connection(ho_RegionDynThresh, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 100,
					99999);
				CountObj(ho_SelectedRegions, &hv_Number);
				if (0 != hv_Number)
				{
					ConcatObj((*hv_dt).TupleGetDictObject("DT130_T"), ho_SelectedRegions, &ho___Tmp_Obj_0
						);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT130_T");
				}

				//提取黑色边缘检测区域
				MoveRegion(ho_RegionDifference, &ho_RegionMoved, 30, -30);
				Difference(ho_RegionMoved, ho_RegionDifference, &ho_RegionDifference1);

				ReduceDomain(ho_Image, ho_RegionDifference1, &ho_ImageReduced);

				//检测局部脱离 DT130_T
				Threshold(ho_ImageReduced, &ho_Region, 128, 255);
				Connection(ho_Region, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 800,
					99999);
				CountObj(ho_SelectedRegions, &hv_Number);
				if (0 != (int(hv_Number == 0)))
				{
					ConcatObj((*hv_dt).TupleGetDictObject("DT130_T"), ho_RegionDifference1,
						&ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), "DT130_T");
				}
			}
		}

		//删除缺陷字典里的空区域
		GetDictParam((*hv_dt), "keys", HTuple(), &hv_GenParamValue);
		{
			HTuple end_val280 = (hv_GenParamValue.TupleLength()) - 1;
			HTuple step_val280 = 1;
			for (hv_Index = 0; hv_Index.Continue(end_val280, step_val280); hv_Index += step_val280)
			{
				Connection((*hv_dt).TupleGetDictObject(HTuple(hv_GenParamValue[hv_Index])),
					&ho_ConnectedRegions100);
				CountObj(ho_ConnectedRegions100, &hv_Number);
				if (0 != (int(hv_Number == 1)))
				{
					RemoveDictKey((*hv_dt), HTuple(hv_GenParamValue[hv_Index]));
				}
				else if (0 != hv_Number)
				{
					Union1(ho_ConnectedRegions100, &ho_RegionUnion);
					Connection(ho_RegionUnion, &ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_GenParamValue[hv_Index]));
				}
			}
		}
		return 1;

	}
	catch (HException& ExceptionHandler)
	{
		HTuple err;
		ExceptionHandler.ToHTuple(&err);
		string strErr = err.ToString();
		string strerr = std::to_string(hv_ProNum.I()) + "-" + std::to_string(hv_StaNum.I()) + "_" + std::to_string(hv_CamNum.I()) + "_" + std::to_string(hv_ImageNum.I()) + "ImageProcessOQC84lumenBlueDefects1Machine4Station error:" + strErr;
		VeErrMessage.push_back(QString::fromStdString(strerr));
	}
	reg = -1;
	return -1;
}
#pragma endregion  

















