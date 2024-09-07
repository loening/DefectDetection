#include <ostream>		
#include "Halconcpp.h"
//#include <opencv2/opencv.hpp>
#include <string.h>
#include "OQCWG.h" 
//#include <QObject>
using namespace std;
using namespace HalconCpp;
//using namespace cv;


// 定义导出函数
JSZCAlgorithmsDLLOQCWG::JSZCAlgorithmsDLLOQCWG()
{
	//ErrMessage = (char*)malloc(sizeof(char)*1000);
	//strcpy(ErrMessage, "");

}

JSZCAlgorithmsDLLOQCWG::~JSZCAlgorithmsDLLOQCWG()
{
	//free(ErrMessage);	
}

#pragma region universalFunction  

void  JSZCAlgorithmsDLLOQCWG::clearVec()
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
int JSZCAlgorithmsDLLOQCWG::Yolo_DetectOQCWG_Extract(HObject ho_Image, HObject ho_RectangleRegion, HObject *ho_OutputRegion,
	HTuple hv_RegionID, HTuple hv_ProNum, HTuple hv_StaNum, HTuple hv_CamNum, HTuple hv_ImageNum,
	HTuple hv_d6)
{

	// Local iconic variables
	HObject  ho_ImageReduced, ho_ImageMedian, ho_Region;
	HObject  ho_Region1, ho_ConnectedRegions, ho_SelectedRegions;
	HObject  ho_RegionUnion, ho_RegionClosing, ho_ImageScaleMax;
	HObject  ho_ImageMean, ho_EdgeAmplitude, ho_RegionErosion;
	HObject  ho_ImageReduced1, ho_Lines, ho_UnionContours, ho_UnionContours2;
	HObject  ho_ObjectSelected1, ho_Region2, ho_ObjectSelected;
	HObject  ho_Region3, ho_RegionUnion1;

	// Local control variables
	HTuple  hv_Length, hv_lk, hv_Mean, hv_Deviation;
	HTuple  hv_Number, hv_w, hv_h, hv_len, hv_Row, hv_Column;
	HTuple  hv_Phi, hv_Length1, hv_Length2, hv_Id, hv_Row1;
	HTuple  hv_Col, hv_Exception;

	try
	{
		//没缺陷就返回
		TupleLength(hv_RegionID, &hv_Length);
		if (0 != (int(hv_Length<1)))
		{
			return 1;
		}
		//初始化输出缺陷区域 (个数视项目需求进行扩充)
		//dt := dict{}
		//gen_empty_region (OutputRegion)
		//该项目每次只会有一个输入和最多一个输出，故不需多缺陷设计
		GenEmptyObj(&(*ho_OutputRegion));
		//for Index := 0 to 27 by 1
		//f := Index+''
		//dt.[f] := EmptyRegion
		//endfor
		//对应点位，对应缺陷类别，进行缺陷提取
		hv_lk = 0;
		if (0 != (int(hv_RegionID == 0)))
		{
			//zjz bx
			hv_lk = 1;
			ReduceDomain(ho_Image, ho_RectangleRegion, &ho_ImageReduced);
			MedianRect(ho_ImageReduced, &ho_ImageMedian, 2, 2);
			Intensity(ho_RectangleRegion, ho_ImageMedian, &hv_Mean, &hv_Deviation);
			Threshold(ho_ImageMedian, &ho_Region, hv_Mean + 20, 255);
			Threshold(ho_ImageMedian, &ho_Region1, 0, hv_Mean - 18);
			Union2(ho_Region, ho_Region1, &ho_Region);
			Connection(ho_Region, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 5, 999999);
			Union1(ho_SelectedRegions, &ho_RegionUnion);
			ClosingCircle(ho_RegionUnion, &ho_RegionClosing, 3.5);
			CountObj(ho_RegionClosing, &hv_Number);
			ConcatObj((*ho_OutputRegion), ho_RegionClosing, &(*ho_OutputRegion));
			if (0 != (int(hv_Number == 0)))
			{
				ConcatObj((*ho_OutputRegion), ho_RectangleRegion, &(*ho_OutputRegion));
			}
		}

		if (0 != (int(hv_RegionID == 1)))
		{
			//zjz bx
			hv_lk = 1;
			hv_Number = 0;
			ReduceDomain(ho_Image, ho_RectangleRegion, &ho_ImageReduced);
			ScaleImageMax(ho_ImageReduced, &ho_ImageScaleMax);
			MeanImage(ho_ImageScaleMax, &ho_ImageMean, 3, 3);

			RegionFeatures(ho_ImageReduced, "width", &hv_w);
			RegionFeatures(ho_ImageReduced, "height", &hv_h);
			TupleMax2(hv_h, hv_w, &hv_len);


			SobelAmp(ho_ImageMean, &ho_EdgeAmplitude, "sum_abs", 3);
			ErosionCircle(ho_ImageReduced, &ho_RegionErosion, 3.5);
			ReduceDomain(ho_ImageMean, ho_RegionErosion, &ho_ImageReduced1);

			LinesGauss(ho_ImageReduced1, &ho_Lines, 1.5, 3, 8, "light", "true", "bar-shaped",
				"true");

			UnionCollinearContoursXld(ho_Lines, &ho_UnionContours, 10, 1, 20, 0.2, "attr_keep");
			LinesGauss(ho_ImageReduced1, &ho_Lines, 1.5, 2, 6, "dark", "true", "bar-shaped",
				"true");
			UnionCollinearContoursXld(ho_Lines, &ho_UnionContours2, 10, 1, 20, 0.15, "attr_keep");
			ConcatObj(ho_UnionContours, ho_UnionContours2, &ho_UnionContours);
			SmallestRectangle2Xld(ho_UnionContours, &hv_Row, &hv_Column, &hv_Phi, &hv_Length1,
				&hv_Length2);
			//length_xld (UnionContours, Length)
			hv_Id = ((-hv_Length1).TupleSortIndex()) + 1;
			if (0 != (int((hv_Id.TupleLength())>0)))
			{
				SelectObj(ho_UnionContours, &ho_ObjectSelected1, HTuple(hv_Id[0]));
				GetContourXld(ho_ObjectSelected1, &hv_Row1, &hv_Col);
				GenRegionPoints(&ho_Region2, hv_Row1, hv_Col);

				DilationCircle(ho_Region2, &ho_ObjectSelected, 2);
				CountObj(ho_ObjectSelected, &hv_Number);
				ConcatObj((*ho_OutputRegion), ho_ObjectSelected, &(*ho_OutputRegion));
				if (0 != (int(hv_Number == 0)))
				{
					ConcatObj((*ho_OutputRegion), ho_ObjectSelected, &(*ho_OutputRegion));
				}
			}

		}

		if (0 != (int(hv_RegionID == 2)))
		{
			//zjz bx
			hv_lk = 1;
			ReduceDomain(ho_Image, ho_RectangleRegion, &ho_ImageReduced);
			MedianRect(ho_ImageReduced, &ho_ImageMedian, 2, 2);
			Intensity(ho_RectangleRegion, ho_ImageMedian, &hv_Mean, &hv_Deviation);
			Threshold(ho_ImageMedian, &ho_Region, hv_Mean + 20, 255);
			Threshold(ho_ImageMedian, &ho_Region1, 0, hv_Mean - 10);
			Union2(ho_Region, ho_Region1, &ho_Region);
			Connection(ho_Region, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 10, 999999);
			Union1(ho_SelectedRegions, &ho_RegionUnion);
			ClosingCircle(ho_RegionUnion, &ho_RegionClosing, 3.5);
			CountObj(ho_RegionClosing, &hv_Number);
			ConcatObj((*ho_OutputRegion), ho_RegionClosing, &(*ho_OutputRegion));
			if (0 != (int(hv_Number == 0)))
			{
				ConcatObj((*ho_OutputRegion), ho_RectangleRegion, &(*ho_OutputRegion));
			}
		}

		if (0 != (int(hv_RegionID == 3)))
		{
			//RTYS
			hv_lk = 1;
			ErosionRectangle1(ho_RectangleRegion, &ho_RectangleRegion, 4, 2);
			ReduceDomain(ho_Image, ho_RectangleRegion, &ho_ImageReduced);
			MedianRect(ho_ImageReduced, &ho_ImageMedian, 1, 1);
			Intensity(ho_RectangleRegion, ho_ImageMedian, &hv_Mean, &hv_Deviation);
			//threshold (ImageMedian, Region, Mean+20, 255)
			Threshold(ho_ImageMedian, &ho_Region, 0, hv_Mean - 10);
			Threshold(ho_ImageMedian, &ho_Region1, 180, 255);
			Union2(ho_Region, ho_Region1, &ho_Region);
			Connection(ho_Region, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 10, 999999);
			Union1(ho_SelectedRegions, &ho_RegionUnion);
			ClosingCircle(ho_RegionUnion, &ho_RegionClosing, 3.5);
			CountObj(ho_RegionClosing, &hv_Number);
			ConcatObj((*ho_OutputRegion), ho_RegionClosing, &(*ho_OutputRegion));
			if (0 != (int(hv_Number == 0)))
			{
				ConcatObj((*ho_OutputRegion), ho_RectangleRegion, &(*ho_OutputRegion));
			}
		}

		if (0 != (int(hv_RegionID == 4)))
		{
			//zjz bx
			hv_lk = 1;
			ReduceDomain(ho_Image, ho_RectangleRegion, &ho_ImageReduced);
			ReduceDomain(ho_Image, ho_RectangleRegion, &ho_ImageReduced);
			ScaleImageMax(ho_ImageReduced, &ho_ImageScaleMax);
			MeanImage(ho_ImageScaleMax, &ho_ImageMean, 3, 3);

			RegionFeatures(ho_ImageReduced, "width", &hv_w);
			RegionFeatures(ho_ImageReduced, "height", &hv_h);
			TupleMax2(hv_h, hv_w, &hv_len);


			SobelAmp(ho_ImageMean, &ho_EdgeAmplitude, "sum_abs", 3);
			ErosionCircle(ho_ImageReduced, &ho_RegionErosion, 3.5);
			ReduceDomain(ho_ImageMean, ho_RegionErosion, &ho_ImageReduced1);

			LinesGauss(ho_ImageReduced1, &ho_Lines, 1.5, 3, 8, "light", "true", "bar-shaped",
				"true");

			UnionCollinearContoursXld(ho_Lines, &ho_UnionContours, 10, 1, 20, 0.2, "attr_keep");
			LinesGauss(ho_ImageReduced1, &ho_Lines, 1.5, 2, 6, "dark", "true", "bar-shaped",
				"true");
			UnionCollinearContoursXld(ho_Lines, &ho_UnionContours2, 10, 1, 20, 0.15, "attr_keep");
			ConcatObj(ho_UnionContours, ho_UnionContours2, &ho_UnionContours);
			SmallestRectangle2Xld(ho_UnionContours, &hv_Row, &hv_Column, &hv_Phi, &hv_Length1,
				&hv_Length2);
			//length_xld (UnionContours, Length)
			hv_Id = ((-hv_Length1).TupleSortIndex()) + 1;
			if (0 != (int((hv_Id.TupleLength())>0)))
			{
				SelectObj(ho_UnionContours, &ho_ObjectSelected1, HTuple(hv_Id[0]));
				GetContourXld(ho_ObjectSelected1, &hv_Row1, &hv_Col);
				GenRegionPoints(&ho_Region2, hv_Row1, hv_Col);

				DilationCircle(ho_Region2, &ho_ObjectSelected, 3.5);
			}
			CountObj(ho_ObjectSelected, &hv_Number);
			ConcatObj((*ho_OutputRegion), ho_ObjectSelected, &(*ho_OutputRegion));
			if (0 != (int(hv_Number == 0)))
			{
				ConcatObj((*ho_OutputRegion), ho_RectangleRegion, &(*ho_OutputRegion));
			}
		}

		if (0 != (int(hv_RegionID == 5)))
		{
			//RTYS
			hv_lk = 1;
			ErosionRectangle1(ho_RectangleRegion, &ho_RectangleRegion, 6, 6);
			ReduceDomain(ho_Image, ho_RectangleRegion, &ho_ImageReduced);
			MedianRect(ho_ImageReduced, &ho_ImageMedian, 1, 1);
			Intensity(ho_RectangleRegion, ho_ImageMedian, &hv_Mean, &hv_Deviation);
			//threshold (ImageMedian, Region, Mean+20, 255)
			Threshold(ho_ImageMedian, &ho_Region, hv_Mean + 20, 255);
			//union2 (Region, Region1, Region)
			Connection(ho_Region, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 10, 999999);
			Union1(ho_SelectedRegions, &ho_RegionUnion);
			ClosingCircle(ho_RegionUnion, &ho_RegionClosing, 3.5);
			CountObj(ho_RegionClosing, &hv_Number);
			ConcatObj((*ho_OutputRegion), ho_RegionClosing, &(*ho_OutputRegion));
			if (0 != (int(hv_Number == 0)))
			{
				ConcatObj((*ho_OutputRegion), ho_RectangleRegion, &(*ho_OutputRegion));
			}
		}

		if (0 != (int(hv_RegionID == 6)))
		{
			//zjz bx
			hv_lk = 1;
			ReduceDomain(ho_Image, ho_RectangleRegion, &ho_ImageReduced);
			MedianRect(ho_ImageReduced, &ho_ImageMedian, 2, 2);
			Intensity(ho_RectangleRegion, ho_ImageMedian, &hv_Mean, &hv_Deviation);
			Threshold(ho_ImageMedian, &ho_Region, 0, hv_Mean - 10);
			//union2 (Region, Region1, Region)
			Connection(ho_Region, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 10, 999999);
			Union1(ho_SelectedRegions, &ho_RegionUnion);
			ClosingCircle(ho_RegionUnion, &ho_RegionClosing, 3.5);
			CountObj(ho_RegionClosing, &hv_Number);
			ConcatObj((*ho_OutputRegion), ho_RegionClosing, &(*ho_OutputRegion));
			if (0 != (int(hv_Number == 0)))
			{
				ConcatObj((*ho_OutputRegion), ho_RectangleRegion, &(*ho_OutputRegion));
			}
		}

		if (0 != (int(hv_RegionID == 8)))
		{
			//RTYS
			hv_lk = 1;
			ErosionRectangle1(ho_RectangleRegion, &ho_RectangleRegion, 2, 2);
			ReduceDomain(ho_Image, ho_RectangleRegion, &ho_ImageReduced);
			MedianRect(ho_ImageReduced, &ho_ImageMedian, 1, 1);
			Intensity(ho_RectangleRegion, ho_ImageMedian, &hv_Mean, &hv_Deviation);
			//threshold (ImageMedian, Region, Mean+20, 255)
			Threshold(ho_ImageMedian, &ho_Region, 0, hv_Mean - 10);
			//union2 (Region, Region1, Region)
			Connection(ho_Region, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 10, 999999);
			Union1(ho_SelectedRegions, &ho_RegionUnion);
			ClosingCircle(ho_RegionUnion, &ho_RegionClosing, 3.5);
			CountObj(ho_RegionClosing, &hv_Number);
			ConcatObj((*ho_OutputRegion), ho_RegionClosing, &(*ho_OutputRegion));
			if (0 != (int(hv_Number == 0)))
			{
				ConcatObj((*ho_OutputRegion), ho_RectangleRegion, &(*ho_OutputRegion));
			}
		}

		if (0 != (int(hv_RegionID == 9)))
		{
			//RTYS
			hv_lk = 1;
			ErosionRectangle1(ho_RectangleRegion, &ho_RectangleRegion, 25, 25);
			ReduceDomain(ho_Image, ho_RectangleRegion, &ho_ImageReduced);
			MedianRect(ho_ImageReduced, &ho_ImageMedian, 1, 1);
			Intensity(ho_RectangleRegion, ho_ImageMedian, &hv_Mean, &hv_Deviation);
			//threshold (ImageMedian, Region, Mean+20, 255)
			Threshold(ho_ImageMedian, &ho_Region, 0, hv_Mean - 20);
			//union2 (Region, Region1, Region)
			Connection(ho_Region, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 10, 999999);
			Union1(ho_SelectedRegions, &ho_RegionUnion);
			ClosingCircle(ho_RegionUnion, &ho_RegionClosing, 3.5);
			CountObj(ho_RegionClosing, &hv_Number);
			ConcatObj((*ho_OutputRegion), ho_RegionClosing, &(*ho_OutputRegion));
			if (0 != (int(hv_Number == 0)))
			{
				ConcatObj((*ho_OutputRegion), ho_RectangleRegion, &(*ho_OutputRegion));
			}
		}

		if (0 != (int(hv_RegionID == 10)))
		{
			//RTYS
			hv_lk = 1;
			ErosionRectangle1(ho_RectangleRegion, &ho_RectangleRegion, 6, 6);
			ReduceDomain(ho_Image, ho_RectangleRegion, &ho_ImageReduced);
			MedianRect(ho_ImageReduced, &ho_ImageMedian, 1, 1);
			Intensity(ho_RectangleRegion, ho_ImageMedian, &hv_Mean, &hv_Deviation);
			//threshold (ImageMedian, Region, Mean+20, 255)
			Threshold(ho_ImageMedian, &ho_Region, 0, hv_Mean - 4);
			//union2 (Region, Region1, Region)
			Connection(ho_Region, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 10, 999999);
			Union1(ho_SelectedRegions, &ho_RegionUnion);
			ClosingCircle(ho_RegionUnion, &ho_RegionClosing, 3.5);
			CountObj(ho_RegionClosing, &hv_Number);
			ConcatObj((*ho_OutputRegion), ho_RegionClosing, &(*ho_OutputRegion));
			if (0 != (int(hv_Number == 0)))
			{
				ConcatObj((*ho_OutputRegion), ho_RectangleRegion, &(*ho_OutputRegion));
			}
		}

		if (0 != (int(hv_RegionID == 13)))
		{
			//RTYS
			hv_lk = 1;
			ErosionRectangle1(ho_RectangleRegion, &ho_RectangleRegion, 2, 2);
			ReduceDomain(ho_Image, ho_RectangleRegion, &ho_ImageReduced);
			MedianRect(ho_ImageReduced, &ho_ImageMedian, 1, 1);
			Intensity(ho_RectangleRegion, ho_ImageMedian, &hv_Mean, &hv_Deviation);
			//threshold (ImageMedian, Region, Mean+20, 255)
			Threshold(ho_ImageMedian, &ho_Region, 0, hv_Mean - 10);
			//union2 (Region, Region1, Region)
			Connection(ho_Region, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 10, 999999);
			Union1(ho_SelectedRegions, &ho_RegionUnion);
			ClosingCircle(ho_RegionUnion, &ho_RegionClosing, 3.5);
			CountObj(ho_RegionClosing, &hv_Number);
			ConcatObj((*ho_OutputRegion), ho_RegionClosing, &(*ho_OutputRegion));
			if (0 != (int(hv_Number == 0)))
			{
				ConcatObj((*ho_OutputRegion), ho_RectangleRegion, &(*ho_OutputRegion));
			}
		}

		if (0 != (int(hv_RegionID == 14)))
		{
			//RTYS
			hv_lk = 1;
			ErosionRectangle1(ho_RectangleRegion, &ho_RectangleRegion, 6, 6);
			ReduceDomain(ho_Image, ho_RectangleRegion, &ho_ImageReduced);
			MedianRect(ho_ImageReduced, &ho_ImageMedian, 1, 1);
			Intensity(ho_RectangleRegion, ho_ImageMedian, &hv_Mean, &hv_Deviation);
			if (0 != (int(hv_Mean<100)))
			{
				Threshold(ho_ImageMedian, &ho_Region, 0, hv_Mean);
				//union2 (Region, Region1, Region)
				Connection(ho_Region, &ho_ConnectedRegions);
				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 10,
					999999);
				Union1(ho_SelectedRegions, &ho_RegionUnion);
				ClosingCircle(ho_RegionUnion, &ho_RegionClosing, 3.5);
				CountObj(ho_RegionClosing, &hv_Number);
				ConcatObj((*ho_OutputRegion), ho_RegionClosing, &(*ho_OutputRegion));
				if (0 != (int(hv_Number == 0)))
				{
					ConcatObj((*ho_OutputRegion), ho_RectangleRegion, &(*ho_OutputRegion));
					return 1;
				}
			}
			//threshold (ImageMedian, Region, Mean+20, 255)
			Threshold(ho_ImageMedian, &ho_Region, hv_Mean + 20, 255);
			//union2 (Region, Region1, Region)
			Connection(ho_Region, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 10, 999999);
			Union1(ho_SelectedRegions, &ho_RegionUnion);
			ClosingCircle(ho_RegionUnion, &ho_RegionClosing, 3.5);
			CountObj(ho_RegionClosing, &hv_Number);
			ConcatObj((*ho_OutputRegion), ho_RegionClosing, &(*ho_OutputRegion));
			if (0 != (int(hv_Number == 0)))
			{
				ConcatObj((*ho_OutputRegion), ho_RectangleRegion, &(*ho_OutputRegion));
			}
		}

		if (0 != (int(hv_RegionID == 15)))
		{
			//RTYS
			hv_lk = 1;
			ErosionRectangle1(ho_RectangleRegion, &ho_RectangleRegion, 6, 6);
			ReduceDomain(ho_Image, ho_RectangleRegion, &ho_ImageReduced);
			MedianRect(ho_ImageReduced, &ho_ImageMedian, 1, 1);
			Intensity(ho_RectangleRegion, ho_ImageMedian, &hv_Mean, &hv_Deviation);
			//threshold (ImageMedian, Region, Mean+20, 255)
			Threshold(ho_ImageMedian, &ho_Region, 0, hv_Mean - 10);
			//union2 (Region, Region1, Region)
			Connection(ho_Region, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 10, 999999);
			Union1(ho_SelectedRegions, &ho_RegionUnion);
			ClosingCircle(ho_RegionUnion, &ho_RegionClosing, 3.5);
			CountObj(ho_RegionClosing, &hv_Number);
			ConcatObj((*ho_OutputRegion), ho_RegionClosing, &(*ho_OutputRegion));
			if (0 != (int(hv_Number == 0)))
			{
				ConcatObj((*ho_OutputRegion), ho_RectangleRegion, &(*ho_OutputRegion));
			}
		}

		if (0 != (int(hv_RegionID == 16)))
		{
			//RTYS
			hv_lk = 1;
			ErosionRectangle1(ho_RectangleRegion, &ho_RectangleRegion, 2, 2);
			ReduceDomain(ho_Image, ho_RectangleRegion, &ho_ImageReduced);
			MedianRect(ho_ImageReduced, &ho_ImageMedian, 1, 1);
			Intensity(ho_RectangleRegion, ho_ImageMedian, &hv_Mean, &hv_Deviation);
			//threshold (ImageMedian, Region, Mean+20, 255)
			Threshold(ho_ImageMedian, &ho_Region, hv_Mean + 10, 255);
			//union2 (Region, Region1, Region)
			Connection(ho_Region, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 10, 999999);
			Union1(ho_SelectedRegions, &ho_RegionUnion);
			ClosingCircle(ho_RegionUnion, &ho_RegionClosing, 3.5);
			CountObj(ho_RegionClosing, &hv_Number);
			ConcatObj((*ho_OutputRegion), ho_RegionClosing, &(*ho_OutputRegion));
			if (0 != (int(hv_Number == 0)))
			{
				ConcatObj((*ho_OutputRegion), ho_RectangleRegion, &(*ho_OutputRegion));
			}
		}

		if (0 != (int(hv_RegionID == 17)))
		{
			//RTYS
			hv_lk = 1;
			ErosionRectangle1(ho_RectangleRegion, &ho_RectangleRegion, 6, 6);
			ReduceDomain(ho_Image, ho_RectangleRegion, &ho_ImageReduced);
			MedianRect(ho_ImageReduced, &ho_ImageMedian, 1, 1);
			Intensity(ho_RectangleRegion, ho_ImageMedian, &hv_Mean, &hv_Deviation);
			//threshold (ImageMedian, Region, Mean+20, 255)
			Threshold(ho_ImageMedian, &ho_Region, 0, hv_Mean - 20);
			//union2 (Region, Region1, Region)
			Connection(ho_Region, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 10, 999999);
			Union1(ho_SelectedRegions, &ho_RegionUnion);
			ClosingCircle(ho_RegionUnion, &ho_RegionClosing, 3.5);
			CountObj(ho_RegionClosing, &hv_Number);
			ConcatObj((*ho_OutputRegion), ho_RegionClosing, &(*ho_OutputRegion));
			if (0 != (int(hv_Number == 0)))
			{
				ConcatObj((*ho_OutputRegion), ho_RectangleRegion, &(*ho_OutputRegion));
			}
		}

		if (0 != (int(hv_RegionID == 23)))
		{
			//zjz bx
			hv_lk = 1;
			hv_Number = 0;
			ReduceDomain(ho_Image, ho_RectangleRegion, &ho_ImageReduced);
			ScaleImageMax(ho_ImageReduced, &ho_ImageScaleMax);
			MeanImage(ho_ImageScaleMax, &ho_ImageMean, 3, 3);

			RegionFeatures(ho_ImageReduced, "width", &hv_w);
			RegionFeatures(ho_ImageReduced, "height", &hv_h);
			TupleMax2(hv_h, hv_w, &hv_len);


			SobelAmp(ho_ImageMean, &ho_EdgeAmplitude, "sum_abs", 3);
			ErosionCircle(ho_ImageReduced, &ho_RegionErosion, 3.5);
			ReduceDomain(ho_ImageMean, ho_RegionErosion, &ho_ImageReduced1);

			LinesGauss(ho_ImageReduced1, &ho_Lines, 1.5, 3, 8, "light", "true", "bar-shaped",
				"true");

			UnionCollinearContoursXld(ho_Lines, &ho_UnionContours, 10, 1, 20, 0.2, "attr_keep");
			LinesGauss(ho_ImageReduced1, &ho_Lines, 1.5, 2, 6, "dark", "true", "bar-shaped",
				"true");
			UnionCollinearContoursXld(ho_Lines, &ho_UnionContours2, 10, 1, 20, 0.15, "attr_keep");
			ConcatObj(ho_UnionContours, ho_UnionContours2, &ho_UnionContours);
			SmallestRectangle2Xld(ho_UnionContours, &hv_Row, &hv_Column, &hv_Phi, &hv_Length1,
				&hv_Length2);
			//length_xld (UnionContours, Length)
			hv_Id = ((-hv_Length1).TupleSortIndex()) + 1;
			if (0 != (int((hv_Id.TupleLength())>0)))
			{
				SelectObj(ho_UnionContours, &ho_ObjectSelected1, HTuple(hv_Id[0]));
				GetContourXld(ho_ObjectSelected1, &hv_Row1, &hv_Col);
				GenRegionPoints(&ho_Region2, hv_Row1, hv_Col);

				DilationCircle(ho_Region2, &ho_ObjectSelected, 3.5);
				CountObj(ho_ObjectSelected, &hv_Number);
				ConcatObj((*ho_OutputRegion), ho_ObjectSelected, &(*ho_OutputRegion));
				if (0 != (int(hv_Number == 0)))
				{
					ConcatObj((*ho_OutputRegion), ho_ObjectSelected, &(*ho_OutputRegion));
				}
			}

		}

		if (0 != (int(hv_RegionID == 24)))
		{
			//RTYS
			hv_lk = 1;
			hv_Number = 0;
			ReduceDomain(ho_Image, ho_RectangleRegion, &ho_ImageReduced);
			ScaleImageMax(ho_ImageReduced, &ho_ImageScaleMax);
			MeanImage(ho_ImageScaleMax, &ho_ImageMean, 3, 3);

			RegionFeatures(ho_ImageReduced, "width", &hv_w);
			RegionFeatures(ho_ImageReduced, "height", &hv_h);
			TupleMax2(hv_h, hv_w, &hv_len);


			SobelAmp(ho_ImageMean, &ho_EdgeAmplitude, "sum_abs", 3);
			ErosionCircle(ho_ImageReduced, &ho_RegionErosion, 3.5);
			ReduceDomain(ho_ImageMean, ho_RegionErosion, &ho_ImageReduced1);

			LinesGauss(ho_ImageReduced1, &ho_Lines, 1.5, 3, 8, "light", "true", "bar-shaped",
				"true");

			UnionCollinearContoursXld(ho_Lines, &ho_UnionContours, 10, 1, 20, 0.2, "attr_keep");
			LinesGauss(ho_ImageReduced1, &ho_Lines, 1.5, 2, 6, "dark", "true", "bar-shaped",
				"true");
			UnionCollinearContoursXld(ho_Lines, &ho_UnionContours2, 10, 1, 20, 0.15, "attr_keep");
			ConcatObj(ho_UnionContours, ho_UnionContours2, &ho_UnionContours);
			SmallestRectangle2Xld(ho_UnionContours, &hv_Row, &hv_Column, &hv_Phi, &hv_Length1,
				&hv_Length2);
			//length_xld (UnionContours, Length)
			hv_Id = ((-hv_Length1).TupleSortIndex()) + 1;
			if (0 != (int((hv_Id.TupleLength())>0)))
			{
				SelectObj(ho_UnionContours, &ho_ObjectSelected1, HTuple(hv_Id[0]));
				GetContourXld(ho_ObjectSelected1, &hv_Row1, &hv_Col);
				GenRegionPoints(&ho_Region2, hv_Row1, hv_Col);
				SelectObj(ho_UnionContours, &ho_ObjectSelected1, HTuple(hv_Id[1]));
				GetContourXld(ho_ObjectSelected1, &hv_Row1, &hv_Col);
				GenRegionPoints(&ho_Region3, hv_Row1, hv_Col);
				Union2(ho_Region2, ho_Region3, &ho_RegionUnion1);
				DilationCircle(ho_RegionUnion1, &ho_ObjectSelected, 2);
			}
			CountObj(ho_ObjectSelected, &hv_Number);
			ConcatObj((*ho_OutputRegion), ho_ObjectSelected, &(*ho_OutputRegion));
			if (0 != (int(hv_Number == 0)))
			{
				ConcatObj((*ho_OutputRegion), ho_RectangleRegion, &(*ho_OutputRegion));
			}
		}

		if (0 != (int(hv_RegionID == 25)))
		{
			//RTYS
			hv_lk = 1;
			hv_Number = 0;
			ReduceDomain(ho_Image, ho_RectangleRegion, &ho_ImageReduced);
			ScaleImageMax(ho_ImageReduced, &ho_ImageScaleMax);
			MeanImage(ho_ImageScaleMax, &ho_ImageMean, 3, 3);

			RegionFeatures(ho_ImageReduced, "width", &hv_w);
			RegionFeatures(ho_ImageReduced, "height", &hv_h);
			TupleMax2(hv_h, hv_w, &hv_len);


			SobelAmp(ho_ImageMean, &ho_EdgeAmplitude, "sum_abs", 3);
			ErosionCircle(ho_ImageReduced, &ho_RegionErosion, 3.5);
			ReduceDomain(ho_ImageMean, ho_RegionErosion, &ho_ImageReduced1);

			LinesGauss(ho_ImageReduced1, &ho_Lines, 1.5, 3, 8, "light", "true", "bar-shaped",
				"true");

			UnionCollinearContoursXld(ho_Lines, &ho_UnionContours, 10, 1, 20, 0.2, "attr_keep");
			LinesGauss(ho_ImageReduced1, &ho_Lines, 1.5, 2, 6, "dark", "true", "bar-shaped",
				"true");
			UnionCollinearContoursXld(ho_Lines, &ho_UnionContours2, 10, 1, 20, 0.15, "attr_keep");
			ConcatObj(ho_UnionContours, ho_UnionContours2, &ho_UnionContours);
			SmallestRectangle2Xld(ho_UnionContours, &hv_Row, &hv_Column, &hv_Phi, &hv_Length1,
				&hv_Length2);
			//length_xld (UnionContours, Length)
			hv_Id = ((-hv_Length1).TupleSortIndex()) + 1;
			if (0 != (int((hv_Id.TupleLength())>0)))
			{
				SelectObj(ho_UnionContours, &ho_ObjectSelected1, HTuple(hv_Id[0]));
				GetContourXld(ho_ObjectSelected1, &hv_Row1, &hv_Col);
				GenRegionPoints(&ho_Region2, hv_Row1, hv_Col);
				SelectObj(ho_UnionContours, &ho_ObjectSelected1, HTuple(hv_Id[1]));
				GetContourXld(ho_ObjectSelected1, &hv_Row1, &hv_Col);
				GenRegionPoints(&ho_Region3, hv_Row1, hv_Col);
				Union2(ho_Region2, ho_Region3, &ho_RegionUnion1);
				DilationCircle(ho_RegionUnion1, &ho_ObjectSelected, 2);
			}
			CountObj(ho_ObjectSelected, &hv_Number);
			ConcatObj((*ho_OutputRegion), ho_ObjectSelected, &(*ho_OutputRegion));
			if (0 != (int(hv_Number == 0)))
			{
				ConcatObj((*ho_OutputRegion), ho_RectangleRegion, &(*ho_OutputRegion));
			}
		}

		if (0 != (int(hv_RegionID == 27)))
		{
			//zjz bx
			hv_lk = 1;
			hv_Number = 0;
			ReduceDomain(ho_Image, ho_RectangleRegion, &ho_ImageReduced);
			ScaleImageMax(ho_ImageReduced, &ho_ImageScaleMax);
			MeanImage(ho_ImageScaleMax, &ho_ImageMean, 3, 3);

			RegionFeatures(ho_ImageReduced, "width", &hv_w);
			RegionFeatures(ho_ImageReduced, "height", &hv_h);
			TupleMax2(hv_h, hv_w, &hv_len);


			SobelAmp(ho_ImageMean, &ho_EdgeAmplitude, "sum_abs", 3);
			ErosionCircle(ho_ImageReduced, &ho_RegionErosion, 3.5);
			ReduceDomain(ho_ImageMean, ho_RegionErosion, &ho_ImageReduced1);

			LinesGauss(ho_ImageReduced1, &ho_Lines, 1.5, 3, 8, "light", "true", "bar-shaped",
				"true");

			UnionCollinearContoursXld(ho_Lines, &ho_UnionContours, 10, 1, 20, 0.2, "attr_keep");
			LinesGauss(ho_ImageReduced1, &ho_Lines, 1.5, 2, 6, "dark", "true", "bar-shaped",
				"true");
			UnionCollinearContoursXld(ho_Lines, &ho_UnionContours2, 10, 1, 20, 0.15, "attr_keep");
			ConcatObj(ho_UnionContours, ho_UnionContours2, &ho_UnionContours);
			SmallestRectangle2Xld(ho_UnionContours, &hv_Row, &hv_Column, &hv_Phi, &hv_Length1,
				&hv_Length2);
			//length_xld (UnionContours, Length)
			hv_Id = ((-hv_Length1).TupleSortIndex()) + 1;
			if (0 != (int((hv_Id.TupleLength())>0)))
			{
				SelectObj(ho_UnionContours, &ho_ObjectSelected1, HTuple(hv_Id[0]));
				GetContourXld(ho_ObjectSelected1, &hv_Row1, &hv_Col);
				GenRegionPoints(&ho_Region2, hv_Row1, hv_Col);

				DilationCircle(ho_Region2, &ho_ObjectSelected, 2);
				CountObj(ho_ObjectSelected, &hv_Number);
				ConcatObj((*ho_OutputRegion), ho_ObjectSelected, &(*ho_OutputRegion));
				if (0 != (int(hv_Number == 0)))
				{
					ConcatObj((*ho_OutputRegion), ho_ObjectSelected, &(*ho_OutputRegion));
				}
			}

		}

		if (0 != (int(hv_RegionID == 37)))
		{
			//zjz bx
			hv_lk = 1;
			ReduceDomain(ho_Image, ho_RectangleRegion, &ho_ImageReduced);
			MedianRect(ho_ImageReduced, &ho_ImageMedian, 2, 2);
			Intensity(ho_RectangleRegion, ho_ImageMedian, &hv_Mean, &hv_Deviation);
			Threshold(ho_ImageMedian, &ho_Region, 0, hv_Mean - 10);
			//threshold (ImageMedian, Region1, 0, Mean-20)
			//union2 (Region, Region1, Region)
			Connection(ho_Region, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 10, 999999);
			Union1(ho_SelectedRegions, &ho_RegionUnion);
			ClosingCircle(ho_RegionUnion, &ho_RegionClosing, 3.5);
			CountObj(ho_RegionClosing, &hv_Number);
			ConcatObj((*ho_OutputRegion), ho_RegionClosing, &(*ho_OutputRegion));
			if (0 != (int(hv_Number == 0)))
			{
				ConcatObj((*ho_OutputRegion), ho_RectangleRegion, &(*ho_OutputRegion));
			}
		}

		if (0 != (int(hv_RegionID == 38)))
		{
			//zjz bx
			hv_lk = 1;
			ReduceDomain(ho_Image, ho_RectangleRegion, &ho_ImageReduced);
			MedianRect(ho_ImageReduced, &ho_ImageMedian, 2, 2);
			Intensity(ho_RectangleRegion, ho_ImageMedian, &hv_Mean, &hv_Deviation);
			Threshold(ho_ImageMedian, &ho_Region, hv_Mean + 20, 255);
			//threshold (ImageMedian, Region1, 0, Mean-20)
			//union2 (Region, Region1, Region)
			Connection(ho_Region, &ho_ConnectedRegions);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, "area", "and", 10, 999999);
			Union1(ho_SelectedRegions, &ho_RegionUnion);
			ClosingCircle(ho_RegionUnion, &ho_RegionClosing, 3.5);
			CountObj(ho_RegionClosing, &hv_Number);
			ConcatObj((*ho_OutputRegion), ho_RegionClosing, &(*ho_OutputRegion));
			if (0 != (int(hv_Number == 0)))
			{
				ConcatObj((*ho_OutputRegion), ho_RectangleRegion, &(*ho_OutputRegion));
			}
		}





		if (0 != (int(hv_lk != 1)))
		{
			ConcatObj((*ho_OutputRegion), ho_RectangleRegion, &(*ho_OutputRegion));
		}


		return 1;
	}
	// catch (Exception) 
	catch (HException &HDevExpDefaultException)
	{
		HDevExpDefaultException.ToHTuple(&hv_Exception);
		ConcatObj((*ho_OutputRegion), ho_RectangleRegion, &(*ho_OutputRegion));
		// stop(...); only in hdevelop
	}
	//catch (HException& ExceptionHandler)
	// {
	//HTuple err;
	//ExceptionHandler.ToHTuple(&err);
	//string strErr = err.ToString();
	//LOG(ERROR) <<hv_ProNum+"-"+hv_StaNum+"_"+hv_CamNum+"_"+hv_ImageNum <<"Yolo_Detect_Extract error : " << strErr.c_str();

	//string strerr = std::to_string(hv_ProNum.I()) + "-" + std::to_string(hv_StaNum.I()) + "_" + std::to_string(hv_CamNum.I()) + "_" + std::to_string(hv_ImageNum.I()) + "Yolo_Detect_Extract error:" + strErr;
	//QString strInfo = QString(tr(strerr.c_str()));
	//CCommon::m_pControl->AddRecord(strInfo, LT_ERROR);
	//}
	//return -1;

}

#pragma endregion  

















