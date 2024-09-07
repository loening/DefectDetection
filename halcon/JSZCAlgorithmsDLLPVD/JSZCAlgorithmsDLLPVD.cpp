#include <ostream>		
#include "Halconcpp.h"
//#include <opencv2/opencv.hpp>
#include <string.h>
#include "JSZCAlgorithmsDLLPVD.h" 
//#include <QObject>
using namespace std;
using namespace HalconCpp;
//using namespace cv;


// 定义导出函数
JSZCAlgorithmsDLLPVD::JSZCAlgorithmsDLLPVD()
{
	//ErrMessage = (char*)malloc(sizeof(char)*1000);
	//strcpy(ErrMessage, "");

}

JSZCAlgorithmsDLLPVD::~JSZCAlgorithmsDLLPVD()
{
	//free(ErrMessage);	
}

#pragma region universalFunction  

void  JSZCAlgorithmsDLLPVD::clearVec()
{
	// 异常信息
	//memset(ErrMessage, 0, sizeof(char) * 1000);
	// 异常标志位
	reg = 0;
	VeErrMessage.clear();
}
#pragma endregion

#pragma region ChengduJabilSelf-check4

int JSZCAlgorithmsDLLPVD::ImageShieldProcessAMiddleSelfTest4_83_1(HObject ho_Image, HObject* ho_DetectRegion, HObject* ho_PointRegion, HObject* ho_camregion, HObject* ho_JTReg, HTuple hv_ImName)
{
	// Local iconic variables
	HObject  ho_Rectangle_bottom, ho_Rectangle_top;
	HObject  ho_RectangleImage, ho_RegionUnion, ho_Rectangle;
	HObject  ho_ImageResult15, ho_Region20, ho_RegionOpening34;
	HObject  ho_ConnectedRegions37, ho_SelectedRegions19, ho_RegionMoved;
	HObject  ho_ImageReduced9, ho_RegionErosion2, ho_ImageMedian9;
	HObject  ho_ImageTexture4, ho_Region5, ho_RegionDilation1;
	HObject  ho_RegionErosion, ho_ImageSub, ho_ImageMedian5;
	HObject  ho_ImageTexture5, ho_ImageTexture8, ho_ImageResult19;
	HObject  ho_Region14, ho_Region15, ho_Region16, ho_ConnectedRegions40;
	HObject  ho_SelectedRegions48, ho_SelectedRegions49, ho_RegionUnion7;
	HObject  ho_RegionTrans, ho_ImageTexture, ho_ImageTexture3;
	HObject  ho_ImageResult1, ho_Region29, ho_ConnectedRegions31;
	HObject  ho_SelectedRegions12, ho_RegionUnion33, ho_RegionClosing7;
	HObject  ho_RegionFillUp14, ho_ConnectedRegions38, ho_SelectedRegions32;
	HObject  ho_RegionUnion18, ho_RegionTrans30, ho_RegionUnion34;
	HObject  ho_RegionFillUp, ho_ImageMedian24, ho_ImageTexture1;
	HObject  ho_ImageTexture2, ho_Region27, ho_Region28, ho_ConnectedRegions14;
	HObject  ho_SelectedRegions9, ho_SelectedRegions_big, ho_RegionOpening19;
	HObject  ho_ConnectedRegions39, ho_RegionTrans8, ho_RegionClosing4;
	HObject  ho_RegionFillUp20, ho_ConnectedRegions41, ho_RegionTrans11;
	HObject  ho_ImageReduced, ho_RegionBlack, ho_ObjectSelected;
	HObject  ho_RegionClosing, ho_SelectedRegions4, ho_Rectangle11;
	HObject  ho_ImageReduced12, ho_ImageMedian11, ho_ImageReduced10;
	HObject  ho_ImageTexture6, ho_ImageTexture7, ho_ImageResult3;
	HObject  ho_ImageMedian10, ho_Region6, ho_ConnectedRegions5;
	HObject  ho_RegionCount, ho_RegionOpening23, ho_RegionUnion23;
	HObject  ho_RegionTrans12, ho_RegionDilation4, ho_RegionDilation8;
	HObject  ho_RegionUnion14, ho_Rectangle5, ho_ImageReduced1;
	HObject  ho_Rectangle3, ho_ImageReduced7, ho_ImageResult4;
	HObject  ho_Region, ho_RegionFillUp3, ho_ConnectedRegions20;
	HObject  ho_SelectedRegions43, ho_SelectedRegions44, ho_RegionUnion15;
	HObject  ho_RegionFillUp1, ho_RegionUnion2, ho_RegionClosing5;
	HObject  ho_ConnectedRegions1, ho_SelectedRegions, ho_RegionUnion10;
	HObject  ho_ConnectedRegions21, ho_RegionOpening20, ho_RegionTrans6;
	HObject  ho_ImageScaleMax, ho_Rectangle9, ho_ImageReduced6;
	HObject  ho_Region13, ho_SelectedRegions3, ho_RegionDilation;
	HObject  ho_ImageMedian7, ho_ImageResult12, ho_Regions3;
	HObject  ho_RegionFillUp21, ho_RegionDilation24, ho_RegionFillUp25;
	HObject  ho_RegionOpening8, ho_RegionOpening18, ho_ConnectedRegions17;
	HObject  ho_SelectedRegions20, ho_RegionMoved7, ho_ImageMedian;
	HObject  ho_ImageResult11, ho_Regions2, ho_RegionFillUp11;
	HObject  ho_RegionOpening15, ho_ConnectedRegions35, ho_RegionOpening12;
	HObject  ho_SelectedRegions34, ho_RegionTrans17, ho_ImageMedian3;
	HObject  ho_ImageResult5, ho_RegionFillUp28, ho_ConnectedRegions8;
	HObject  ho_SelectedRegions8, ho_RegionTrans5, ho_RegionDilation14;
	HObject  ho_RegionOpening24, ho_RegionMoved1, ho_ImageResult10;
	HObject  ho_Region19, ho_RegionFillUp29, ho_ConnectedRegions19;
	HObject  ho_SelectedRegions14, ho_RegionTrans27, ho_RegionDilation20;
	HObject  ho_RegionOpening28, ho_RegionMoved6, ho_ImageResult13;
	HObject  ho_Region11, ho_ConnectedRegions24, ho_SelectedRegions22;
	HObject  ho_RegionTrans15, ho_ImageResult46, ho_Region43;
	HObject  ho_RegionOpening29, ho_ConnectedRegions77, ho_SelectedRegions107;
	HObject  ho_SelectedRegions108, ho_Region45, ho_ConnectedRegions79;
	HObject  ho_SelectedRegions109, ho_RegionUnion52, ho_EmptyObject4;
	HObject  ho_RegionTrans54, ho_RegionDilation44, ho_RegionOpening79;
	HObject  ho_RegionMoved24, ho_RegionUnion49, ho_ImageResult47;
	HObject  ho_ImageMedian31, ho_Region44, ho_RegionOpening78;
	HObject  ho_ConnectedRegions78, ho_ImageResult8, ho_Region17;
	HObject  ho_RegionFillUp8, ho_RegionOpening17, ho_ImageResult27;
	HObject  ho_SelectedRegions40, ho_ImageMedian4, ho_ImageResult6;
	HObject  ho_Region8, ho_RegionFillUp2, ho_ConnectedRegions6;
	HObject  ho_SelectedRegions6, ho_SelectedRegions1, ho_RegionTrans35;
	HObject  ho_RegionUnion24, ho_ImageResult18, ho_Region12;
	HObject  ho_ConnectedRegions27, ho_SelectedRegions2, ho_RegionTrans7;
	HObject  ho_Region24, ho_RegionClosing1, ho_RegionFillUp18;
	HObject  ho_ConnectedRegions32, ho_ConnectedRegions33, ho_SelectedRegions27;
	HObject  ho_RegionTrans25, ho_RegionDilation2, ho_ImageResult9;
	HObject  ho_Region9, ho_RegionFillUp9, ho_RegionOpening22;
	HObject  ho_RegionOpening32, ho_ConnectedRegions25, ho_SelectedRegions13;
	HObject  ho_RegionTrans3, ho_SelectedRegions17, ho_RegionUnion6;
	HObject  ho_SelectedRegions18, ho_RegionFillUp4, ho_RegionOpening13;
	HObject  ho_ImageResult32, ho_Region1, ho_RegionOpening6;
	HObject  ho_ConnectedRegions2, ho_SelectedRegions30, ho_RegionTrans39;
	HObject  ho_ImageResult7, ho_Region4, ho_RegionFillUp6, ho_RegionDilation6;
	HObject  ho_ConnectedRegions23, ho_SelectedRegions21, ho_ImageResult23;
	HObject  ho_ConnectedRegions3, ho_SelectedRegions28, ho_RegionOpening9;
	HObject  ho_RegionTrans2, ho_ImageMean6, ho_ImageEmphasize1;
	HObject  ho_RegionOpening10, ho_RegionUnion12, ho_RegionDilation5;
	HObject  ho_RegionUnion16, ho_ConnectedRegions42, ho_ImageResult14;
	HObject  ho_RegionOpening7, ho_RegionFillUp26, ho_SelectedRegions7;
	HObject  ho_RegionTrans9, ho_RegionDilation10, ho_SelectedRegions31;
	HObject  ho_RegionOpening45, ho_RegionMoved8, ho_RegionUnion21;
	HObject  ho_RegionMoved21, ho_SelectedRegions45, ho_RegionUnion20;
	HObject  ho_RegionDilation16, ho_ImageResult21, ho_RegionFillUp7;
	HObject  ho_RegionOpening3, ho_SelectedRegions11, ho_SelectedRegions46;
	HObject  ho_SelectedRegions60, ho_RegionDilation19, ho_RegionOpening47;
	HObject  ho_SelectedRegions62, ho_RegionDilation23, ho_RegionOpening49;
	HObject  ho_RegionMoved10, ho_RegionUnion28, ho_RegionTrans22;
	HObject  ho_ImageResult, ho_RegionFillUp27, ho_RegionOpening11;
	HObject  ho_ImageMedian1, ho_Regions1, ho_RegionFillUp10;
	HObject  ho_RegionOpening25, ho_ConnectedRegions, ho_SelectedRegions16;
	HObject  ho_ConnectedRegions22, ho_Rectangle1, ho_ImageReduced4;
	HObject  ho_Edges, ho_Edge, ho_Edge_left, ho_Contour, ho_RegionEdge;
	HObject  ho_RegionMove, ho_RegionDifference, ho_Cross1, ho_Cross2;
	HObject  ho_Cross3, ho_Cross4, ho_Cross1re, ho_Cross2re;
	HObject  ho_Cross3re, ho_Cross4re, ho_RegionUnion3, ho_RegionUnion4;
	HObject  ho_ConnectedRegions4, ho_SortedRegions;

	// Local control variables
	HTuple  hv_Substring, hv_Substrings, hv_BoolInter;
	HTuple  hv_StaNum, hv_CamNum, hv_ImageNum, hv_Length5, hv_Selected1;
	HTuple  hv_Number21, hv_Width, hv_Height, hv_Row112, hv_Column112;
	HTuple  hv_Row212, hv_Column212, hv_Area6, hv_Row3, hv_Column3;
	HTuple  hv_width, hv_Value4, hv_UsedThreshold, hv_Value;
	HTuple  hv_Value1, hv_Value14, hv_Value6, hv_Value7, hv_Value9;
	HTuple  hv_Value10, hv_UsedThreshold1, hv_Row, hv_Col, hv_Sub;
	HTuple  hv_left_xld, hv_left_Row, hv_Contour_col, hv_Contour_row;
	HTuple  hv_Area, hv_Column, hv_Mean, hv_Deviation, hv_Number1;
	HTuple  hv_Row16, hv_Column16, hv_Phi3, hv_Length1, hv_Length2;
	HTuple  hv_Cos, hv_Sin, hv_a, hv_b, hv_c, hv_d, hv_e, hv_f;
	HTuple  hv_g, hv_h;

	try
	{

		if (HDevWindowStack::IsOpen())
			SetColored(HDevWindowStack::GetActive(), 12);
		TupleStrFirstN(hv_ImName, 2, &hv_Substring);

		//tuple_split (ImName, '_', Substrings)
		//tuple_split (Substrings, '-', Substrings1)
		//Substring := Substrings1[1]+'_'+Substrings1[2]
		//内部
		hv_BoolInter = 0;
		//胶条区域
		GenRectangle1(&ho_Rectangle_bottom, 2045, 0, 2047, 1800);
		GenRectangle1(&ho_Rectangle_top, 0, 0, 5, 1800);
		GenRectangle1(&ho_RectangleImage, 0, 0, 2047, 2047);
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

		if (0 != (int(hv_Substring == HTuple("2_1"))))
		{


			MultImage(ho_Image, ho_Image, &ho_ImageResult15, 0.1, 0);
			GrayDilationRect(ho_ImageResult15, &ho_ImageResult15, 200, 1);
			Threshold(ho_ImageResult15, &ho_Region20, 180, 255);
			FillUp(ho_Region20, &ho_Region20);
			//13边
			if (0 != (HTuple(HTuple(HTuple(HTuple(int(hv_Number21 != 15)).TupleAnd(int(hv_Number21 != 16))).TupleAnd(int(hv_Number21 != 17))).TupleAnd(int(hv_Number21 != 12))).TupleAnd(int(hv_Number21 != 13))))
			{
				ClosingRectangle1(ho_Region20, &ho_Region20, 400, 1);
			}
			Connection(ho_Region20, &ho_Region20);
			SelectShapeStd(ho_Region20, &ho_Region20, "max_area", 70);
			Union1(ho_Region20, &ho_Region20);

			if (0 != (int(hv_Number21 == 2)))
			{

				OpeningRectangle1(ho_Region20, &ho_RegionOpening34, 1, 1900);
			}
			else
			{
				OpeningRectangle1(ho_Region20, &ho_RegionOpening34, 1, 1600);
			}
			Connection(ho_RegionOpening34, &ho_ConnectedRegions37);
			OpeningRectangle1(ho_ConnectedRegions37, &ho_ConnectedRegions37, 3, 500);
			SelectShapeStd(ho_ConnectedRegions37, &ho_SelectedRegions19, "max_area", 70);

			ShapeTrans(ho_SelectedRegions19, &ho_RegionUnion, "rectangle1");
			MoveRegion(ho_RegionUnion, &ho_RegionMoved, 0, -850);
			Difference(ho_RegionUnion, ho_RegionMoved, &ho_RegionUnion);
			//difference (RegionTrans31, RegionMoved12, RegionUnion)
			//提取区域
			SmallestRectangle1(ho_RegionUnion, &hv_Row112, &hv_Column112, &hv_Row212, &hv_Column212);
			ReduceDomain(ho_Image, ho_RegionUnion, &ho_ImageReduced9);
			ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion2, 50, 1);
			AreaCenter(ho_RegionUnion, &hv_Area6, &hv_Row3, &hv_Column3);
			if (0 != (int(hv_Number21 == 24)))
			{

				MultImage(ho_Image, ho_Image, &ho_ImageResult15, 0.3, 0);
				GrayDilationRect(ho_ImageResult15, &ho_ImageResult15, 200, 1);
				Threshold(ho_ImageResult15, &ho_Region20, 180, 255);
				FillUp(ho_Region20, &ho_Region20);
				ClosingRectangle1(ho_Region20, &ho_Region20, 400, 1);
				Connection(ho_Region20, &ho_Region20);
				SelectShapeStd(ho_Region20, &ho_Region20, "max_area", 70);
				Union1(ho_Region20, &ho_Region20);


				OpeningRectangle1(ho_Region20, &ho_RegionOpening34, 1, 1900);
				Connection(ho_RegionOpening34, &ho_ConnectedRegions37);
				OpeningRectangle1(ho_ConnectedRegions37, &ho_ConnectedRegions37, 3, 500);
				SelectShapeStd(ho_ConnectedRegions37, &ho_SelectedRegions19, "max_area",
					70);

				ShapeTrans(ho_SelectedRegions19, &ho_RegionUnion, "rectangle1");

				MoveRegion(ho_RegionUnion, &ho_RegionMoved, 0, -850);
				Difference(ho_RegionUnion, ho_RegionMoved, &ho_RegionUnion);

				//difference (RegionTrans31, RegionMoved12, RegionUnion)
				//提取区域
				SmallestRectangle1(ho_RegionUnion, &hv_Row112, &hv_Column112, &hv_Row212,
					&hv_Column212);
				ReduceDomain(ho_Image, ho_RegionUnion, &ho_ImageReduced9);
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion2, 50, 1);
				AreaCenter(ho_RegionUnion, &hv_Area6, &hv_Row3, &hv_Column3);
			}
			if (0 != (int(hv_Number21 == 25)))
			{

				//提取区域
				Union1(ho_Region20, &ho_RegionUnion);
				OpeningRectangle1(ho_RegionUnion, &ho_RegionUnion, 1, 300);
				SmallestRectangle1(ho_RegionUnion, &hv_Row112, &hv_Column112, &hv_Row212,
					&hv_Column212);
				ReduceDomain(ho_Image, ho_RegionUnion, &ho_ImageReduced9);
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion2, 50, 1);
				AreaCenter(ho_RegionUnion, &hv_Area6, &hv_Row3, &hv_Column3);
			}


			if (0 != (int(hv_Number21 == 3)))
			{
				//裁剪

				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 11, 11);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				ClosingRectangle1(ho_Region5, &ho_Region5, 115, 1);
				FillUp(ho_Region5, &ho_Region5);
				OpeningRectangle1(ho_Region5, &ho_Region5, 45, 1);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 50);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));




			}
			if (0 != (int(hv_Number21 == 4)))
			{
				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				ClosingRectangle1(ho_Region5, &ho_Region5, 115, 1);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 70);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));
			}
			if (0 != (int(hv_Number21 == 5)))
			{
				//erosion_rectangle1 (RegionUnion, RegionErosion, 425, 1)
				//mean_image (ImageReduced9, ImageMedian2, 15, 35)
				//gray_closing_rect (ImageMedian2, ImageOpening, 10, 100)
				//sub_image (ImageMedian2, ImageOpening, ImageSub, 6, 128)
				//threshold (ImageSub, Region25, 0, 80)
				//intersection (Region25, RegionErosion, Region25)
				//connection (Region25, ConnectedRegions47)
				//select_shape (ConnectedRegions47, SelectedRegions47, ['area','column'], 'and', [5950,820], [299999,1400])
				//union1 (SelectedRegions47, RegionUnion50)
				//opening_rectangle1 (RegionUnion50, RegionOpening43, 1, 25)
				//shape_trans (RegionOpening43, RegionTrans29, 'rectangle1')
				//dilation_rectangle1 (RegionTrans29, camregion, 20, 20)
			}
			if (0 != (int(hv_Number21 == 6)))
			{

				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 425, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian5, 15, 15);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture5, "el", 5, 7);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture8, "le", 5, 7);
				AddImage(ho_ImageTexture5, ho_ImageTexture8, &ho_ImageResult19, 2, -100);
				Threshold(ho_ImageResult19, &ho_Region14, 180, 255);
				Intersection(ho_Region14, ho_RegionErosion, &ho_Region14);
				Connection(ho_Region14, &ho_Region14);
				SelectShape(ho_Region14, &ho_Region14, (HTuple("area").Append("width")),
					"or", (HTuple(700).Append(100)), (HTuple(999999).Append(99999)));
				Union1(ho_Region14, &ho_Region14);
				OpeningCircle(ho_Region14, &ho_Region14, 3.5);
				ClosingRectangle1(ho_Region14, &ho_Region15, 135, 1);
				ClosingRectangle1(ho_Region14, &ho_Region16, 1, 135);
				Union2(ho_Region16, ho_Region15, &ho_Region14);
				Connection(ho_Region14, &ho_ConnectedRegions40);
				SelectShape(ho_ConnectedRegions40, &ho_SelectedRegions48, "area", "and",
					4000, 9999999);
				SelectShape(ho_SelectedRegions48, &ho_SelectedRegions49, (HTuple("column").Append("width")),
					"or", (HTuple(700).Append(200)), (HTuple(1300).Append(9999)));
				Union1(ho_SelectedRegions49, &ho_RegionUnion7);
				FillUp(ho_RegionUnion7, &ho_RegionUnion7);
				ShapeTrans(ho_RegionUnion7, &ho_RegionTrans, "rectangle1");
				if (0 != hv_BoolInter)
				{
					ErosionRectangle1(ho_RegionTrans, &ho_RegionTrans, 70, 1);
					MoveRegion(ho_RegionTrans, &ho_RegionTrans, 30, 0);

				}
				RegionFeatures(ho_RegionTrans, "width", &hv_width);
				OpeningCircle(ho_RegionTrans, &ho_RegionTrans, hv_width / 2);
				Union2(ho_RegionTrans, ho_Rectangle_bottom, &ho_RegionUnion7);

				ClosingRectangle1(ho_RegionUnion7, &ho_RegionUnion7, 1, 1055);
				FillUp(ho_RegionUnion7, &ho_RegionUnion7);
				OpeningCircle(ho_RegionUnion7, &(*ho_camregion), 5);





			}
			if (0 != (int(hv_Number21 == 7)))
			{

				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 425, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian5, 15, 15);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture5, "el", 5, 7);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture8, "le", 5, 7);
				AddImage(ho_ImageTexture5, ho_ImageTexture8, &ho_ImageResult19, 2, -100);
				Threshold(ho_ImageResult19, &ho_Region14, 180, 255);
				Intersection(ho_Region14, ho_RegionErosion, &ho_Region14);
				Connection(ho_Region14, &ho_Region14);
				SelectShape(ho_Region14, &ho_Region14, (HTuple("area").Append("width")),
					"or", (HTuple(700).Append(100)), (HTuple(999999).Append(99999)));
				Union1(ho_Region14, &ho_Region14);
				OpeningCircle(ho_Region14, &ho_Region14, 3.5);
				ClosingRectangle1(ho_Region14, &ho_Region15, 135, 1);
				ClosingRectangle1(ho_Region14, &ho_Region16, 1, 135);
				Union2(ho_Region16, ho_Region15, &ho_Region14);
				Connection(ho_Region14, &ho_ConnectedRegions40);
				SelectShape(ho_ConnectedRegions40, &ho_SelectedRegions48, "area", "and",
					4000, 9999999);
				SelectShape(ho_SelectedRegions48, &ho_SelectedRegions49, (HTuple("column").Append("width")),
					"or", (HTuple(700).Append(200)), (HTuple(1300).Append(9999)));
				Union1(ho_SelectedRegions49, &ho_RegionUnion7);
				FillUp(ho_RegionUnion7, &ho_RegionUnion7);
				ShapeTrans(ho_RegionUnion7, &ho_RegionTrans, "rectangle1");
				if (0 != hv_BoolInter)
				{
					ErosionRectangle1(ho_RegionTrans, &ho_RegionTrans, 70, 1);
					MoveRegion(ho_RegionTrans, &ho_RegionTrans, -30, 0);

				}
				RegionFeatures(ho_RegionTrans, "width", &hv_width);
				OpeningCircle(ho_RegionTrans, &ho_RegionTrans, hv_width / 2);
				Union2(ho_RegionTrans, ho_Rectangle_top, &ho_RegionUnion7);

				ClosingRectangle1(ho_RegionUnion7, &ho_RegionUnion7, 1, 1055);
				FillUp(ho_RegionUnion7, &ho_RegionUnion7);
				OpeningCircle(ho_RegionUnion7, &(*ho_camregion), 5);


			}
			if (0 != (int(hv_Number21 == 8)))
			{
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 225, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 15, 15);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture, "el", 5, 7);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture3, "le", 5, 7);
				AddImage(ho_ImageTexture, ho_ImageTexture3, &ho_ImageResult1, 2, -100);
				Threshold(ho_ImageResult1, &ho_Region29, 180, 255);
				Intersection(ho_Region29, ho_RegionErosion, &ho_Region29);
				ClosingCircle(ho_Region29, &ho_Region29, 3.5);
				Connection(ho_Region29, &ho_Region29);
				SelectShape(ho_Region29, &ho_Region29, ((HTuple("area").Append("width")).Append("height")),
					"and", ((HTuple(120).Append(80)).Append(80)), ((HTuple(999999).Append(999999)).Append(99999)));
				Union1(ho_Region29, &ho_Region29);
				ClosingRectangle1(ho_Region29, &ho_Region29, 19, 200);
				ClosingRectangle1(ho_Region29, &ho_Region29, 100, 1);


				Connection(ho_Region29, &ho_ConnectedRegions31);
				SelectShape(ho_ConnectedRegions31, &ho_SelectedRegions12, "area", "and",
					200, 999999);
				Union1(ho_SelectedRegions12, &ho_RegionUnion33);

				Union2(ho_RegionUnion33, ho_Rectangle_bottom, &ho_RegionUnion33);
				Union2(ho_RegionUnion33, ho_Rectangle_top, &ho_RegionUnion33);
				ClosingRectangle1(ho_RegionUnion33, &ho_RegionUnion33, 25, 200);
				FillUp(ho_RegionUnion33, &ho_RegionUnion33);
				OpeningRectangle1(ho_RegionUnion33, &ho_RegionClosing7, 55, 55);
				FillUp(ho_RegionClosing7, &ho_RegionFillUp14);
				Connection(ho_RegionFillUp14, &ho_ConnectedRegions38);
				SelectShape(ho_ConnectedRegions38, &ho_SelectedRegions32, "column", "and",
					750, 1300);
				Union1(ho_SelectedRegions32, &ho_RegionUnion18);
				ShapeTrans(ho_RegionUnion18, &ho_RegionTrans30, "convex");
				DilationCircle(ho_RegionTrans30, &(*ho_camregion), 10.5);
			}
			if (0 != (int(hv_Number21 == 9)))
			{
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				GenRectangle1(&ho_Rectangle_top, 0, 0, 5, 1800);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 15, 15);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture, "el", 5, 7);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture3, "le", 5, 7);
				AddImage(ho_ImageTexture, ho_ImageTexture3, &ho_ImageResult1, 3, -300);
				Threshold(ho_ImageResult1, &ho_Region29, 128, 255);

				Intersection(ho_Region29, ho_RegionErosion, &ho_Region29);
				ClosingCircle(ho_Region29, &ho_Region29, 3.5);
				Connection(ho_Region29, &ho_Region29);
				SelectShape(ho_Region29, &ho_Region29, (HTuple("area").Append("width")),
					"and", (HTuple(200).Append(200)), (HTuple(999999).Append(99999)));
				Union1(ho_Region29, &ho_Region29);
				ClosingRectangle1(ho_Region29, &ho_Region29, 1, 200);
				FillUp(ho_Region29, &ho_Region29);
				Connection(ho_Region29, &ho_ConnectedRegions31);
				SelectShape(ho_ConnectedRegions31, &ho_SelectedRegions12, (HTuple("area").Append("width")),
					"and", (HTuple(200).Append(200)), (HTuple(999999).Append(99999)));
				Union1(ho_SelectedRegions12, &ho_RegionUnion33);
				ClosingRectangle1(ho_RegionUnion33, &ho_RegionClosing7, 5, 15);
				FillUp(ho_RegionClosing7, &ho_RegionFillUp14);
				Connection(ho_RegionFillUp14, &ho_ConnectedRegions38);
				SelectShape(ho_ConnectedRegions38, &ho_SelectedRegions32, "column", "and",
					750, 1300);
				Union2(ho_SelectedRegions32, ho_Rectangle_top, &ho_RegionUnion34);
				Union2(ho_RegionUnion34, ho_Rectangle_bottom, &ho_RegionUnion34);
				ClosingRectangle1(ho_RegionUnion34, &ho_RegionUnion34, 1, 500);
				FillUp(ho_RegionUnion34, &ho_RegionFillUp);
				OpeningCircle(ho_RegionFillUp, &ho_RegionUnion34, 5);
				ShapeTrans(ho_RegionUnion34, &ho_RegionUnion34, "rectangle1");



				DilationCircle(ho_RegionUnion34, &(*ho_camregion), 10.5);
			}
			if (0 != (int(hv_Number21 == 10)))
			{



				MeanImage(ho_Image, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				Connection(ho_Region5, &ho_Region5);

				SelectShape(ho_Region5, &ho_Region5, (HTuple("width").Append("height")),
					"and", (HTuple(550).Append(30)), (HTuple(9999).Append(300)));
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 70);

				Intersection(ho_Image, ho_RegionDilation1, &(*ho_JTReg));



				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				GenRectangle1(&ho_Rectangle_top, 0, 0, 5, 1800);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 15, 15);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture, "el", 5, 7);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture3, "le", 5, 7);
				AddImage(ho_ImageTexture, ho_ImageTexture3, &ho_ImageResult1, 3, -300);
				Threshold(ho_ImageResult1, &ho_Region29, 128, 255);


				Intersection(ho_Region29, ho_RegionErosion, &ho_Region29);
				ClosingCircle(ho_Region29, &ho_Region29, 3.5);
				Connection(ho_Region29, &ho_Region29);
				SelectShape(ho_Region29, &ho_Region29, (HTuple("area").Append("width")),
					"and", (HTuple(200).Append(200)), (HTuple(999999).Append(99999)));
				Union1(ho_Region29, &ho_Region29);

				ShapeTrans(ho_Region29, &ho_Region29, "convex");
				Union2(ho_Region29, ho_Rectangle_top, &ho_Region29);
				ClosingRectangle1(ho_Region29, &ho_Region29, 1, 300);
				OpeningCircle(ho_Region29, &ho_Region29, 3.5);
				DilationRectangle1(ho_Region29, &(*ho_camregion), 25, 25);
			}
			if (0 != (int(hv_Number21 == 11)))
			{

				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				ClosingRectangle1(ho_Region5, &ho_Region5, 200, 1);
				FillUp(ho_Region5, &ho_Region5);
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 75);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));
			}
			if (0 != (int(hv_Number21 == 12)))
			{
				//裁剪
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -200);
				Threshold(ho_ImageSub, &ho_Region29, 180, 255);
				Connection(ho_Region29, &ho_Region29);
				SelectShape(ho_Region29, &ho_Region29, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(50)), (HTuple(999999).Append(300)));
				Union1(ho_Region29, &ho_Region29);
				Intersection(ho_RegionErosion, ho_Region29, &ho_Region29);
				ClosingCircle(ho_Region29, &ho_Region29, 11);
				Connection(ho_Region29, &ho_ConnectedRegions31);
				ShapeTrans(ho_ConnectedRegions31, &ho_ConnectedRegions31, "convex");
				SelectShape(ho_ConnectedRegions31, &ho_SelectedRegions12, "area", "and",
					400, 999999);
				Union1(ho_SelectedRegions12, &ho_RegionUnion33);
				ClosingRectangle1(ho_RegionUnion33, &ho_RegionClosing7, 5, 15);
				Union2(ho_RegionClosing7, ho_Rectangle_bottom, &ho_RegionClosing7);

				FillUp(ho_RegionClosing7, &ho_RegionFillUp14);
				Connection(ho_RegionFillUp14, &ho_ConnectedRegions38);
				OpeningRectangle1(ho_ConnectedRegions38, &ho_ConnectedRegions38, 7, 7);
				SelectShape(ho_ConnectedRegions38, &ho_ConnectedRegions38, "width", "and",
					150, 300);
				OpeningCircle(ho_ConnectedRegions38, &ho_ConnectedRegions38, 5);


				ShapeTrans(ho_ConnectedRegions38, &ho_RegionTrans30, "convex");
				ClosingCircle(ho_RegionTrans30, &ho_RegionTrans30, 135);


				DilationCircle(ho_RegionTrans30, &(*ho_camregion), 10.5);
			}
			if (0 != (int(hv_Number21 == 13)))
			{
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(120).Append(100)), (HTuple(99999).Append(99999)));
				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				Union1(ho_Region27, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				Union1(ho_Region27, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("height").Append("width")),
					"and", (HTuple(100).Append(100)), (HTuple(99999).Append(99999)));
				Union1(ho_Region27, &ho_Region27);

				ClosingCircle(ho_Region27, &ho_Region27, 15);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 20);
				Connection(ho_Region27, &ho_Region27);
				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				SelectShape(ho_Region27, &ho_Region28, (HTuple("height").Append("width")),
					"and", (HTuple(100).Append(100)), (HTuple(99999).Append(250)));

				ShapeTrans(ho_Region28, &ho_Region28, "outer_circle");
				Union2(ho_Region28, ho_Region27, &ho_Region27);
				Union1(ho_Region27, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);

				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);
				Connection(ho_Region27, &ho_ConnectedRegions14);

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions9, (HTuple("width").Append("area")),
					"and", (HTuple(100).Append(500)), (HTuple(400).Append(999999)));

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions_big, (HTuple("width").Append("area")),
					"and", (HTuple(300).Append(200)), (HTuple(680).Append(999999)));
				DilationCircle(ho_SelectedRegions_big, &ho_SelectedRegions_big, 3);
				Union2(ho_SelectedRegions9, ho_SelectedRegions_big, &ho_RegionOpening19);

				Connection(ho_RegionOpening19, &ho_ConnectedRegions39);
				ShapeTrans(ho_ConnectedRegions39, &ho_RegionTrans8, "convex");
				DilationCircle(ho_RegionTrans8, &(*ho_camregion), 7);
			}
			if (0 != (int(hv_Number21 == 14)))
			{


				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);
				OpeningCircle(ho_Region27, &ho_Region27, 3.5);
				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));
				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 30);
				ClosingCircle(ho_Region27, &ho_Region27, 11);
				Connection(ho_Region27, &ho_Region27);
				ShapeTrans(ho_Region27, &ho_Region27, "convex");

				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 100, 1);
				ClosingCircle(ho_Region27, &ho_Region27, 11);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 40);

				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);
				Connection(ho_Region27, &ho_ConnectedRegions14);

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions9, (HTuple("width").Append("area")),
					"and", (HTuple(100).Append(500)), (HTuple(280).Append(999999)));

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions_big, (HTuple("width").Append("area")),
					"and", (HTuple(300).Append(200)), (HTuple(680).Append(999999)));
				DilationCircle(ho_SelectedRegions_big, &ho_SelectedRegions_big, 1);
				Union2(ho_SelectedRegions9, ho_SelectedRegions_big, &ho_RegionOpening19);

				Connection(ho_RegionOpening19, &ho_ConnectedRegions39);
				ShapeTrans(ho_ConnectedRegions39, &ho_RegionTrans8, "convex");
				DilationCircle(ho_RegionTrans8, &(*ho_camregion), 5);


			}
			if (0 != (int(hv_Number21 == 15)))
			{
				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				ClosingRectangle1(ho_Region5, &ho_Region5, 100, 1);
				FillUp(ho_Region5, &ho_Region5);
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 70);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));


				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);

				MeanImage(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -200);
				Threshold(ho_ImageSub, &ho_Region14, 180, 255);
				Intersection(ho_Region14, ho_RegionErosion, &ho_Region14);

				Connection(ho_Region14, &ho_Region14);
				ShapeTrans(ho_Region14, &ho_Region14, "convex");
				SelectShape(ho_Region14, &ho_Region14, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(300)));
				SelectShape(ho_Region14, &ho_Region14, "width", "and", 100, 300);
				Union2(ho_Region14, ho_Rectangle_top, &ho_Region14);
				Union2(ho_Region14, ho_Rectangle_bottom, &ho_Region14);
				Union1(ho_Region14, &ho_Region14);

				ClosingRectangle1(ho_Region14, &ho_Region14, 3, 55);
				Union2(ho_Region14, ho_Rectangle_bottom, &ho_Region14);
				Union2(ho_Region14, ho_Rectangle_top, &ho_Region14);
				FillUp(ho_Region14, &ho_Region14);
				OpeningRectangle1(ho_Region14, &ho_Region14, 25, 25);

				Connection(ho_Region14, &ho_ConnectedRegions40);
				SelectShape(ho_ConnectedRegions40, &ho_SelectedRegions48, "area", "and",
					4000, 9999999);
				SelectShape(ho_SelectedRegions48, &ho_SelectedRegions49, "column", "and",
					700, 1300);
				Union1(ho_SelectedRegions49, &ho_RegionUnion7);
				ClosingRectangle1(ho_RegionUnion7, &ho_RegionClosing4, 45, 25);
				FillUp(ho_RegionClosing4, &ho_RegionFillUp20);
				Connection(ho_RegionFillUp20, &ho_ConnectedRegions41);
				ShapeTrans(ho_ConnectedRegions41, &ho_RegionTrans11, "convex");
				DilationCircle(ho_RegionTrans11, &(*ho_camregion), 20.5);

			}
			if (0 != (int(hv_Number21 == 16)))
			{
				//裁剪
				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 300);
				ClosingRectangle1(ho_Region5, &ho_Region5, 100, 1);
				FillUp(ho_Region5, &ho_Region5);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, (HTuple("width").Append("height")),
					"and", (HTuple(650).Append(60)), (HTuple(99999).Append(200)));
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 70);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));
			}
			if (0 != (int(hv_Number21 == 17)))
			{
				//裁剪
				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 50);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));
			}
			if (0 != (int(hv_Number21 == 18)))
			{
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 425, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);

				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(700).Append(100)), (HTuple(99999).Append(99999)));
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 35);
				ClosingRectangle1(ho_Region27, &ho_Region27, 135, 1);
				Connection(ho_Region27, &ho_Region27);
				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 135);

				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 25, 25);
				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				Connection(ho_Region27, &ho_ConnectedRegions14);

				DilationCircle(ho_ConnectedRegions14, &(*ho_camregion), 10.5);

			}
			if (0 != (int(hv_Number21 == 19)))
			{
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -200);
				Threshold(ho_ImageSub, &ho_Region29, 180, 255);
				Intersection(ho_Region29, ho_RegionErosion, &ho_Region29);
				Connection(ho_Region29, &ho_Region29);
				SelectShape(ho_Region29, &ho_Region29, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));
				Union1(ho_Region29, &ho_Region29);
				ClosingRectangle1(ho_Region29, &ho_Region29, 1, 121);
				ClosingRectangle1(ho_Region29, &ho_Region29, 121, 1);
				FillUp(ho_Region29, &ho_Region29);
				//union2 (Region29, Rectangle_bottom, Region29)
				Union2(ho_Region29, ho_Rectangle_top, &ho_Region29);
				ClosingRectangle1(ho_Region29, &ho_Region29, 1, 1121);
				FillUp(ho_Region29, &ho_Region29);
				OpeningCircle(ho_Region29, &ho_Region29, 55);




				Connection(ho_Region29, &ho_ConnectedRegions31);

				SelectShape(ho_ConnectedRegions31, &ho_SelectedRegions12, "area", "and",
					350, 999999);
				Union1(ho_SelectedRegions12, &ho_RegionUnion33);
				ClosingRectangle1(ho_RegionUnion33, &ho_RegionClosing7, 10, 15);
				FillUp(ho_RegionClosing7, &ho_RegionFillUp14);
				Connection(ho_RegionFillUp14, &ho_ConnectedRegions38);
				SelectShape(ho_ConnectedRegions38, &ho_SelectedRegions32, (HTuple("column").Append("width")),
					"and", (HTuple(750).Append(60)), (HTuple(1300).Append(9999)));
				Union1(ho_SelectedRegions32, &ho_RegionUnion34);

				ShapeTrans(ho_RegionUnion34, &ho_RegionTrans30, "convex");
				DilationCircle(ho_RegionTrans30, &(*ho_camregion), 10.5);

			}
			if (0 != (int(hv_Number21 == 20)))
			{

				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				ReduceDomain(ho_Image, ho_RegionErosion, &ho_ImageReduced);
				Threshold(ho_ImageReduced, &ho_RegionBlack, 0, 20);
				RankRegion(ho_RegionBlack, &ho_RegionBlack, 15, 15, 110);

				MeanImage(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Union2(ho_Region27, ho_RegionBlack, &ho_Region27);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 121);
				ClosingRectangle1(ho_Region27, &ho_Region27, 121, 1);
				FillUp(ho_Region27, &ho_Region27);

				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 521);
				FillUp(ho_Region27, &ho_Region27);
				OpeningCircle(ho_Region27, &ho_Region27, 5);


				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));

				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 35);
				ClosingRectangle1(ho_Region27, &ho_Region27, 175, 1);
				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 5);

				Connection(ho_Region27, &ho_ConnectedRegions14);
				ShapeTrans(ho_ConnectedRegions14, &ho_ConnectedRegions14, "convex");
				DilationCircle(ho_ConnectedRegions14, &(*ho_camregion), 10.5);
			}
			if (0 != (int(hv_Number21 == 21)))
			{
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 425, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian5, 15, 15);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture5, "el", 5, 7);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture8, "le", 5, 7);
				AddImage(ho_ImageTexture5, ho_ImageTexture8, &ho_ImageResult19, 2, -100);
				Threshold(ho_ImageResult19, &ho_Region14, 180, 255);
				Intersection(ho_Region14, ho_RegionErosion, &ho_Region14);
				OpeningCircle(ho_Region14, &ho_Region14, 3.5);
				Connection(ho_Region14, &ho_Region14);

				SelectShape(ho_Region14, &ho_Region14, (HTuple("area").Append("width")),
					"or", (HTuple(700).Append(100)), (HTuple(99999).Append(99999)));
				Union1(ho_Region14, &ho_Region14);

				ClosingRectangle1(ho_Region14, &ho_Region14, 1, 151);
				Connection(ho_Region14, &ho_Region14);
				ShapeTrans(ho_Region14, &ho_Region14, "rectangle1");
				Union1(ho_Region14, &ho_Region14);
				Connection(ho_Region14, &ho_Region14);
				ShapeTrans(ho_Region14, &ho_Region14, "rectangle1");
				SelectShape(ho_Region14, &ho_Region14, "width", "and", 200, 500);
				SortRegion(ho_Region14, &ho_Region14, "first_point", "true", "row");
				SelectObj(ho_Region14, &ho_ObjectSelected, 1);

				if (0 != hv_BoolInter)
				{
					ErosionRectangle1(ho_ObjectSelected, &ho_ObjectSelected, 60, 35);
				}
				RegionFeatures(ho_ObjectSelected, "width", &hv_width);
				OpeningCircle(ho_ObjectSelected, &ho_RegionClosing, hv_width / 2);
				SelectObj(ho_Region14, &ho_ObjectSelected, 2);

				if (0 != hv_BoolInter)
				{
					ErosionRectangle1(ho_ObjectSelected, &ho_ObjectSelected, 60, 35);
				}
				RegionFeatures(ho_ObjectSelected, "width", &hv_width);
				OpeningCircle(ho_ObjectSelected, &ho_Region14, (hv_width / 2) - 1);
				Union2(ho_Region14, ho_RegionClosing, &ho_Region14);

				Union2(ho_Region14, ho_Rectangle_top, &ho_Region14);

				Union2(ho_Region14, ho_Rectangle_bottom, &ho_Region14);
				ClosingRectangle1(ho_Region14, &ho_Region14, 3, 55);
				Union1(ho_Region14, &ho_Region14);
				Connection(ho_Region14, &ho_Region14);




				ClosingRectangle1(ho_Region14, &ho_Region14, 3, 525);
				Union2(ho_Region14, ho_Rectangle_bottom, &ho_Region14);
				Union2(ho_Region14, ho_Rectangle_top, &ho_Region14);
				FillUp(ho_Region14, &ho_Region14);
				OpeningRectangle1(ho_Region14, &ho_Region14, 25, 25);

				Connection(ho_Region14, &ho_ConnectedRegions40);
				SelectShape(ho_ConnectedRegions40, &ho_SelectedRegions48, "area", "and",
					4000, 9999999);
				SelectShape(ho_SelectedRegions48, &ho_SelectedRegions49, "column", "and",
					700, 1300);
				Union1(ho_SelectedRegions49, &ho_RegionUnion7);
				ClosingRectangle1(ho_RegionUnion7, &ho_RegionClosing4, 45, 25);
				FillUp(ho_RegionClosing4, &ho_RegionFillUp20);
				Connection(ho_RegionFillUp20, &ho_ConnectedRegions41);
				ShapeTrans(ho_ConnectedRegions41, &ho_RegionTrans11, "convex");
				DilationCircle(ho_RegionTrans11, &(*ho_camregion), 5);
			}
			if (0 != (int(hv_Number21 == 22)))
			{

				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);
				OpeningCircle(ho_Region27, &ho_Region27, 2.5);
				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 121);


				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));

				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				Union1(ho_Region27, &ho_Region27);

				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);

				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 300);

				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);

				Union1(ho_Region27, &ho_Region27);
				ClosingCircle(ho_Region27, &ho_Region27, 11);
				ClosingRectangle1(ho_Region27, &ho_Region27, 100, 1);

				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);
				Connection(ho_Region27, &ho_ConnectedRegions14);

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions9, (HTuple("width").Append("area")),
					"and", (HTuple(100).Append(500)), (HTuple(280).Append(999999)));

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions_big, (HTuple("width").Append("area")),
					"and", (HTuple(300).Append(200)), (HTuple(680).Append(999999)));
				DilationCircle(ho_SelectedRegions_big, &ho_SelectedRegions_big, 10);
				Union2(ho_SelectedRegions9, ho_SelectedRegions_big, &ho_RegionOpening19);

				Connection(ho_RegionOpening19, &ho_ConnectedRegions39);
				ShapeTrans(ho_ConnectedRegions39, &ho_RegionTrans8, "convex");
				DilationCircle(ho_RegionTrans8, &(*ho_camregion), 3);


			}
			if (0 != (int(hv_Number21 == 23)))
			{
				//裁剪
				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 50);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));

				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);

				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				Union1(ho_Region27, &ho_Region27);
				ClosingCircle(ho_Region27, &ho_Region27, 11);
				ClosingRectangle1(ho_Region27, &ho_Region27, 100, 1);

				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);
				Connection(ho_Region27, &ho_ConnectedRegions14);
				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions4, "width", "and",
					250, 99999);
				DilationCircle(ho_SelectedRegions4, &(*ho_camregion), 15.5);

			}
			if (0 != (int(hv_Number21 == 24)))
			{
				//裁剪
				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, (HTuple("width").Append("height")),
					"and", (HTuple(550).Append(50)), (HTuple(99999).Append(200)));
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 50);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));
			}
			if (0 != (int(hv_Number21 == 27)))
			{

				//裁剪
				GenRectangle1(&ho_Rectangle11, 1024, 497, 1455, 1766);
				ReduceDomain(ho_ImageReduced9, ho_Rectangle11, &ho_ImageReduced12);
				MeanImage(ho_ImageReduced12, &ho_ImageMedian11, 10, 10);
				ReduceDomain(ho_ImageMedian11, ho_RegionErosion2, &ho_ImageReduced10);
				TextureLaws(ho_ImageReduced10, &ho_ImageTexture6, "el", 5, 7);
				TextureLaws(ho_ImageReduced10, &ho_ImageTexture7, "le", 5, 7);
				AddImage(ho_ImageTexture6, ho_ImageTexture7, &ho_ImageResult3, 2, -100);
				MeanImage(ho_ImageResult3, &ho_ImageMedian10, 15, 1);
				Threshold(ho_ImageResult3, &ho_Region6, 180, 255);
				Connection(ho_Region6, &ho_ConnectedRegions5);
				RankRegion(ho_ConnectedRegions5, &ho_RegionCount, 80, 15, 1000);
				ClosingRectangle1(ho_RegionCount, &ho_RegionOpening23, 100, 5);
				Union1(ho_RegionOpening23, &ho_RegionUnion23);
				ShapeTrans(ho_RegionUnion23, &ho_RegionTrans12, "rectangle1");
				RegionFeatures(ho_RegionTrans12, "height", &hv_Value4);
				if (0 != (int(hv_Value4 < 120)))
				{
					DilationRectangle1(ho_RegionTrans12, &ho_RegionDilation4, 1, 140);
					MoveRegion(ho_RegionDilation4, &ho_RegionTrans12, 65, 0);
				}
				DilationRectangle1(ho_RegionTrans12, &ho_RegionDilation8, 600, 10);
				Union1(ho_RegionDilation8, &ho_RegionUnion14);
				Intersection(ho_RegionUnion14, ho_RegionUnion, &(*ho_camregion));
			}
			if (0 != (int(hv_Number21 == 29)))
			{

				//裁剪
				GenRectangle1(&ho_Rectangle5, 364, 380, 967, 1726);
				ReduceDomain(ho_Image, ho_Rectangle5, &ho_ImageReduced1);
				MeanImage(ho_ImageReduced1, &ho_ImageMedian11, 10, 10);
				TextureLaws(ho_ImageMedian11, &ho_ImageTexture6, "el", 5, 7);
				TextureLaws(ho_ImageMedian11, &ho_ImageTexture7, "le", 5, 7);
				AddImage(ho_ImageTexture6, ho_ImageTexture7, &ho_ImageResult3, 2, -100);
				MeanImage(ho_ImageResult3, &ho_ImageMedian10, 15, 1);
				Threshold(ho_ImageResult3, &ho_Region6, 150, 255);
				Connection(ho_Region6, &ho_ConnectedRegions5);
				RankRegion(ho_ConnectedRegions5, &ho_RegionCount, 80, 20, 800);
				ClosingRectangle1(ho_RegionCount, &ho_RegionOpening23, 100, 5);
				Union1(ho_RegionOpening23, &ho_RegionUnion23);
				ShapeTrans(ho_RegionUnion23, &ho_RegionTrans12, "rectangle1");
				DilationRectangle1(ho_RegionTrans12, &ho_RegionDilation8, 5, 5);
				Union1(ho_RegionDilation8, &(*ho_camregion));

			}
			Union1((*ho_camregion), &(*ho_camregion));



		}
		else if (0 != (int(hv_Substring == HTuple("2_2"))))
		{
			if (true)
			{
				if (0 != (int(hv_Number21 == 32)))
				{
					GenRectangle1(&ho_Rectangle3, 0, 20, 737, 2041);
					ReduceDomain(ho_Image, ho_Rectangle3, &ho_ImageReduced7);
					MultImage(ho_ImageReduced7, ho_ImageReduced7, &ho_ImageResult4, 0.01, 0);
					Threshold(ho_ImageResult4, &ho_Region, 85, 255);
					FillUp(ho_Region, &ho_RegionFillUp3);
					Connection(ho_RegionFillUp3, &ho_ConnectedRegions20);
					SelectShape(ho_ConnectedRegions20, &ho_SelectedRegions43, (HTuple("area").Append("width")),
						"and", (HTuple(1500).Append(700)), (HTuple(999999999).Append(1500)));
					SelectShape(ho_ConnectedRegions20, &ho_SelectedRegions44, "height", "and",
						400, 99999);
					Union2(ho_SelectedRegions44, ho_SelectedRegions43, &ho_RegionUnion15);
					FillUp(ho_RegionUnion15, &ho_RegionFillUp1);
					Union1(ho_RegionFillUp1, &ho_RegionUnion2);
					ClosingRectangle1(ho_RegionUnion2, &ho_RegionClosing5, 1500, 200);
					Connection(ho_RegionClosing5, &ho_ConnectedRegions1);
					SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions, (HTuple("height").Append("width")),
						"and", (HTuple(400).Append(300)), (HTuple(3000).Append(1600)));
					Union1(ho_SelectedRegions, &ho_RegionUnion10);
					ShapeTrans(ho_RegionUnion10, &ho_ConnectedRegions21, "convex");
					OpeningRectangle1(ho_ConnectedRegions21, &ho_RegionOpening20, 3, 5);
					ShapeTrans(ho_RegionOpening20, &ho_RegionTrans6, "rectangle1");
					MoveRegion(ho_RegionTrans6, &ho_RegionUnion, 5, 0);
					//提取区域
					SmallestRectangle1(ho_RegionUnion, &hv_Row112, &hv_Column112, &hv_Row212,
						&hv_Column212);
					GenRectangle1(&ho_RegionUnion, 0, hv_Column112, 2048, hv_Column212);
					ReduceDomain(ho_Image, ho_RegionUnion, &ho_ImageReduced9);
					AreaCenter((*ho_camregion), &hv_Area6, &hv_Row3, &hv_Column3);
				}
				else
				{

					ScaleImageMax(ho_Image, &ho_ImageScaleMax);


					MultImage(ho_Image, ho_Image, &ho_ImageResult4, 0.01, 0);
					Threshold(ho_ImageResult4, &ho_Region, 85, 255);
					FillUp(ho_Region, &ho_RegionFillUp3);
					Connection(ho_RegionFillUp3, &ho_ConnectedRegions20);
					SelectShape(ho_ConnectedRegions20, &ho_SelectedRegions43, (HTuple("area").Append("width")),
						"and", (HTuple(1500).Append(700)), (HTuple(999999999).Append(1500)));


					SelectShape(ho_SelectedRegions43, &ho_SelectedRegions44, "height", "and",
						400, 99999);
					Union2(ho_SelectedRegions44, ho_SelectedRegions43, &ho_RegionUnion15);
					FillUp(ho_RegionUnion15, &ho_RegionFillUp1);
					Union1(ho_RegionFillUp1, &ho_RegionUnion2);
					ClosingRectangle1(ho_RegionUnion2, &ho_RegionClosing5, 1500, 200);
					Connection(ho_RegionClosing5, &ho_ConnectedRegions1);
					SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions, (HTuple("height").Append("width")),
						"and", (HTuple(400).Append(300)), (HTuple(3000).Append(1600)));
					Union1(ho_SelectedRegions, &ho_RegionUnion10);
					ShapeTrans(ho_RegionUnion10, &ho_ConnectedRegions21, "convex");
					OpeningRectangle1(ho_ConnectedRegions21, &ho_RegionOpening20, 3, 5);
					ShapeTrans(ho_RegionOpening20, &ho_RegionTrans6, "rectangle1");
					MoveRegion(ho_RegionTrans6, &ho_RegionUnion, 5, 0);
					//提取区域
					SmallestRectangle1(ho_RegionUnion, &hv_Row112, &hv_Column112, &hv_Row212,
						&hv_Column212);
					if (0 != (int((hv_Row112.TupleLength()) == 0)))
					{
						AutoThreshold(ho_Image, &ho_RegionUnion, 2);
						Connection(ho_RegionUnion, &ho_RegionUnion);
						SelectShapeStd(ho_RegionUnion, &ho_RegionUnion, "max_area", 70);
						ShapeTrans(ho_RegionUnion, &ho_RegionUnion, "rectangle1");
					}
					else
					{
						GenRectangle1(&ho_RegionUnion, 0, hv_Column112, 2048, hv_Column212);
					}
					ReduceDomain(ho_Image, ho_RegionUnion, &ho_ImageReduced9);
					AreaCenter((*ho_camregion), &hv_Area6, &hv_Row3, &hv_Column3);
				}
				if (0 != (int(hv_Number21 == 2)))
				{
					//裁剪
					GenRectangle1(&ho_Rectangle9, 1717, 412, 2099, 1616);
					ReduceDomain(ho_ImageReduced9, ho_Rectangle9, &ho_ImageReduced6);
					MeanImage(ho_ImageReduced6, &ho_ImageMedian11, 10, 10);
					MeanImage(ho_ImageMedian11, &ho_ImageMedian10, 15, 1);
					VarThreshold(ho_ImageMedian10, &ho_Region13, 50, 800, 0.2, 25, "dark");
					Connection(ho_Region13, &ho_ConnectedRegions5);
					ClosingRectangle1(ho_ConnectedRegions5, &ho_RegionOpening23, 100, 5);
					SelectShape(ho_RegionOpening23, &ho_SelectedRegions3, (HTuple("width").Append("area")),
						"and", (HTuple(200).Append(400)), (HTuple(1200).Append(999999)));
					Union1(ho_SelectedRegions3, &ho_RegionUnion23);
					ShapeTrans(ho_RegionUnion23, &ho_RegionTrans12, "rectangle1");
					DilationRectangle1(ho_RegionTrans12, &ho_RegionDilation, 1000, 1);
					Intersection(ho_RegionDilation, ho_ImageReduced9, &(*ho_camregion));
				}
				if (0 != (int(hv_Number21 == 3)))
				{
					//裁剪
					MeanImage(ho_ImageReduced9, &ho_ImageMedian7, 1, 15);
					MultImage(ho_ImageMedian7, ho_ImageMedian7, &ho_ImageResult12, 0.01, 0);
					Threshold(ho_ImageResult12, &ho_Regions3, 0, 60);
					FillUp(ho_Regions3, &ho_RegionFillUp21);
					DilationRectangle1(ho_RegionFillUp21, &ho_RegionDilation24, 9, 1);
					FillUp(ho_RegionDilation24, &ho_RegionFillUp25);
					OpeningCircle(ho_RegionFillUp25, &ho_RegionOpening8, 3.5);
					OpeningRectangle1(ho_RegionOpening8, &ho_RegionOpening18, 49, 1);
					Connection(ho_RegionOpening18, &ho_ConnectedRegions17);
					SelectShape(ho_ConnectedRegions17, &ho_SelectedRegions20, "area", "and",
						23689, 195353);
					MoveRegion(ho_SelectedRegions20, &ho_RegionMoved7, 1, 5);
					DilationRectangle1(ho_RegionMoved7, &(*ho_camregion), 55, 30);
				}
				if (0 != (int(hv_Number21 == 4)))
				{

					MeanImage(ho_ImageReduced9, &ho_ImageMedian, 1, 25);
					MultImage(ho_ImageMedian, ho_ImageMedian, &ho_ImageResult11, 0.01, 0);
					Threshold(ho_ImageResult11, &ho_Regions2, 0, 61);
					FillUp(ho_Regions2, &ho_RegionFillUp11);
					OpeningRectangle1(ho_RegionFillUp11, &ho_RegionOpening15, 25, 1);
					DilationRectangle1(ho_RegionOpening15, &(*ho_camregion), 15, 15);
				}
				if (0 != (int(hv_Number21 == 5)))
				{
					Threshold(ho_ImageReduced9, &ho_Region16, 0, 90);
					Connection(ho_Region16, &ho_ConnectedRegions35);
					OpeningCircle(ho_ConnectedRegions35, &ho_RegionOpening12, 3.5);
					SelectShape(ho_RegionOpening12, &ho_SelectedRegions34, "area", "and", 85000,
						1999999);
					ShapeTrans(ho_SelectedRegions34, &ho_RegionTrans17, "rectangle1");
					DilationRectangle1(ho_RegionTrans17, &(*ho_camregion), 75, 15);

				}
				if (0 != (int(hv_Number21 == 6)))
				{

					MeanImage(ho_ImageReduced9, &ho_ImageMedian3, 15, 1);

					MultImage(ho_ImageMedian3, ho_ImageMedian3, &ho_ImageResult5, 0.008, 0);
					ErosionRectangle1(ho_RegionUnion, &ho_RegionDilation, 325, 1);
					ReduceDomain(ho_ImageResult5, ho_RegionDilation, &ho_ImageResult5);
					BinaryThreshold(ho_ImageResult5, &ho_Region16, "max_separability", "dark",
						&hv_UsedThreshold);
					FillUp(ho_Region16, &ho_RegionFillUp28);
					Connection(ho_RegionFillUp28, &ho_ConnectedRegions8);
					SelectShape(ho_ConnectedRegions8, &ho_SelectedRegions8, (HTuple("column").Append("width")),
						"and", (HTuple(872.03).Append(200)), (HTuple(1263.25).Append(400)));
					ShapeTrans(ho_SelectedRegions8, &ho_RegionTrans5, "rectangle1");
					DilationRectangle1(ho_RegionTrans5, &ho_RegionDilation14, 59, 115);
					MoveRegion(ho_RegionDilation14, &ho_RegionDilation14, 50, 1);
					RegionFeatures(ho_RegionDilation14, "width", &hv_Value);
					OpeningCircle(ho_RegionDilation14, &ho_RegionOpening24, (hv_Value - 5) / 2);
					MoveRegion(ho_RegionOpening24, &ho_RegionMoved1, 200, 1);
					Union2(ho_RegionOpening24, ho_RegionMoved1, &(*ho_camregion));
					MoveRegion((*ho_camregion), &(*ho_camregion), -20, 1);

				}
				if (0 != (int(hv_Number21 == 7)))
				{
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult10, 0.01,
						0);
					MedianImage(ho_ImageResult10, &ho_ImageResult10, "circle", 8, "mirrored");
					ErosionRectangle1(ho_RegionUnion, &ho_RegionDilation, 325, 1);
					ReduceDomain(ho_ImageResult10, ho_RegionDilation, &ho_ImageResult10);
					BinaryThreshold(ho_ImageResult10, &ho_Region19, "max_separability", "dark",
						&hv_UsedThreshold);
					FillUp(ho_Region19, &ho_RegionFillUp29);
					Connection(ho_RegionFillUp29, &ho_ConnectedRegions19);
					SelectShape(ho_ConnectedRegions19, &ho_SelectedRegions14, (HTuple("column").Append("width")),
						"and", (HTuple(872.03).Append(200)), (HTuple(1263.25).Append(400)));
					ShapeTrans(ho_SelectedRegions14, &ho_RegionTrans27, "rectangle1");
					DilationRectangle1(ho_RegionTrans27, &ho_RegionDilation20, 55, 85);
					MoveRegion(ho_RegionDilation20, &ho_RegionDilation20, -40, 1);
					RegionFeatures(ho_RegionDilation20, "width", &hv_Value1);
					OpeningCircle(ho_RegionDilation20, &ho_RegionOpening28, hv_Value1 / 2);
					MoveRegion(ho_RegionOpening28, &ho_RegionMoved6, -200, 1);
					Union2(ho_RegionOpening28, ho_RegionMoved6, &(*ho_camregion));
					MoveRegion((*ho_camregion), &(*ho_camregion), 20, 1);
				}
				if (0 != (int(hv_Number21 == 8)))
				{

					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult13, 0.009,
						0);
					Threshold(ho_ImageResult13, &ho_Region11, 0, 128);
					OpeningCircle(ho_Region11, &ho_RegionOpening19, 8.5);
					Connection(ho_RegionOpening19, &ho_ConnectedRegions24);
					SelectShape(ho_RegionOpening19, &ho_SelectedRegions22, "area", "and", 427667,
						789331);
					ShapeTrans(ho_SelectedRegions22, &ho_RegionTrans15, "convex");
					DilationRectangle1(ho_RegionTrans15, &(*ho_camregion), 15, 15);
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult46, 0.04,
						0);
					Threshold(ho_ImageResult46, &ho_Region43, 0, 45);
					OpeningCircle(ho_Region43, &ho_RegionOpening29, 3.5);
					Connection(ho_RegionOpening29, &ho_ConnectedRegions77);
					SelectShape(ho_ConnectedRegions77, &ho_SelectedRegions107, "row", "and",
						938.08, 2712.57);
					SelectShape(ho_SelectedRegions107, &ho_SelectedRegions108, "area", "and",
						10536, 190203);
					Union2(ho_SelectedRegions108, (*ho_camregion), &(*ho_camregion));
					Threshold(ho_ImageResult46, &ho_Region45, 0, 175);
					ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
					Intersection(ho_RegionErosion, ho_Region45, &ho_Region45);
					//closing_rectangle1 (Region45, Region45, 50, 1)
					//closing_rectangle1 (Region45, Region45, 1, 50)
					OpeningCircle(ho_Region45, &ho_Region45, 9.5);
					Connection(ho_Region45, &ho_ConnectedRegions79);
					SelectShape(ho_ConnectedRegions79, &ho_SelectedRegions109, "area", "and",
						946.4, 186137);
					Union1(ho_SelectedRegions109, &ho_RegionUnion52);
					GenEmptyObj(&ho_EmptyObject4);
					if (0 != (ho_SelectedRegions109 != ho_EmptyObject4))
					{
						ShapeTrans(ho_RegionUnion52, &ho_RegionTrans54, "rectangle1");
						DilationRectangle1(ho_RegionTrans54, &ho_RegionTrans54, 61, 115);
						RegionFeatures(ho_RegionTrans54, "width", &hv_Value14);
						DilationRectangle1(ho_RegionTrans54, &ho_RegionDilation44, 1, hv_Value14);
						OpeningCircle(ho_RegionDilation44, &ho_RegionOpening79, hv_Value14 / 2);
						MoveRegion(ho_RegionOpening79, &ho_RegionMoved24, hv_Value14 / 2, 1);

						Union2(ho_RegionMoved24, (*ho_camregion), &(*ho_camregion));
					}
				}
				if (0 != (int(hv_Number21 == 9)))
				{
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult13, 0.009,
						0);
					Threshold(ho_ImageResult13, &ho_Region11, 0, 128);
					ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 225, 1);
					Intersection(ho_Region11, ho_RegionErosion, &ho_Region11);


					OpeningCircle(ho_Region11, &ho_RegionOpening19, 8.5);
					Connection(ho_RegionOpening19, &ho_ConnectedRegions24);
					SelectShape(ho_ConnectedRegions24, &ho_SelectedRegions22, "area", "and",
						2000, 789331);
					Union1(ho_SelectedRegions22, &ho_RegionUnion49);
					ShapeTrans(ho_RegionUnion49, &(*ho_camregion), "rectangle1");

					DilationRectangle1((*ho_camregion), &(*ho_camregion), 71, 1);


				}
				if (0 != (int(hv_Number21 == 10)))
				{
					//裁剪
					GenRectangle1(&ho_Rectangle9, 1717, 412, 2099, 1616);
					ReduceDomain(ho_ImageReduced9, ho_Rectangle9, &ho_ImageReduced6);
					MeanImage(ho_ImageReduced6, &ho_ImageMedian11, 10, 10);
					MeanImage(ho_ImageMedian11, &ho_ImageMedian10, 15, 1);
					VarThreshold(ho_ImageMedian10, &ho_Region13, 5, 500, 0.2, 15, "dark");
					Connection(ho_Region13, &ho_ConnectedRegions5);
					ClosingRectangle1(ho_ConnectedRegions5, &ho_RegionOpening23, 100, 5);
					SelectShape(ho_RegionOpening23, &ho_SelectedRegions3, (HTuple("width").Append("area")),
						"and", (HTuple(200).Append(400)), (HTuple(1200).Append(999999)));
					Union1(ho_SelectedRegions3, &ho_RegionUnion23);
					ShapeTrans(ho_RegionUnion23, &ho_RegionTrans12, "rectangle1");
					DilationRectangle1(ho_RegionTrans12, &ho_RegionDilation, 1000, 1);
					Intersection(ho_RegionDilation, ho_ImageReduced9, &(*ho_camregion));
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult47, 0.01,
						0);
					MedianImage(ho_ImageResult47, &ho_ImageMedian31, "circle", 16, "mirrored");
					Threshold(ho_ImageMedian31, &ho_Region44, 0, 30);
					ClosingCircle(ho_Region44, &ho_Region44, 35);
					OpeningCircle(ho_Region44, &ho_RegionOpening78, 3.5);
					Connection(ho_RegionOpening78, &ho_ConnectedRegions78);
					SelectShape(ho_ConnectedRegions78, &(*ho_camregion), (HTuple("area").Append("width")),
						"and", (HTuple(2073).Append(35)), (HTuple(9999999).Append(9999)));

					Union2((*ho_camregion), ho_Rectangle_top, &(*ho_camregion));
					ClosingRectangle1((*ho_camregion), &(*ho_camregion), 1, 500);
					OpeningCircle((*ho_camregion), &(*ho_camregion), 3.5);
					DilationCircle((*ho_camregion), &(*ho_camregion), 13.5);
				}
				if (0 != (int(hv_Number21 == 11)))
				{
					//裁剪
					GenRectangle1(&ho_Rectangle9, 0, 506, 2047, 1816);
					ReduceDomain(ho_ImageReduced9, ho_Rectangle9, &ho_ImageReduced6);
					MeanImage(ho_ImageReduced6, &ho_ImageMedian11, 10, 10);
					MultImage(ho_ImageMedian11, ho_ImageMedian11, &ho_ImageResult8, 0.008,
						0);
					Threshold(ho_ImageResult8, &ho_Region17, 0, 50);
					FillUp(ho_Region17, &ho_RegionFillUp8);
					OpeningRectangle1(ho_RegionFillUp8, &ho_RegionOpening17, 20, 1);
					DilationRectangle1(ho_RegionOpening17, &(*ho_camregion), 15, 28);

				}
				if (0 != (int(hv_Number21 == 12)))
				{

					//裁剪
					GenRectangle1(&ho_Rectangle9, 1217, 412, 2099, 1616);

					ReduceDomain(ho_ImageReduced9, ho_Rectangle9, &ho_ImageReduced6);
					MultImage(ho_ImageReduced6, ho_ImageReduced6, &ho_ImageResult27, 0.01,
						0);
					MeanImage(ho_ImageResult27, &ho_ImageResult27, 10, 10);
					MeanImage(ho_ImageResult27, &ho_ImageMedian10, 15, 1);

					ErosionRectangle1(ho_RegionUnion, &ho_RegionDilation, 325, 1);
					Intersection(ho_RegionDilation, ho_Rectangle9, &ho_Rectangle9);
					ReduceDomain(ho_ImageMedian10, ho_Rectangle9, &ho_ImageMedian10);
					BinaryThreshold(ho_ImageMedian10, &ho_Region13, "max_separability", "dark",
						&hv_UsedThreshold);

					Connection(ho_Region13, &ho_ConnectedRegions5);
					ClosingRectangle1(ho_ConnectedRegions5, &ho_RegionOpening23, 100, 5);
					SelectShape(ho_RegionOpening23, &ho_SelectedRegions3, (HTuple("width").Append("area")),
						"and", (HTuple(10).Append(1900)), (HTuple(1200).Append(999999)));
					SelectShape(ho_SelectedRegions3, &ho_SelectedRegions40, "column", "and",
						963.03, 2047.72);
					ShapeTrans(ho_SelectedRegions40, &ho_SelectedRegions3, "outer_circle");
					DilationRectangle1(ho_SelectedRegions3, &ho_RegionDilation, 10, 10);
					Intersection(ho_RegionDilation, ho_ImageReduced9, &(*ho_camregion));
				}
				if (0 != (int(hv_Number21 == 13)))
				{
					//test
					MeanImage(ho_ImageReduced9, &ho_ImageMedian4, 25, 1);
					MultImage(ho_ImageMedian4, ho_ImageMedian4, &ho_ImageResult6, 0.009, 0);
					Threshold(ho_ImageResult6, &ho_Region8, 0, 70);
					FillUp(ho_Region8, &ho_RegionFillUp2);

					Connection(ho_RegionFillUp2, &ho_ConnectedRegions6);
					SelectShape(ho_ConnectedRegions6, &ho_SelectedRegions6, (HTuple("area").Append("width")),
						"and", (HTuple(6890).Append(100)), (HTuple(1.74141e+06).Append(600)));
					SelectShape(ho_SelectedRegions6, &ho_SelectedRegions1, "column", "and",
						874.31, 1280.96);
					ShapeTrans(ho_SelectedRegions1, &ho_RegionTrans35, "convex");
					Union1(ho_RegionTrans35, &ho_RegionUnion24);
					DilationRectangle1(ho_RegionUnion24, &(*ho_camregion), 22, 25);

				}
				if (0 != (int(hv_Number21 == 14)))
				{

					MedianImage(ho_ImageReduced9, &ho_ImageReduced9, "circle", 9, "mirrored");
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult18, 0.01,
						0);
					Threshold(ho_ImageResult18, &ho_Region12, 0, 60);
					Connection(ho_Region12, &ho_ConnectedRegions27);
					SelectShape(ho_ConnectedRegions27, &ho_SelectedRegions2, (HTuple("area").Append("ratio")),
						"and", (HTuple(10050).Append(0.2)), (HTuple(99999).Append(3)));
					ShapeTrans(ho_SelectedRegions2, &ho_RegionTrans7, "convex");
					Union1(ho_RegionTrans7, &ho_RegionUnion14);
					DilationCircle(ho_RegionUnion14, &(*ho_camregion), 8.5);
					Threshold(ho_ImageResult18, &ho_Region24, 0, 90);
					ClosingRectangle1(ho_Region24, &ho_RegionClosing1, 45, 45);
					FillUp(ho_RegionClosing1, &ho_RegionFillUp18);
					Connection(ho_RegionFillUp18, &ho_ConnectedRegions32);
					Connection(ho_ConnectedRegions32, &ho_ConnectedRegions33);
					SelectShape(ho_ConnectedRegions33, &ho_SelectedRegions27, (HTuple("area").Append("column")),
						"and", (HTuple(256).Append(795.25)), (HTuple(468464).Append(1263.25)));
					ShapeTrans(ho_SelectedRegions27, &ho_RegionTrans25, "convex");
					DilationRectangle1(ho_RegionTrans25, &ho_RegionDilation2, 25, 35);

					Union2((*ho_camregion), ho_RegionDilation2, &(*ho_camregion));
					ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
					Intersection(ho_RegionErosion, (*ho_camregion), &(*ho_camregion));
				}
				if (0 != (int(hv_Number21 == 15)))
				{
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult9, 0.008,
						0);
					Threshold(ho_ImageResult9, &ho_Region9, 0, 50);
					FillUp(ho_Region9, &ho_RegionFillUp9);
					OpeningCircle(ho_RegionFillUp9, &ho_RegionOpening22, 5.5);
					OpeningRectangle1(ho_RegionOpening22, &ho_RegionOpening32, 25, 1);
					Connection(ho_RegionOpening32, &ho_ConnectedRegions25);
					SelectShape(ho_ConnectedRegions25, &ho_SelectedRegions13, (HTuple("row").Append("area")),
						"and", (HTuple(0).Append(6032.91)), (HTuple(311.7).Append(57221.2)));
					ShapeTrans(ho_SelectedRegions13, &ho_RegionTrans3, "outer_circle");
					SelectShape(ho_ConnectedRegions25, &ho_SelectedRegions17, (HTuple("row").Append("area")),
						"and", (HTuple(392.14).Append(80255.9)), (HTuple(810.79).Append(154479)));
					Union2(ho_RegionTrans3, ho_SelectedRegions17, &ho_RegionUnion6);
					SelectShape(ho_ConnectedRegions25, &ho_SelectedRegions18, (HTuple("row").Append("area")),
						"and", (HTuple(0).Append(50)), (HTuple(100).Append(154479)));

					Union2(ho_RegionUnion6, ho_SelectedRegions18, &ho_RegionUnion6);

					DilationRectangle1(ho_RegionUnion6, &(*ho_camregion), 30, 10);




				}
				if (0 != (int(hv_Number21 == 16)))
				{
					Threshold(ho_ImageReduced9, &ho_Region9, 0, 60);
					FillUp(ho_Region9, &ho_RegionFillUp4);
					Connection(ho_RegionFillUp4, &ho_ConnectedRegions25);
					OpeningCircle(ho_ConnectedRegions25, &ho_RegionOpening13, 15.5);
					DilationRectangle1(ho_RegionOpening13, &(*ho_camregion), 25, 25);

				}
				if (0 != (int(hv_Number21 == 17)))
				{
					Threshold(ho_ImageReduced9, &ho_Region9, 0, 60);
					FillUp(ho_Region9, &ho_RegionFillUp4);
					Connection(ho_RegionFillUp4, &ho_ConnectedRegions25);
					OpeningRectangle1(ho_ConnectedRegions25, &ho_RegionOpening13, 125, 1);
					Connection(ho_RegionOpening13, &ho_RegionOpening13);
					SelectShape(ho_RegionOpening13, &ho_RegionOpening13, "width", "and", 700,
						99999);

					DilationRectangle1(ho_RegionOpening13, &ho_RegionOpening13, 25, 25);

					//裁剪
					GenRectangle1(&ho_Rectangle9, 217, 412, 1099, 1616);
					ReduceDomain(ho_ImageReduced9, ho_Rectangle9, &ho_ImageReduced6);
					MeanImage(ho_ImageReduced6, &ho_ImageMedian11, 10, 10);
					MeanImage(ho_ImageMedian11, &ho_ImageMedian10, 15, 1);
					VarThreshold(ho_ImageMedian10, &ho_Region13, 5, 500, 0.2, 15, "dark");
					Connection(ho_Region13, &ho_ConnectedRegions5);
					ClosingRectangle1(ho_ConnectedRegions5, &ho_RegionOpening23, 100, 5);
					SelectShape(ho_RegionOpening23, &ho_SelectedRegions3, (HTuple("width").Append("area")),
						"and", (HTuple(200).Append(20000)), (HTuple(1200).Append(999999)));
					Union1(ho_SelectedRegions3, &ho_RegionUnion23);
					ShapeTrans(ho_RegionUnion23, &ho_RegionTrans12, "rectangle1");
					DilationRectangle1(ho_RegionTrans12, &ho_RegionDilation, 1000, 1);
					Intersection(ho_RegionDilation, ho_ImageReduced9, &(*ho_camregion));
					Union2((*ho_camregion), ho_RegionDilation, &(*ho_camregion));
				}
				if (0 != (int(hv_Number21 == 18)))
				{

					//裁剪
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult32, 0.01,
						0);
					MeanImage(ho_ImageResult32, &ho_ImageMedian11, 10, 10);

					Threshold(ho_ImageMedian11, &ho_Region1, 0, 70);
					OpeningCircle(ho_Region1, &ho_RegionOpening6, 3.5);
					Connection(ho_RegionOpening6, &ho_ConnectedRegions2);
					SelectShape(ho_ConnectedRegions2, &ho_SelectedRegions30, "area", "and",
						624.8, 9999999);
					ShapeTrans(ho_SelectedRegions30, &ho_RegionTrans39, "convex");
					DilationRectangle1(ho_RegionTrans39, &(*ho_camregion), 45, 25);
					ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
					Intersection(ho_RegionErosion, (*ho_camregion), &(*ho_camregion));
				}
				if (0 != (int(hv_Number21 == 19)))
				{

					//提取小区域

					MedianImage(ho_ImageReduced9, &ho_ImageReduced9, "circle", 9, "mirrored");
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult7, 0.01, 0);
					ErosionRectangle1(ho_RegionUnion, &ho_RegionDilation, 325, 1);

					ReduceDomain(ho_ImageResult7, ho_RegionDilation, &ho_ImageReduced9);

					Threshold(ho_ImageReduced9, &ho_Region4, 0, 80);
					FillUp(ho_Region4, &ho_RegionFillUp6);
					DilationCircle(ho_RegionFillUp6, &ho_RegionDilation6, 20.5);


					Connection(ho_RegionDilation6, &ho_ConnectedRegions23);
					SelectShape(ho_ConnectedRegions23, &ho_SelectedRegions21, (HTuple("width").Append("column")),
						"and", (HTuple(200).Append(850.09)), (HTuple(400).Append(1296.16)));
					ShapeTrans(ho_SelectedRegions21, &ho_SelectedRegions21, "rectangle1");
					DilationRectangle1(ho_SelectedRegions21, &ho_SelectedRegions21, 15, 15);
					RegionFeatures(ho_SelectedRegions21, "width", &hv_Value);
					if (0 != (int(hv_Value > 0)))
					{
						OpeningCircle(ho_SelectedRegions21, &ho_SelectedRegions21, hv_Value / 2);


						Union2(ho_SelectedRegions21, ho_Rectangle_bottom, &ho_SelectedRegions21
							);
						ClosingRectangle1(ho_SelectedRegions21, &ho_SelectedRegions21, 1, 300);
						OpeningCircle(ho_SelectedRegions21, &(*ho_camregion), 3.5);
					}


				}
				if (0 != (int(hv_Number21 == 20)))
				{
					MedianImage(ho_ImageReduced9, &ho_ImageReduced9, "circle", 8, "mirrored");
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult23, 0.01,
						0);
					Threshold(ho_ImageResult23, &ho_Region4, 0, 80);
					Connection(ho_Region4, &ho_ConnectedRegions3);
					SelectShape(ho_ConnectedRegions3, &ho_SelectedRegions28, (HTuple("area").Append("column")),
						"and", (HTuple(10340).Append(850.09)), (HTuple(500000).Append(1296.16)));
					OpeningCircle(ho_SelectedRegions28, &ho_RegionOpening9, 3.5);
					ShapeTrans(ho_RegionOpening9, &ho_RegionTrans2, "convex");
					//bai
					MeanImage(ho_ImageReduced9, &ho_ImageMean6, 5, 5);
					Emphasize(ho_ImageMean6, &ho_ImageEmphasize1, 45, 45, 9);
					Threshold(ho_ImageEmphasize1, &ho_Region11, 220, 255);
					OpeningCircle(ho_Region11, &ho_RegionOpening10, 5.5);
					Connection(ho_RegionOpening10, &ho_ConnectedRegions24);
					SelectShape(ho_ConnectedRegions24, &ho_SelectedRegions22, ((HTuple("column").Append("area")).Append("row")),
						"and", ((HTuple(780).Append(1500)).Append(1850)), ((HTuple(1300).Append(10000)).Append(2100)));
					Union2(ho_RegionTrans2, ho_SelectedRegions22, &ho_RegionUnion12);
					DilationCircle(ho_RegionUnion12, &ho_RegionDilation5, 3.5);
					Union1(ho_RegionDilation5, &ho_RegionUnion16);
					Connection(ho_RegionUnion16, &ho_ConnectedRegions42);
					ShapeTrans(ho_ConnectedRegions42, &ho_RegionTrans15, "convex");
					DilationRectangle1(ho_RegionTrans15, &(*ho_camregion), 70, 10);

				}
				if (0 != (int(hv_Number21 == 21)))
				{
					//提取小区域
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult14, 0.005,
						0);
					Threshold(ho_ImageResult14, &ho_Region4, 0, 50);
					FillUp(ho_Region4, &ho_Region4);
					OpeningCircle(ho_Region4, &ho_RegionOpening7, 4.5);
					FillUp(ho_RegionOpening7, &ho_RegionFillUp26);
					Connection(ho_RegionFillUp26, &ho_ConnectedRegions3);
					SelectShape(ho_ConnectedRegions3, &ho_SelectedRegions7, "area", "and",
						124231, 1e+06);
					ShapeTrans(ho_SelectedRegions7, &ho_RegionTrans9, "rectangle1");
					DilationRectangle1(ho_RegionTrans9, &ho_RegionDilation10, 35, 115);

					SelectShape(ho_RegionDilation10, &ho_SelectedRegions31, "row", "and", 213.89,
						937.84);
					MoveRegion(ho_SelectedRegions31, &ho_SelectedRegions31, -55, 1);
					RegionFeatures(ho_SelectedRegions31, "width", &hv_Value6);
					OpeningCircle(ho_SelectedRegions31, &ho_RegionOpening45, hv_Value6 / 2);
					MoveRegion(ho_RegionOpening45, &ho_RegionMoved8, -200, 1);
					Union2(ho_RegionOpening45, ho_RegionMoved8, &ho_RegionUnion21);
					MoveRegion(ho_RegionUnion21, &ho_RegionMoved21, 25, 1);
					SelectShape(ho_RegionDilation10, &ho_SelectedRegions45, "row", "and", 1193.78,
						2000.01);
					MoveRegion(ho_SelectedRegions45, &ho_SelectedRegions45, 55, 1);
					RegionFeatures(ho_SelectedRegions45, "width", &hv_Value6);
					OpeningCircle(ho_SelectedRegions45, &ho_RegionOpening45, hv_Value6 / 2);
					MoveRegion(ho_RegionOpening45, &ho_RegionMoved8, 200, 1);
					Union2(ho_RegionOpening45, ho_RegionMoved8, &ho_RegionUnion20);
					DilationRectangle1(ho_RegionUnion20, &ho_RegionDilation16, 40, 5);
					Union2(ho_RegionMoved21, ho_RegionDilation16, &(*ho_camregion));
				}
				if (0 != (int(hv_Number21 == 22)))
				{
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult21, 0.01,
						0);
					Threshold(ho_ImageResult21, &ho_Region4, 0, 80);
					FillUp(ho_Region4, &ho_RegionFillUp7);
					Connection(ho_RegionFillUp7, &ho_ConnectedRegions3);
					OpeningCircle(ho_ConnectedRegions3, &ho_RegionOpening3, 1.5);
					SelectShape(ho_RegionOpening3, &ho_SelectedRegions11, "area", "and", 13971,
						970000);
					SelectShape(ho_SelectedRegions11, &ho_SelectedRegions46, "column", "and",
						903.8, 1232.34);
					ShapeTrans(ho_SelectedRegions46, &ho_RegionTrans9, "rectangle1");
					SelectShape(ho_RegionTrans9, &ho_SelectedRegions60, "row", "and", 952.29,
						2000);
					DilationRectangle1(ho_SelectedRegions60, &ho_RegionDilation19, 40, 26);
					RegionFeatures(ho_RegionDilation19, "width", &hv_Value7);
					OpeningCircle(ho_RegionDilation19, &ho_RegionOpening47, (hv_Value7 - 15) / 2);
					SelectShape(ho_RegionTrans9, &ho_SelectedRegions62, "row", "and", 0, 820.84);
					DilationRectangle1(ho_SelectedRegions62, &ho_RegionDilation23, 45, 15);
					RegionFeatures(ho_RegionDilation23, "width", &hv_Value9);
					RegionFeatures(ho_RegionDilation23, "height", &hv_Value10);
					if (0 != (int(hv_Value10 > hv_Value9)))
					{

						OpeningCircle(ho_RegionDilation23, &ho_RegionOpening49, (hv_Value9 - 65) / 2);

						MoveRegion(ho_RegionOpening49, &ho_RegionMoved10, -200, 1);
						Union2(ho_RegionOpening49, ho_RegionMoved10, &ho_RegionUnion28);
					}
					else
					{
						MoveRegion(ho_RegionDilation23, &ho_RegionMoved, -(hv_Value10 - 40), 0);
						Union2(ho_RegionMoved, ho_RegionDilation23, &ho_RegionDilation23);
						MoveRegion(ho_RegionDilation23, &ho_RegionMoved, -(hv_Value10 - 40), 0);
						Union2(ho_RegionMoved, ho_RegionDilation23, &ho_RegionDilation23);
						OpeningCircle(ho_RegionDilation23, &ho_RegionOpening49, (hv_Value9 - 65) / 2);

						MoveRegion(ho_RegionOpening49, &ho_RegionMoved10, -200, 1);
						Union2(ho_RegionOpening49, ho_RegionMoved10, &ho_RegionUnion28);
					}
					ShapeTrans(ho_RegionUnion28, &ho_RegionTrans22, "convex");
					Union2(ho_RegionOpening47, ho_RegionTrans22, &(*ho_camregion));
				}
				if (0 != (int(hv_Number21 == 23)))
				{
					MedianImage(ho_ImageReduced9, &ho_ImageReduced9, "circle", 8, "mirrored");
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult, 0.01, 0);
					Threshold(ho_ImageResult, &ho_Region15, 0, 65);
					FillUp(ho_Region15, &ho_RegionFillUp27);
					OpeningRectangle1(ho_RegionFillUp27, &ho_RegionOpening11, 25, 1);
					DilationRectangle1(ho_RegionOpening11, &(*ho_camregion), 25, 25);
				}
				if (0 != (int(hv_Number21 == 27)))
				{
					//裁剪

					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult3, 0.008,
						0);
					MedianImage(ho_ImageResult3, &ho_ImageMedian1, "circle", 6, "mirrored");
					Threshold(ho_ImageMedian1, &ho_Regions1, 6, 135);
					FillUp(ho_Regions1, &ho_RegionFillUp10);
					OpeningRectangle1(ho_RegionFillUp10, &ho_RegionOpening25, 25, 1);
					Connection(ho_RegionOpening25, &ho_ConnectedRegions);
					SelectShape(ho_ConnectedRegions, &ho_SelectedRegions16, "area", "and",
						105110, 265625);
					DilationRectangle1(ho_SelectedRegions16, &(*ho_camregion), 10, 10);

				}
				if (0 != (int(hv_Number21 == 29)))
				{
					//裁剪
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult3, 0.008,
						0);
					MedianImage(ho_ImageResult3, &ho_ImageMedian1, "circle", 6, "mirrored");
					Threshold(ho_ImageMedian1, &ho_Regions1, 0, 135);
					FillUp(ho_Regions1, &ho_RegionFillUp10);
					OpeningRectangle1(ho_RegionFillUp10, &ho_RegionOpening25, 25, 1);
					Connection(ho_RegionOpening25, &ho_ConnectedRegions22);
					SelectShape(ho_ConnectedRegions22, &ho_SelectedRegions16, "area", "and",
						105110, 165625);
					DilationRectangle1(ho_SelectedRegions16, &(*ho_camregion), 10, 30);
				}

			}
		}
		else if (0 != (int(hv_Substring == HTuple("1_1"))))
		{
			if (0 != (int(hv_Number21 == 25)))
			{
				GenRectangle1(&ho_Rectangle1, 0, 400, 400, 1720);

				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);
				BinaryThreshold(ho_ImageReduced4, &ho_Region, "max_separability", "dark",
					&hv_UsedThreshold1);
				FillUp(ho_Region, &ho_Region);
				Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
				Difference(ho_Region, ho_Region20, &ho_Region);
				ClosingRectangle1(ho_Region, &ho_Region, 30, 150);
				FillUp(ho_Region, &ho_Region);
				Connection(ho_Region, &ho_Region);
				ShapeTrans(ho_Region, &ho_Region, "convex");
				Union1(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 50);
				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, (HTuple("width").Append("height")), "and",
					(HTuple(30).Append(300)), (HTuple(99999).Append(99999)));
				Union1(ho_Region, &ho_Region);
				ShapeTrans(ho_Region, &ho_Region, "rectangle1");
				MoveRegion(ho_Region, &ho_RegionMoved, 0, 100);
				Difference(ho_Region, ho_RegionMoved, &ho_Region);
				MoveRegion(ho_Region, &ho_Region, 0, 40);
				ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
				EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 10, 50);
				SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(80).TupleRad(),
					HTuple(100).TupleRad());
				UnionCollinearContoursXld(ho_Edge, &ho_Edge, 200, 1, 30, 0.1, "attr_keep");
				SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 200, 3000, -0.5, 0.5);
				SortContoursXld(ho_Edge, &ho_Edge, "character", "true", "column");
				SelectObj(ho_Edge, &ho_Edge_left, 1);
				GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);
				TupleAdd(hv_Col, -90, &hv_Sub);
				hv_left_xld = hv_Sub;
				TupleInverse(hv_left_xld, &hv_left_xld);
				TupleInverse(hv_Row, &hv_left_Row);
				TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
				TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
				GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
				GenRegionContourXld(ho_Contour, &ho_Region, "filled");
				ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");


			}
			else
			{
				GenRectangle1(&ho_Rectangle1, 0, 700, 2100, 1720);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);
				BinaryThreshold(ho_ImageReduced4, &ho_Region, "max_separability", "dark",
					&hv_UsedThreshold1);
				FillUp(ho_Region, &ho_Region);
				Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
				Difference(ho_Region, ho_Region20, &ho_Region);
				ClosingRectangle1(ho_Region, &ho_Region, 30, 150);
				FillUp(ho_Region, &ho_Region);
				Connection(ho_Region, &ho_Region);
				ShapeTrans(ho_Region, &ho_Region, "convex");
				Union1(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 1900);
				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, (HTuple("width").Append("height")), "and",
					(HTuple(30).Append(1800)), (HTuple(99999).Append(99999)));
				Union1(ho_Region, &ho_Region);
				ShapeTrans(ho_Region, &ho_Region, "rectangle1");

				ErosionRectangle1(ho_Region, &ho_Region, 90, 1);
				MoveRegion(ho_Region, &ho_RegionMoved, 0, 140);
				Difference(ho_Region, ho_RegionMoved, &ho_Region);

				GrayErosionRect(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);


				if (0 != (HTuple(HTuple(HTuple(HTuple(HTuple(int(hv_Number21 == 3)).TupleOr(int(hv_Number21 == 4))).TupleOr(int(hv_Number21 == 11))).TupleOr(int(hv_Number21 == 15))).TupleOr(int(hv_Number21 == 16))).TupleOr(int(hv_Number21 == 23))))
				{



					DilationRectangle1(ho_Region, &ho_Region, 15, 1);
					ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
					GrayDilationRect(ho_ImageReduced4, &ho_ImageReduced4, 200, 10);

					ErosionRectangle1(ho_Region, &ho_Region, 11, 1);
				}
				ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
				EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 7, 30);
				SelectContoursXld(ho_Edges, &ho_Edges, "maximum_extent", 200, 3000, -0.5,
					0.5);
				//select_obj (Edges, Edge, 1)
				//tuple_deg (1.57, angle)
				//get_contour_attrib_xld (Edge, 'response', Attrib)
				//dev_display (Image)
				SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(80).TupleRad(),
					HTuple(100).TupleRad());
				SegmentContourAttribXld(ho_Edge, &ho_Edge, "response", "and", 40, 255);

				UnionCollinearContoursXld(ho_Edge, &ho_Edge, 400, 1, 30, 0.1, "attr_keep");
				SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 1400, 3000, -0.5,
					0.5);
				SortContoursXld(ho_Edge, &ho_Edge, "character", "true", "column");
				SelectObj(ho_Edge, &ho_Edge_left, 1);

				GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);
				if (0 != (int((hv_Row.TupleLength()) != 0)))
				{
					TupleAdd(hv_Col, -90, &hv_Sub);
					hv_left_xld = hv_Sub;
					TupleInverse(hv_left_xld, &hv_left_xld);
					TupleInverse(hv_Row, &hv_left_Row);
					TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
					TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
					GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
					GenRegionContourXld(ho_Contour, &ho_Region, "filled");
					ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");
				}
				else
				{
					MoveRegion(ho_RegionMoved, &ho_RegionMoved, 0, -300);
					ReduceDomain(ho_Image, ho_RegionMoved, &ho_ImageReduced);
					EdgesSubPix(ho_ImageReduced, &ho_Edge, "canny", 3, 30, 50);
					SortContoursXld(ho_Edge, &ho_Edge, "character", "true", "column");
					SelectObj(ho_Edge, &ho_Edge_left, 1);
					GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);
					TupleAdd(hv_Col, 90, &hv_Sub);
					hv_left_xld = hv_Sub;
					TupleInverse(hv_left_xld, &hv_left_xld);
					TupleInverse(hv_Row, &hv_left_Row);
					TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
					TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
					GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
					GenRegionContourXld(ho_Contour, &ho_Region, "filled");
					ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");








				}
				//***************************************************************8

			}
		}
		else if (0 != (int(hv_Substring == HTuple("3_1"))))
		{
			if (0 != (int(hv_Number21 == 25)))
			{
				GenRectangle1(&ho_Rectangle1, 0, 500, 400, 1720);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);
				Threshold(ho_ImageReduced4, &ho_Region, 0, 30);
				//
				FillUp(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 300);
				Connection(ho_Region, &ho_Region);
				SortRegion(ho_Region, &ho_Region, "first_point", "true", "column");
				SelectObj(ho_Region, &ho_RegionEdge, 1);
				DilationRectangle1(ho_RegionEdge, &ho_Region, 290, 1);
				MoveRegion(ho_Region, &ho_RegionMove, 0, 10);
				Difference(ho_RegionMove, ho_RegionEdge, &ho_Region);

				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, "height", "and", 150, 99999);
				SortRegion(ho_Region, &ho_Region, "first_point", "flase", "column");
				SelectObj(ho_Region, &ho_Region, 1);
				ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");

			}
			else
			{
				GenRectangle1(&ho_Rectangle1, 0, 500, 2100, 1720);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);
				Threshold(ho_ImageReduced4, &ho_Region, 0, 30);
				//
				FillUp(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 500);
				Connection(ho_Region, &ho_Region);
				SortRegion(ho_Region, &ho_Region, "first_point", "true", "column");
				SelectObj(ho_Region, &ho_RegionEdge, 1);
				DilationRectangle1(ho_RegionEdge, &ho_Region, 170, 1);
				MoveRegion(ho_Region, &ho_RegionMove, 0, 10);
				Difference(ho_RegionMove, ho_RegionEdge, &ho_Region);

				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, "height", "and", 150, 99999);
				SortRegion(ho_Region, &ho_Region, "first_point", "flase", "column");
				SelectObj(ho_Region, &ho_Region, 1);
				ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");
				AreaCenter(ho_RegionUnion, &hv_Area, &hv_Row, &hv_Column);
				if (0 != (int(hv_Area < 100)))
				{
					MoveRegion(ho_Region, &ho_Region, 0, 10);
					if (0 != (HTuple(HTuple(HTuple(HTuple(HTuple(int(hv_Number21 == 3)).TupleOr(int(hv_Number21 == 4))).TupleOr(int(hv_Number21 == 11))).TupleOr(int(hv_Number21 == 15))).TupleOr(int(hv_Number21 == 16))).TupleOr(int(hv_Number21 == 23))))
					{

						DilationRectangle1(ho_Region, &ho_Region, 15, 1);
						ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
						GrayDilationRect(ho_ImageReduced4, &ho_ImageReduced4, 400, 10);
						ErosionRectangle1(ho_Region, &ho_Region, 7, 1);
					}
					MeanImage(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);
					ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
					EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 55, 90);
					SelectContoursXld(ho_Edges, &ho_Edges, "maximum_extent", 200, 3000, -0.5,
						0.5);
					SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(80).TupleRad(),
						HTuple(100).TupleRad());
					UnionCollinearContoursXld(ho_Edge, &ho_Edge, 200, 1, 7, 0.1, "attr_keep");
					UnionAdjacentContoursXld(ho_Edge, &ho_Edge, 100, 10, "attr_keep");
					SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 1500, 3000, -0.5,
						0.5);
					SortContoursXld(ho_Edge, &ho_Edge, "character", "true", "column");
					SelectObj(ho_Edge, &ho_Edge_left, 1);
					GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);
					if (0 != (int((hv_Row.TupleLength()) == 0)))
					{
						MoveRegion(ho_Region, &ho_RegionUnion, 1, -30);



					}
					else
					{
						TupleAdd(hv_Col, -95, &hv_Sub);
						hv_left_xld = hv_Sub;
						TupleInverse(hv_left_xld, &hv_left_xld);
						TupleInverse(hv_Row, &hv_left_Row);
						TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
						TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
						GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
						GenRegionContourXld(ho_Contour, &ho_Region, "filled");
						ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");
					}
				}
				//***************************************************************8

			}
		}
		else if (0 != (int(hv_Substring == HTuple("1_2"))))
		{
			if (0 != (int(hv_Number21 == 25)))
			{
				GenRectangle1(&ho_Rectangle1, 0, 400, 400, 1720);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);
				Threshold(ho_ImageReduced4, &ho_Region, 0, 220);
				Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
				Difference(ho_Region, ho_Region20, &ho_Region);
				FillUp(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 200);
				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, (HTuple("height").Append("width")), "and",
					(HTuple(200).Append(50)), (HTuple(99999).Append(9999)));
				Union1(ho_Region, &ho_Region);

				ShapeTrans(ho_Region, &ho_Region, "rectangle1");

				ErosionRectangle1(ho_Region, &ho_Region, 85, 1);
				MoveRegion(ho_Region, &ho_RegionMoved, 0, 120);
				Difference(ho_Region, ho_RegionMoved, &ho_Region);

				//gray_dilation_rect (ImageReduced4, ImageMax, Height, Width)
				GrayOpeningRect(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);





				MeanImage(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);
				ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
				EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 10, 50);
				SegmentContoursXld(ho_Edges, &ho_Edges, "lines_circles", 5, 4, 2);
				SelectContoursXld(ho_Edges, &ho_Edges, "maximum_extent", 100, 3000, -0.5,
					0.5);

				SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(80).TupleRad(),
					HTuple(100).TupleRad());
				UnionCollinearContoursXld(ho_Edge, &ho_Edge, 40, 1, 10, 0.1, "attr_keep");
				SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 100, 3000, -0.5, 0.5);
				SortContoursXld(ho_Edge, &ho_Edge, "upper_left", "false", "column");
				SelectObj(ho_Edge, &ho_Edge_left, 1);
				GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);

				if (0 != (int(hv_Substring == HTuple("3_2"))))
				{
					TupleAdd(hv_Col, -85, &hv_Sub);
				}
				else
				{
					TupleAdd(hv_Col, -95, &hv_Sub);
				}
				hv_left_xld = hv_Sub;
				TupleInverse(hv_left_xld, &hv_left_xld);
				TupleInverse(hv_Row, &hv_left_Row);
				TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
				TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
				GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
				GenRegionContourXld(ho_Contour, &ho_Region, "filled");
				ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");

			}
			else
			{

				GenRectangle1(&ho_Rectangle1, 0, 500, 2100, 1820);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);

				Threshold(ho_ImageReduced4, &ho_Region, 0, 220);
				Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
				Difference(ho_Region, ho_Region20, &ho_Region);
				FillUp(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 1700);
				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, (HTuple("height").Append("width")), "and",
					(HTuple(1900).Append(50)), (HTuple(99999).Append(9999)));
				Union1(ho_Region, &ho_Region);

				ShapeTrans(ho_Region, &ho_Region, "rectangle1");

				ErosionRectangle1(ho_Region, &ho_RegionErosion, 255, 1);
				Difference(ho_Region, ho_RegionErosion, &ho_Region);
				Connection(ho_Region, &ho_Region);
				SelectObj(ho_Region, &ho_Region, 1);
				MoveRegion(ho_Region, &ho_Region, 1, 45);

				//gray_dilation_rect (ImageReduced4, ImageMax, Height, Width)
				GrayOpeningRect(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);

				if (0 != (HTuple(HTuple(HTuple(HTuple(HTuple(int(hv_Number21 == 3)).TupleOr(int(hv_Number21 == 4))).TupleOr(int(hv_Number21 == 11))).TupleOr(int(hv_Number21 == 15))).TupleOr(int(hv_Number21 == 16))).TupleOr(int(hv_Number21 == 23))))
				{

					DilationRectangle1(ho_Region, &ho_Region, 15, 1);
					ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
					GrayDilationRect(ho_ImageReduced4, &ho_ImageReduced4, 400, 10);
					ErosionRectangle1(ho_Region, &ho_Region, 5, 1);
				}
				MeanImage(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);
				Intersection(ho_Region, ho_Rectangle1, &ho_Region);
				ErosionRectangle1(ho_Region, &ho_Region, 5, 1);
				ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);

				EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 7, 20);
				SelectContoursXld(ho_Edges, &ho_Edges, "maximum_extent", 100, 3000, -0.5,
					0.5);
				//select_obj (Edges, ObjectSelected, 2)
				//get_contour_attrib_xld (ObjectSelected, 'response', Attrib)
				SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(70).TupleRad(),
					HTuple(110).TupleRad());
				SegmentContourAttribXld(ho_Edge, &ho_Edge, "response", "and", 50, 250);

				UnionCollinearContoursXld(ho_Edge, &ho_Edge, 250, 1, 7, 0.1, "attr_keep");
				UnionAdjacentContoursXld(ho_Edge, &ho_Edge, 20, 1, "attr_keep");
				SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 1300, 4000, -0.5,
					0.5);


				SortContoursXld(ho_Edge, &ho_Edge, "upper_left", "false", "column");
				SelectObj(ho_Edge, &ho_Edge_left, 1);
				GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);
				if (0 != (int((hv_Row.TupleLength()) != 0)))
				{
					if (0 != (int(hv_Substring == HTuple("3_2"))))
					{
						TupleAdd(hv_Col, -85, &hv_Sub);
					}
					else
					{
						TupleAdd(hv_Col, -95, &hv_Sub);
					}
					hv_left_xld = hv_Sub;
					TupleInverse(hv_left_xld, &hv_left_xld);
					TupleInverse(hv_Row, &hv_left_Row);
					TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
					TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
					GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
					GenRegionContourXld(ho_Contour, &ho_Region, "filled");
					ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");

					Intensity(ho_RegionUnion, ho_Image, &hv_Mean, &hv_Deviation);
				}
				else
				{

					GenRectangle1(&ho_Rectangle1, 0, 500, 2100, 1620);
					ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);

					Threshold(ho_ImageReduced4, &ho_Region, 0, 220);
					Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
					Difference(ho_Region, ho_Region20, &ho_Region);
					FillUp(ho_Region, &ho_Region);
					MoveRegion(ho_Region, &ho_RegionMoved, 1, 90);
					Difference(ho_Region, ho_RegionMoved, &ho_RegionDifference);
					ErosionRectangle1(ho_RegionDifference, &ho_RegionDifference, 7, 7);
					Connection(ho_RegionDifference, &ho_RegionDifference);
					SelectShapeStd(ho_RegionDifference, &ho_RegionDifference, "max_area", 70);
					ShapeTrans(ho_RegionDifference, &ho_RegionUnion, "rectangle1");
					Intensity(ho_RegionUnion, ho_Image, &hv_Mean, &hv_Deviation);

				}


				//***************************************************************8

			}

		}
		else if (0 != (int(hv_Substring == HTuple("3_2"))))
		{
			if (0 != (int(hv_Number21 == 25)))
			{
				GenRectangle1(&ho_Rectangle1, 0, 400, 400, 1720);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);
				Threshold(ho_ImageReduced4, &ho_Region, 0, 220);
				Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
				Difference(ho_Region, ho_Region20, &ho_Region);
				FillUp(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 200);
				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, (HTuple("height").Append("width")), "and",
					(HTuple(200).Append(50)), (HTuple(99999).Append(9999)));
				Union1(ho_Region, &ho_Region);

				ShapeTrans(ho_Region, &ho_Region, "rectangle1");

				ErosionRectangle1(ho_Region, &ho_Region, 85, 1);
				MoveRegion(ho_Region, &ho_RegionMoved, 0, 120);
				Difference(ho_Region, ho_RegionMoved, &ho_Region);

				//gray_dilation_rect (ImageReduced4, ImageMax, Height, Width)
				GrayOpeningRect(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);





				MeanImage(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);
				ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
				EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 10, 50);
				SegmentContoursXld(ho_Edges, &ho_Edges, "lines_circles", 5, 4, 2);
				SelectContoursXld(ho_Edges, &ho_Edges, "maximum_extent", 100, 3000, -0.5,
					0.5);

				SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(80).TupleRad(),
					HTuple(100).TupleRad());
				UnionCollinearContoursXld(ho_Edge, &ho_Edge, 40, 1, 10, 0.1, "attr_keep");
				SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 100, 3000, -0.5, 0.5);
				SortContoursXld(ho_Edge, &ho_Edge, "upper_left", "false", "column");
				SelectObj(ho_Edge, &ho_Edge_left, 1);
				GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);

				if (0 != (int(hv_Substring == HTuple("3_2"))))
				{
					TupleAdd(hv_Col, -85, &hv_Sub);
				}
				else
				{
					TupleAdd(hv_Col, -95, &hv_Sub);
				}
				hv_left_xld = hv_Sub;
				TupleInverse(hv_left_xld, &hv_left_xld);
				TupleInverse(hv_Row, &hv_left_Row);
				TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
				TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
				GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
				GenRegionContourXld(ho_Contour, &ho_Region, "filled");
				ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");

			}
			else
			{

				GenRectangle1(&ho_Rectangle1, 0, 500, 2100, 1820);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);

				Threshold(ho_ImageReduced4, &ho_Region, 0, 220);
				Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
				Difference(ho_Region, ho_Region20, &ho_Region);
				FillUp(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 1700);
				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, (HTuple("height").Append("width")), "and",
					(HTuple(1900).Append(50)), (HTuple(99999).Append(9999)));
				Union1(ho_Region, &ho_Region);

				ShapeTrans(ho_Region, &ho_Region, "rectangle1");

				ErosionRectangle1(ho_Region, &ho_RegionErosion, 255, 1);
				Difference(ho_Region, ho_RegionErosion, &ho_Region);
				Connection(ho_Region, &ho_Region);
				SelectObj(ho_Region, &ho_Region, 1);
				MoveRegion(ho_Region, &ho_Region, 1, 45);

				//gray_dilation_rect (ImageReduced4, ImageMax, Height, Width)
				GrayOpeningRect(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);

				if (0 != (HTuple(HTuple(HTuple(HTuple(HTuple(int(hv_Number21 == 3)).TupleOr(int(hv_Number21 == 4))).TupleOr(int(hv_Number21 == 11))).TupleOr(int(hv_Number21 == 15))).TupleOr(int(hv_Number21 == 16))).TupleOr(int(hv_Number21 == 23))))
				{

					DilationRectangle1(ho_Region, &ho_Region, 15, 1);
					ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
					GrayDilationRect(ho_ImageReduced4, &ho_ImageReduced4, 400, 10);
					ErosionRectangle1(ho_Region, &ho_Region, 5, 1);
				}
				MeanImage(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);
				Intersection(ho_Region, ho_Rectangle1, &ho_Region);
				ErosionRectangle1(ho_Region, &ho_Region, 5, 1);
				ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);

				EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 7, 20);
				SelectContoursXld(ho_Edges, &ho_Edges, "maximum_extent", 100, 3000, -0.5,
					0.5);
				//select_obj (Edges, ObjectSelected, 2)
				//get_contour_attrib_xld (ObjectSelected, 'response', Attrib)
				SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(70).TupleRad(),
					HTuple(110).TupleRad());
				SegmentContourAttribXld(ho_Edge, &ho_Edge, "response", "and", 50, 250);

				UnionCollinearContoursXld(ho_Edge, &ho_Edge, 250, 1, 7, 0.1, "attr_keep");
				UnionAdjacentContoursXld(ho_Edge, &ho_Edge, 20, 1, "attr_keep");
				SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 1300, 4000, -0.5,
					0.5);


				SortContoursXld(ho_Edge, &ho_Edge, "upper_left", "false", "column");
				SelectObj(ho_Edge, &ho_Edge_left, 1);
				GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);
				if (0 != (int((hv_Row.TupleLength()) != 0)))
				{
					if (0 != (int(hv_Substring == HTuple("3_2"))))
					{
						TupleAdd(hv_Col, -85, &hv_Sub);
					}
					else
					{
						TupleAdd(hv_Col, -95, &hv_Sub);
					}
					hv_left_xld = hv_Sub;
					TupleInverse(hv_left_xld, &hv_left_xld);
					TupleInverse(hv_Row, &hv_left_Row);
					TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
					TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
					GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
					GenRegionContourXld(ho_Contour, &ho_Region, "filled");
					ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");

					Intensity(ho_RegionUnion, ho_Image, &hv_Mean, &hv_Deviation);
				}
				else
				{

					GenRectangle1(&ho_Rectangle1, 0, 500, 2100, 1620);
					ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);

					Threshold(ho_ImageReduced4, &ho_Region, 0, 220);
					Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
					Difference(ho_Region, ho_Region20, &ho_Region);
					FillUp(ho_Region, &ho_Region);
					MoveRegion(ho_Region, &ho_RegionMoved, 1, 90);
					Difference(ho_Region, ho_RegionMoved, &ho_RegionDifference);
					ErosionRectangle1(ho_RegionDifference, &ho_RegionDifference, 7, 7);
					Connection(ho_RegionDifference, &ho_RegionDifference);
					SelectShapeStd(ho_RegionDifference, &ho_RegionDifference, "max_area", 70);
					ShapeTrans(ho_RegionDifference, &ho_RegionUnion, "rectangle1");
					Intensity(ho_RegionUnion, ho_Image, &hv_Mean, &hv_Deviation);

				}





				//***************************************************************8

			}

		}

		DilationRectangle1((*ho_JTReg), &(*ho_JTReg), 215, 5);
		Union2((*ho_camregion), (*ho_JTReg), &(*ho_camregion));
		Intersection(ho_RectangleImage, (*ho_camregion), &(*ho_camregion));
		CountObj(ho_RegionUnion, &hv_Number1);
		if (0 != (int(hv_Number1 > 0)))
		{
			//通过外轮廓提取拼接处区域
			//move_region (RegionUnion, RegionUnion, 3, 0)
			SmallestRectangle2(ho_RegionUnion, &hv_Row16, &hv_Column16, &hv_Phi3, &hv_Length1,
				&hv_Length2);

			if (true)
			{
				//提取仿射最小外接矩形的四个顶点坐标
				GenRectangle2ContourXld(&(*ho_DetectRegion), hv_Row16, hv_Column16, hv_Phi3,
					hv_Length1, hv_Length2);
				//union1 (Region, DetectRegion)
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
					GenCrossContourXld(&ho_Cross1, 3, hv_Column16 + hv_a, 26, hv_Phi3);
					hv_c = (hv_Length1 * hv_Cos) - (hv_Length2 * hv_Sin);
					hv_d = (hv_Length1 * hv_Sin) + (hv_Length2 * hv_Cos);
					GenCrossContourXld(&ho_Cross2, 3, hv_Column16 + hv_c, 26, hv_Phi3);
					hv_e = (hv_Length1 * hv_Cos) + (hv_Length2 * hv_Sin);
					hv_f = (hv_Length1 * hv_Sin) - (hv_Length2 * hv_Cos);
					GenCrossContourXld(&ho_Cross3, 3, hv_Column16 + hv_e, 26, hv_Phi3);
					hv_g = ((-hv_Length1) * hv_Cos) + (hv_Length2 * hv_Sin);
					hv_h = ((-hv_Length1) * hv_Sin) - (hv_Length2 * hv_Cos);
					GenCrossContourXld(&ho_Cross4, 3, hv_Column16 + hv_g, 26, hv_Phi3);
					//gen_cross_contour_xld (Cross4, Row16-h, Column16+g, 26, Phi3)
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
					if (0 != (HTuple(int(hv_Substring == HTuple("3_1"))).TupleOr(int(hv_Substring == HTuple("3_2")))))
					{
						SelectObj(ho_SortedRegions, &(*ho_PointRegion), 1);

					}
					else
					{
						SelectObj(ho_SortedRegions, &(*ho_PointRegion), 2);

					}
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
		string strerr = std::to_string(hv_ProNum.I()) + "-" + std::to_string(hv_StaNum.I()) + "_" + std::to_string(hv_CamNum.I()) + "_" + std::to_string(hv_ImageNum.I()) + "ImageShieldProcessAMiddleSelfTest4_83_1 error:" + strErr;
		VeErrMessage.push_back(QString::fromStdString(strerr));
	}
	reg = -1;
	return -1;
}

int JSZCAlgorithmsDLLPVD::ImageShieldProcessAMiddleSelfTest4_83_2(HObject ho_Image, HObject* ho_DetectRegion, HObject* ho_PointRegion, HObject* ho_camregion, HObject* ho_JTReg, HTuple hv_ImName)
{
	// Local iconic variables
	HObject  ho_Rectangle_bottom, ho_Rectangle_top;
	HObject  ho_RectangleImage, ho_RegionUnion, ho_Rectangle;
	HObject  ho_ImageResult15, ho_Region20, ho_RegionOpening34;
	HObject  ho_ConnectedRegions37, ho_SelectedRegions19, ho_RegionMoved;
	HObject  ho_ImageReduced9, ho_RegionErosion2, ho_ImageMedian9;
	HObject  ho_ImageTexture4, ho_Region5, ho_RegionDilation1;
	HObject  ho_RegionErosion, ho_ImageMedian5, ho_ImageTexture5;
	HObject  ho_ImageTexture8, ho_ImageResult19, ho_Region14;
	HObject  ho_Region15, ho_Region16, ho_ConnectedRegions40;
	HObject  ho_SelectedRegions48, ho_SelectedRegions49, ho_RegionUnion7;
	HObject  ho_RegionTrans, ho_ImageTexture, ho_ImageTexture3;
	HObject  ho_ImageResult1, ho_Region29, ho_ConnectedRegions31;
	HObject  ho_SelectedRegions12, ho_RegionUnion33, ho_RegionClosing7;
	HObject  ho_RegionFillUp14, ho_ConnectedRegions38, ho_SelectedRegions32;
	HObject  ho_RegionUnion18, ho_RegionTrans30, ho_RegionUnion34;
	HObject  ho_RegionFillUp, ho_ImageMedian24, ho_ImageTexture1;
	HObject  ho_ImageTexture2, ho_ImageSub, ho_Region27, ho_Region28;
	HObject  ho_ConnectedRegions14, ho_SelectedRegions9, ho_SelectedRegions_big;
	HObject  ho_RegionOpening19, ho_ConnectedRegions39, ho_RegionTrans8;
	HObject  ho_RegionClosing4, ho_RegionFillUp20, ho_ConnectedRegions41;
	HObject  ho_RegionTrans11, ho_ObjectSelected, ho_RegionClosing;
	HObject  ho_SelectedRegions4, ho_Rectangle11, ho_ImageReduced12;
	HObject  ho_ImageMedian11, ho_ImageReduced10, ho_ImageTexture6;
	HObject  ho_ImageTexture7, ho_ImageResult3, ho_ImageMedian10;
	HObject  ho_Region6, ho_ConnectedRegions5, ho_RegionCount;
	HObject  ho_RegionOpening23, ho_RegionUnion23, ho_RegionTrans12;
	HObject  ho_RegionDilation4, ho_RegionDilation8, ho_RegionUnion14;
	HObject  ho_Rectangle5, ho_ImageReduced1, ho_Rectangle3;
	HObject  ho_ImageReduced7, ho_ImageResult4, ho_Region, ho_RegionFillUp3;
	HObject  ho_ConnectedRegions20, ho_SelectedRegions43, ho_SelectedRegions44;
	HObject  ho_RegionUnion15, ho_RegionFillUp1, ho_RegionUnion2;
	HObject  ho_RegionClosing5, ho_ConnectedRegions1, ho_SelectedRegions;
	HObject  ho_RegionUnion10, ho_ConnectedRegions21, ho_RegionOpening20;
	HObject  ho_RegionTrans6, ho_Rectangle9, ho_ImageReduced6;
	HObject  ho_Region13, ho_SelectedRegions3, ho_RegionDilation;
	HObject  ho_ImageMedian7, ho_ImageResult12, ho_Regions3;
	HObject  ho_RegionFillUp21, ho_RegionDilation24, ho_RegionFillUp25;
	HObject  ho_RegionOpening8, ho_RegionOpening18, ho_ConnectedRegions17;
	HObject  ho_SelectedRegions20, ho_RegionMoved7, ho_ImageMedian;
	HObject  ho_ImageResult11, ho_Regions2, ho_RegionFillUp11;
	HObject  ho_RegionOpening15, ho_ConnectedRegions35, ho_RegionOpening12;
	HObject  ho_SelectedRegions34, ho_RegionTrans17, ho_ImageMedian3;
	HObject  ho_ImageResult5, ho_RegionFillUp28, ho_ConnectedRegions8;
	HObject  ho_SelectedRegions8, ho_RegionTrans5, ho_RegionDilation14;
	HObject  ho_RegionOpening24, ho_RegionMoved1, ho_ImageResult10;
	HObject  ho_Region19, ho_RegionFillUp29, ho_ConnectedRegions19;
	HObject  ho_SelectedRegions14, ho_RegionTrans27, ho_RegionDilation20;
	HObject  ho_RegionOpening28, ho_RegionMoved6, ho_ImageResult13;
	HObject  ho_Region11, ho_ConnectedRegions24, ho_SelectedRegions22;
	HObject  ho_RegionTrans15, ho_ImageResult46, ho_Region43;
	HObject  ho_RegionOpening29, ho_ConnectedRegions77, ho_SelectedRegions107;
	HObject  ho_SelectedRegions108, ho_Region45, ho_ConnectedRegions79;
	HObject  ho_SelectedRegions109, ho_RegionUnion52, ho_EmptyObject4;
	HObject  ho_RegionTrans54, ho_RegionDilation44, ho_RegionOpening79;
	HObject  ho_RegionMoved24, ho_RegionUnion51, ho_RegionUnion49;
	HObject  ho_ImageResult47, ho_ImageMedian31, ho_Region44;
	HObject  ho_RegionOpening78, ho_ConnectedRegions78, ho_ImageResult8;
	HObject  ho_Region17, ho_RegionFillUp8, ho_RegionOpening17;
	HObject  ho_ImageResult27, ho_SelectedRegions40, ho_ImageMedian4;
	HObject  ho_ImageResult6, ho_Region8, ho_RegionFillUp2, ho_ConnectedRegions6;
	HObject  ho_SelectedRegions6, ho_SelectedRegions1, ho_RegionTrans35;
	HObject  ho_RegionUnion24, ho_ImageResult18, ho_Region12;
	HObject  ho_ConnectedRegions27, ho_SelectedRegions2, ho_RegionTrans7;
	HObject  ho_Region24, ho_RegionClosing1, ho_RegionFillUp18;
	HObject  ho_ConnectedRegions32, ho_ConnectedRegions33, ho_SelectedRegions27;
	HObject  ho_RegionTrans25, ho_RegionDilation2, ho_ImageResult9;
	HObject  ho_Region9, ho_RegionFillUp9, ho_RegionOpening22;
	HObject  ho_RegionOpening32, ho_ConnectedRegions25, ho_SelectedRegions13;
	HObject  ho_RegionTrans3, ho_SelectedRegions17, ho_RegionUnion6;
	HObject  ho_SelectedRegions18, ho_RegionFillUp4, ho_RegionOpening13;
	HObject  ho_ImageResult32, ho_Region1, ho_RegionOpening6;
	HObject  ho_ConnectedRegions2, ho_SelectedRegions30, ho_RegionTrans39;
	HObject  ho_ImageResult7, ho_Region4, ho_RegionFillUp6, ho_RegionDilation6;
	HObject  ho_ConnectedRegions23, ho_SelectedRegions21, ho_RegionUnion_;
	HObject  ho_ImageResult23, ho_ConnectedRegions3, ho_SelectedRegions28;
	HObject  ho_RegionOpening9, ho_RegionTrans2, ho_ImageMean6;
	HObject  ho_ImageEmphasize1, ho_RegionOpening10, ho_RegionUnion12;
	HObject  ho_RegionDilation5, ho_RegionUnion16, ho_ConnectedRegions42;
	HObject  ho_ImageResult14, ho_RegionOpening7, ho_RegionFillUp26;
	HObject  ho_SelectedRegions7, ho_RegionTrans9, ho_RegionDilation10;
	HObject  ho_SelectedRegions31, ho_RegionOpening45, ho_RegionMoved8;
	HObject  ho_RegionUnion21, ho_RegionMoved21, ho_SelectedRegions45;
	HObject  ho_RegionUnion20, ho_RegionDilation16, ho_ImageResult21;
	HObject  ho_RegionFillUp7, ho_RegionOpening3, ho_SelectedRegions11;
	HObject  ho_SelectedRegions46, ho_SelectedRegions60, ho_RegionDilation19;
	HObject  ho_RegionOpening47, ho_SelectedRegions62, ho_RegionDilation23;
	HObject  ho_RegionOpening49, ho_RegionMoved10, ho_RegionUnion28;
	HObject  ho_RegionTrans22, ho_ImageResult, ho_RegionFillUp27;
	HObject  ho_RegionOpening11, ho_ImageMedian1, ho_Regions1;
	HObject  ho_RegionFillUp10, ho_RegionOpening25, ho_ConnectedRegions;
	HObject  ho_SelectedRegions16, ho_ConnectedRegions22, ho_Rectangle1;
	HObject  ho_ImageReduced4, ho_Edges, ho_Edge, ho_Edge_left;
	HObject  ho_Contour, ho_ImageReduced, ho_RegionEdge, ho_RegionMove;
	HObject  ho_RegionDifference, ho_Cross1, ho_Cross2, ho_Cross3;
	HObject  ho_Cross4, ho_Cross1re, ho_Cross2re, ho_Cross3re;
	HObject  ho_Cross4re, ho_RegionUnion3, ho_RegionUnion4, ho_ConnectedRegions4;
	HObject  ho_SortedRegions;

	// Local control variables
	HTuple  hv_Substring, hv_Substrings, hv_BoolInter;
	HTuple  hv_StaNum, hv_CamNum, hv_ImageNum, hv_Length5, hv_Selected1;
	HTuple  hv_Number21, hv_Width, hv_Height, hv_Row112, hv_Column112;
	HTuple  hv_Row212, hv_Column212, hv_Area6, hv_Row3, hv_Column3;
	HTuple  hv_width, hv_Value4, hv_UsedThreshold, hv_Value;
	HTuple  hv_Value1, hv_Value14, hv_Value6, hv_Value7, hv_Value9;
	HTuple  hv_Value10, hv_UsedThreshold1, hv_Row, hv_Col, hv_Sub;
	HTuple  hv_left_xld, hv_left_Row, hv_Contour_col, hv_Contour_row;
	HTuple  hv_Area, hv_Column, hv_Mean, hv_Deviation, hv_Number1;
	HTuple  hv_Row16, hv_Column16, hv_Phi3, hv_Length1, hv_Length2;
	HTuple  hv_Cos, hv_Sin, hv_a, hv_b, hv_c, hv_d, hv_e, hv_f;
	HTuple  hv_g, hv_h;

	try
	{

		if (HDevWindowStack::IsOpen())
			SetColored(HDevWindowStack::GetActive(), 12);
		TupleStrFirstN(hv_ImName, 2, &hv_Substring);

		//tuple_split (ImName, '_', Substrings)
		//tuple_split (Substrings, '-', Substrings1)
		//Substring := Substrings1[1]+'_'+Substrings1[2]
		//内部
		hv_BoolInter = 0;
		//胶条区域
		GenRectangle1(&ho_Rectangle_bottom, 2045, 0, 2047, 1800);
		GenRectangle1(&ho_Rectangle_top, 0, 0, 5, 1800);
		GenRectangle1(&ho_RectangleImage, 0, 0, 2047, 2047);
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

		if (0 != (int(hv_Substring == HTuple("2_1"))))
		{


			MultImage(ho_Image, ho_Image, &ho_ImageResult15, 0.1, 0);
			GrayDilationRect(ho_ImageResult15, &ho_ImageResult15, 200, 1);
			Threshold(ho_ImageResult15, &ho_Region20, 180, 255);
			FillUp(ho_Region20, &ho_Region20);
			//13边
			if (0 != (HTuple(HTuple(HTuple(HTuple(int(hv_Number21 != 15)).TupleAnd(int(hv_Number21 != 16))).TupleAnd(int(hv_Number21 != 17))).TupleAnd(int(hv_Number21 != 12))).TupleAnd(int(hv_Number21 != 13))))
			{
				ClosingRectangle1(ho_Region20, &ho_Region20, 400, 1);
			}
			Connection(ho_Region20, &ho_Region20);
			SelectShapeStd(ho_Region20, &ho_Region20, "max_area", 70);
			Union1(ho_Region20, &ho_Region20);

			if (0 != (HTuple(int(hv_Number21 == 2)).TupleOr(int(hv_Number21 == 3))))
			{

				OpeningRectangle1(ho_Region20, &ho_RegionOpening34, 1, 1900);
			}
			else
			{
				OpeningRectangle1(ho_Region20, &ho_RegionOpening34, 1, 1600);
			}
			Connection(ho_RegionOpening34, &ho_ConnectedRegions37);
			OpeningRectangle1(ho_ConnectedRegions37, &ho_ConnectedRegions37, 3, 500);
			SelectShapeStd(ho_ConnectedRegions37, &ho_SelectedRegions19, "max_area", 70);

			ShapeTrans(ho_SelectedRegions19, &ho_RegionUnion, "rectangle1");
			MoveRegion(ho_RegionUnion, &ho_RegionMoved, 0, -850);
			Difference(ho_RegionUnion, ho_RegionMoved, &ho_RegionUnion);
			//difference (RegionTrans31, RegionMoved12, RegionUnion)
			//提取区域
			SmallestRectangle1(ho_RegionUnion, &hv_Row112, &hv_Column112, &hv_Row212, &hv_Column212);
			ReduceDomain(ho_Image, ho_RegionUnion, &ho_ImageReduced9);
			ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion2, 50, 1);
			AreaCenter(ho_RegionUnion, &hv_Area6, &hv_Row3, &hv_Column3);
			if (0 != (int(hv_Number21 == 24)))
			{

				MultImage(ho_Image, ho_Image, &ho_ImageResult15, 0.3, 0);
				GrayDilationRect(ho_ImageResult15, &ho_ImageResult15, 200, 1);
				Threshold(ho_ImageResult15, &ho_Region20, 180, 255);
				FillUp(ho_Region20, &ho_Region20);
				ClosingRectangle1(ho_Region20, &ho_Region20, 400, 1);
				Connection(ho_Region20, &ho_Region20);
				SelectShapeStd(ho_Region20, &ho_Region20, "max_area", 70);
				Union1(ho_Region20, &ho_Region20);


				OpeningRectangle1(ho_Region20, &ho_RegionOpening34, 1, 1900);
				Connection(ho_RegionOpening34, &ho_ConnectedRegions37);
				OpeningRectangle1(ho_ConnectedRegions37, &ho_ConnectedRegions37, 3, 500);
				SelectShapeStd(ho_ConnectedRegions37, &ho_SelectedRegions19, "max_area",
					70);

				ShapeTrans(ho_SelectedRegions19, &ho_RegionUnion, "rectangle1");
				ShapeTrans(ho_SelectedRegions19, &ho_RegionUnion, "rectangle1");
				MoveRegion(ho_RegionUnion, &ho_RegionMoved, 0, -850);
				Difference(ho_RegionUnion, ho_RegionMoved, &ho_RegionUnion);

				//提取区域
				SmallestRectangle1(ho_RegionUnion, &hv_Row112, &hv_Column112, &hv_Row212,
					&hv_Column212);
				ReduceDomain(ho_Image, ho_RegionUnion, &ho_ImageReduced9);
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion2, 50, 1);
				AreaCenter(ho_RegionUnion, &hv_Area6, &hv_Row3, &hv_Column3);
			}
			if (0 != (int(hv_Number21 == 25)))
			{

				//提取区域
				Union1(ho_Region20, &ho_RegionUnion);
				OpeningRectangle1(ho_RegionUnion, &ho_RegionUnion, 1, 300);
				SmallestRectangle1(ho_RegionUnion, &hv_Row112, &hv_Column112, &hv_Row212,
					&hv_Column212);
				ReduceDomain(ho_Image, ho_RegionUnion, &ho_ImageReduced9);
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion2, 50, 1);
				AreaCenter(ho_RegionUnion, &hv_Area6, &hv_Row3, &hv_Column3);
			}


			if (0 != (int(hv_Number21 == 3)))
			{
				//裁剪

				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 11, 11);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				ClosingRectangle1(ho_Region5, &ho_Region5, 115, 1);
				FillUp(ho_Region5, &ho_Region5);
				OpeningRectangle1(ho_Region5, &ho_Region5, 45, 1);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, ((HTuple("area").Append("width")).Append("height")),
					"and", ((HTuple(40000).Append(550)).Append(50)), ((HTuple(99999999).Append(99999)).Append(200)));
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 50);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));




			}
			if (0 != (int(hv_Number21 == 4)))
			{
				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				ClosingRectangle1(ho_Region5, &ho_Region5, 115, 1);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, ((HTuple("area").Append("width")).Append("height")),
					"and", ((HTuple(40000).Append(550)).Append(50)), ((HTuple(99999999).Append(99999)).Append(200)));
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 70);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));
			}
			if (0 != (int(hv_Number21 == 5)))
			{
				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				ClosingRectangle1(ho_Region5, &ho_Region5, 115, 1);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 70);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));


			}
			if (0 != (int(hv_Number21 == 6)))
			{

				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 425, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian5, 15, 15);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture5, "el", 5, 7);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture8, "le", 5, 7);
				AddImage(ho_ImageTexture5, ho_ImageTexture8, &ho_ImageResult19, 2, -100);
				Threshold(ho_ImageResult19, &ho_Region14, 180, 255);
				Intersection(ho_Region14, ho_RegionErosion, &ho_Region14);
				Connection(ho_Region14, &ho_Region14);
				SelectShape(ho_Region14, &ho_Region14, (HTuple("area").Append("width")),
					"or", (HTuple(700).Append(100)), (HTuple(999999).Append(99999)));
				Union1(ho_Region14, &ho_Region14);
				OpeningCircle(ho_Region14, &ho_Region14, 3.5);
				ClosingRectangle1(ho_Region14, &ho_Region15, 135, 1);
				ClosingRectangle1(ho_Region14, &ho_Region16, 1, 135);
				Union2(ho_Region16, ho_Region15, &ho_Region14);
				Connection(ho_Region14, &ho_ConnectedRegions40);
				SelectShape(ho_ConnectedRegions40, &ho_SelectedRegions48, "area", "and",
					4000, 9999999);
				SelectShape(ho_SelectedRegions48, &ho_SelectedRegions49, (HTuple("column").Append("width")),
					"or", (HTuple(700).Append(200)), (HTuple(1300).Append(9999)));
				Union1(ho_SelectedRegions49, &ho_RegionUnion7);
				FillUp(ho_RegionUnion7, &ho_RegionUnion7);
				ShapeTrans(ho_RegionUnion7, &ho_RegionTrans, "rectangle1");
				if (0 != hv_BoolInter)
				{
					ErosionRectangle1(ho_RegionTrans, &ho_RegionTrans, 70, 1);
					MoveRegion(ho_RegionTrans, &ho_RegionTrans, 30, 0);

				}
				RegionFeatures(ho_RegionTrans, "width", &hv_width);
				OpeningCircle(ho_RegionTrans, &ho_RegionTrans, hv_width / 2);
				Union2(ho_RegionTrans, ho_Rectangle_bottom, &ho_RegionUnion7);

				ClosingRectangle1(ho_RegionUnion7, &ho_RegionUnion7, 1, 1055);
				FillUp(ho_RegionUnion7, &ho_RegionUnion7);
				OpeningCircle(ho_RegionUnion7, &(*ho_camregion), 5);





			}
			if (0 != (int(hv_Number21 == 7)))
			{

				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 425, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian5, 15, 15);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture5, "el", 5, 7);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture8, "le", 5, 7);
				AddImage(ho_ImageTexture5, ho_ImageTexture8, &ho_ImageResult19, 2, -100);
				Threshold(ho_ImageResult19, &ho_Region14, 180, 255);
				Intersection(ho_Region14, ho_RegionErosion, &ho_Region14);
				Connection(ho_Region14, &ho_Region14);
				SelectShape(ho_Region14, &ho_Region14, (HTuple("area").Append("width")),
					"or", (HTuple(700).Append(100)), (HTuple(999999).Append(99999)));
				Union1(ho_Region14, &ho_Region14);
				OpeningCircle(ho_Region14, &ho_Region14, 3.5);
				ClosingRectangle1(ho_Region14, &ho_Region15, 135, 1);
				ClosingRectangle1(ho_Region14, &ho_Region16, 1, 135);
				Union2(ho_Region16, ho_Region15, &ho_Region14);
				Connection(ho_Region14, &ho_ConnectedRegions40);
				SelectShape(ho_ConnectedRegions40, &ho_SelectedRegions48, "area", "and",
					4000, 9999999);
				SelectShape(ho_SelectedRegions48, &ho_SelectedRegions49, (HTuple("column").Append("width")),
					"or", (HTuple(700).Append(200)), (HTuple(1300).Append(9999)));
				Union1(ho_SelectedRegions49, &ho_RegionUnion7);
				FillUp(ho_RegionUnion7, &ho_RegionUnion7);
				ShapeTrans(ho_RegionUnion7, &ho_RegionTrans, "rectangle1");
				if (0 != hv_BoolInter)
				{
					ErosionRectangle1(ho_RegionTrans, &ho_RegionTrans, 70, 1);
					MoveRegion(ho_RegionTrans, &ho_RegionTrans, -30, 0);

				}
				RegionFeatures(ho_RegionTrans, "width", &hv_width);
				if (0 != (hv_width.TupleLength()))
				{
					OpeningCircle(ho_RegionTrans, &ho_RegionTrans, hv_width / 2);
					Union2(ho_RegionTrans, ho_Rectangle_top, &ho_RegionUnion7);

					ClosingRectangle1(ho_RegionUnion7, &ho_RegionUnion7, 1, 1055);
					FillUp(ho_RegionUnion7, &ho_RegionUnion7);
					OpeningCircle(ho_RegionUnion7, &(*ho_camregion), 5);
				}

			}
			if (0 != (int(hv_Number21 == 8)))
			{
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 225, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 15, 15);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture, "el", 5, 7);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture3, "le", 5, 7);
				AddImage(ho_ImageTexture, ho_ImageTexture3, &ho_ImageResult1, 2, -100);
				Threshold(ho_ImageResult1, &ho_Region29, 180, 255);
				Intersection(ho_Region29, ho_RegionErosion, &ho_Region29);
				Connection(ho_Region29, &ho_Region29);
				SelectShape(ho_Region29, &ho_Region29, ((HTuple("area").Append("width")).Append("height")),
					"and", ((HTuple(120).Append(80)).Append(80)), ((HTuple(999999).Append(999999)).Append(99999)));
				Union1(ho_Region29, &ho_Region29);
				ClosingRectangle1(ho_Region29, &ho_Region29, 19, 200);
				ClosingRectangle1(ho_Region29, &ho_Region29, 100, 1);


				Connection(ho_Region29, &ho_ConnectedRegions31);
				SelectShape(ho_ConnectedRegions31, &ho_SelectedRegions12, "area", "and",
					200, 999999);
				Union1(ho_SelectedRegions12, &ho_RegionUnion33);

				Union2(ho_RegionUnion33, ho_Rectangle_bottom, &ho_RegionUnion33);
				Union2(ho_RegionUnion33, ho_Rectangle_top, &ho_RegionUnion33);
				ClosingRectangle1(ho_RegionUnion33, &ho_RegionUnion33, 25, 200);
				FillUp(ho_RegionUnion33, &ho_RegionUnion33);
				OpeningRectangle1(ho_RegionUnion33, &ho_RegionClosing7, 55, 55);
				FillUp(ho_RegionClosing7, &ho_RegionFillUp14);
				Connection(ho_RegionFillUp14, &ho_ConnectedRegions38);
				SelectShape(ho_ConnectedRegions38, &ho_SelectedRegions32, "column", "and",
					750, 1300);
				Union1(ho_SelectedRegions32, &ho_RegionUnion18);
				ShapeTrans(ho_RegionUnion18, &ho_RegionTrans30, "convex");
				DilationCircle(ho_RegionTrans30, &(*ho_camregion), 10.5);
			}
			if (0 != (int(hv_Number21 == 9)))
			{
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				GenRectangle1(&ho_Rectangle_top, 0, 0, 5, 1800);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 15, 15);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture, "el", 5, 7);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture3, "le", 5, 7);
				AddImage(ho_ImageTexture, ho_ImageTexture3, &ho_ImageResult1, 3, -300);
				Threshold(ho_ImageResult1, &ho_Region29, 128, 255);

				Intersection(ho_Region29, ho_RegionErosion, &ho_Region29);

				Connection(ho_Region29, &ho_Region29);
				SelectShape(ho_Region29, &ho_Region29, "area", "and", 50, 999999);
				Union1(ho_Region29, &ho_Region29);
				ClosingRectangle1(ho_Region29, &ho_Region29, 1, 100);
				ClosingRectangle1(ho_Region29, &ho_Region29, 50, 1);

				ClosingRectangle1(ho_Region29, &ho_Region29, 1, 200);
				FillUp(ho_Region29, &ho_Region29);
				Connection(ho_Region29, &ho_ConnectedRegions31);
				SelectShape(ho_ConnectedRegions31, &ho_SelectedRegions12, (HTuple("area").Append("width")),
					"and", (HTuple(200).Append(200)), (HTuple(999999).Append(99999)));
				Union1(ho_SelectedRegions12, &ho_RegionUnion33);
				ClosingRectangle1(ho_RegionUnion33, &ho_RegionClosing7, 5, 15);
				FillUp(ho_RegionClosing7, &ho_RegionFillUp14);
				Connection(ho_RegionFillUp14, &ho_ConnectedRegions38);
				SelectShape(ho_ConnectedRegions38, &ho_SelectedRegions32, "column", "and",
					750, 1300);
				Union2(ho_SelectedRegions32, ho_Rectangle_top, &ho_RegionUnion34);
				Union2(ho_RegionUnion34, ho_Rectangle_bottom, &ho_RegionUnion34);
				ClosingRectangle1(ho_RegionUnion34, &ho_RegionUnion34, 1, 500);
				FillUp(ho_RegionUnion34, &ho_RegionFillUp);
				OpeningCircle(ho_RegionFillUp, &ho_RegionUnion34, 5);
				ShapeTrans(ho_RegionUnion34, &ho_RegionUnion34, "rectangle1");



				DilationCircle(ho_RegionUnion34, &(*ho_camregion), 10.5);
			}
			if (0 != (int(hv_Number21 == 10)))
			{



				MeanImage(ho_Image, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				Connection(ho_Region5, &ho_Region5);

				SelectShape(ho_Region5, &ho_Region5, (HTuple("width").Append("height")),
					"and", (HTuple(550).Append(30)), (HTuple(9999).Append(300)));
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 70);

				Intersection(ho_Image, ho_RegionDilation1, &(*ho_JTReg));



				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				GenRectangle1(&ho_Rectangle_top, 0, 0, 5, 1800);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 15, 15);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture, "el", 5, 7);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture3, "le", 5, 7);
				AddImage(ho_ImageTexture, ho_ImageTexture3, &ho_ImageResult1, 3, -300);
				Threshold(ho_ImageResult1, &ho_Region29, 128, 255);


				Intersection(ho_Region29, ho_RegionErosion, &ho_Region29);
				ClosingCircle(ho_Region29, &ho_Region29, 3.5);
				Connection(ho_Region29, &ho_Region29);
				SelectShape(ho_Region29, &ho_Region29, (HTuple("area").Append("width")),
					"and", (HTuple(200).Append(200)), (HTuple(999999).Append(99999)));
				Union1(ho_Region29, &ho_Region29);

				ShapeTrans(ho_Region29, &ho_Region29, "convex");
				Union2(ho_Region29, ho_Rectangle_top, &ho_Region29);
				ClosingRectangle1(ho_Region29, &ho_Region29, 1, 300);
				OpeningCircle(ho_Region29, &ho_Region29, 3.5);
				DilationRectangle1(ho_Region29, &(*ho_camregion), 25, 25);
			}
			if (0 != (int(hv_Number21 == 11)))
			{

				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				ClosingRectangle1(ho_Region5, &ho_Region5, 200, 1);
				FillUp(ho_Region5, &ho_Region5);
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, ((HTuple("area").Append("width")).Append("height")),
					"and", ((HTuple(40000).Append(550)).Append(50)), ((HTuple(99999999).Append(99999)).Append(200)));
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 75);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));
			}
			if (0 != (int(hv_Number21 == 12)))
			{
				//裁剪
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -200);
				Threshold(ho_ImageSub, &ho_Region29, 180, 255);
				Connection(ho_Region29, &ho_Region29);
				SelectShape(ho_Region29, &ho_Region29, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(50)), (HTuple(999999).Append(300)));
				Union1(ho_Region29, &ho_Region29);
				Intersection(ho_RegionErosion, ho_Region29, &ho_Region29);
				ClosingCircle(ho_Region29, &ho_Region29, 11);
				Connection(ho_Region29, &ho_ConnectedRegions31);
				ShapeTrans(ho_ConnectedRegions31, &ho_ConnectedRegions31, "convex");
				SelectShape(ho_ConnectedRegions31, &ho_SelectedRegions12, "area", "and",
					400, 999999);
				Union1(ho_SelectedRegions12, &ho_RegionUnion33);
				ClosingRectangle1(ho_RegionUnion33, &ho_RegionClosing7, 5, 15);
				Union2(ho_RegionClosing7, ho_Rectangle_bottom, &ho_RegionClosing7);

				FillUp(ho_RegionClosing7, &ho_RegionFillUp14);
				Connection(ho_RegionFillUp14, &ho_ConnectedRegions38);
				OpeningRectangle1(ho_ConnectedRegions38, &ho_ConnectedRegions38, 7, 7);
				SelectShape(ho_ConnectedRegions38, &ho_ConnectedRegions38, "width", "and",
					150, 300);
				OpeningCircle(ho_ConnectedRegions38, &ho_ConnectedRegions38, 5);


				ShapeTrans(ho_ConnectedRegions38, &ho_RegionTrans30, "convex");
				ClosingCircle(ho_RegionTrans30, &ho_RegionTrans30, 135);


				DilationCircle(ho_RegionTrans30, &(*ho_camregion), 10.5);
			}
			if (0 != (int(hv_Number21 == 13)))
			{
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(120).Append(100)), (HTuple(99999).Append(99999)));
				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				Union1(ho_Region27, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				Union1(ho_Region27, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("height").Append("width")),
					"and", (HTuple(100).Append(100)), (HTuple(99999).Append(99999)));
				Union1(ho_Region27, &ho_Region27);

				ClosingCircle(ho_Region27, &ho_Region27, 15);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 20);
				Connection(ho_Region27, &ho_Region27);
				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				SelectShape(ho_Region27, &ho_Region28, (HTuple("height").Append("width")),
					"and", (HTuple(100).Append(100)), (HTuple(99999).Append(250)));

				ShapeTrans(ho_Region28, &ho_Region28, "outer_circle");
				Union2(ho_Region28, ho_Region27, &ho_Region27);
				Union1(ho_Region27, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);

				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);
				Connection(ho_Region27, &ho_ConnectedRegions14);

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions9, (HTuple("width").Append("area")),
					"and", (HTuple(100).Append(500)), (HTuple(400).Append(999999)));

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions_big, (HTuple("width").Append("area")),
					"and", (HTuple(300).Append(200)), (HTuple(680).Append(999999)));
				DilationCircle(ho_SelectedRegions_big, &ho_SelectedRegions_big, 3);
				Union2(ho_SelectedRegions9, ho_SelectedRegions_big, &ho_RegionOpening19);

				Connection(ho_RegionOpening19, &ho_ConnectedRegions39);
				ShapeTrans(ho_ConnectedRegions39, &ho_RegionTrans8, "convex");
				DilationCircle(ho_RegionTrans8, &(*ho_camregion), 7);
			}
			if (0 != (int(hv_Number21 == 14)))
			{


				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);
				OpeningCircle(ho_Region27, &ho_Region27, 3.5);
				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));
				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 30);
				ClosingCircle(ho_Region27, &ho_Region27, 11);
				Connection(ho_Region27, &ho_Region27);
				ShapeTrans(ho_Region27, &ho_Region27, "convex");

				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 100, 1);
				ClosingCircle(ho_Region27, &ho_Region27, 11);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 40);

				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);
				Connection(ho_Region27, &ho_ConnectedRegions14);

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions9, (HTuple("width").Append("area")),
					"and", (HTuple(100).Append(500)), (HTuple(280).Append(999999)));

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions_big, (HTuple("width").Append("area")),
					"and", (HTuple(300).Append(200)), (HTuple(680).Append(999999)));
				DilationCircle(ho_SelectedRegions_big, &ho_SelectedRegions_big, 1);
				Union2(ho_SelectedRegions9, ho_SelectedRegions_big, &ho_RegionOpening19);

				Connection(ho_RegionOpening19, &ho_ConnectedRegions39);
				ShapeTrans(ho_ConnectedRegions39, &ho_RegionTrans8, "convex");
				DilationCircle(ho_RegionTrans8, &(*ho_camregion), 5);


			}
			if (0 != (int(hv_Number21 == 15)))
			{
				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				ClosingRectangle1(ho_Region5, &ho_Region5, 100, 1);
				FillUp(ho_Region5, &ho_Region5);
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 70);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));


				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);

				MeanImage(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -200);
				Threshold(ho_ImageSub, &ho_Region14, 180, 255);
				Intersection(ho_Region14, ho_RegionErosion, &ho_Region14);

				Connection(ho_Region14, &ho_Region14);
				ShapeTrans(ho_Region14, &ho_Region14, "convex");
				SelectShape(ho_Region14, &ho_Region14, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(300)));
				SelectShape(ho_Region14, &ho_Region14, "width", "and", 100, 300);
				Union2(ho_Region14, ho_Rectangle_top, &ho_Region14);
				Union2(ho_Region14, ho_Rectangle_bottom, &ho_Region14);
				Union1(ho_Region14, &ho_Region14);

				ClosingRectangle1(ho_Region14, &ho_Region14, 3, 55);
				Union2(ho_Region14, ho_Rectangle_bottom, &ho_Region14);
				Union2(ho_Region14, ho_Rectangle_top, &ho_Region14);
				FillUp(ho_Region14, &ho_Region14);
				OpeningRectangle1(ho_Region14, &ho_Region14, 25, 25);

				Connection(ho_Region14, &ho_ConnectedRegions40);
				SelectShape(ho_ConnectedRegions40, &ho_SelectedRegions48, "area", "and",
					4000, 9999999);
				SelectShape(ho_SelectedRegions48, &ho_SelectedRegions49, "column", "and",
					700, 1300);
				Union1(ho_SelectedRegions49, &ho_RegionUnion7);
				ClosingRectangle1(ho_RegionUnion7, &ho_RegionClosing4, 45, 25);
				FillUp(ho_RegionClosing4, &ho_RegionFillUp20);
				Connection(ho_RegionFillUp20, &ho_ConnectedRegions41);
				ShapeTrans(ho_ConnectedRegions41, &ho_RegionTrans11, "convex");
				DilationCircle(ho_RegionTrans11, &(*ho_camregion), 20.5);

			}
			if (0 != (int(hv_Number21 == 16)))
			{
				//裁剪
				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 300);
				ClosingRectangle1(ho_Region5, &ho_Region5, 100, 1);
				FillUp(ho_Region5, &ho_Region5);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, (HTuple("width").Append("height")),
					"and", (HTuple(650).Append(60)), (HTuple(99999).Append(200)));
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 70);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));
			}
			if (0 != (int(hv_Number21 == 17)))
			{
				//裁剪
				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 50);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));
			}
			if (0 != (int(hv_Number21 == 18)))
			{
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 425, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);

				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(700).Append(100)), (HTuple(99999).Append(99999)));
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 35);
				ClosingRectangle1(ho_Region27, &ho_Region27, 135, 1);
				Connection(ho_Region27, &ho_Region27);
				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 135);

				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 25, 25);
				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				Connection(ho_Region27, &ho_ConnectedRegions14);

				DilationCircle(ho_ConnectedRegions14, &(*ho_camregion), 10.5);

			}
			if (0 != (int(hv_Number21 == 19)))
			{
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -200);
				Threshold(ho_ImageSub, &ho_Region29, 180, 255);
				Intersection(ho_Region29, ho_RegionErosion, &ho_Region29);
				Connection(ho_Region29, &ho_Region29);
				SelectShape(ho_Region29, &ho_Region29, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));
				Union1(ho_Region29, &ho_Region29);
				ClosingRectangle1(ho_Region29, &ho_Region29, 1, 121);
				ClosingRectangle1(ho_Region29, &ho_Region29, 121, 1);
				FillUp(ho_Region29, &ho_Region29);
				Union2(ho_Region29, ho_Rectangle_bottom, &ho_Region29);
				//union2 (Region29, Rectangle_top, Region29)
				ClosingRectangle1(ho_Region29, &ho_Region29, 1, 121);
				FillUp(ho_Region29, &ho_Region29);
				OpeningCircle(ho_Region29, &ho_Region29, 55);




				Connection(ho_Region29, &ho_ConnectedRegions31);

				SelectShape(ho_ConnectedRegions31, &ho_SelectedRegions12, "area", "and",
					350, 999999);
				Union1(ho_SelectedRegions12, &ho_RegionUnion33);
				ClosingRectangle1(ho_RegionUnion33, &ho_RegionClosing7, 10, 15);
				FillUp(ho_RegionClosing7, &ho_RegionFillUp14);
				Connection(ho_RegionFillUp14, &ho_ConnectedRegions38);
				SelectShape(ho_ConnectedRegions38, &ho_SelectedRegions32, (HTuple("column").Append("width")),
					"and", (HTuple(750).Append(60)), (HTuple(1300).Append(9999)));
				Union1(ho_SelectedRegions32, &ho_RegionUnion34);

				ShapeTrans(ho_RegionUnion34, &ho_RegionTrans30, "convex");
				DilationCircle(ho_RegionTrans30, &(*ho_camregion), 10.5);

			}
			if (0 != (int(hv_Number21 == 20)))
			{

				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 121);
				ClosingRectangle1(ho_Region27, &ho_Region27, 121, 1);
				FillUp(ho_Region27, &ho_Region27);

				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 521);
				FillUp(ho_Region27, &ho_Region27);
				OpeningCircle(ho_Region27, &ho_Region27, 15);


				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 35);
				ClosingRectangle1(ho_Region27, &ho_Region27, 175, 1);
				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);

				Connection(ho_Region27, &ho_ConnectedRegions14);
				ShapeTrans(ho_ConnectedRegions14, &ho_ConnectedRegions14, "convex");
				DilationCircle(ho_ConnectedRegions14, &(*ho_camregion), 10.5);
			}
			if (0 != (int(hv_Number21 == 21)))
			{
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 425, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian5, 15, 15);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture5, "el", 5, 7);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture8, "le", 5, 7);
				AddImage(ho_ImageTexture5, ho_ImageTexture8, &ho_ImageResult19, 2, -100);
				Threshold(ho_ImageResult19, &ho_Region14, 180, 255);
				Intersection(ho_Region14, ho_RegionErosion, &ho_Region14);
				OpeningCircle(ho_Region14, &ho_Region14, 3.5);
				Connection(ho_Region14, &ho_Region14);

				SelectShape(ho_Region14, &ho_Region14, (HTuple("area").Append("width")),
					"or", (HTuple(700).Append(100)), (HTuple(99999).Append(99999)));
				Union1(ho_Region14, &ho_Region14);

				ClosingRectangle1(ho_Region14, &ho_Region14, 1, 151);
				Connection(ho_Region14, &ho_Region14);
				ShapeTrans(ho_Region14, &ho_Region14, "rectangle1");
				Union1(ho_Region14, &ho_Region14);
				Connection(ho_Region14, &ho_Region14);
				ShapeTrans(ho_Region14, &ho_Region14, "rectangle1");
				SelectShape(ho_Region14, &ho_Region14, "width", "and", 200, 500);
				SortRegion(ho_Region14, &ho_Region14, "first_point", "true", "row");
				SelectObj(ho_Region14, &ho_ObjectSelected, 1);

				if (0 != hv_BoolInter)
				{
					ErosionRectangle1(ho_ObjectSelected, &ho_ObjectSelected, 60, 35);
				}
				RegionFeatures(ho_ObjectSelected, "width", &hv_width);
				OpeningCircle(ho_ObjectSelected, &ho_RegionClosing, hv_width / 2);
				SelectObj(ho_Region14, &ho_ObjectSelected, 2);

				if (0 != hv_BoolInter)
				{
					ErosionRectangle1(ho_ObjectSelected, &ho_ObjectSelected, 60, 35);
				}
				RegionFeatures(ho_ObjectSelected, "width", &hv_width);
				OpeningCircle(ho_ObjectSelected, &ho_Region14, (hv_width / 2) - 1);
				Union2(ho_Region14, ho_RegionClosing, &ho_Region14);

				Union2(ho_Region14, ho_Rectangle_top, &ho_Region14);

				Union2(ho_Region14, ho_Rectangle_bottom, &ho_Region14);
				ClosingRectangle1(ho_Region14, &ho_Region14, 3, 55);
				Union1(ho_Region14, &ho_Region14);
				Connection(ho_Region14, &ho_Region14);




				ClosingRectangle1(ho_Region14, &ho_Region14, 3, 525);
				Union2(ho_Region14, ho_Rectangle_bottom, &ho_Region14);
				Union2(ho_Region14, ho_Rectangle_top, &ho_Region14);
				FillUp(ho_Region14, &ho_Region14);
				OpeningRectangle1(ho_Region14, &ho_Region14, 25, 25);

				Connection(ho_Region14, &ho_ConnectedRegions40);
				SelectShape(ho_ConnectedRegions40, &ho_SelectedRegions48, "area", "and",
					4000, 9999999);
				SelectShape(ho_SelectedRegions48, &ho_SelectedRegions49, "column", "and",
					700, 1300);
				Union1(ho_SelectedRegions49, &ho_RegionUnion7);
				ClosingRectangle1(ho_RegionUnion7, &ho_RegionClosing4, 45, 25);
				FillUp(ho_RegionClosing4, &ho_RegionFillUp20);
				Connection(ho_RegionFillUp20, &ho_ConnectedRegions41);
				ShapeTrans(ho_ConnectedRegions41, &ho_RegionTrans11, "convex");
				DilationCircle(ho_RegionTrans11, &(*ho_camregion), 5);
			}
			if (0 != (int(hv_Number21 == 22)))
			{

				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);

				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 121);


				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));

				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				Union1(ho_Region27, &ho_Region27);

				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);

				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 300);

				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);

				Union1(ho_Region27, &ho_Region27);
				ClosingCircle(ho_Region27, &ho_Region27, 11);
				ClosingRectangle1(ho_Region27, &ho_Region27, 100, 1);

				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);
				Connection(ho_Region27, &ho_ConnectedRegions14);

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions9, (HTuple("width").Append("area")),
					"and", (HTuple(100).Append(500)), (HTuple(280).Append(999999)));

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions_big, (HTuple("width").Append("area")),
					"and", (HTuple(300).Append(200)), (HTuple(680).Append(999999)));
				DilationCircle(ho_SelectedRegions_big, &ho_SelectedRegions_big, 10);
				Union2(ho_SelectedRegions9, ho_SelectedRegions_big, &ho_RegionOpening19);

				Connection(ho_RegionOpening19, &ho_ConnectedRegions39);
				ShapeTrans(ho_ConnectedRegions39, &ho_RegionTrans8, "convex");
				DilationCircle(ho_RegionTrans8, &(*ho_camregion), 3);


			}
			if (0 != (int(hv_Number21 == 23)))
			{
				//裁剪
				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 50);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));

				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);

				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				Union1(ho_Region27, &ho_Region27);
				ClosingCircle(ho_Region27, &ho_Region27, 11);
				ClosingRectangle1(ho_Region27, &ho_Region27, 100, 1);

				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);
				Connection(ho_Region27, &ho_ConnectedRegions14);
				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions4, "width", "and",
					250, 99999);
				DilationCircle(ho_SelectedRegions4, &(*ho_camregion), 15.5);

			}
			if (0 != (int(hv_Number21 == 24)))
			{
				//裁剪
				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, (HTuple("width").Append("height")),
					"and", (HTuple(550).Append(50)), (HTuple(99999).Append(200)));
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 50);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));
			}
			if (0 != (int(hv_Number21 == 27)))
			{

				//裁剪
				GenRectangle1(&ho_Rectangle11, 1024, 497, 1455, 1766);
				ReduceDomain(ho_ImageReduced9, ho_Rectangle11, &ho_ImageReduced12);
				MeanImage(ho_ImageReduced12, &ho_ImageMedian11, 10, 10);
				ReduceDomain(ho_ImageMedian11, ho_RegionErosion2, &ho_ImageReduced10);
				TextureLaws(ho_ImageReduced10, &ho_ImageTexture6, "el", 5, 7);
				TextureLaws(ho_ImageReduced10, &ho_ImageTexture7, "le", 5, 7);
				AddImage(ho_ImageTexture6, ho_ImageTexture7, &ho_ImageResult3, 2, -100);
				MeanImage(ho_ImageResult3, &ho_ImageMedian10, 15, 1);
				Threshold(ho_ImageResult3, &ho_Region6, 180, 255);
				Connection(ho_Region6, &ho_ConnectedRegions5);
				RankRegion(ho_ConnectedRegions5, &ho_RegionCount, 80, 15, 1000);
				ClosingRectangle1(ho_RegionCount, &ho_RegionOpening23, 100, 5);
				Union1(ho_RegionOpening23, &ho_RegionUnion23);
				ShapeTrans(ho_RegionUnion23, &ho_RegionTrans12, "rectangle1");
				RegionFeatures(ho_RegionTrans12, "height", &hv_Value4);
				if (0 != (int(hv_Value4 < 120)))
				{
					DilationRectangle1(ho_RegionTrans12, &ho_RegionDilation4, 1, 140);
					MoveRegion(ho_RegionDilation4, &ho_RegionTrans12, 65, 0);
				}
				DilationRectangle1(ho_RegionTrans12, &ho_RegionDilation8, 600, 10);
				Union1(ho_RegionDilation8, &ho_RegionUnion14);
				Intersection(ho_RegionUnion14, ho_RegionUnion, &(*ho_camregion));
			}
			if (0 != (int(hv_Number21 == 29)))
			{

				//裁剪
				GenRectangle1(&ho_Rectangle5, 364, 380, 967, 1726);
				ReduceDomain(ho_Image, ho_Rectangle5, &ho_ImageReduced1);
				MeanImage(ho_ImageReduced1, &ho_ImageMedian11, 10, 10);
				TextureLaws(ho_ImageMedian11, &ho_ImageTexture6, "el", 5, 7);
				TextureLaws(ho_ImageMedian11, &ho_ImageTexture7, "le", 5, 7);
				AddImage(ho_ImageTexture6, ho_ImageTexture7, &ho_ImageResult3, 2, -100);
				MeanImage(ho_ImageResult3, &ho_ImageMedian10, 15, 1);
				Threshold(ho_ImageResult3, &ho_Region6, 150, 255);
				Connection(ho_Region6, &ho_ConnectedRegions5);
				RankRegion(ho_ConnectedRegions5, &ho_RegionCount, 80, 20, 800);
				ClosingRectangle1(ho_RegionCount, &ho_RegionOpening23, 100, 5);
				Union1(ho_RegionOpening23, &ho_RegionUnion23);
				ShapeTrans(ho_RegionUnion23, &ho_RegionTrans12, "rectangle1");
				DilationRectangle1(ho_RegionTrans12, &ho_RegionDilation8, 5, 5);
				Union1(ho_RegionDilation8, &(*ho_camregion));

			}
			Union1((*ho_camregion), &(*ho_camregion));



		}
		else if (0 != (int(hv_Substring == HTuple("2_2"))))
		{
			if (true)
			{
				if (0 != (int(hv_Number21 == 25)))
				{
					GenRectangle1(&ho_Rectangle3, 0, 20, 737, 2041);
					ReduceDomain(ho_Image, ho_Rectangle3, &ho_ImageReduced7);
					MultImage(ho_ImageReduced7, ho_ImageReduced7, &ho_ImageResult4, 0.01, 0);
					Threshold(ho_ImageResult4, &ho_Region, 85, 255);
					FillUp(ho_Region, &ho_RegionFillUp3);
					Connection(ho_RegionFillUp3, &ho_ConnectedRegions20);
					SelectShape(ho_ConnectedRegions20, &ho_SelectedRegions43, (HTuple("area").Append("width")),
						"and", (HTuple(1500).Append(700)), (HTuple(999999999).Append(1500)));
					SelectShape(ho_ConnectedRegions20, &ho_SelectedRegions44, "height", "and",
						400, 99999);
					Union2(ho_SelectedRegions44, ho_SelectedRegions43, &ho_RegionUnion15);
					FillUp(ho_RegionUnion15, &ho_RegionFillUp1);
					Union1(ho_RegionFillUp1, &ho_RegionUnion2);
					ClosingRectangle1(ho_RegionUnion2, &ho_RegionClosing5, 1500, 200);
					Connection(ho_RegionClosing5, &ho_ConnectedRegions1);
					SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions, (HTuple("height").Append("width")),
						"and", (HTuple(400).Append(300)), (HTuple(3000).Append(1600)));
					Union1(ho_SelectedRegions, &ho_RegionUnion10);
					ShapeTrans(ho_RegionUnion10, &ho_ConnectedRegions21, "convex");
					OpeningRectangle1(ho_ConnectedRegions21, &ho_RegionOpening20, 3, 5);
					ShapeTrans(ho_RegionOpening20, &ho_RegionTrans6, "rectangle1");
					MoveRegion(ho_RegionTrans6, &ho_RegionUnion, 5, 0);
					//提取区域
					SmallestRectangle1(ho_RegionUnion, &hv_Row112, &hv_Column112, &hv_Row212,
						&hv_Column212);
					GenRectangle1(&ho_RegionUnion, 0, hv_Column112, 2048, hv_Column212);
					ReduceDomain(ho_Image, ho_RegionUnion, &ho_ImageReduced9);
					AreaCenter((*ho_camregion), &hv_Area6, &hv_Row3, &hv_Column3);
				}
				else
				{




					MultImage(ho_Image, ho_Image, &ho_ImageResult4, 0.01, 0);
					Threshold(ho_ImageResult4, &ho_Region, 85, 255);
					FillUp(ho_Region, &ho_RegionFillUp3);
					Connection(ho_RegionFillUp3, &ho_ConnectedRegions20);
					SelectShape(ho_ConnectedRegions20, &ho_SelectedRegions43, (HTuple("area").Append("width")),
						"and", (HTuple(1500).Append(700)), (HTuple(999999999).Append(1500)));


					SelectShape(ho_SelectedRegions43, &ho_SelectedRegions44, "height", "and",
						400, 99999);
					Union2(ho_SelectedRegions44, ho_SelectedRegions43, &ho_RegionUnion15);
					FillUp(ho_RegionUnion15, &ho_RegionFillUp1);
					Union1(ho_RegionFillUp1, &ho_RegionUnion2);
					ClosingRectangle1(ho_RegionUnion2, &ho_RegionClosing5, 1500, 200);
					Connection(ho_RegionClosing5, &ho_ConnectedRegions1);
					SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions, (HTuple("height").Append("width")),
						"and", (HTuple(400).Append(300)), (HTuple(3000).Append(1600)));
					Union1(ho_SelectedRegions, &ho_RegionUnion10);
					OpeningRectangle1(ho_RegionUnion10, &ho_RegionUnion10, 1, 1900);
					ShapeTrans(ho_RegionUnion10, &ho_ConnectedRegions21, "convex");
					OpeningRectangle1(ho_ConnectedRegions21, &ho_RegionOpening20, 3, 5);
					ShapeTrans(ho_RegionOpening20, &ho_RegionTrans6, "rectangle1");
					MoveRegion(ho_RegionTrans6, &ho_RegionUnion, 5, 0);
					//提取区域
					SmallestRectangle1(ho_RegionUnion, &hv_Row112, &hv_Column112, &hv_Row212,
						&hv_Column212);
					if (0 != (int((hv_Row112.TupleLength()) == 0)))
					{
						AutoThreshold(ho_Image, &ho_RegionUnion, 2);
						Connection(ho_RegionUnion, &ho_RegionUnion);
						SelectShapeStd(ho_RegionUnion, &ho_RegionUnion, "max_area", 70);
						ShapeTrans(ho_RegionUnion, &ho_RegionUnion, "rectangle1");
					}
					else
					{
						GenRectangle1(&ho_RegionUnion, 0, hv_Column112, 2048, hv_Column212);
					}
					ReduceDomain(ho_Image, ho_RegionUnion, &ho_ImageReduced9);
					AreaCenter((*ho_camregion), &hv_Area6, &hv_Row3, &hv_Column3);
				}
				if (0 != (int(hv_Number21 == 2)))
				{
					//裁剪
					GenRectangle1(&ho_Rectangle9, 1717, 412, 2099, 1616);
					ReduceDomain(ho_ImageReduced9, ho_Rectangle9, &ho_ImageReduced6);
					MeanImage(ho_ImageReduced6, &ho_ImageMedian11, 10, 10);
					MeanImage(ho_ImageMedian11, &ho_ImageMedian10, 15, 1);
					VarThreshold(ho_ImageMedian10, &ho_Region13, 50, 800, 0.2, 25, "dark");
					Connection(ho_Region13, &ho_ConnectedRegions5);
					ClosingRectangle1(ho_ConnectedRegions5, &ho_RegionOpening23, 100, 5);
					SelectShape(ho_RegionOpening23, &ho_SelectedRegions3, (HTuple("width").Append("area")),
						"and", (HTuple(200).Append(400)), (HTuple(1200).Append(999999)));
					Union1(ho_SelectedRegions3, &ho_RegionUnion23);
					ShapeTrans(ho_RegionUnion23, &ho_RegionTrans12, "rectangle1");
					DilationRectangle1(ho_RegionTrans12, &ho_RegionDilation, 1000, 1);
					Intersection(ho_RegionDilation, ho_ImageReduced9, &(*ho_camregion));
				}
				if (0 != (int(hv_Number21 == 3)))
				{
					//裁剪
					MeanImage(ho_ImageReduced9, &ho_ImageMedian7, 1, 15);
					MultImage(ho_ImageMedian7, ho_ImageMedian7, &ho_ImageResult12, 0.01, 0);
					Threshold(ho_ImageResult12, &ho_Regions3, 0, 60);
					FillUp(ho_Regions3, &ho_RegionFillUp21);
					DilationRectangle1(ho_RegionFillUp21, &ho_RegionDilation24, 9, 1);
					FillUp(ho_RegionDilation24, &ho_RegionFillUp25);
					OpeningCircle(ho_RegionFillUp25, &ho_RegionOpening8, 3.5);
					OpeningRectangle1(ho_RegionOpening8, &ho_RegionOpening18, 49, 1);
					Connection(ho_RegionOpening18, &ho_ConnectedRegions17);
					SelectShape(ho_ConnectedRegions17, &ho_SelectedRegions20, "area", "and",
						23689, 195353);
					MoveRegion(ho_SelectedRegions20, &ho_RegionMoved7, 1, 5);
					DilationRectangle1(ho_RegionMoved7, &(*ho_camregion), 55, 30);
				}
				if (0 != (int(hv_Number21 == 4)))
				{

					MeanImage(ho_ImageReduced9, &ho_ImageMedian, 1, 25);
					MultImage(ho_ImageMedian, ho_ImageMedian, &ho_ImageResult11, 0.01, 0);
					Threshold(ho_ImageResult11, &ho_Regions2, 0, 61);
					FillUp(ho_Regions2, &ho_RegionFillUp11);
					OpeningRectangle1(ho_RegionFillUp11, &ho_RegionOpening15, 25, 1);
					DilationRectangle1(ho_RegionOpening15, &(*ho_camregion), 15, 15);
				}
				if (0 != (int(hv_Number21 == 5)))
				{
					Threshold(ho_ImageReduced9, &ho_Region16, 0, 90);
					Connection(ho_Region16, &ho_ConnectedRegions35);
					OpeningCircle(ho_ConnectedRegions35, &ho_RegionOpening12, 3.5);
					SelectShape(ho_RegionOpening12, &ho_SelectedRegions34, "area", "and", 85000,
						1999999);
					ShapeTrans(ho_SelectedRegions34, &ho_RegionTrans17, "rectangle1");
					DilationRectangle1(ho_RegionTrans17, &(*ho_camregion), 75, 15);

				}
				if (0 != (int(hv_Number21 == 6)))
				{

					MeanImage(ho_ImageReduced9, &ho_ImageMedian3, 15, 1);

					MultImage(ho_ImageMedian3, ho_ImageMedian3, &ho_ImageResult5, 0.008, 0);
					ErosionRectangle1(ho_RegionUnion, &ho_RegionDilation, 325, 1);
					ReduceDomain(ho_ImageResult5, ho_RegionDilation, &ho_ImageResult5);
					BinaryThreshold(ho_ImageResult5, &ho_Region16, "max_separability", "dark",
						&hv_UsedThreshold);
					FillUp(ho_Region16, &ho_RegionFillUp28);
					Connection(ho_RegionFillUp28, &ho_ConnectedRegions8);
					SelectShape(ho_ConnectedRegions8, &ho_SelectedRegions8, (HTuple("column").Append("width")),
						"and", (HTuple(872.03).Append(200)), (HTuple(1263.25).Append(400)));
					ShapeTrans(ho_SelectedRegions8, &ho_RegionTrans5, "rectangle1");
					DilationRectangle1(ho_RegionTrans5, &ho_RegionDilation14, 59, 115);
					MoveRegion(ho_RegionDilation14, &ho_RegionDilation14, 50, 1);
					RegionFeatures(ho_RegionDilation14, "width", &hv_Value);
					OpeningCircle(ho_RegionDilation14, &ho_RegionOpening24, (hv_Value - 5) / 2);
					MoveRegion(ho_RegionOpening24, &ho_RegionMoved1, 200, 1);
					Union2(ho_RegionOpening24, ho_RegionMoved1, &(*ho_camregion));
					MoveRegion((*ho_camregion), &(*ho_camregion), -20, 1);

				}
				if (0 != (int(hv_Number21 == 7)))
				{
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult10, 0.01,
						0);
					MedianImage(ho_ImageResult10, &ho_ImageResult10, "circle", 8, "mirrored");
					ErosionRectangle1(ho_RegionUnion, &ho_RegionDilation, 325, 1);
					ReduceDomain(ho_ImageResult10, ho_RegionDilation, &ho_ImageResult10);
					BinaryThreshold(ho_ImageResult10, &ho_Region19, "max_separability", "dark",
						&hv_UsedThreshold);
					FillUp(ho_Region19, &ho_RegionFillUp29);
					Connection(ho_RegionFillUp29, &ho_ConnectedRegions19);
					SelectShape(ho_ConnectedRegions19, &ho_SelectedRegions14, (HTuple("column").Append("width")),
						"and", (HTuple(872.03).Append(200)), (HTuple(1263.25).Append(400)));
					ShapeTrans(ho_SelectedRegions14, &ho_RegionTrans27, "rectangle1");
					DilationRectangle1(ho_RegionTrans27, &ho_RegionDilation20, 55, 85);
					MoveRegion(ho_RegionDilation20, &ho_RegionDilation20, -40, 1);

					RegionFeatures(ho_RegionDilation20, "width", &hv_Value1);
					if (0 != (hv_Value1.TupleLength()))
					{
						OpeningCircle(ho_RegionDilation20, &ho_RegionOpening28, hv_Value1 / 2);
						MoveRegion(ho_RegionOpening28, &ho_RegionMoved6, -200, 1);
						Union2(ho_RegionOpening28, ho_RegionMoved6, &(*ho_camregion));
						MoveRegion((*ho_camregion), &(*ho_camregion), 20, 1);
					}
				}
				if (0 != (int(hv_Number21 == 8)))
				{

					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult13, 0.009,
						0);
					Threshold(ho_ImageResult13, &ho_Region11, 0, 128);
					OpeningCircle(ho_Region11, &ho_RegionOpening19, 8.5);
					Connection(ho_RegionOpening19, &ho_ConnectedRegions24);
					SelectShape(ho_RegionOpening19, &ho_SelectedRegions22, "area", "and", 427667,
						789331);
					ShapeTrans(ho_SelectedRegions22, &ho_RegionTrans15, "convex");
					DilationRectangle1(ho_RegionTrans15, &(*ho_camregion), 15, 15);
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult46, 0.04,
						0);
					Threshold(ho_ImageResult46, &ho_Region43, 0, 45);
					OpeningCircle(ho_Region43, &ho_RegionOpening29, 3.5);
					Connection(ho_RegionOpening29, &ho_ConnectedRegions77);
					SelectShape(ho_ConnectedRegions77, &ho_SelectedRegions107, "row", "and",
						938.08, 2712.57);
					SelectShape(ho_SelectedRegions107, &ho_SelectedRegions108, "area", "and",
						10536, 190203);
					Union2(ho_SelectedRegions108, (*ho_camregion), &(*ho_camregion));
					Threshold(ho_ImageResult46, &ho_Region45, 0, 175);
					ClosingRectangle1(ho_Region45, &ho_Region45, 1, 50);
					ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
					Intersection(ho_RegionErosion, ho_Region45, &ho_Region45);
					Connection(ho_Region45, &ho_ConnectedRegions79);
					SelectShape(ho_ConnectedRegions79, &ho_SelectedRegions109, "area", "and",
						946.4, 186137);
					Union1(ho_SelectedRegions109, &ho_RegionUnion52);
					GenEmptyObj(&ho_EmptyObject4);
					if (0 != (ho_SelectedRegions109 != ho_EmptyObject4))
					{
						ShapeTrans(ho_RegionUnion52, &ho_RegionTrans54, "rectangle1");
						DilationRectangle1(ho_RegionTrans54, &ho_RegionDilation44, 15, 15);
						RegionFeatures(ho_RegionDilation44, "width", &hv_Value14);
						OpeningCircle(ho_RegionDilation44, &ho_RegionOpening79, hv_Value14 / 2);
						MoveRegion(ho_RegionOpening79, &ho_RegionMoved24, 150, 1);
						Union2(ho_RegionOpening79, ho_RegionMoved24, &ho_RegionUnion51);
						DilationRectangle1(ho_RegionUnion51, &ho_RegionUnion51, 15, 15);
						Union2(ho_RegionUnion51, (*ho_camregion), &(*ho_camregion));
					}
				}
				if (0 != (int(hv_Number21 == 9)))
				{
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult13, 0.009,
						0);
					Threshold(ho_ImageResult13, &ho_Region11, 0, 128);
					ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 225, 1);
					Intersection(ho_Region11, ho_RegionErosion, &ho_Region11);


					OpeningCircle(ho_Region11, &ho_RegionOpening19, 58.5);
					Connection(ho_RegionOpening19, &ho_ConnectedRegions24);
					SelectShape(ho_ConnectedRegions24, &ho_SelectedRegions22, "area", "and",
						2000, 789331);
					Union1(ho_SelectedRegions22, &ho_RegionUnion49);
					ShapeTrans(ho_RegionUnion49, &(*ho_camregion), "rectangle1");

					DilationRectangle1((*ho_camregion), &(*ho_camregion), 71, 271);


				}
				if (0 != (int(hv_Number21 == 10)))
				{
					//裁剪
					GenRectangle1(&ho_Rectangle9, 1717, 412, 2099, 1616);
					ReduceDomain(ho_ImageReduced9, ho_Rectangle9, &ho_ImageReduced6);
					MeanImage(ho_ImageReduced6, &ho_ImageMedian11, 10, 10);
					MeanImage(ho_ImageMedian11, &ho_ImageMedian10, 15, 1);
					VarThreshold(ho_ImageMedian10, &ho_Region13, 5, 500, 0.2, 15, "dark");
					Connection(ho_Region13, &ho_ConnectedRegions5);
					ClosingRectangle1(ho_ConnectedRegions5, &ho_RegionOpening23, 100, 5);
					SelectShape(ho_RegionOpening23, &ho_SelectedRegions3, (HTuple("width").Append("area")),
						"and", (HTuple(200).Append(400)), (HTuple(1200).Append(999999)));
					Union1(ho_SelectedRegions3, &ho_RegionUnion23);
					ShapeTrans(ho_RegionUnion23, &ho_RegionTrans12, "rectangle1");
					DilationRectangle1(ho_RegionTrans12, &ho_RegionDilation, 1000, 1);
					Intersection(ho_RegionDilation, ho_ImageReduced9, &(*ho_camregion));
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult47, 0.01,
						0);
					MedianImage(ho_ImageResult47, &ho_ImageMedian31, "circle", 16, "mirrored");
					Threshold(ho_ImageMedian31, &ho_Region44, 0, 30);
					OpeningCircle(ho_Region44, &ho_RegionOpening78, 3.5);
					Connection(ho_RegionOpening78, &ho_ConnectedRegions78);
					SelectShape(ho_ConnectedRegions78, &(*ho_camregion), (HTuple("area").Append("width")),
						"and", (HTuple(2073).Append(35)), (HTuple(30000).Append(9999)));

					Union2((*ho_camregion), ho_Rectangle_top, &(*ho_camregion));
					ClosingRectangle1((*ho_camregion), &(*ho_camregion), 1, 500);
					OpeningCircle((*ho_camregion), &(*ho_camregion), 3.5);
					DilationCircle((*ho_camregion), &(*ho_camregion), 13.5);
				}
				if (0 != (int(hv_Number21 == 11)))
				{
					//裁剪
					GenRectangle1(&ho_Rectangle9, 0, 506, 2047, 1816);
					ReduceDomain(ho_ImageReduced9, ho_Rectangle9, &ho_ImageReduced6);
					MeanImage(ho_ImageReduced6, &ho_ImageMedian11, 10, 10);
					MultImage(ho_ImageMedian11, ho_ImageMedian11, &ho_ImageResult8, 0.008,
						0);
					Threshold(ho_ImageResult8, &ho_Region17, 0, 50);
					FillUp(ho_Region17, &ho_RegionFillUp8);
					OpeningRectangle1(ho_RegionFillUp8, &ho_RegionOpening17, 20, 1);
					DilationRectangle1(ho_RegionOpening17, &(*ho_camregion), 15, 28);

				}
				if (0 != (int(hv_Number21 == 12)))
				{

					//裁剪
					GenRectangle1(&ho_Rectangle9, 1217, 412, 2099, 1616);

					ReduceDomain(ho_ImageReduced9, ho_Rectangle9, &ho_ImageReduced6);
					MultImage(ho_ImageReduced6, ho_ImageReduced6, &ho_ImageResult27, 0.01,
						0);
					MeanImage(ho_ImageResult27, &ho_ImageResult27, 10, 10);
					MeanImage(ho_ImageResult27, &ho_ImageMedian10, 15, 1);

					ErosionRectangle1(ho_RegionUnion, &ho_RegionDilation, 325, 1);
					Intersection(ho_RegionDilation, ho_Rectangle9, &ho_Rectangle9);
					ReduceDomain(ho_ImageMedian10, ho_Rectangle9, &ho_ImageMedian10);
					BinaryThreshold(ho_ImageMedian10, &ho_Region13, "max_separability", "dark",
						&hv_UsedThreshold);

					Connection(ho_Region13, &ho_ConnectedRegions5);
					ClosingRectangle1(ho_ConnectedRegions5, &ho_RegionOpening23, 100, 5);
					SelectShape(ho_RegionOpening23, &ho_SelectedRegions3, (HTuple("width").Append("area")),
						"and", (HTuple(10).Append(1900)), (HTuple(1200).Append(999999)));
					SelectShape(ho_SelectedRegions3, &ho_SelectedRegions40, "column", "and",
						963.03, 2047.72);
					ShapeTrans(ho_SelectedRegions40, &ho_SelectedRegions3, "outer_circle");
					DilationRectangle1(ho_SelectedRegions3, &ho_RegionDilation, 10, 10);
					Intersection(ho_RegionDilation, ho_ImageReduced9, &(*ho_camregion));
				}
				if (0 != (int(hv_Number21 == 13)))
				{
					//test
					MeanImage(ho_ImageReduced9, &ho_ImageMedian4, 25, 1);
					MultImage(ho_ImageMedian4, ho_ImageMedian4, &ho_ImageResult6, 0.009, 0);
					Threshold(ho_ImageResult6, &ho_Region8, 0, 70);
					FillUp(ho_Region8, &ho_RegionFillUp2);

					Connection(ho_RegionFillUp2, &ho_ConnectedRegions6);
					SelectShape(ho_ConnectedRegions6, &ho_SelectedRegions6, (HTuple("area").Append("width")),
						"and", (HTuple(6890).Append(100)), (HTuple(1.74141e+06).Append(600)));
					SelectShape(ho_SelectedRegions6, &ho_SelectedRegions1, "column", "and",
						874.31, 1280.96);
					ShapeTrans(ho_SelectedRegions1, &ho_RegionTrans35, "convex");
					Union1(ho_RegionTrans35, &ho_RegionUnion24);
					DilationRectangle1(ho_RegionUnion24, &(*ho_camregion), 22, 25);

				}
				if (0 != (int(hv_Number21 == 14)))
				{

					MedianImage(ho_ImageReduced9, &ho_ImageReduced9, "circle", 9, "mirrored");
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult18, 0.01,
						0);
					Threshold(ho_ImageResult18, &ho_Region12, 0, 60);
					Connection(ho_Region12, &ho_ConnectedRegions27);
					SelectShape(ho_ConnectedRegions27, &ho_SelectedRegions2, (HTuple("area").Append("ratio")),
						"and", (HTuple(10050).Append(0.2)), (HTuple(99999).Append(3)));
					ShapeTrans(ho_SelectedRegions2, &ho_RegionTrans7, "convex");
					Union1(ho_RegionTrans7, &ho_RegionUnion14);
					DilationCircle(ho_RegionUnion14, &(*ho_camregion), 8.5);
					Threshold(ho_ImageResult18, &ho_Region24, 0, 90);
					ClosingRectangle1(ho_Region24, &ho_RegionClosing1, 45, 45);
					FillUp(ho_RegionClosing1, &ho_RegionFillUp18);
					Connection(ho_RegionFillUp18, &ho_ConnectedRegions32);
					Connection(ho_ConnectedRegions32, &ho_ConnectedRegions33);
					SelectShape(ho_ConnectedRegions33, &ho_SelectedRegions27, (HTuple("area").Append("column")),
						"and", (HTuple(256).Append(795.25)), (HTuple(468464).Append(1263.25)));
					ShapeTrans(ho_SelectedRegions27, &ho_RegionTrans25, "convex");
					DilationRectangle1(ho_RegionTrans25, &ho_RegionDilation2, 25, 35);

					Union2((*ho_camregion), ho_RegionDilation2, &(*ho_camregion));
					ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
					Intersection(ho_RegionErosion, (*ho_camregion), &(*ho_camregion));
				}
				if (0 != (int(hv_Number21 == 15)))
				{
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult9, 0.008,
						0);
					Threshold(ho_ImageResult9, &ho_Region9, 0, 50);
					FillUp(ho_Region9, &ho_RegionFillUp9);
					OpeningCircle(ho_RegionFillUp9, &ho_RegionOpening22, 5.5);
					OpeningRectangle1(ho_RegionOpening22, &ho_RegionOpening32, 25, 1);
					Connection(ho_RegionOpening32, &ho_ConnectedRegions25);
					SelectShape(ho_ConnectedRegions25, &ho_SelectedRegions13, (HTuple("row").Append("area")),
						"and", (HTuple(0).Append(6032.91)), (HTuple(311.7).Append(57221.2)));
					ShapeTrans(ho_SelectedRegions13, &ho_RegionTrans3, "outer_circle");
					SelectShape(ho_ConnectedRegions25, &ho_SelectedRegions17, (HTuple("row").Append("area")),
						"and", (HTuple(392.14).Append(80255.9)), (HTuple(810.79).Append(154479)));
					Union2(ho_RegionTrans3, ho_SelectedRegions17, &ho_RegionUnion6);
					SelectShape(ho_ConnectedRegions25, &ho_SelectedRegions18, (HTuple("row").Append("area")),
						"and", (HTuple(0).Append(50)), (HTuple(100).Append(154479)));

					Union2(ho_RegionUnion6, ho_SelectedRegions18, &ho_RegionUnion6);

					DilationRectangle1(ho_RegionUnion6, &(*ho_camregion), 30, 10);




				}
				if (0 != (int(hv_Number21 == 16)))
				{
					Threshold(ho_ImageReduced9, &ho_Region9, 0, 60);
					FillUp(ho_Region9, &ho_RegionFillUp4);
					Connection(ho_RegionFillUp4, &ho_ConnectedRegions25);
					OpeningCircle(ho_ConnectedRegions25, &ho_RegionOpening13, 15.5);
					DilationRectangle1(ho_RegionOpening13, &(*ho_camregion), 25, 25);

				}
				if (0 != (int(hv_Number21 == 17)))
				{
					Threshold(ho_ImageReduced9, &ho_Region9, 0, 60);
					FillUp(ho_Region9, &ho_RegionFillUp4);
					Connection(ho_RegionFillUp4, &ho_ConnectedRegions25);
					OpeningRectangle1(ho_ConnectedRegions25, &ho_RegionOpening13, 125, 1);
					Connection(ho_RegionOpening13, &ho_RegionOpening13);
					SelectShape(ho_RegionOpening13, &ho_RegionOpening13, "width", "and", 700,
						99999);

					DilationRectangle1(ho_RegionOpening13, &ho_RegionOpening13, 25, 25);

					//裁剪
					GenRectangle1(&ho_Rectangle9, 217, 412, 1099, 1616);
					ReduceDomain(ho_ImageReduced9, ho_Rectangle9, &ho_ImageReduced6);
					MeanImage(ho_ImageReduced6, &ho_ImageMedian11, 10, 10);
					MeanImage(ho_ImageMedian11, &ho_ImageMedian10, 15, 1);
					VarThreshold(ho_ImageMedian10, &ho_Region13, 5, 500, 0.2, 15, "dark");
					Connection(ho_Region13, &ho_ConnectedRegions5);
					ClosingRectangle1(ho_ConnectedRegions5, &ho_RegionOpening23, 100, 5);
					SelectShape(ho_RegionOpening23, &ho_SelectedRegions3, (HTuple("width").Append("area")),
						"and", (HTuple(200).Append(20000)), (HTuple(1200).Append(999999)));
					Union1(ho_SelectedRegions3, &ho_RegionUnion23);
					ShapeTrans(ho_RegionUnion23, &ho_RegionTrans12, "rectangle1");
					DilationRectangle1(ho_RegionTrans12, &ho_RegionDilation, 1000, 1);
					Intersection(ho_RegionDilation, ho_ImageReduced9, &(*ho_camregion));
					Union2((*ho_camregion), ho_RegionDilation, &(*ho_camregion));
				}
				if (0 != (int(hv_Number21 == 18)))
				{

					//裁剪
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult32, 0.01,
						0);
					MeanImage(ho_ImageResult32, &ho_ImageMedian11, 10, 10);

					Threshold(ho_ImageMedian11, &ho_Region1, 0, 70);
					OpeningCircle(ho_Region1, &ho_RegionOpening6, 3.5);
					Connection(ho_RegionOpening6, &ho_ConnectedRegions2);
					SelectShape(ho_ConnectedRegions2, &ho_SelectedRegions30, "area", "and",
						624.8, 9999999);
					ShapeTrans(ho_SelectedRegions30, &ho_RegionTrans39, "convex");
					DilationRectangle1(ho_RegionTrans39, &(*ho_camregion), 45, 25);
					ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
					Intersection(ho_RegionErosion, (*ho_camregion), &(*ho_camregion));
				}
				if (0 != (int(hv_Number21 == 19)))
				{

					//提取小区域

					MedianImage(ho_ImageReduced9, &ho_ImageReduced9, "circle", 9, "mirrored");
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult7, 0.01, 0);
					ErosionRectangle1(ho_RegionUnion, &ho_RegionDilation, 325, 1);

					ReduceDomain(ho_ImageResult7, ho_RegionDilation, &ho_ImageReduced9);

					Threshold(ho_ImageReduced9, &ho_Region4, 0, 80);
					FillUp(ho_Region4, &ho_RegionFillUp6);
					DilationCircle(ho_RegionFillUp6, &ho_RegionDilation6, 20.5);


					Connection(ho_RegionDilation6, &ho_ConnectedRegions23);
					SelectShape(ho_ConnectedRegions23, &ho_SelectedRegions21, (HTuple("width").Append("column")),
						"and", (HTuple(200).Append(850.09)), (HTuple(400).Append(1296.16)));
					ShapeTrans(ho_SelectedRegions21, &ho_SelectedRegions21, "rectangle1");
					DilationRectangle1(ho_SelectedRegions21, &ho_SelectedRegions21, 15, 15);
					RegionFeatures(ho_SelectedRegions21, "width", &hv_Value);
					if (0 != (hv_Value.TupleLength()))
					{
						OpeningCircle(ho_SelectedRegions21, &ho_SelectedRegions21, hv_Value / 2);


						Union2(ho_SelectedRegions21, ho_Rectangle_bottom, &ho_SelectedRegions21
							);
						ClosingRectangle1(ho_SelectedRegions21, &ho_SelectedRegions21, 1, 300);
						OpeningCircle(ho_SelectedRegions21, &(*ho_camregion), 3.5);
					}


				}
				if (0 != (int(hv_Number21 == 20)))
				{
					Union1(ho_RegionUnion, &ho_RegionUnion_);
					MedianImage(ho_ImageReduced9, &ho_ImageReduced9, "circle", 8, "mirrored");
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult23, 0.01,
						0);
					Threshold(ho_ImageResult23, &ho_Region4, 0, 80);
					Connection(ho_Region4, &ho_ConnectedRegions3);
					SelectShape(ho_ConnectedRegions3, &ho_SelectedRegions28, (HTuple("area").Append("column")),
						"and", (HTuple(10340).Append(850.09)), (HTuple(500000).Append(1296.16)));
					OpeningCircle(ho_SelectedRegions28, &ho_RegionOpening9, 3.5);
					ShapeTrans(ho_RegionOpening9, &ho_RegionTrans2, "convex");
					//bai
					MeanImage(ho_ImageReduced9, &ho_ImageMean6, 5, 5);
					Emphasize(ho_ImageMean6, &ho_ImageEmphasize1, 45, 45, 9);
					Threshold(ho_ImageEmphasize1, &ho_Region11, 220, 255);
					OpeningCircle(ho_Region11, &ho_RegionOpening10, 5.5);
					Connection(ho_RegionOpening10, &ho_ConnectedRegions24);
					ErosionRectangle1(ho_RegionUnion_, &ho_RegionUnion_, 325, 1);
					Intersection(ho_RegionUnion_, ho_ConnectedRegions24, &ho_ConnectedRegions24
						);
					SelectShape(ho_ConnectedRegions24, &ho_SelectedRegions22, ((HTuple("column").Append("area")).Append("row")),
						"and", ((HTuple(780).Append(1500)).Append(1850)), ((HTuple(1300).Append(10000)).Append(2100)));
					Union2(ho_RegionTrans2, ho_SelectedRegions22, &ho_RegionUnion12);
					DilationCircle(ho_RegionUnion12, &ho_RegionDilation5, 3.5);
					Union1(ho_RegionDilation5, &ho_RegionUnion16);
					Connection(ho_RegionUnion16, &ho_ConnectedRegions42);
					ShapeTrans(ho_ConnectedRegions42, &ho_RegionTrans15, "convex");
					DilationRectangle1(ho_RegionTrans15, &(*ho_camregion), 70, 10);

				}
				if (0 != (int(hv_Number21 == 21)))
				{
					//提取小区域
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult14, 0.005,
						0);
					Threshold(ho_ImageResult14, &ho_Region4, 0, 50);
					OpeningCircle(ho_Region4, &ho_RegionOpening7, 4.5);
					FillUp(ho_RegionOpening7, &ho_RegionFillUp26);
					Connection(ho_RegionFillUp26, &ho_ConnectedRegions3);
					SelectShape(ho_ConnectedRegions3, &ho_SelectedRegions7, "width", "and",
						200, 400);
					ShapeTrans(ho_SelectedRegions7, &ho_RegionTrans9, "rectangle1");
					DilationRectangle1(ho_RegionTrans9, &ho_RegionDilation10, 35, 115);
					SelectShape(ho_RegionDilation10, &ho_SelectedRegions31, "row", "and", 213.89,
						937.84);
					MoveRegion(ho_SelectedRegions31, &ho_SelectedRegions31, -55, 1);
					RegionFeatures(ho_SelectedRegions31, "width", &hv_Value6);
					OpeningCircle(ho_SelectedRegions31, &ho_RegionOpening45, hv_Value6 / 2);
					MoveRegion(ho_RegionOpening45, &ho_RegionMoved8, -200, 1);
					Union2(ho_RegionOpening45, ho_RegionMoved8, &ho_RegionUnion21);
					MoveRegion(ho_RegionUnion21, &ho_RegionMoved21, 25, 1);
					SelectShape(ho_RegionDilation10, &ho_SelectedRegions45, "row", "and", 1193.78,
						2000.01);
					MoveRegion(ho_SelectedRegions45, &ho_SelectedRegions45, 55, 1);
					RegionFeatures(ho_SelectedRegions45, "width", &hv_Value6);
					OpeningCircle(ho_SelectedRegions45, &ho_RegionOpening45, hv_Value6 / 2);
					MoveRegion(ho_RegionOpening45, &ho_RegionMoved8, 200, 1);
					Union2(ho_RegionOpening45, ho_RegionMoved8, &ho_RegionUnion20);
					DilationRectangle1(ho_RegionUnion20, &ho_RegionDilation16, 40, 5);
					Union2(ho_RegionMoved21, ho_RegionDilation16, &(*ho_camregion));
				}
				if (0 != (int(hv_Number21 == 22)))
				{
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult21, 0.01,
						0);
					Threshold(ho_ImageResult21, &ho_Region4, 0, 80);
					FillUp(ho_Region4, &ho_RegionFillUp7);
					Connection(ho_RegionFillUp7, &ho_ConnectedRegions3);
					OpeningCircle(ho_ConnectedRegions3, &ho_RegionOpening3, 1.5);
					SelectShape(ho_RegionOpening3, &ho_SelectedRegions11, "area", "and", 13971,
						970000);
					SelectShape(ho_SelectedRegions11, &ho_SelectedRegions46, "column", "and",
						903.8, 1232.34);
					ShapeTrans(ho_SelectedRegions46, &ho_RegionTrans9, "rectangle1");
					SelectShape(ho_RegionTrans9, &ho_SelectedRegions60, "row", "and", 952.29,
						2000);
					DilationRectangle1(ho_SelectedRegions60, &ho_RegionDilation19, 40, 26);
					RegionFeatures(ho_RegionDilation19, "width", &hv_Value7);
					OpeningCircle(ho_RegionDilation19, &ho_RegionOpening47, (hv_Value7 - 15) / 2);
					SelectShape(ho_RegionTrans9, &ho_SelectedRegions62, "row", "and", 0, 820.84);
					DilationRectangle1(ho_SelectedRegions62, &ho_RegionDilation23, 45, 15);
					RegionFeatures(ho_RegionDilation23, "width", &hv_Value9);
					RegionFeatures(ho_RegionDilation23, "height", &hv_Value10);
					if (0 != (int(hv_Value10 > hv_Value9)))
					{

						OpeningCircle(ho_RegionDilation23, &ho_RegionOpening49, (hv_Value9 - 65) / 2);

						MoveRegion(ho_RegionOpening49, &ho_RegionMoved10, -200, 1);
						Union2(ho_RegionOpening49, ho_RegionMoved10, &ho_RegionUnion28);
					}
					else
					{
						MoveRegion(ho_RegionDilation23, &ho_RegionMoved, -(hv_Value10 - 40), 0);
						Union2(ho_RegionMoved, ho_RegionDilation23, &ho_RegionDilation23);
						MoveRegion(ho_RegionDilation23, &ho_RegionMoved, -(hv_Value10 - 40), 0);
						Union2(ho_RegionMoved, ho_RegionDilation23, &ho_RegionDilation23);
						OpeningCircle(ho_RegionDilation23, &ho_RegionOpening49, (hv_Value9 - 65) / 2);

						MoveRegion(ho_RegionOpening49, &ho_RegionMoved10, -200, 1);
						Union2(ho_RegionOpening49, ho_RegionMoved10, &ho_RegionUnion28);
					}
					ShapeTrans(ho_RegionUnion28, &ho_RegionTrans22, "convex");
					Union2(ho_RegionOpening47, ho_RegionTrans22, &(*ho_camregion));
				}
				if (0 != (int(hv_Number21 == 23)))
				{
					MedianImage(ho_ImageReduced9, &ho_ImageReduced9, "circle", 8, "mirrored");
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult, 0.01, 0);
					Threshold(ho_ImageResult, &ho_Region15, 0, 65);
					FillUp(ho_Region15, &ho_RegionFillUp27);
					OpeningRectangle1(ho_RegionFillUp27, &ho_RegionOpening11, 25, 1);
					DilationRectangle1(ho_RegionOpening11, &(*ho_camregion), 25, 25);
				}
				if (0 != (int(hv_Number21 == 27)))
				{
					//裁剪

					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult3, 0.008,
						0);
					MedianImage(ho_ImageResult3, &ho_ImageMedian1, "circle", 6, "mirrored");
					Threshold(ho_ImageMedian1, &ho_Regions1, 6, 135);
					FillUp(ho_Regions1, &ho_RegionFillUp10);
					OpeningRectangle1(ho_RegionFillUp10, &ho_RegionOpening25, 25, 1);
					Connection(ho_RegionOpening25, &ho_ConnectedRegions);
					SelectShape(ho_ConnectedRegions, &ho_SelectedRegions16, "area", "and",
						105110, 265625);
					DilationRectangle1(ho_SelectedRegions16, &(*ho_camregion), 10, 10);

				}
				if (0 != (int(hv_Number21 == 29)))
				{
					//裁剪
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult3, 0.008,
						0);
					MedianImage(ho_ImageResult3, &ho_ImageMedian1, "circle", 6, "mirrored");
					Threshold(ho_ImageMedian1, &ho_Regions1, 0, 135);
					FillUp(ho_Regions1, &ho_RegionFillUp10);
					OpeningRectangle1(ho_RegionFillUp10, &ho_RegionOpening25, 25, 1);
					Connection(ho_RegionOpening25, &ho_ConnectedRegions22);
					SelectShape(ho_ConnectedRegions22, &ho_SelectedRegions16, "area", "and",
						105110, 165625);
					DilationRectangle1(ho_SelectedRegions16, &(*ho_camregion), 10, 30);
				}

			}
		}
		else if (0 != (int(hv_Substring == HTuple("1_1"))))
		{
			if (0 != (int(hv_Number21 == 25)))
			{
				GenRectangle1(&ho_Rectangle1, 0, 400, 400, 1720);

				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);
				BinaryThreshold(ho_ImageReduced4, &ho_Region, "max_separability", "dark",
					&hv_UsedThreshold1);
				FillUp(ho_Region, &ho_Region);
				Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
				Difference(ho_Region, ho_Region20, &ho_Region);
				ClosingRectangle1(ho_Region, &ho_Region, 30, 150);
				FillUp(ho_Region, &ho_Region);
				Connection(ho_Region, &ho_Region);
				ShapeTrans(ho_Region, &ho_Region, "convex");
				Union1(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 50);
				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, (HTuple("width").Append("height")), "and",
					(HTuple(30).Append(300)), (HTuple(99999).Append(99999)));
				Union1(ho_Region, &ho_Region);
				ShapeTrans(ho_Region, &ho_Region, "rectangle1");
				MoveRegion(ho_Region, &ho_RegionMoved, 0, 100);
				Difference(ho_Region, ho_RegionMoved, &ho_Region);
				MoveRegion(ho_Region, &ho_Region, 0, 40);
				ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
				EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 10, 50);
				SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(80).TupleRad(),
					HTuple(100).TupleRad());
				UnionCollinearContoursXld(ho_Edge, &ho_Edge, 200, 1, 30, 0.1, "attr_keep");
				SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 200, 3000, -0.5, 0.5);
				SortContoursXld(ho_Edge, &ho_Edge, "character", "true", "column");
				SelectObj(ho_Edge, &ho_Edge_left, 1);
				GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);
				TupleAdd(hv_Col, -90, &hv_Sub);
				hv_left_xld = hv_Sub;
				TupleInverse(hv_left_xld, &hv_left_xld);
				TupleInverse(hv_Row, &hv_left_Row);
				TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
				TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
				GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
				GenRegionContourXld(ho_Contour, &ho_Region, "filled");
				ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");


			}
			else
			{
				GenRectangle1(&ho_Rectangle1, 0, 700, 2100, 1720);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);
				BinaryThreshold(ho_ImageReduced4, &ho_Region, "max_separability", "dark",
					&hv_UsedThreshold1);
				FillUp(ho_Region, &ho_Region);
				Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
				Difference(ho_Region, ho_Region20, &ho_Region);
				ClosingRectangle1(ho_Region, &ho_Region, 30, 150);
				FillUp(ho_Region, &ho_Region);
				Connection(ho_Region, &ho_Region);
				ShapeTrans(ho_Region, &ho_Region, "convex");
				Union1(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 1900);
				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, (HTuple("width").Append("height")), "and",
					(HTuple(30).Append(1800)), (HTuple(99999).Append(99999)));
				Union1(ho_Region, &ho_Region);
				ShapeTrans(ho_Region, &ho_Region, "rectangle1");

				ErosionRectangle1(ho_Region, &ho_Region, 90, 1);
				MoveRegion(ho_Region, &ho_RegionMoved, 0, 140);
				Difference(ho_Region, ho_RegionMoved, &ho_Region);

				GrayErosionRect(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);


				if (0 != (HTuple(HTuple(HTuple(HTuple(HTuple(int(hv_Number21 == 3)).TupleOr(int(hv_Number21 == 4))).TupleOr(int(hv_Number21 == 11))).TupleOr(int(hv_Number21 == 15))).TupleOr(int(hv_Number21 == 16))).TupleOr(int(hv_Number21 == 23))))
				{



					DilationRectangle1(ho_Region, &ho_Region, 15, 1);
					ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
					GrayDilationRect(ho_ImageReduced4, &ho_ImageReduced4, 200, 10);
					ErosionRectangle1(ho_Region, &ho_Region, 11, 1);
				}
				ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
				EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 7, 30);
				SelectContoursXld(ho_Edges, &ho_Edges, "maximum_extent", 200, 3000, -0.5,
					0.5);
				//select_obj (Edges, Edge, 1)
				//tuple_deg (1.57, angle)
				//get_contour_attrib_xld (Edge, 'edge_direction', Attrib)
				if (HDevWindowStack::IsOpen())
					DispObj(ho_Image, HDevWindowStack::GetActive());
				SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(80).TupleRad(),
					HTuple(100).TupleRad());
				UnionCollinearContoursXld(ho_Edge, &ho_Edge, 400, 1, 30, 0.1, "attr_keep");
				SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 1400, 3000, -0.5,
					0.5);
				SortContoursXld(ho_Edge, &ho_Edge, "character", "true", "column");
				SelectObj(ho_Edge, &ho_Edge_left, 1);

				GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);
				if (0 != (int((hv_Row.TupleLength()) != 0)))
				{
					TupleAdd(hv_Col, -90, &hv_Sub);
					hv_left_xld = hv_Sub;
					TupleInverse(hv_left_xld, &hv_left_xld);
					TupleInverse(hv_Row, &hv_left_Row);
					TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
					TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
					GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
					GenRegionContourXld(ho_Contour, &ho_Region, "filled");
					ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");
				}
				else
				{
					MoveRegion(ho_RegionMoved, &ho_RegionMoved, 0, -300);
					ReduceDomain(ho_Image, ho_RegionMoved, &ho_ImageReduced);
					EdgesSubPix(ho_ImageReduced, &ho_Edge, "canny", 3, 30, 50);
					SortContoursXld(ho_Edge, &ho_Edge, "character", "true", "column");
					SelectObj(ho_Edge, &ho_Edge_left, 1);
					GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);
					TupleAdd(hv_Col, 90, &hv_Sub);
					hv_left_xld = hv_Sub;
					TupleInverse(hv_left_xld, &hv_left_xld);
					TupleInverse(hv_Row, &hv_left_Row);
					TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
					TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
					GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
					GenRegionContourXld(ho_Contour, &ho_Region, "filled");
					ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");








				}
				//***************************************************************8

			}
		}
		else if (0 != (int(hv_Substring == HTuple("3_1"))))
		{
			if (0 != (int(hv_Number21 == 25)))
			{
				GenRectangle1(&ho_Rectangle1, 0, 500, 400, 1720);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);
				Threshold(ho_ImageReduced4, &ho_Region, 0, 30);
				//
				FillUp(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 300);
				Connection(ho_Region, &ho_Region);
				SortRegion(ho_Region, &ho_Region, "first_point", "true", "column");
				SelectObj(ho_Region, &ho_RegionEdge, 1);
				DilationRectangle1(ho_RegionEdge, &ho_Region, 290, 1);
				MoveRegion(ho_Region, &ho_RegionMove, 0, 10);
				Difference(ho_RegionMove, ho_RegionEdge, &ho_Region);

				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, "height", "and", 150, 99999);
				SortRegion(ho_Region, &ho_Region, "first_point", "flase", "column");
				SelectObj(ho_Region, &ho_Region, 1);
				ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");

			}
			else
			{
				GenRectangle1(&ho_Rectangle1, 0, 500, 2100, 1720);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);
				Threshold(ho_ImageReduced4, &ho_Region, 0, 10);
				//
				FillUp(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 500);
				Connection(ho_Region, &ho_Region);
				SortRegion(ho_Region, &ho_Region, "first_point", "true", "column");
				SelectObj(ho_Region, &ho_RegionEdge, 1);
				DilationRectangle1(ho_RegionEdge, &ho_Region, 290, 1);
				MoveRegion(ho_Region, &ho_RegionMove, 0, 10);
				Difference(ho_RegionMove, ho_RegionEdge, &ho_Region);

				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, "height", "and", 150, 99999);
				SortRegion(ho_Region, &ho_Region, "first_point", "flase", "column");
				SelectObj(ho_Region, &ho_Region, 1);
				ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");
				AreaCenter(ho_RegionUnion, &hv_Area, &hv_Row, &hv_Column);
				if (0 != (int(hv_Area < 100)))
				{
					MoveRegion(ho_Region, &ho_Region, 0, 10);
					if (0 != (HTuple(HTuple(HTuple(HTuple(HTuple(int(hv_Number21 == 3)).TupleOr(int(hv_Number21 == 4))).TupleOr(int(hv_Number21 == 11))).TupleOr(int(hv_Number21 == 15))).TupleOr(int(hv_Number21 == 16))).TupleOr(int(hv_Number21 == 23))))
					{

						DilationRectangle1(ho_Region, &ho_Region, 15, 1);
						ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
						GrayDilationRect(ho_ImageReduced4, &ho_ImageReduced4, 400, 10);
						ErosionRectangle1(ho_Region, &ho_Region, 7, 1);
					}
					MeanImage(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);
					ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
					EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 55, 90);
					SelectContoursXld(ho_Edges, &ho_Edges, "maximum_extent", 200, 3000, -0.5,
						0.5);
					SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(80).TupleRad(),
						HTuple(100).TupleRad());
					UnionCollinearContoursXld(ho_Edge, &ho_Edge, 200, 1, 7, 0.1, "attr_keep");
					UnionAdjacentContoursXld(ho_Edge, &ho_Edge, 100, 10, "attr_keep");
					SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 1500, 3000, -0.5,
						0.5);
					SortContoursXld(ho_Edge, &ho_Edge, "character", "true", "column");
					SelectObj(ho_Edge, &ho_Edge_left, 1);
					GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);
					if (0 != (int((hv_Row.TupleLength()) == 0)))
					{
						MoveRegion(ho_Region, &ho_RegionUnion, 1, -30);



					}
					else
					{
						TupleAdd(hv_Col, -95, &hv_Sub);
						hv_left_xld = hv_Sub;
						TupleInverse(hv_left_xld, &hv_left_xld);
						TupleInverse(hv_Row, &hv_left_Row);
						TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
						TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
						GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
						GenRegionContourXld(ho_Contour, &ho_Region, "filled");
						ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");
					}
				}
				//***************************************************************8

			}
		}
		else if (0 != (int(hv_Substring == HTuple("3_2"))))
		{
			if (0 != (int(hv_Number21 == 25)))
			{
				GenRectangle1(&ho_Rectangle1, 0, 800, 400, 1720);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);
				Threshold(ho_ImageReduced4, &ho_Region, 0, 180);
				Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
				Difference(ho_Region, ho_Region20, &ho_Region);
				FillUp(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 200);
				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, (HTuple("height").Append("width")), "and",
					(HTuple(200).Append(50)), (HTuple(99999).Append(9999)));
				Union1(ho_Region, &ho_Region);

				ShapeTrans(ho_Region, &ho_Region, "rectangle1");

				ErosionRectangle1(ho_Region, &ho_Region, 85, 1);
				MoveRegion(ho_Region, &ho_RegionMoved, 0, 120);
				Difference(ho_Region, ho_RegionMoved, &ho_Region);

				//gray_dilation_rect (ImageReduced4, ImageMax, Height, Width)
				GrayOpeningRect(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);





				MeanImage(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);
				ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
				EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 10, 50);
				SegmentContoursXld(ho_Edges, &ho_Edges, "lines_circles", 5, 4, 2);
				SelectContoursXld(ho_Edges, &ho_Edges, "maximum_extent", 100, 3000, -0.5,
					0.5);

				SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(80).TupleRad(),
					HTuple(100).TupleRad());
				UnionCollinearContoursXld(ho_Edge, &ho_Edge, 40, 1, 10, 0.1, "attr_keep");
				SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 100, 3000, -0.5, 0.5);
				SortContoursXld(ho_Edge, &ho_Edge, "upper_left", "false", "column");
				SelectObj(ho_Edge, &ho_Edge_left, 1);
				GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);

				if (0 != (int(hv_Substring == HTuple("3_2"))))
				{
					TupleAdd(hv_Col, -85, &hv_Sub);
				}
				else
				{
					TupleAdd(hv_Col, -95, &hv_Sub);
				}
				hv_left_xld = hv_Sub;
				TupleInverse(hv_left_xld, &hv_left_xld);
				TupleInverse(hv_Row, &hv_left_Row);
				TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
				TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
				GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
				GenRegionContourXld(ho_Contour, &ho_Region, "filled");
				ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");

			}
			else
			{

				GenRectangle1(&ho_Rectangle1, 0, 500, 2100, 1820);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);

				Threshold(ho_ImageReduced4, &ho_Region, 0, 180);
				Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
				Difference(ho_Region, ho_Region20, &ho_Region);
				FillUp(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 1700);
				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, (HTuple("height").Append("width")), "and",
					(HTuple(1900).Append(50)), (HTuple(99999).Append(9999)));
				Union1(ho_Region, &ho_Region);

				ShapeTrans(ho_Region, &ho_Region, "rectangle1");

				ErosionRectangle1(ho_Region, &ho_RegionErosion, 255, 1);
				Difference(ho_Region, ho_RegionErosion, &ho_Region);
				Connection(ho_Region, &ho_Region);
				SelectObj(ho_Region, &ho_Region, 1);
				MoveRegion(ho_Region, &ho_Region, 1, 45);

				//gray_dilation_rect (ImageReduced4, ImageMax, Height, Width)
				GrayOpeningRect(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);

				if (0 != (HTuple(HTuple(HTuple(HTuple(HTuple(int(hv_Number21 == 3)).TupleOr(int(hv_Number21 == 4))).TupleOr(int(hv_Number21 == 11))).TupleOr(int(hv_Number21 == 15))).TupleOr(int(hv_Number21 == 16))).TupleOr(int(hv_Number21 == 23))))
				{

					DilationRectangle1(ho_Region, &ho_Region, 15, 1);
					ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
					GrayDilationRect(ho_ImageReduced4, &ho_ImageReduced4, 400, 10);
					ErosionRectangle1(ho_Region, &ho_Region, 5, 1);
				}
				MeanImage(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);
				Intersection(ho_Region, ho_Rectangle1, &ho_Region);
				ErosionRectangle1(ho_Region, &ho_Region, 5, 1);
				ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);

				EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 7, 20);
				SelectContoursXld(ho_Edges, &ho_Edges, "maximum_extent", 100, 3000, -0.5,
					0.5);
				//select_obj (Edges, ObjectSelected, 2)
				//get_contour_attrib_xld (ObjectSelected, 'response', Attrib)
				SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(70).TupleRad(),
					HTuple(110).TupleRad());
				SegmentContourAttribXld(ho_Edge, &ho_Edge, "response", "and", 30, 250);

				UnionCollinearContoursXld(ho_Edge, &ho_Edge, 250, 1, 7, 0.1, "attr_keep");
				UnionAdjacentContoursXld(ho_Edge, &ho_Edge, 20, 1, "attr_keep");
				SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 1300, 4000, -0.5,
					0.5);


				SortContoursXld(ho_Edge, &ho_Edge, "upper_left", "false", "column");
				SelectObj(ho_Edge, &ho_Edge_left, 1);
				GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);
				if (0 != (int((hv_Row.TupleLength()) != 0)))
				{
					if (0 != (int(hv_Substring == HTuple("3_2"))))
					{
						TupleAdd(hv_Col, -85, &hv_Sub);
					}
					else
					{
						TupleAdd(hv_Col, -95, &hv_Sub);
					}
					hv_left_xld = hv_Sub;
					TupleInverse(hv_left_xld, &hv_left_xld);
					TupleInverse(hv_Row, &hv_left_Row);
					TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
					TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
					GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
					GenRegionContourXld(ho_Contour, &ho_Region, "filled");
					ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");

					Intensity(ho_RegionUnion, ho_Image, &hv_Mean, &hv_Deviation);
				}
				else
				{

					GenRectangle1(&ho_Rectangle1, 0, 500, 2100, 1620);
					ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);

					Threshold(ho_ImageReduced4, &ho_Region, 0, 220);
					Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
					Difference(ho_Region, ho_Region20, &ho_Region);
					FillUp(ho_Region, &ho_Region);
					MoveRegion(ho_Region, &ho_RegionMoved, 1, 90);
					Difference(ho_Region, ho_RegionMoved, &ho_RegionDifference);
					ErosionRectangle1(ho_RegionDifference, &ho_RegionDifference, 7, 7);
					Connection(ho_RegionDifference, &ho_RegionDifference);
					SelectShapeStd(ho_RegionDifference, &ho_RegionDifference, "max_area", 70);
					ShapeTrans(ho_RegionDifference, &ho_RegionUnion, "rectangle1");
					Intensity(ho_RegionUnion, ho_Image, &hv_Mean, &hv_Deviation);

				}





				//***************************************************************8

			}

		}
		else if (0 != (int(hv_Substring == HTuple("1_2"))))
		{
			if (0 != (int(hv_Number21 == 25)))
			{
				GenRectangle1(&ho_Rectangle1, 0, 800, 400, 1720);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);
				Threshold(ho_ImageReduced4, &ho_Region, 0, 220);
				Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
				Difference(ho_Region, ho_Region20, &ho_Region);
				FillUp(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 200);
				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, (HTuple("height").Append("width")), "and",
					(HTuple(200).Append(50)), (HTuple(99999).Append(9999)));
				Union1(ho_Region, &ho_Region);

				ShapeTrans(ho_Region, &ho_Region, "rectangle1");

				ErosionRectangle1(ho_Region, &ho_Region, 85, 1);
				MoveRegion(ho_Region, &ho_RegionMoved, 0, 120);
				Difference(ho_Region, ho_RegionMoved, &ho_Region);

				//gray_dilation_rect (ImageReduced4, ImageMax, Height, Width)
				GrayOpeningRect(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);





				MeanImage(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);
				ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
				EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 10, 50);
				SegmentContoursXld(ho_Edges, &ho_Edges, "lines_circles", 5, 4, 2);
				SelectContoursXld(ho_Edges, &ho_Edges, "maximum_extent", 100, 3000, -0.5,
					0.5);

				SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(80).TupleRad(),
					HTuple(100).TupleRad());
				UnionCollinearContoursXld(ho_Edge, &ho_Edge, 40, 1, 10, 0.1, "attr_keep");
				SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 100, 3000, -0.5, 0.5);
				SortContoursXld(ho_Edge, &ho_Edge, "upper_left", "false", "column");
				SelectObj(ho_Edge, &ho_Edge_left, 1);
				GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);

				if (0 != (int(hv_Substring == HTuple("3_2"))))
				{
					TupleAdd(hv_Col, -85, &hv_Sub);
				}
				else
				{
					TupleAdd(hv_Col, -95, &hv_Sub);
				}
				hv_left_xld = hv_Sub;
				TupleInverse(hv_left_xld, &hv_left_xld);
				TupleInverse(hv_Row, &hv_left_Row);
				TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
				TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
				GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
				GenRegionContourXld(ho_Contour, &ho_Region, "filled");
				ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");

			}
			else
			{

				GenRectangle1(&ho_Rectangle1, 0, 500, 2100, 1820);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);

				Threshold(ho_ImageReduced4, &ho_Region, 0, 220);
				Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
				Difference(ho_Region, ho_Region20, &ho_Region);
				FillUp(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 1700);
				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, (HTuple("height").Append("width")), "and",
					(HTuple(1900).Append(50)), (HTuple(99999).Append(9999)));
				Union1(ho_Region, &ho_Region);

				ShapeTrans(ho_Region, &ho_Region, "rectangle1");

				ErosionRectangle1(ho_Region, &ho_RegionErosion, 255, 1);
				Difference(ho_Region, ho_RegionErosion, &ho_Region);
				Connection(ho_Region, &ho_Region);
				SelectObj(ho_Region, &ho_Region, 1);
				MoveRegion(ho_Region, &ho_Region, 1, 45);

				//gray_dilation_rect (ImageReduced4, ImageMax, Height, Width)
				GrayOpeningRect(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);

				if (0 != (HTuple(HTuple(HTuple(HTuple(HTuple(int(hv_Number21 == 3)).TupleOr(int(hv_Number21 == 4))).TupleOr(int(hv_Number21 == 11))).TupleOr(int(hv_Number21 == 15))).TupleOr(int(hv_Number21 == 16))).TupleOr(int(hv_Number21 == 23))))
				{

					DilationRectangle1(ho_Region, &ho_Region, 15, 1);
					ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
					GrayDilationRect(ho_ImageReduced4, &ho_ImageReduced4, 400, 10);
					ErosionRectangle1(ho_Region, &ho_Region, 5, 1);
				}
				MeanImage(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);
				Intersection(ho_Region, ho_Rectangle1, &ho_Region);
				ErosionRectangle1(ho_Region, &ho_Region, 5, 1);
				ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);

				EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 7, 20);
				SelectContoursXld(ho_Edges, &ho_Edges, "maximum_extent", 100, 3000, -0.5,
					0.5);
				//select_obj (Edges, ObjectSelected, 2)
				//get_contour_attrib_xld (ObjectSelected, 'response', Attrib)
				SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(70).TupleRad(),
					HTuple(110).TupleRad());
				SegmentContourAttribXld(ho_Edge, &ho_Edge, "response", "and", 30, 250);

				UnionCollinearContoursXld(ho_Edge, &ho_Edge, 250, 1, 7, 0.1, "attr_keep");
				UnionAdjacentContoursXld(ho_Edge, &ho_Edge, 20, 1, "attr_keep");
				SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 1300, 4000, -0.5,
					0.5);


				SortContoursXld(ho_Edge, &ho_Edge, "upper_left", "false", "column");
				SelectObj(ho_Edge, &ho_Edge_left, 1);
				GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);
				if (0 != (int((hv_Row.TupleLength()) != 0)))
				{
					if (0 != (int(hv_Substring == HTuple("3_2"))))
					{
						TupleAdd(hv_Col, -85, &hv_Sub);
					}
					else
					{
						TupleAdd(hv_Col, -95, &hv_Sub);
					}
					hv_left_xld = hv_Sub;
					TupleInverse(hv_left_xld, &hv_left_xld);
					TupleInverse(hv_Row, &hv_left_Row);
					TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
					TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
					GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
					GenRegionContourXld(ho_Contour, &ho_Region, "filled");
					ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");

					Intensity(ho_RegionUnion, ho_Image, &hv_Mean, &hv_Deviation);
				}
				else
				{

					GenRectangle1(&ho_Rectangle1, 0, 500, 2100, 1620);
					ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);

					Threshold(ho_ImageReduced4, &ho_Region, 0, 220);
					Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
					Difference(ho_Region, ho_Region20, &ho_Region);
					FillUp(ho_Region, &ho_Region);
					MoveRegion(ho_Region, &ho_RegionMoved, 1, 90);
					Difference(ho_Region, ho_RegionMoved, &ho_RegionDifference);
					ErosionRectangle1(ho_RegionDifference, &ho_RegionDifference, 7, 7);
					Connection(ho_RegionDifference, &ho_RegionDifference);
					SelectShapeStd(ho_RegionDifference, &ho_RegionDifference, "max_area", 70);
					ShapeTrans(ho_RegionDifference, &ho_RegionUnion, "rectangle1");
					Intensity(ho_RegionUnion, ho_Image, &hv_Mean, &hv_Deviation);

				}





				//***************************************************************8

			}
		}

		DilationRectangle1((*ho_JTReg), &(*ho_JTReg), 215, 5);
		Union2((*ho_camregion), (*ho_JTReg), &(*ho_camregion));
		Intersection(ho_RectangleImage, (*ho_camregion), &(*ho_camregion));
		CountObj(ho_RegionUnion, &hv_Number1);
		if (0 != (int(hv_Number1 > 0)))
		{
			//通过外轮廓提取拼接处区域
			MoveRegion(ho_RegionUnion, &ho_RegionUnion, 3, 0);
			SmallestRectangle2(ho_RegionUnion, &hv_Row16, &hv_Column16, &hv_Phi3, &hv_Length1,
				&hv_Length2);

			if (true)
			{
				//提取仿射最小外接矩形的四个顶点坐标
				GenRectangle2ContourXld(&(*ho_DetectRegion), hv_Row16, hv_Column16, hv_Phi3,
					hv_Length1, hv_Length2);
				//union1 (Region, DetectRegion)
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
					GenCrossContourXld(&ho_Cross1, 3, hv_Column16 + hv_a, 26, hv_Phi3);
					hv_c = (hv_Length1 * hv_Cos) - (hv_Length2 * hv_Sin);
					hv_d = (hv_Length1 * hv_Sin) + (hv_Length2 * hv_Cos);
					GenCrossContourXld(&ho_Cross2, 3, hv_Column16 + hv_c, 26, hv_Phi3);
					hv_e = (hv_Length1 * hv_Cos) + (hv_Length2 * hv_Sin);
					hv_f = (hv_Length1 * hv_Sin) - (hv_Length2 * hv_Cos);
					GenCrossContourXld(&ho_Cross3, 3, hv_Column16 + hv_e, 26, hv_Phi3);
					hv_g = ((-hv_Length1) * hv_Cos) + (hv_Length2 * hv_Sin);
					hv_h = ((-hv_Length1) * hv_Sin) - (hv_Length2 * hv_Cos);
					GenCrossContourXld(&ho_Cross4, 3, hv_Column16 + hv_g, 26, hv_Phi3);
					//gen_cross_contour_xld (Cross4, Row16-h, Column16+g, 26, Phi3)
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
					if (0 != (HTuple(int(hv_Substring == HTuple("3_1"))).TupleOr(int(hv_Substring == HTuple("3_2")))))
					{
						SelectObj(ho_SortedRegions, &(*ho_PointRegion), 1);

					}
					else
					{
						SelectObj(ho_SortedRegions, &(*ho_PointRegion), 2);

					}
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
		string strerr = std::to_string(hv_ProNum.I()) + "-" + std::to_string(hv_StaNum.I()) + "_" + std::to_string(hv_CamNum.I()) + "_" + std::to_string(hv_ImageNum.I()) + "ImageShieldProcessAMiddleSelfTest4_83_2 error:" + strErr;
		VeErrMessage.push_back(QString::fromStdString(strerr));
	}
	reg = -1;
	return -1;
}

int JSZCAlgorithmsDLLPVD::ImageShieldProcessAMiddleSelfTest4_83_6(HObject ho_Image, HObject* ho_DetectRegion, HObject* ho_PointRegion, HObject* ho_camregion, HObject* ho_JTReg, HTuple hv_ImName)
{
	// Local iconic variables
	HObject  ho_Rectangle_bottom, ho_Rectangle_top;
	HObject  ho_RectangleImage, ho_RegionUnion, ho_Rectangle;
	HObject  ho_ImageResult15, ho_Region20, ho_RegionOpening34;
	HObject  ho_ConnectedRegions37, ho_SelectedRegions19, ho_RegionMoved;
	HObject  ho_ImageReduced9, ho_RegionErosion2, ho_ImageMedian9;
	HObject  ho_ImageTexture4, ho_Region5, ho_RegionDilation1;
	HObject  ho_RegionErosion, ho_ImageMedian5, ho_ImageTexture5;
	HObject  ho_ImageTexture8, ho_ImageResult19, ho_Region14;
	HObject  ho_Region15, ho_Region16, ho_ConnectedRegions40;
	HObject  ho_SelectedRegions48, ho_SelectedRegions49, ho_RegionUnion7;
	HObject  ho_RegionTrans, ho_ImageTexture, ho_ImageTexture3;
	HObject  ho_ImageResult1, ho_Region29, ho_ConnectedRegions31;
	HObject  ho_SelectedRegions12, ho_RegionUnion33, ho_RegionClosing7;
	HObject  ho_RegionFillUp14, ho_ConnectedRegions38, ho_SelectedRegions32;
	HObject  ho_RegionUnion18, ho_RegionTrans30, ho_RegionUnion34;
	HObject  ho_RegionFillUp, ho_ImageMedian24, ho_ImageTexture1;
	HObject  ho_ImageTexture2, ho_ImageSub, ho_Region27, ho_Region28;
	HObject  ho_ConnectedRegions14, ho_SelectedRegions9, ho_SelectedRegions_big;
	HObject  ho_RegionOpening19, ho_ConnectedRegions39, ho_RegionTrans8;
	HObject  ho_RegionClosing4, ho_RegionFillUp20, ho_ConnectedRegions41;
	HObject  ho_RegionTrans11, ho_ObjectSelected, ho_RegionClosing;
	HObject  ho_SelectedRegions4, ho_Rectangle11, ho_ImageReduced12;
	HObject  ho_ImageMedian11, ho_ImageReduced10, ho_ImageTexture6;
	HObject  ho_ImageTexture7, ho_ImageResult3, ho_ImageMedian10;
	HObject  ho_Region6, ho_ConnectedRegions5, ho_RegionCount;
	HObject  ho_RegionOpening23, ho_RegionUnion23, ho_RegionTrans12;
	HObject  ho_RegionDilation4, ho_RegionDilation8, ho_RegionUnion14;
	HObject  ho_Rectangle5, ho_ImageReduced1, ho_Rectangle3;
	HObject  ho_ImageReduced7, ho_ImageResult4, ho_Region, ho_RegionFillUp3;
	HObject  ho_ConnectedRegions20, ho_SelectedRegions43, ho_SelectedRegions44;
	HObject  ho_RegionUnion15, ho_RegionFillUp1, ho_RegionUnion2;
	HObject  ho_RegionClosing5, ho_ConnectedRegions1, ho_SelectedRegions;
	HObject  ho_RegionUnion10, ho_ConnectedRegions21, ho_RegionOpening20;
	HObject  ho_RegionTrans6, ho_Rectangle9, ho_ImageReduced6;
	HObject  ho_Region13, ho_SelectedRegions3, ho_RegionDilation;
	HObject  ho_ImageMedian7, ho_ImageResult12, ho_Regions3;
	HObject  ho_RegionFillUp21, ho_RegionDilation24, ho_RegionFillUp25;
	HObject  ho_RegionOpening8, ho_RegionOpening18, ho_ConnectedRegions17;
	HObject  ho_SelectedRegions20, ho_RegionMoved7, ho_ImageMedian;
	HObject  ho_ImageResult11, ho_Regions2, ho_RegionFillUp11;
	HObject  ho_RegionOpening15, ho_ImageMedian3, ho_ImageResult5;
	HObject  ho_RegionFillUp28, ho_ConnectedRegions8, ho_SelectedRegions8;
	HObject  ho_RegionTrans5, ho_RegionDilation14, ho_RegionOpening24;
	HObject  ho_RegionMoved1, ho_ImageResult10, ho_Region19;
	HObject  ho_RegionFillUp29, ho_ConnectedRegions19, ho_SelectedRegions14;
	HObject  ho_RegionTrans27, ho_RegionDilation20, ho_RegionOpening28;
	HObject  ho_RegionMoved6, ho_ImageResult13, ho_Region11;
	HObject  ho_ConnectedRegions24, ho_SelectedRegions22, ho_RegionTrans15;
	HObject  ho_ImageResult46, ho_Region43, ho_RegionOpening29;
	HObject  ho_ConnectedRegions77, ho_SelectedRegions107, ho_SelectedRegions108;
	HObject  ho_Region45, ho_ConnectedRegions79, ho_SelectedRegions109;
	HObject  ho_RegionUnion52, ho_EmptyObject4, ho_RegionTrans54;
	HObject  ho_RegionDilation44, ho_RegionOpening79, ho_RegionUnion49;
	HObject  ho_ImageResult47, ho_ImageMedian31, ho_Region44;
	HObject  ho_RegionOpening78, ho_ConnectedRegions78, ho_ImageResult8;
	HObject  ho_Region17, ho_RegionFillUp8, ho_RegionOpening17;
	HObject  ho_ImageResult27, ho_SelectedRegions40, ho_ImageMedian4;
	HObject  ho_ImageResult6, ho_Region8, ho_RegionFillUp2, ho_ConnectedRegions6;
	HObject  ho_SelectedRegions6, ho_SelectedRegions1, ho_RegionTrans35;
	HObject  ho_RegionUnion24, ho_ImageResult18, ho_Region12;
	HObject  ho_ConnectedRegions27, ho_SelectedRegions2, ho_RegionTrans7;
	HObject  ho_Region24, ho_RegionClosing1, ho_RegionFillUp18;
	HObject  ho_ConnectedRegions32, ho_ConnectedRegions33, ho_SelectedRegions27;
	HObject  ho_RegionTrans25, ho_RegionDilation2, ho_ImageResult9;
	HObject  ho_Region9, ho_RegionFillUp9, ho_RegionOpening22;
	HObject  ho_RegionOpening32, ho_ConnectedRegions25, ho_SelectedRegions13;
	HObject  ho_RegionTrans3, ho_SelectedRegions17, ho_RegionUnion6;
	HObject  ho_SelectedRegions18, ho_RegionFillUp4, ho_RegionOpening13;
	HObject  ho_ImageResult7, ho_Region4, ho_RegionFillUp6, ho_RegionDilation6;
	HObject  ho_ConnectedRegions23, ho_SelectedRegions21, ho_ImageResult23;
	HObject  ho_ConnectedRegions3, ho_SelectedRegions28, ho_RegionOpening9;
	HObject  ho_RegionTrans2, ho_ImageMean6, ho_ImageEmphasize1;
	HObject  ho_RegionOpening10, ho_RegionUnion12, ho_RegionDilation5;
	HObject  ho_RegionUnion16, ho_ConnectedRegions42, ho_ImageResult14;
	HObject  ho_RegionOpening7, ho_RegionFillUp26, ho_SelectedRegions7;
	HObject  ho_RegionTrans9, ho_RegionDilation10, ho_SelectedRegions31;
	HObject  ho_RegionOpening45, ho_RegionMoved8, ho_RegionUnion21;
	HObject  ho_RegionMoved21, ho_SelectedRegions45, ho_RegionUnion20;
	HObject  ho_RegionDilation16, ho_ImageResult21, ho_RegionFillUp7;
	HObject  ho_RegionOpening3, ho_SelectedRegions11, ho_SelectedRegions46;
	HObject  ho_SelectedRegions60, ho_RegionDilation19, ho_RegionOpening47;
	HObject  ho_SelectedRegions62, ho_RegionDilation23, ho_RegionOpening49;
	HObject  ho_RegionMoved10, ho_RegionUnion28, ho_RegionTrans22;
	HObject  ho_ImageResult, ho_RegionFillUp27, ho_RegionOpening11;
	HObject  ho_ImageMedian1, ho_Regions1, ho_RegionFillUp10;
	HObject  ho_RegionOpening25, ho_ConnectedRegions, ho_SelectedRegions16;
	HObject  ho_ConnectedRegions22, ho_Rectangle1, ho_ImageReduced4;
	HObject  ho_Edges, ho_Edge, ho_Edge_left, ho_Contour, ho_ImageReduced;
	HObject  ho_RegionEdge, ho_RegionMove, ho_RegionDifference;
	HObject  ho_Cross1, ho_Cross2, ho_Cross3, ho_Cross4, ho_Cross1re;
	HObject  ho_Cross2re, ho_Cross3re, ho_Cross4re, ho_RegionUnion3;
	HObject  ho_RegionUnion4, ho_ConnectedRegions4, ho_SortedRegions;

	// Local control variables
	HTuple  hv_Substring, hv_Substrings, hv_BoolInter;
	HTuple  hv_StaNum, hv_CamNum, hv_ImageNum, hv_Length5, hv_Selected1;
	HTuple  hv_Number21, hv_Width, hv_Height, hv_Row112, hv_Column112;
	HTuple  hv_Row212, hv_Column212, hv_Area6, hv_Row3, hv_Column3;
	HTuple  hv_width, hv_Value4, hv_UsedThreshold, hv_Value;
	HTuple  hv_Value1, hv_Value14, hv_Value6, hv_Value7, hv_Value9;
	HTuple  hv_Value10, hv_UsedThreshold1, hv_Row, hv_Col, hv_Sub;
	HTuple  hv_left_xld, hv_left_Row, hv_Contour_col, hv_Contour_row;
	HTuple  hv_Area, hv_Column, hv_Mean, hv_Deviation, hv_Number1;
	HTuple  hv_Row16, hv_Column16, hv_Phi3, hv_Length1, hv_Length2;
	HTuple  hv_Cos, hv_Sin, hv_a, hv_b, hv_c, hv_d, hv_e, hv_f;
	HTuple  hv_g, hv_h;

	try
	{

		if (HDevWindowStack::IsOpen())
			SetColored(HDevWindowStack::GetActive(), 12);
		TupleStrFirstN(hv_ImName, 2, &hv_Substring);

		//tuple_split (ImName, '_', Substrings)
		//tuple_split (Substrings, '-', Substrings1)
		//Substring := Substrings1[1]+'_'+Substrings1[2]
		//内部
		hv_BoolInter = 0;
		//胶条区域
		GenRectangle1(&ho_Rectangle_bottom, 2045, 0, 2047, 1800);
		GenRectangle1(&ho_Rectangle_top, 0, 0, 5, 1800);
		GenRectangle1(&ho_RectangleImage, 0, 0, 2047, 2047);
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

		if (0 != (int(hv_Substring == HTuple("2_1"))))
		{


			MultImage(ho_Image, ho_Image, &ho_ImageResult15, 0.2, 0);
			GrayDilationRect(ho_ImageResult15, &ho_ImageResult15, 200, 1);
			Threshold(ho_ImageResult15, &ho_Region20, 180, 255);
			FillUp(ho_Region20, &ho_Region20);
			//13边
			if (0 != (HTuple(HTuple(HTuple(HTuple(int(hv_Number21 != 15)).TupleAnd(int(hv_Number21 != 16))).TupleAnd(int(hv_Number21 != 17))).TupleAnd(int(hv_Number21 != 12))).TupleAnd(int(hv_Number21 != 13))))
			{
				ClosingRectangle1(ho_Region20, &ho_Region20, 400, 1);
			}
			Connection(ho_Region20, &ho_Region20);
			SelectShapeStd(ho_Region20, &ho_Region20, "max_area", 70);
			Union1(ho_Region20, &ho_Region20);

			if (0 != (HTuple(int(hv_Number21 == 2)).TupleOr(int(hv_Number21 == 3))))
			{

				OpeningRectangle1(ho_Region20, &ho_RegionOpening34, 1, 1900);
			}
			else
			{
				OpeningRectangle1(ho_Region20, &ho_RegionOpening34, 1, 1600);
			}
			Connection(ho_RegionOpening34, &ho_ConnectedRegions37);
			OpeningRectangle1(ho_ConnectedRegions37, &ho_ConnectedRegions37, 3, 500);
			SelectShapeStd(ho_ConnectedRegions37, &ho_SelectedRegions19, "max_area", 70);

			ShapeTrans(ho_SelectedRegions19, &ho_RegionUnion, "rectangle1");
			MoveRegion(ho_RegionUnion, &ho_RegionMoved, 0, -850);
			Difference(ho_RegionUnion, ho_RegionMoved, &ho_RegionUnion);
			//difference (RegionTrans31, RegionMoved12, RegionUnion)
			//提取区域
			SmallestRectangle1(ho_RegionUnion, &hv_Row112, &hv_Column112, &hv_Row212, &hv_Column212);
			ReduceDomain(ho_Image, ho_RegionUnion, &ho_ImageReduced9);
			ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion2, 50, 1);
			AreaCenter(ho_RegionUnion, &hv_Area6, &hv_Row3, &hv_Column3);
			if (0 != (int(hv_Number21 == 24)))
			{

				MultImage(ho_Image, ho_Image, &ho_ImageResult15, 0.3, 0);
				GrayDilationRect(ho_ImageResult15, &ho_ImageResult15, 200, 1);
				Threshold(ho_ImageResult15, &ho_Region20, 180, 255);
				FillUp(ho_Region20, &ho_Region20);
				ClosingRectangle1(ho_Region20, &ho_Region20, 400, 1);
				Connection(ho_Region20, &ho_Region20);
				SelectShapeStd(ho_Region20, &ho_Region20, "max_area", 70);
				Union1(ho_Region20, &ho_Region20);


				OpeningRectangle1(ho_Region20, &ho_RegionOpening34, 1, 1900);
				Connection(ho_RegionOpening34, &ho_ConnectedRegions37);
				OpeningRectangle1(ho_ConnectedRegions37, &ho_ConnectedRegions37, 3, 500);
				SelectShapeStd(ho_ConnectedRegions37, &ho_SelectedRegions19, "max_area",
					70);

				ShapeTrans(ho_SelectedRegions19, &ho_RegionUnion, "rectangle1");
				ShapeTrans(ho_SelectedRegions19, &ho_RegionUnion, "rectangle1");
				MoveRegion(ho_RegionUnion, &ho_RegionMoved, 0, -850);
				Difference(ho_RegionUnion, ho_RegionMoved, &ho_RegionUnion);

				//提取区域
				SmallestRectangle1(ho_RegionUnion, &hv_Row112, &hv_Column112, &hv_Row212,
					&hv_Column212);
				ReduceDomain(ho_Image, ho_RegionUnion, &ho_ImageReduced9);
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion2, 50, 1);
				AreaCenter(ho_RegionUnion, &hv_Area6, &hv_Row3, &hv_Column3);
			}
			if (0 != (int(hv_Number21 == 25)))
			{

				//提取区域
				Union1(ho_Region20, &ho_RegionUnion);
				OpeningRectangle1(ho_RegionUnion, &ho_RegionUnion, 1, 300);
				SmallestRectangle1(ho_RegionUnion, &hv_Row112, &hv_Column112, &hv_Row212,
					&hv_Column212);
				ReduceDomain(ho_Image, ho_RegionUnion, &ho_ImageReduced9);
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion2, 50, 1);
				AreaCenter(ho_RegionUnion, &hv_Area6, &hv_Row3, &hv_Column3);
			}


			if (0 != (int(hv_Number21 == 3)))
			{
				//裁剪

				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 11, 11);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 380);
				ClosingRectangle1(ho_Region5, &ho_Region5, 115, 1);
				FillUp(ho_Region5, &ho_Region5);
				OpeningRectangle1(ho_Region5, &ho_Region5, 45, 1);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, (HTuple("width").Append("height")),
					"and", (HTuple(550).Append(30)), (HTuple(99999).Append(150)));
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 50);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));




			}
			if (0 != (int(hv_Number21 == 4)))
			{
				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 380);
				FillUp(ho_Region5, &ho_Region5);
				ClosingRectangle1(ho_Region5, &ho_Region5, 115, 1);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, (HTuple("width").Append("height")),
					"and", (HTuple(550).Append(30)), (HTuple(99999).Append(150)));
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 70);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));
			}
			if (0 != (int(hv_Number21 == 5)))
			{
				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				ClosingRectangle1(ho_Region5, &ho_Region5, 115, 1);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 70);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));


			}
			if (0 != (int(hv_Number21 == 6)))
			{

				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 425, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian5, 15, 15);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture5, "el", 5, 7);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture8, "le", 5, 7);
				AddImage(ho_ImageTexture5, ho_ImageTexture8, &ho_ImageResult19, 2, -100);
				Threshold(ho_ImageResult19, &ho_Region14, 180, 255);
				Intersection(ho_Region14, ho_RegionErosion, &ho_Region14);
				Connection(ho_Region14, &ho_Region14);
				SelectShape(ho_Region14, &ho_Region14, (HTuple("area").Append("width")),
					"or", (HTuple(700).Append(100)), (HTuple(999999).Append(99999)));
				Union1(ho_Region14, &ho_Region14);
				OpeningCircle(ho_Region14, &ho_Region14, 3.5);
				ClosingRectangle1(ho_Region14, &ho_Region15, 135, 1);
				ClosingRectangle1(ho_Region14, &ho_Region16, 1, 135);
				Union2(ho_Region16, ho_Region15, &ho_Region14);
				Connection(ho_Region14, &ho_ConnectedRegions40);
				SelectShape(ho_ConnectedRegions40, &ho_SelectedRegions48, "area", "and",
					4000, 9999999);
				SelectShape(ho_SelectedRegions48, &ho_SelectedRegions49, (HTuple("column").Append("width")),
					"or", (HTuple(700).Append(200)), (HTuple(1300).Append(9999)));
				Union1(ho_SelectedRegions49, &ho_RegionUnion7);
				FillUp(ho_RegionUnion7, &ho_RegionUnion7);
				ShapeTrans(ho_RegionUnion7, &ho_RegionTrans, "rectangle1");
				if (0 != hv_BoolInter)
				{
					ErosionRectangle1(ho_RegionTrans, &ho_RegionTrans, 70, 1);
					MoveRegion(ho_RegionTrans, &ho_RegionTrans, 30, 0);

				}
				RegionFeatures(ho_RegionTrans, "width", &hv_width);
				OpeningCircle(ho_RegionTrans, &ho_RegionTrans, hv_width / 2);
				Union2(ho_RegionTrans, ho_Rectangle_bottom, &ho_RegionUnion7);

				ClosingRectangle1(ho_RegionUnion7, &ho_RegionUnion7, 1, 1055);
				FillUp(ho_RegionUnion7, &ho_RegionUnion7);
				OpeningCircle(ho_RegionUnion7, &(*ho_camregion), 5);





			}
			if (0 != (int(hv_Number21 == 7)))
			{

				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 425, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian5, 15, 15);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture5, "el", 5, 7);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture8, "le", 5, 7);
				AddImage(ho_ImageTexture5, ho_ImageTexture8, &ho_ImageResult19, 2, -100);
				Threshold(ho_ImageResult19, &ho_Region14, 180, 255);
				Intersection(ho_Region14, ho_RegionErosion, &ho_Region14);
				Connection(ho_Region14, &ho_Region14);
				SelectShape(ho_Region14, &ho_Region14, (HTuple("area").Append("width")),
					"or", (HTuple(700).Append(100)), (HTuple(999999).Append(99999)));
				Union1(ho_Region14, &ho_Region14);
				OpeningCircle(ho_Region14, &ho_Region14, 3.5);
				ClosingRectangle1(ho_Region14, &ho_Region15, 135, 1);
				ClosingRectangle1(ho_Region14, &ho_Region16, 1, 135);
				Union2(ho_Region16, ho_Region15, &ho_Region14);
				Connection(ho_Region14, &ho_ConnectedRegions40);
				SelectShape(ho_ConnectedRegions40, &ho_SelectedRegions48, "area", "and",
					4000, 9999999);
				SelectShape(ho_SelectedRegions48, &ho_SelectedRegions49, (HTuple("column").Append("width")),
					"or", (HTuple(700).Append(200)), (HTuple(1300).Append(9999)));
				Union1(ho_SelectedRegions49, &ho_RegionUnion7);
				FillUp(ho_RegionUnion7, &ho_RegionUnion7);
				ShapeTrans(ho_RegionUnion7, &ho_RegionTrans, "rectangle1");
				if (0 != hv_BoolInter)
				{
					ErosionRectangle1(ho_RegionTrans, &ho_RegionTrans, 70, 1);
					MoveRegion(ho_RegionTrans, &ho_RegionTrans, -30, 0);

				}
				RegionFeatures(ho_RegionTrans, "width", &hv_width);
				OpeningCircle(ho_RegionTrans, &ho_RegionTrans, hv_width / 2);
				Union2(ho_RegionTrans, ho_Rectangle_top, &ho_RegionUnion7);

				ClosingRectangle1(ho_RegionUnion7, &ho_RegionUnion7, 1, 1055);
				FillUp(ho_RegionUnion7, &ho_RegionUnion7);
				OpeningCircle(ho_RegionUnion7, &(*ho_camregion), 5);


			}
			if (0 != (int(hv_Number21 == 8)))
			{
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 225, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 15, 15);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture, "el", 5, 7);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture3, "le", 5, 7);
				AddImage(ho_ImageTexture, ho_ImageTexture3, &ho_ImageResult1, 3, -100);
				Threshold(ho_ImageResult1, &ho_Region29, 180, 255);

				Intersection(ho_Region29, ho_RegionErosion, &ho_Region29);
				Connection(ho_Region29, &ho_Region29);
				SelectShape(ho_Region29, &ho_Region29, ((HTuple("area").Append("width")).Append("height")),
					"and", ((HTuple(120).Append(80)).Append(80)), ((HTuple(999999).Append(999999)).Append(99999)));
				Union1(ho_Region29, &ho_Region29);
				ClosingRectangle1(ho_Region29, &ho_Region29, 19, 200);
				ClosingRectangle1(ho_Region29, &ho_Region29, 100, 1);


				Connection(ho_Region29, &ho_ConnectedRegions31);
				SelectShape(ho_ConnectedRegions31, &ho_SelectedRegions12, "area", "and",
					200, 999999);
				Union1(ho_SelectedRegions12, &ho_RegionUnion33);

				Union2(ho_RegionUnion33, ho_Rectangle_bottom, &ho_RegionUnion33);
				ClosingRectangle1(ho_RegionUnion33, &ho_RegionUnion33, 1, 355);
				FillUp(ho_RegionUnion33, &ho_RegionUnion33);
				OpeningCircle(ho_RegionUnion33, &ho_RegionUnion33, 3.5);
				Union2(ho_RegionUnion33, ho_Rectangle_top, &ho_RegionUnion33);
				ClosingRectangle1(ho_RegionUnion33, &ho_RegionUnion33, 25, 200);
				FillUp(ho_RegionUnion33, &ho_RegionUnion33);
				OpeningRectangle1(ho_RegionUnion33, &ho_RegionClosing7, 55, 55);
				FillUp(ho_RegionClosing7, &ho_RegionFillUp14);
				Connection(ho_RegionFillUp14, &ho_ConnectedRegions38);
				SelectShape(ho_ConnectedRegions38, &ho_SelectedRegions32, "column", "and",
					750, 1300);
				Union1(ho_SelectedRegions32, &ho_RegionUnion18);
				ShapeTrans(ho_RegionUnion18, &ho_RegionTrans30, "convex");
				DilationCircle(ho_RegionTrans30, &(*ho_camregion), 10.5);
			}
			if (0 != (int(hv_Number21 == 9)))
			{
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				GenRectangle1(&ho_Rectangle_top, 0, 0, 5, 1800);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 15, 15);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture, "el", 5, 7);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture3, "le", 5, 7);
				AddImage(ho_ImageTexture, ho_ImageTexture3, &ho_ImageResult1, 4, -300);
				Threshold(ho_ImageResult1, &ho_Region29, 128, 255);

				Intersection(ho_Region29, ho_RegionErosion, &ho_Region29);
				ClosingCircle(ho_Region29, &ho_Region29, 3.5);
				Connection(ho_Region29, &ho_Region29);
				SelectShape(ho_Region29, &ho_Region29, (HTuple("area").Append("width")),
					"and", (HTuple(200).Append(200)), (HTuple(999999).Append(99999)));
				Union1(ho_Region29, &ho_Region29);
				ClosingRectangle1(ho_Region29, &ho_Region29, 1, 200);
				FillUp(ho_Region29, &ho_Region29);
				Connection(ho_Region29, &ho_ConnectedRegions31);
				SelectShape(ho_ConnectedRegions31, &ho_SelectedRegions12, (HTuple("area").Append("width")),
					"and", (HTuple(200).Append(200)), (HTuple(999999).Append(99999)));
				Union1(ho_SelectedRegions12, &ho_RegionUnion33);
				ClosingRectangle1(ho_RegionUnion33, &ho_RegionClosing7, 5, 15);
				FillUp(ho_RegionClosing7, &ho_RegionFillUp14);
				Connection(ho_RegionFillUp14, &ho_ConnectedRegions38);
				SelectShape(ho_ConnectedRegions38, &ho_SelectedRegions32, "column", "and",
					750, 1300);
				Union2(ho_SelectedRegions32, ho_Rectangle_top, &ho_RegionUnion34);
				Union2(ho_RegionUnion34, ho_Rectangle_bottom, &ho_RegionUnion34);
				ClosingRectangle1(ho_RegionUnion34, &ho_RegionUnion34, 1, 500);
				FillUp(ho_RegionUnion34, &ho_RegionFillUp);
				OpeningCircle(ho_RegionFillUp, &ho_RegionUnion34, 5);
				ShapeTrans(ho_RegionUnion34, &ho_RegionUnion34, "rectangle1");



				DilationCircle(ho_RegionUnion34, &(*ho_camregion), 10.5);
			}
			if (0 != (int(hv_Number21 == 10)))
			{



				MeanImage(ho_Image, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				Connection(ho_Region5, &ho_Region5);

				SelectShape(ho_Region5, &ho_Region5, (HTuple("width").Append("height")),
					"and", (HTuple(550).Append(30)), (HTuple(9999).Append(300)));
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 70);

				Intersection(ho_Image, ho_RegionDilation1, &(*ho_JTReg));



				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				GenRectangle1(&ho_Rectangle_top, 0, 0, 5, 1800);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 15, 15);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture, "el", 5, 7);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture3, "le", 5, 7);
				AddImage(ho_ImageTexture, ho_ImageTexture3, &ho_ImageResult1, 4, -300);
				Threshold(ho_ImageResult1, &ho_Region29, 128, 255);


				Intersection(ho_Region29, ho_RegionErosion, &ho_Region29);
				ClosingCircle(ho_Region29, &ho_Region29, 3.5);
				Connection(ho_Region29, &ho_Region29);
				SelectShape(ho_Region29, &ho_Region29, (HTuple("area").Append("width")),
					"and", (HTuple(200).Append(200)), (HTuple(999999).Append(99999)));
				Union1(ho_Region29, &ho_Region29);

				ShapeTrans(ho_Region29, &ho_Region29, "convex");
				Union2(ho_Region29, ho_Rectangle_top, &ho_Region29);
				ClosingRectangle1(ho_Region29, &ho_Region29, 1, 300);
				OpeningCircle(ho_Region29, &ho_Region29, 3.5);
				DilationRectangle1(ho_Region29, &(*ho_camregion), 25, 25);
			}
			if (0 != (int(hv_Number21 == 11)))
			{

				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				ClosingRectangle1(ho_Region5, &ho_Region5, 200, 1);
				FillUp(ho_Region5, &ho_Region5);
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 75);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));
			}
			if (0 != (int(hv_Number21 == 12)))
			{
				//裁剪
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -200);
				Threshold(ho_ImageSub, &ho_Region29, 180, 255);
				Connection(ho_Region29, &ho_Region29);
				SelectShape(ho_Region29, &ho_Region29, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(50)), (HTuple(999999).Append(300)));
				Union1(ho_Region29, &ho_Region29);
				Intersection(ho_RegionErosion, ho_Region29, &ho_Region29);
				ClosingCircle(ho_Region29, &ho_Region29, 11);
				Connection(ho_Region29, &ho_ConnectedRegions31);
				ShapeTrans(ho_ConnectedRegions31, &ho_ConnectedRegions31, "convex");
				SelectShape(ho_ConnectedRegions31, &ho_SelectedRegions12, "area", "and",
					400, 999999);
				Union1(ho_SelectedRegions12, &ho_RegionUnion33);
				ClosingRectangle1(ho_RegionUnion33, &ho_RegionClosing7, 5, 15);
				Union2(ho_RegionClosing7, ho_Rectangle_bottom, &ho_RegionClosing7);

				FillUp(ho_RegionClosing7, &ho_RegionFillUp14);
				Connection(ho_RegionFillUp14, &ho_ConnectedRegions38);
				OpeningRectangle1(ho_ConnectedRegions38, &ho_ConnectedRegions38, 7, 7);
				SelectShape(ho_ConnectedRegions38, &ho_ConnectedRegions38, "width", "and",
					150, 300);
				OpeningCircle(ho_ConnectedRegions38, &ho_ConnectedRegions38, 5);


				ShapeTrans(ho_ConnectedRegions38, &ho_RegionTrans30, "convex");
				ClosingCircle(ho_RegionTrans30, &ho_RegionTrans30, 135);


				DilationCircle(ho_RegionTrans30, &(*ho_camregion), 10.5);
			}
			if (0 != (int(hv_Number21 == 13)))
			{
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 4, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(120).Append(100)), (HTuple(99999).Append(99999)));
				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				Union1(ho_Region27, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				Union1(ho_Region27, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("height").Append("width")),
					"and", (HTuple(100).Append(100)), (HTuple(99999).Append(99999)));
				Union1(ho_Region27, &ho_Region27);

				ClosingCircle(ho_Region27, &ho_Region27, 15);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 20);
				Connection(ho_Region27, &ho_Region27);
				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				SelectShape(ho_Region27, &ho_Region28, (HTuple("height").Append("width")),
					"and", (HTuple(100).Append(100)), (HTuple(99999).Append(250)));

				ShapeTrans(ho_Region28, &ho_Region28, "outer_circle");
				Union2(ho_Region28, ho_Region27, &ho_Region27);
				Union1(ho_Region27, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);

				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);
				Connection(ho_Region27, &ho_ConnectedRegions14);

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions9, (HTuple("width").Append("area")),
					"and", (HTuple(100).Append(500)), (HTuple(400).Append(999999)));

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions_big, (HTuple("width").Append("area")),
					"and", (HTuple(300).Append(200)), (HTuple(680).Append(999999)));
				DilationCircle(ho_SelectedRegions_big, &ho_SelectedRegions_big, 3);
				Union2(ho_SelectedRegions9, ho_SelectedRegions_big, &ho_RegionOpening19);

				Connection(ho_RegionOpening19, &ho_ConnectedRegions39);
				ShapeTrans(ho_ConnectedRegions39, &ho_RegionTrans8, "convex");
				DilationCircle(ho_RegionTrans8, &(*ho_camregion), 7);
			}
			if (0 != (int(hv_Number21 == 14)))
			{


				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 4, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);
				OpeningCircle(ho_Region27, &ho_Region27, 3.5);
				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));
				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 30);
				ClosingCircle(ho_Region27, &ho_Region27, 11);
				Connection(ho_Region27, &ho_Region27);
				ShapeTrans(ho_Region27, &ho_Region27, "convex");

				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 100, 1);
				ClosingCircle(ho_Region27, &ho_Region27, 11);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 40);

				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);
				Connection(ho_Region27, &ho_ConnectedRegions14);

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions9, (HTuple("width").Append("area")),
					"and", (HTuple(100).Append(500)), (HTuple(280).Append(999999)));

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions_big, (HTuple("width").Append("area")),
					"and", (HTuple(300).Append(200)), (HTuple(680).Append(999999)));
				DilationCircle(ho_SelectedRegions_big, &ho_SelectedRegions_big, 1);
				Union2(ho_SelectedRegions9, ho_SelectedRegions_big, &ho_RegionOpening19);

				Connection(ho_RegionOpening19, &ho_ConnectedRegions39);
				ShapeTrans(ho_ConnectedRegions39, &ho_RegionTrans8, "convex");
				DilationCircle(ho_RegionTrans8, &(*ho_camregion), 5);


			}
			if (0 != (int(hv_Number21 == 15)))
			{
				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				ClosingRectangle1(ho_Region5, &ho_Region5, 100, 1);
				FillUp(ho_Region5, &ho_Region5);
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 70);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));


				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);

				MeanImage(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -200);
				Threshold(ho_ImageSub, &ho_Region14, 180, 255);
				Intersection(ho_Region14, ho_RegionErosion, &ho_Region14);

				Connection(ho_Region14, &ho_Region14);
				ShapeTrans(ho_Region14, &ho_Region14, "convex");
				SelectShape(ho_Region14, &ho_Region14, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(300)));
				SelectShape(ho_Region14, &ho_Region14, "width", "and", 100, 300);
				Union2(ho_Region14, ho_Rectangle_top, &ho_Region14);
				Union2(ho_Region14, ho_Rectangle_bottom, &ho_Region14);
				Union1(ho_Region14, &ho_Region14);

				ClosingRectangle1(ho_Region14, &ho_Region14, 3, 55);
				Union2(ho_Region14, ho_Rectangle_bottom, &ho_Region14);
				Union2(ho_Region14, ho_Rectangle_top, &ho_Region14);
				FillUp(ho_Region14, &ho_Region14);
				OpeningRectangle1(ho_Region14, &ho_Region14, 25, 25);

				Connection(ho_Region14, &ho_ConnectedRegions40);
				SelectShape(ho_ConnectedRegions40, &ho_SelectedRegions48, "area", "and",
					4000, 9999999);
				SelectShape(ho_SelectedRegions48, &ho_SelectedRegions49, "column", "and",
					700, 1300);
				Union1(ho_SelectedRegions49, &ho_RegionUnion7);
				ClosingRectangle1(ho_RegionUnion7, &ho_RegionClosing4, 45, 25);
				FillUp(ho_RegionClosing4, &ho_RegionFillUp20);
				Connection(ho_RegionFillUp20, &ho_ConnectedRegions41);
				ShapeTrans(ho_ConnectedRegions41, &ho_RegionTrans11, "convex");
				DilationCircle(ho_RegionTrans11, &(*ho_camregion), 20.5);

			}
			if (0 != (int(hv_Number21 == 16)))
			{
				//裁剪
				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				ClosingRectangle1(ho_Region5, &ho_Region5, 100, 1);
				FillUp(ho_Region5, &ho_Region5);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, (HTuple("width").Append("height")),
					"and", (HTuple(650).Append(60)), (HTuple(99999).Append(200)));
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 70);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));
			}
			if (0 != (int(hv_Number21 == 17)))
			{
				//裁剪
				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 50);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));
			}
			if (0 != (int(hv_Number21 == 18)))
			{
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 425, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);

				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(700).Append(100)), (HTuple(99999).Append(99999)));
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 35);
				ClosingRectangle1(ho_Region27, &ho_Region27, 135, 1);
				Connection(ho_Region27, &ho_Region27);
				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 135);

				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 25, 25);
				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				Connection(ho_Region27, &ho_ConnectedRegions14);

				DilationCircle(ho_ConnectedRegions14, &(*ho_camregion), 10.5);

			}
			if (0 != (int(hv_Number21 == 19)))
			{
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -200);
				Threshold(ho_ImageSub, &ho_Region29, 180, 255);
				Intersection(ho_Region29, ho_RegionErosion, &ho_Region29);
				Connection(ho_Region29, &ho_Region29);
				SelectShape(ho_Region29, &ho_Region29, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));
				Union1(ho_Region29, &ho_Region29);
				ClosingRectangle1(ho_Region29, &ho_Region29, 1, 121);
				ClosingRectangle1(ho_Region29, &ho_Region29, 121, 1);
				FillUp(ho_Region29, &ho_Region29);
				//union2 (Region29, Rectangle_bottom, Region29)
				Union2(ho_Region29, ho_Rectangle_top, &ho_Region29);
				ClosingRectangle1(ho_Region29, &ho_Region29, 1, 1121);
				FillUp(ho_Region29, &ho_Region29);
				OpeningCircle(ho_Region29, &ho_Region29, 55);




				Connection(ho_Region29, &ho_ConnectedRegions31);

				SelectShape(ho_ConnectedRegions31, &ho_SelectedRegions12, "area", "and",
					350, 999999);
				Union1(ho_SelectedRegions12, &ho_RegionUnion33);
				ClosingRectangle1(ho_RegionUnion33, &ho_RegionClosing7, 10, 15);
				FillUp(ho_RegionClosing7, &ho_RegionFillUp14);
				Connection(ho_RegionFillUp14, &ho_ConnectedRegions38);
				SelectShape(ho_ConnectedRegions38, &ho_SelectedRegions32, (HTuple("column").Append("width")),
					"and", (HTuple(750).Append(60)), (HTuple(1300).Append(9999)));
				Union1(ho_SelectedRegions32, &ho_RegionUnion34);

				ShapeTrans(ho_RegionUnion34, &ho_RegionTrans30, "convex");
				DilationCircle(ho_RegionTrans30, &(*ho_camregion), 10.5);

			}
			if (0 != (int(hv_Number21 == 20)))
			{

				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 121);
				ClosingRectangle1(ho_Region27, &ho_Region27, 121, 1);
				FillUp(ho_Region27, &ho_Region27);

				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 521);
				FillUp(ho_Region27, &ho_Region27);
				OpeningCircle(ho_Region27, &ho_Region27, 55);


				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 35);
				ClosingRectangle1(ho_Region27, &ho_Region27, 175, 1);
				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);

				Connection(ho_Region27, &ho_ConnectedRegions14);
				ShapeTrans(ho_ConnectedRegions14, &ho_ConnectedRegions14, "convex");
				DilationCircle(ho_ConnectedRegions14, &(*ho_camregion), 10.5);
			}
			if (0 != (int(hv_Number21 == 21)))
			{
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 425, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian5, 15, 15);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture5, "el", 5, 7);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture8, "le", 5, 7);
				AddImage(ho_ImageTexture5, ho_ImageTexture8, &ho_ImageResult19, 2, -100);
				Threshold(ho_ImageResult19, &ho_Region14, 180, 255);
				Intersection(ho_Region14, ho_RegionErosion, &ho_Region14);
				OpeningCircle(ho_Region14, &ho_Region14, 3.5);
				Connection(ho_Region14, &ho_Region14);

				SelectShape(ho_Region14, &ho_Region14, (HTuple("area").Append("width")),
					"or", (HTuple(700).Append(100)), (HTuple(99999).Append(99999)));
				Union1(ho_Region14, &ho_Region14);

				ClosingRectangle1(ho_Region14, &ho_Region14, 1, 151);
				Connection(ho_Region14, &ho_Region14);
				ShapeTrans(ho_Region14, &ho_Region14, "rectangle1");
				Union1(ho_Region14, &ho_Region14);
				Connection(ho_Region14, &ho_Region14);
				ShapeTrans(ho_Region14, &ho_Region14, "rectangle1");
				SelectShape(ho_Region14, &ho_Region14, "width", "and", 200, 500);
				SortRegion(ho_Region14, &ho_Region14, "first_point", "true", "row");
				SelectObj(ho_Region14, &ho_ObjectSelected, 1);

				if (0 != hv_BoolInter)
				{
					ErosionRectangle1(ho_ObjectSelected, &ho_ObjectSelected, 60, 35);
				}
				RegionFeatures(ho_ObjectSelected, "width", &hv_width);
				OpeningCircle(ho_ObjectSelected, &ho_RegionClosing, hv_width / 2);
				SelectObj(ho_Region14, &ho_ObjectSelected, 2);

				if (0 != hv_BoolInter)
				{
					ErosionRectangle1(ho_ObjectSelected, &ho_ObjectSelected, 60, 35);
				}
				RegionFeatures(ho_ObjectSelected, "width", &hv_width);
				DilationRectangle1(ho_ObjectSelected, &ho_ObjectSelected, 1, hv_width);
				OpeningCircle(ho_ObjectSelected, &ho_Region14, (hv_width / 2) - 1);
				MoveRegion(ho_Region14, &ho_Region14, hv_width / 2, 1);
				Union2(ho_Region14, ho_RegionClosing, &ho_Region14);

				Union2(ho_Region14, ho_Rectangle_top, &ho_Region14);

				Union2(ho_Region14, ho_Rectangle_bottom, &ho_Region14);
				ClosingRectangle1(ho_Region14, &ho_Region14, 3, 55);
				Union1(ho_Region14, &ho_Region14);
				Connection(ho_Region14, &ho_Region14);




				ClosingRectangle1(ho_Region14, &ho_Region14, 3, 525);
				Union2(ho_Region14, ho_Rectangle_bottom, &ho_Region14);
				Union2(ho_Region14, ho_Rectangle_top, &ho_Region14);
				FillUp(ho_Region14, &ho_Region14);
				OpeningRectangle1(ho_Region14, &ho_Region14, 25, 25);

				Connection(ho_Region14, &ho_ConnectedRegions40);
				SelectShape(ho_ConnectedRegions40, &ho_SelectedRegions48, "area", "and",
					4000, 9999999);
				SelectShape(ho_SelectedRegions48, &ho_SelectedRegions49, "column", "and",
					700, 1300);
				Union1(ho_SelectedRegions49, &ho_RegionUnion7);
				ClosingRectangle1(ho_RegionUnion7, &ho_RegionClosing4, 45, 25);
				FillUp(ho_RegionClosing4, &ho_RegionFillUp20);
				Connection(ho_RegionFillUp20, &ho_ConnectedRegions41);
				ShapeTrans(ho_ConnectedRegions41, &ho_RegionTrans11, "convex");
				DilationCircle(ho_RegionTrans11, &(*ho_camregion), 5);
			}
			if (0 != (int(hv_Number21 == 22)))
			{

				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);

				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 121);


				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));

				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				Union1(ho_Region27, &ho_Region27);

				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);

				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 100);

				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);

				Union1(ho_Region27, &ho_Region27);
				ClosingCircle(ho_Region27, &ho_Region27, 11);
				ClosingRectangle1(ho_Region27, &ho_Region27, 100, 1);

				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);
				Connection(ho_Region27, &ho_ConnectedRegions14);

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions9, (HTuple("width").Append("area")),
					"and", (HTuple(100).Append(500)), (HTuple(280).Append(999999)));

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions_big, (HTuple("width").Append("area")),
					"and", (HTuple(300).Append(200)), (HTuple(680).Append(999999)));
				DilationCircle(ho_SelectedRegions_big, &ho_SelectedRegions_big, 10);
				Union2(ho_SelectedRegions9, ho_SelectedRegions_big, &ho_RegionOpening19);

				Connection(ho_RegionOpening19, &ho_ConnectedRegions39);
				ShapeTrans(ho_ConnectedRegions39, &ho_RegionTrans8, "convex");
				DilationCircle(ho_RegionTrans8, &(*ho_camregion), 3);


			}
			if (0 != (int(hv_Number21 == 23)))
			{
				//裁剪
				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 50);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));

				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MeanImage(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);

				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				Union1(ho_Region27, &ho_Region27);
				ClosingCircle(ho_Region27, &ho_Region27, 11);
				ClosingRectangle1(ho_Region27, &ho_Region27, 100, 1);

				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);
				Connection(ho_Region27, &ho_ConnectedRegions14);
				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions4, "width", "and",
					250, 99999);
				DilationCircle(ho_SelectedRegions4, &(*ho_camregion), 15.5);

			}
			if (0 != (int(hv_Number21 == 24)))
			{
				//裁剪
				MeanImage(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, (HTuple("width").Append("height")),
					"and", (HTuple(550).Append(50)), (HTuple(99999).Append(200)));
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 50);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));
			}
			if (0 != (int(hv_Number21 == 27)))
			{

				//裁剪
				GenRectangle1(&ho_Rectangle11, 1024, 497, 1455, 1766);
				ReduceDomain(ho_ImageReduced9, ho_Rectangle11, &ho_ImageReduced12);
				MeanImage(ho_ImageReduced12, &ho_ImageMedian11, 10, 10);
				ReduceDomain(ho_ImageMedian11, ho_RegionErosion2, &ho_ImageReduced10);
				TextureLaws(ho_ImageReduced10, &ho_ImageTexture6, "el", 5, 7);
				TextureLaws(ho_ImageReduced10, &ho_ImageTexture7, "le", 5, 7);
				AddImage(ho_ImageTexture6, ho_ImageTexture7, &ho_ImageResult3, 2, -100);
				MeanImage(ho_ImageResult3, &ho_ImageMedian10, 15, 1);
				Threshold(ho_ImageResult3, &ho_Region6, 180, 255);
				Connection(ho_Region6, &ho_ConnectedRegions5);
				RankRegion(ho_ConnectedRegions5, &ho_RegionCount, 80, 15, 1000);
				ClosingRectangle1(ho_RegionCount, &ho_RegionOpening23, 100, 5);
				Union1(ho_RegionOpening23, &ho_RegionUnion23);
				ShapeTrans(ho_RegionUnion23, &ho_RegionTrans12, "rectangle1");
				RegionFeatures(ho_RegionTrans12, "height", &hv_Value4);
				if (0 != (int(hv_Value4 < 120)))
				{
					DilationRectangle1(ho_RegionTrans12, &ho_RegionDilation4, 1, 140);
					MoveRegion(ho_RegionDilation4, &ho_RegionTrans12, 65, 0);
				}
				DilationRectangle1(ho_RegionTrans12, &ho_RegionDilation8, 600, 10);
				Union1(ho_RegionDilation8, &ho_RegionUnion14);
				Intersection(ho_RegionUnion14, ho_RegionUnion, &(*ho_camregion));
			}
			if (0 != (int(hv_Number21 == 29)))
			{

				//裁剪
				GenRectangle1(&ho_Rectangle5, 364, 380, 967, 1726);
				ReduceDomain(ho_Image, ho_Rectangle5, &ho_ImageReduced1);
				MeanImage(ho_ImageReduced1, &ho_ImageMedian11, 10, 10);
				TextureLaws(ho_ImageMedian11, &ho_ImageTexture6, "el", 5, 7);
				TextureLaws(ho_ImageMedian11, &ho_ImageTexture7, "le", 5, 7);
				AddImage(ho_ImageTexture6, ho_ImageTexture7, &ho_ImageResult3, 2, -100);
				MeanImage(ho_ImageResult3, &ho_ImageMedian10, 15, 1);
				Threshold(ho_ImageResult3, &ho_Region6, 150, 255);
				Connection(ho_Region6, &ho_ConnectedRegions5);
				RankRegion(ho_ConnectedRegions5, &ho_RegionCount, 80, 20, 800);
				ClosingRectangle1(ho_RegionCount, &ho_RegionOpening23, 100, 5);
				Union1(ho_RegionOpening23, &ho_RegionUnion23);
				ShapeTrans(ho_RegionUnion23, &ho_RegionTrans12, "rectangle1");
				DilationRectangle1(ho_RegionTrans12, &ho_RegionDilation8, 5, 5);
				Union1(ho_RegionDilation8, &(*ho_camregion));

			}
			Union1((*ho_camregion), &(*ho_camregion));



		}
		else if (0 != (int(hv_Substring == HTuple("2_2"))))
		{
			if (true)
			{
				if (0 != (int(hv_Number21 == 25)))
				{
					GenRectangle1(&ho_Rectangle3, 0, 20, 737, 2041);
					ReduceDomain(ho_Image, ho_Rectangle3, &ho_ImageReduced7);
					MultImage(ho_ImageReduced7, ho_ImageReduced7, &ho_ImageResult4, 0.01, 0);
					Threshold(ho_ImageResult4, &ho_Region, 85, 255);
					FillUp(ho_Region, &ho_RegionFillUp3);
					Connection(ho_RegionFillUp3, &ho_ConnectedRegions20);
					SelectShape(ho_ConnectedRegions20, &ho_SelectedRegions43, (HTuple("area").Append("width")),
						"and", (HTuple(1500).Append(700)), (HTuple(999999999).Append(1500)));
					SelectShape(ho_ConnectedRegions20, &ho_SelectedRegions44, "height", "and",
						400, 99999);
					Union2(ho_SelectedRegions44, ho_SelectedRegions43, &ho_RegionUnion15);
					FillUp(ho_RegionUnion15, &ho_RegionFillUp1);
					Union1(ho_RegionFillUp1, &ho_RegionUnion2);
					ClosingRectangle1(ho_RegionUnion2, &ho_RegionClosing5, 1500, 200);
					Connection(ho_RegionClosing5, &ho_ConnectedRegions1);
					SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions, (HTuple("height").Append("width")),
						"and", (HTuple(400).Append(300)), (HTuple(3000).Append(1600)));
					Union1(ho_SelectedRegions, &ho_RegionUnion10);
					ShapeTrans(ho_RegionUnion10, &ho_ConnectedRegions21, "convex");
					OpeningRectangle1(ho_ConnectedRegions21, &ho_RegionOpening20, 3, 5);
					ShapeTrans(ho_RegionOpening20, &ho_RegionTrans6, "rectangle1");
					MoveRegion(ho_RegionTrans6, &ho_RegionUnion, 5, 0);
					//提取区域
					SmallestRectangle1(ho_RegionUnion, &hv_Row112, &hv_Column112, &hv_Row212,
						&hv_Column212);
					GenRectangle1(&ho_RegionUnion, 0, hv_Column112, 2048, hv_Column212);
					ReduceDomain(ho_Image, ho_RegionUnion, &ho_ImageReduced9);
					AreaCenter((*ho_camregion), &hv_Area6, &hv_Row3, &hv_Column3);
				}
				else
				{




					MultImage(ho_Image, ho_Image, &ho_ImageResult4, 0.05, 0);
					Threshold(ho_ImageResult4, &ho_Region, 85, 255);
					FillUp(ho_Region, &ho_RegionFillUp3);
					Connection(ho_RegionFillUp3, &ho_ConnectedRegions20);
					SelectShape(ho_ConnectedRegions20, &ho_SelectedRegions43, (HTuple("area").Append("width")),
						"and", (HTuple(1500).Append(700)), (HTuple(999999999).Append(1500)));


					SelectShape(ho_SelectedRegions43, &ho_SelectedRegions44, "height", "and",
						400, 99999);
					Union2(ho_SelectedRegions44, ho_SelectedRegions43, &ho_RegionUnion15);
					FillUp(ho_RegionUnion15, &ho_RegionFillUp1);
					Union1(ho_RegionFillUp1, &ho_RegionUnion2);
					ClosingRectangle1(ho_RegionUnion2, &ho_RegionClosing5, 1500, 200);
					Connection(ho_RegionClosing5, &ho_ConnectedRegions1);
					SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions, (HTuple("height").Append("width")),
						"and", (HTuple(400).Append(300)), (HTuple(3000).Append(1600)));
					Union1(ho_SelectedRegions, &ho_RegionUnion10);
					OpeningRectangle1(ho_RegionUnion10, &ho_RegionUnion10, 1, 1900);
					ShapeTrans(ho_RegionUnion10, &ho_ConnectedRegions21, "convex");
					OpeningRectangle1(ho_ConnectedRegions21, &ho_RegionOpening20, 3, 5);
					ShapeTrans(ho_RegionOpening20, &ho_RegionTrans6, "rectangle1");
					MoveRegion(ho_RegionTrans6, &ho_RegionUnion, 5, 0);
					//提取区域
					SmallestRectangle1(ho_RegionUnion, &hv_Row112, &hv_Column112, &hv_Row212,
						&hv_Column212);
					if (0 != (int((hv_Row112.TupleLength()) == 0)))
					{
						AutoThreshold(ho_Image, &ho_RegionUnion, 2);
						Connection(ho_RegionUnion, &ho_RegionUnion);
						SelectShapeStd(ho_RegionUnion, &ho_RegionUnion, "max_area", 70);
						ShapeTrans(ho_RegionUnion, &ho_RegionUnion, "rectangle1");
					}
					else
					{
						GenRectangle1(&ho_RegionUnion, 0, hv_Column112, 2048, hv_Column212);
					}
					ReduceDomain(ho_Image, ho_RegionUnion, &ho_ImageReduced9);
					AreaCenter((*ho_camregion), &hv_Area6, &hv_Row3, &hv_Column3);
				}
				if (0 != (int(hv_Number21 == 2)))
				{
					//裁剪
					GenRectangle1(&ho_Rectangle9, 1717, 412, 2099, 1616);
					ReduceDomain(ho_ImageReduced9, ho_Rectangle9, &ho_ImageReduced6);
					MeanImage(ho_ImageReduced6, &ho_ImageMedian11, 10, 10);
					MeanImage(ho_ImageMedian11, &ho_ImageMedian10, 15, 1);
					VarThreshold(ho_ImageMedian10, &ho_Region13, 50, 800, 0.2, 25, "dark");
					Connection(ho_Region13, &ho_ConnectedRegions5);
					ClosingRectangle1(ho_ConnectedRegions5, &ho_RegionOpening23, 100, 5);
					SelectShape(ho_RegionOpening23, &ho_SelectedRegions3, (HTuple("width").Append("area")),
						"and", (HTuple(200).Append(400)), (HTuple(1200).Append(999999)));
					Union1(ho_SelectedRegions3, &ho_RegionUnion23);
					ShapeTrans(ho_RegionUnion23, &ho_RegionTrans12, "rectangle1");
					DilationRectangle1(ho_RegionTrans12, &ho_RegionDilation, 1000, 1);
					Intersection(ho_RegionDilation, ho_ImageReduced9, &(*ho_camregion));
				}
				if (0 != (int(hv_Number21 == 3)))
				{
					//裁剪
					MeanImage(ho_ImageReduced9, &ho_ImageMedian7, 1, 15);
					MultImage(ho_ImageMedian7, ho_ImageMedian7, &ho_ImageResult12, 0.01, 0);
					Threshold(ho_ImageResult12, &ho_Regions3, 0, 60);
					FillUp(ho_Regions3, &ho_RegionFillUp21);
					DilationRectangle1(ho_RegionFillUp21, &ho_RegionDilation24, 9, 1);
					FillUp(ho_RegionDilation24, &ho_RegionFillUp25);
					OpeningCircle(ho_RegionFillUp25, &ho_RegionOpening8, 3.5);
					OpeningRectangle1(ho_RegionOpening8, &ho_RegionOpening18, 49, 1);
					Connection(ho_RegionOpening18, &ho_ConnectedRegions17);
					SelectShape(ho_ConnectedRegions17, &ho_SelectedRegions20, "area", "and",
						23689, 195353);
					MoveRegion(ho_SelectedRegions20, &ho_RegionMoved7, 1, 5);
					DilationRectangle1(ho_RegionMoved7, &(*ho_camregion), 55, 30);
				}
				if (0 != (int(hv_Number21 == 4)))
				{

					MeanImage(ho_ImageReduced9, &ho_ImageMedian, 1, 25);
					MultImage(ho_ImageMedian, ho_ImageMedian, &ho_ImageResult11, 0.01, 0);
					Threshold(ho_ImageResult11, &ho_Regions2, 0, 61);
					FillUp(ho_Regions2, &ho_RegionFillUp11);
					OpeningRectangle1(ho_RegionFillUp11, &ho_RegionOpening15, 25, 1);
					DilationRectangle1(ho_RegionOpening15, &(*ho_camregion), 15, 15);
				}
				if (0 != (int(hv_Number21 == 5)))
				{


				}
				if (0 != (int(hv_Number21 == 6)))
				{

					MeanImage(ho_ImageReduced9, &ho_ImageMedian3, 15, 1);

					MultImage(ho_ImageMedian3, ho_ImageMedian3, &ho_ImageResult5, 0.008, 0);
					ErosionRectangle1(ho_RegionUnion, &ho_RegionDilation, 325, 1);
					ReduceDomain(ho_ImageResult5, ho_RegionDilation, &ho_ImageResult5);
					BinaryThreshold(ho_ImageResult5, &ho_Region16, "max_separability", "dark",
						&hv_UsedThreshold);
					FillUp(ho_Region16, &ho_RegionFillUp28);
					Connection(ho_RegionFillUp28, &ho_ConnectedRegions8);
					SelectShape(ho_ConnectedRegions8, &ho_SelectedRegions8, (HTuple("column").Append("width")),
						"and", (HTuple(872.03).Append(200)), (HTuple(1263.25).Append(400)));
					ShapeTrans(ho_SelectedRegions8, &ho_RegionTrans5, "rectangle1");
					DilationRectangle1(ho_RegionTrans5, &ho_RegionDilation14, 59, 115);
					MoveRegion(ho_RegionDilation14, &ho_RegionDilation14, 50, 1);
					RegionFeatures(ho_RegionDilation14, "width", &hv_Value);
					OpeningCircle(ho_RegionDilation14, &ho_RegionOpening24, (hv_Value - 5) / 2);
					MoveRegion(ho_RegionOpening24, &ho_RegionMoved1, 200, 1);
					Union2(ho_RegionOpening24, ho_RegionMoved1, &(*ho_camregion));
					MoveRegion((*ho_camregion), &(*ho_camregion), -20, 1);

				}
				if (0 != (int(hv_Number21 == 7)))
				{
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult10, 0.05,
						0);
					MedianImage(ho_ImageResult10, &ho_ImageResult10, "circle", 8, "mirrored");
					ErosionRectangle1(ho_RegionUnion, &ho_RegionDilation, 325, 1);
					ReduceDomain(ho_ImageResult10, ho_RegionDilation, &ho_ImageResult10);
					BinaryThreshold(ho_ImageResult10, &ho_Region19, "max_separability", "dark",
						&hv_UsedThreshold);
					FillUp(ho_Region19, &ho_RegionFillUp29);
					Connection(ho_RegionFillUp29, &ho_ConnectedRegions19);
					SelectShape(ho_ConnectedRegions19, &ho_SelectedRegions14, (HTuple("column").Append("width")),
						"and", (HTuple(872.03).Append(200)), (HTuple(1263.25).Append(400)));
					ShapeTrans(ho_SelectedRegions14, &ho_RegionTrans27, "rectangle1");
					DilationRectangle1(ho_RegionTrans27, &ho_RegionDilation20, 55, 85);
					MoveRegion(ho_RegionDilation20, &ho_RegionDilation20, -40, 1);
					RegionFeatures(ho_RegionDilation20, "width", &hv_Value1);
					OpeningCircle(ho_RegionDilation20, &ho_RegionOpening28, hv_Value1 / 2);
					MoveRegion(ho_RegionOpening28, &ho_RegionMoved6, -200, 1);
					Union2(ho_RegionOpening28, ho_RegionMoved6, &(*ho_camregion));
					MoveRegion((*ho_camregion), &(*ho_camregion), 20, 1);
				}
				if (0 != (int(hv_Number21 == 8)))
				{

					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult13, 0.01,
						0);
					Threshold(ho_ImageResult13, &ho_Region11, 0, 128);
					OpeningCircle(ho_Region11, &ho_RegionOpening19, 8.5);
					Connection(ho_RegionOpening19, &ho_ConnectedRegions24);
					SelectShape(ho_RegionOpening19, &ho_SelectedRegions22, "area", "and", 427667,
						789331);
					ShapeTrans(ho_SelectedRegions22, &ho_RegionTrans15, "convex");
					DilationRectangle1(ho_RegionTrans15, &(*ho_camregion), 15, 15);
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult46, 0.04,
						0);
					Threshold(ho_ImageResult46, &ho_Region43, 0, 45);
					OpeningCircle(ho_Region43, &ho_RegionOpening29, 3.5);
					Connection(ho_RegionOpening29, &ho_ConnectedRegions77);
					SelectShape(ho_ConnectedRegions77, &ho_SelectedRegions107, "row", "and",
						938.08, 2712.57);
					SelectShape(ho_SelectedRegions107, &ho_SelectedRegions108, "area", "and",
						10536, 190203);
					Union2(ho_SelectedRegions108, (*ho_camregion), &(*ho_camregion));
					Threshold(ho_ImageResult46, &ho_Region45, 0, 175);
					ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
					Intersection(ho_RegionErosion, ho_Region45, &ho_Region45);
					Connection(ho_Region45, &ho_ConnectedRegions79);
					SelectShape(ho_ConnectedRegions79, &ho_SelectedRegions109, "area", "and",
						946.4, 99999999);
					Union1(ho_SelectedRegions109, &ho_RegionUnion52);
					GenEmptyObj(&ho_EmptyObject4);
					if (0 != (ho_SelectedRegions109 != ho_EmptyObject4))
					{
						ShapeTrans(ho_RegionUnion52, &ho_RegionTrans54, "rectangle1");
						DilationRectangle1(ho_RegionTrans54, &ho_RegionDilation44, 15, 15);
						RegionFeatures(ho_RegionDilation44, "width", &hv_Value14);
						OpeningCircle(ho_RegionDilation44, &ho_RegionOpening79, hv_Value14 / 2);
						Union2(ho_RegionOpening79, ho_Rectangle_bottom, &ho_RegionOpening79);
						ClosingRectangle1(ho_RegionOpening79, &ho_RegionOpening79, 1, 400);
						OpeningCircle(ho_RegionOpening79, &ho_RegionOpening79, 3.5);
						Union2(ho_RegionOpening79, ho_RegionOpening79, &(*ho_camregion));
					}
				}
				if (0 != (int(hv_Number21 == 9)))
				{
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult13, 0.1, 0);
					Threshold(ho_ImageResult13, &ho_Region11, 0, 128);
					ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 225, 1);
					Intersection(ho_Region11, ho_RegionErosion, &ho_Region11);


					OpeningCircle(ho_Region11, &ho_RegionOpening19, 8.5);
					Connection(ho_RegionOpening19, &ho_ConnectedRegions24);
					SelectShape(ho_ConnectedRegions24, &ho_SelectedRegions22, "area", "and",
						2000, 789331);
					Union1(ho_SelectedRegions22, &ho_RegionUnion49);
					ShapeTrans(ho_RegionUnion49, &(*ho_camregion), "rectangle1");

					DilationRectangle1((*ho_camregion), &(*ho_camregion), 71, 1);


				}
				if (0 != (int(hv_Number21 == 10)))
				{
					//裁剪
					GenRectangle1(&ho_Rectangle9, 1717, 412, 2099, 1616);
					ReduceDomain(ho_ImageReduced9, ho_Rectangle9, &ho_ImageReduced6);
					MeanImage(ho_ImageReduced6, &ho_ImageMedian11, 10, 10);
					MeanImage(ho_ImageMedian11, &ho_ImageMedian10, 15, 1);
					VarThreshold(ho_ImageMedian10, &ho_Region13, 5, 500, 0.2, 15, "dark");
					Connection(ho_Region13, &ho_ConnectedRegions5);
					ClosingRectangle1(ho_ConnectedRegions5, &ho_RegionOpening23, 100, 5);
					SelectShape(ho_RegionOpening23, &ho_SelectedRegions3, (HTuple("width").Append("area")),
						"and", (HTuple(200).Append(400)), (HTuple(1200).Append(999999)));
					Union1(ho_SelectedRegions3, &ho_RegionUnion23);
					ShapeTrans(ho_RegionUnion23, &ho_RegionTrans12, "rectangle1");
					DilationRectangle1(ho_RegionTrans12, &ho_RegionDilation, 1000, 1);
					Intersection(ho_RegionDilation, ho_ImageReduced9, &(*ho_camregion));
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult47, 0.06,
						0);
					MedianImage(ho_ImageResult47, &ho_ImageMedian31, "circle", 16, "mirrored");
					Threshold(ho_ImageMedian31, &ho_Region44, 0, 30);
					ClosingCircle(ho_Region44, &ho_Region44, 15);
					FillUp(ho_Region44, &ho_Region44);
					OpeningCircle(ho_Region44, &ho_RegionOpening78, 3.5);
					Connection(ho_RegionOpening78, &ho_ConnectedRegions78);
					SelectShape(ho_ConnectedRegions78, &(*ho_camregion), (HTuple("area").Append("width")),
						"and", (HTuple(2073).Append(35)), (HTuple(9999999).Append(9999)));

					Union2((*ho_camregion), ho_Rectangle_top, &(*ho_camregion));
					ClosingRectangle1((*ho_camregion), &(*ho_camregion), 1, 500);
					OpeningCircle((*ho_camregion), &(*ho_camregion), 3.5);
					DilationCircle((*ho_camregion), &(*ho_camregion), 13.5);
				}
				if (0 != (int(hv_Number21 == 11)))
				{
					//裁剪
					GenRectangle1(&ho_Rectangle9, 0, 506, 2047, 1816);
					ReduceDomain(ho_ImageReduced9, ho_Rectangle9, &ho_ImageReduced6);
					MeanImage(ho_ImageReduced6, &ho_ImageMedian11, 10, 10);
					MultImage(ho_ImageMedian11, ho_ImageMedian11, &ho_ImageResult8, 0.008,
						0);
					Threshold(ho_ImageResult8, &ho_Region17, 0, 50);
					FillUp(ho_Region17, &ho_RegionFillUp8);
					OpeningRectangle1(ho_RegionFillUp8, &ho_RegionOpening17, 20, 1);
					DilationRectangle1(ho_RegionOpening17, &(*ho_camregion), 15, 28);

				}
				if (0 != (int(hv_Number21 == 12)))
				{

					//裁剪
					GenRectangle1(&ho_Rectangle9, 1217, 412, 2099, 1616);

					ReduceDomain(ho_ImageReduced9, ho_Rectangle9, &ho_ImageReduced6);
					MultImage(ho_ImageReduced6, ho_ImageReduced6, &ho_ImageResult27, 0.01,
						0);
					MeanImage(ho_ImageResult27, &ho_ImageResult27, 10, 10);
					MeanImage(ho_ImageResult27, &ho_ImageMedian10, 15, 1);

					ErosionRectangle1(ho_RegionUnion, &ho_RegionDilation, 325, 1);
					Intersection(ho_RegionDilation, ho_Rectangle9, &ho_Rectangle9);
					ReduceDomain(ho_ImageMedian10, ho_Rectangle9, &ho_ImageMedian10);
					BinaryThreshold(ho_ImageMedian10, &ho_Region13, "max_separability", "dark",
						&hv_UsedThreshold);

					Connection(ho_Region13, &ho_ConnectedRegions5);
					ClosingRectangle1(ho_ConnectedRegions5, &ho_RegionOpening23, 100, 5);
					SelectShape(ho_RegionOpening23, &ho_SelectedRegions3, (HTuple("width").Append("area")),
						"and", (HTuple(10).Append(1900)), (HTuple(1200).Append(999999)));
					SelectShape(ho_SelectedRegions3, &ho_SelectedRegions40, "column", "and",
						963.03, 2047.72);
					ShapeTrans(ho_SelectedRegions40, &ho_SelectedRegions3, "outer_circle");
					DilationRectangle1(ho_SelectedRegions3, &ho_RegionDilation, 10, 10);
					Intersection(ho_RegionDilation, ho_ImageReduced9, &(*ho_camregion));
				}
				if (0 != (int(hv_Number21 == 13)))
				{
					//test
					MeanImage(ho_ImageReduced9, &ho_ImageMedian4, 25, 1);
					MultImage(ho_ImageMedian4, ho_ImageMedian4, &ho_ImageResult6, 0.1, 0);
					Threshold(ho_ImageResult6, &ho_Region8, 0, 70);
					FillUp(ho_Region8, &ho_RegionFillUp2);

					Connection(ho_RegionFillUp2, &ho_ConnectedRegions6);
					SelectShape(ho_ConnectedRegions6, &ho_SelectedRegions6, (HTuple("area").Append("width")),
						"and", (HTuple(6890).Append(100)), (HTuple(1.74141e+06).Append(600)));
					SelectShape(ho_SelectedRegions6, &ho_SelectedRegions1, "column", "and",
						874.31, 1280.96);
					ShapeTrans(ho_SelectedRegions1, &ho_RegionTrans35, "convex");
					Union1(ho_RegionTrans35, &ho_RegionUnion24);
					DilationRectangle1(ho_RegionUnion24, &(*ho_camregion), 22, 25);

				}
				if (0 != (int(hv_Number21 == 14)))
				{

					MedianImage(ho_ImageReduced9, &ho_ImageReduced9, "circle", 9, "mirrored");
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult18, 0.01,
						0);
					Threshold(ho_ImageResult18, &ho_Region12, 0, 60);
					Connection(ho_Region12, &ho_ConnectedRegions27);
					SelectShape(ho_ConnectedRegions27, &ho_SelectedRegions2, (HTuple("area").Append("ratio")),
						"and", (HTuple(10050).Append(0.2)), (HTuple(99999).Append(3)));
					ShapeTrans(ho_SelectedRegions2, &ho_RegionTrans7, "convex");
					Union1(ho_RegionTrans7, &ho_RegionUnion14);
					DilationCircle(ho_RegionUnion14, &(*ho_camregion), 8.5);
					Threshold(ho_ImageResult18, &ho_Region24, 0, 90);
					ClosingRectangle1(ho_Region24, &ho_RegionClosing1, 45, 45);
					FillUp(ho_RegionClosing1, &ho_RegionFillUp18);
					Connection(ho_RegionFillUp18, &ho_ConnectedRegions32);
					Connection(ho_ConnectedRegions32, &ho_ConnectedRegions33);
					SelectShape(ho_ConnectedRegions33, &ho_SelectedRegions27, (HTuple("area").Append("column")),
						"and", (HTuple(256).Append(795.25)), (HTuple(468464).Append(1263.25)));
					ShapeTrans(ho_SelectedRegions27, &ho_RegionTrans25, "convex");
					DilationRectangle1(ho_RegionTrans25, &ho_RegionDilation2, 25, 35);

					Union2((*ho_camregion), ho_RegionDilation2, &(*ho_camregion));
					ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
					Intersection(ho_RegionErosion, (*ho_camregion), &(*ho_camregion));
				}
				if (0 != (int(hv_Number21 == 15)))
				{
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult9, 0.1, 0);
					Threshold(ho_ImageResult9, &ho_Region9, 0, 50);
					FillUp(ho_Region9, &ho_RegionFillUp9);
					OpeningCircle(ho_RegionFillUp9, &ho_RegionOpening22, 5.5);
					OpeningRectangle1(ho_RegionOpening22, &ho_RegionOpening32, 25, 1);
					Connection(ho_RegionOpening32, &ho_ConnectedRegions25);
					SelectShape(ho_ConnectedRegions25, &ho_SelectedRegions13, (HTuple("row").Append("area")),
						"and", (HTuple(0).Append(6032.91)), (HTuple(311.7).Append(57221.2)));
					ShapeTrans(ho_SelectedRegions13, &ho_RegionTrans3, "outer_circle");
					SelectShape(ho_ConnectedRegions25, &ho_SelectedRegions17, (HTuple("row").Append("area")),
						"and", (HTuple(392.14).Append(80255.9)), (HTuple(810.79).Append(154479)));
					Union2(ho_RegionTrans3, ho_SelectedRegions17, &ho_RegionUnion6);
					SelectShape(ho_ConnectedRegions25, &ho_SelectedRegions18, (HTuple("row").Append("area")),
						"and", (HTuple(0).Append(50)), (HTuple(100).Append(154479)));

					Union2(ho_RegionUnion6, ho_SelectedRegions18, &ho_RegionUnion6);

					DilationRectangle1(ho_RegionUnion6, &(*ho_camregion), 30, 10);




				}
				if (0 != (int(hv_Number21 == 16)))
				{
					Threshold(ho_ImageReduced9, &ho_Region9, 0, 60);
					FillUp(ho_Region9, &ho_RegionFillUp4);
					Connection(ho_RegionFillUp4, &ho_ConnectedRegions25);
					OpeningCircle(ho_ConnectedRegions25, &ho_RegionOpening13, 15.5);
					DilationRectangle1(ho_RegionOpening13, &(*ho_camregion), 25, 25);

				}
				if (0 != (int(hv_Number21 == 17)))
				{
					Threshold(ho_ImageReduced9, &ho_Region9, 0, 60);
					FillUp(ho_Region9, &ho_RegionFillUp4);
					Connection(ho_RegionFillUp4, &ho_ConnectedRegions25);
					OpeningRectangle1(ho_ConnectedRegions25, &ho_RegionOpening13, 125, 1);
					Connection(ho_RegionOpening13, &ho_RegionOpening13);
					SelectShape(ho_RegionOpening13, &ho_RegionOpening13, "width", "and", 700,
						99999);

					DilationRectangle1(ho_RegionOpening13, &ho_RegionOpening13, 25, 25);

					//裁剪
					GenRectangle1(&ho_Rectangle9, 217, 412, 1099, 1616);
					ReduceDomain(ho_ImageReduced9, ho_Rectangle9, &ho_ImageReduced6);
					MeanImage(ho_ImageReduced6, &ho_ImageMedian11, 10, 10);
					MeanImage(ho_ImageMedian11, &ho_ImageMedian10, 15, 1);
					VarThreshold(ho_ImageMedian10, &ho_Region13, 5, 500, 0.2, 15, "dark");
					Connection(ho_Region13, &ho_ConnectedRegions5);
					ClosingRectangle1(ho_ConnectedRegions5, &ho_RegionOpening23, 100, 5);
					SelectShape(ho_RegionOpening23, &ho_SelectedRegions3, (HTuple("width").Append("area")),
						"and", (HTuple(200).Append(20000)), (HTuple(1200).Append(999999)));
					Union1(ho_SelectedRegions3, &ho_RegionUnion23);
					ShapeTrans(ho_RegionUnion23, &ho_RegionTrans12, "rectangle1");
					DilationRectangle1(ho_RegionTrans12, &ho_RegionDilation, 1000, 1);
					Intersection(ho_RegionDilation, ho_ImageReduced9, &(*ho_camregion));
					Union2((*ho_camregion), ho_RegionDilation, &(*ho_camregion));
				}
				if (0 != (int(hv_Number21 == 18)))
				{

					//裁剪

				}
				if (0 != (int(hv_Number21 == 19)))
				{

					//提取小区域

					MedianImage(ho_ImageReduced9, &ho_ImageReduced9, "circle", 9, "mirrored");
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult7, 0.01, 0);
					ErosionRectangle1(ho_RegionUnion, &ho_RegionDilation, 325, 1);

					ReduceDomain(ho_ImageResult7, ho_RegionDilation, &ho_ImageReduced9);

					Threshold(ho_ImageReduced9, &ho_Region4, 0, 80);
					FillUp(ho_Region4, &ho_RegionFillUp6);
					DilationCircle(ho_RegionFillUp6, &ho_RegionDilation6, 20.5);


					Connection(ho_RegionDilation6, &ho_ConnectedRegions23);
					SelectShape(ho_ConnectedRegions23, &ho_SelectedRegions21, (HTuple("width").Append("column")),
						"and", (HTuple(200).Append(850.09)), (HTuple(400).Append(1296.16)));
					ShapeTrans(ho_SelectedRegions21, &ho_SelectedRegions21, "rectangle1");
					DilationRectangle1(ho_SelectedRegions21, &ho_SelectedRegions21, 15, 15);
					RegionFeatures(ho_SelectedRegions21, "width", &hv_Value);
					if (0 != (int(hv_Value > 0)))
					{
						OpeningCircle(ho_SelectedRegions21, &ho_SelectedRegions21, hv_Value / 2);


						Union2(ho_SelectedRegions21, ho_Rectangle_bottom, &ho_SelectedRegions21
							);
						ClosingRectangle1(ho_SelectedRegions21, &ho_SelectedRegions21, 1, 300);
						OpeningCircle(ho_SelectedRegions21, &(*ho_camregion), 3.5);
					}


				}
				if (0 != (int(hv_Number21 == 20)))
				{
					MedianImage(ho_ImageReduced9, &ho_ImageReduced9, "circle", 8, "mirrored");
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult23, 0.01,
						0);
					Threshold(ho_ImageResult23, &ho_Region4, 0, 80);
					Connection(ho_Region4, &ho_ConnectedRegions3);
					SelectShape(ho_ConnectedRegions3, &ho_SelectedRegions28, (HTuple("area").Append("column")),
						"and", (HTuple(10340).Append(850.09)), (HTuple(500000).Append(1296.16)));
					OpeningCircle(ho_SelectedRegions28, &ho_RegionOpening9, 3.5);
					ShapeTrans(ho_RegionOpening9, &ho_RegionTrans2, "convex");
					//bai
					MeanImage(ho_ImageReduced9, &ho_ImageMean6, 5, 5);
					Emphasize(ho_ImageMean6, &ho_ImageEmphasize1, 45, 45, 9);
					Threshold(ho_ImageEmphasize1, &ho_Region11, 220, 255);
					OpeningCircle(ho_Region11, &ho_RegionOpening10, 5.5);
					Connection(ho_RegionOpening10, &ho_ConnectedRegions24);
					SelectShape(ho_ConnectedRegions24, &ho_SelectedRegions22, ((HTuple("column").Append("area")).Append("row")),
						"and", ((HTuple(780).Append(1500)).Append(1850)), ((HTuple(1300).Append(10000)).Append(2100)));
					Union2(ho_RegionTrans2, ho_SelectedRegions22, &ho_RegionUnion12);
					DilationCircle(ho_RegionUnion12, &ho_RegionDilation5, 3.5);
					Union1(ho_RegionDilation5, &ho_RegionUnion16);
					Connection(ho_RegionUnion16, &ho_ConnectedRegions42);
					ShapeTrans(ho_ConnectedRegions42, &ho_RegionTrans15, "convex");
					DilationRectangle1(ho_RegionTrans15, &(*ho_camregion), 70, 10);

				}
				if (0 != (int(hv_Number21 == 21)))
				{
					//提取小区域
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult14, 0.01,
						0);
					Threshold(ho_ImageResult14, &ho_Region4, 0, 50);
					OpeningCircle(ho_Region4, &ho_RegionOpening7, 4.5);
					FillUp(ho_RegionOpening7, &ho_RegionFillUp26);
					Connection(ho_RegionFillUp26, &ho_ConnectedRegions3);
					SelectShape(ho_ConnectedRegions3, &ho_SelectedRegions7, "width", "and",
						200, 400);
					ShapeTrans(ho_SelectedRegions7, &ho_RegionTrans9, "rectangle1");
					DilationRectangle1(ho_RegionTrans9, &ho_RegionDilation10, 35, 115);
					SelectShape(ho_RegionDilation10, &ho_SelectedRegions31, "row", "and", 213.89,
						937.84);
					MoveRegion(ho_SelectedRegions31, &ho_SelectedRegions31, -55, 1);
					RegionFeatures(ho_SelectedRegions31, "width", &hv_Value6);
					OpeningCircle(ho_SelectedRegions31, &ho_RegionOpening45, hv_Value6 / 2);
					MoveRegion(ho_RegionOpening45, &ho_RegionMoved8, -200, 1);
					Union2(ho_RegionOpening45, ho_RegionMoved8, &ho_RegionUnion21);
					MoveRegion(ho_RegionUnion21, &ho_RegionMoved21, 25, 1);
					SelectShape(ho_RegionDilation10, &ho_SelectedRegions45, "row", "and", 1193.78,
						2000.01);
					MoveRegion(ho_SelectedRegions45, &ho_SelectedRegions45, 55, 1);
					RegionFeatures(ho_SelectedRegions45, "width", &hv_Value6);
					OpeningCircle(ho_SelectedRegions45, &ho_RegionOpening45, hv_Value6 / 2);
					MoveRegion(ho_RegionOpening45, &ho_RegionMoved8, 200, 1);
					Union2(ho_RegionOpening45, ho_RegionMoved8, &ho_RegionUnion20);
					DilationRectangle1(ho_RegionUnion20, &ho_RegionDilation16, 40, 5);
					Union2(ho_RegionMoved21, ho_RegionDilation16, &(*ho_camregion));
				}
				if (0 != (int(hv_Number21 == 22)))
				{
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult21, 0.05,
						0);
					Threshold(ho_ImageResult21, &ho_Region4, 0, 80);
					FillUp(ho_Region4, &ho_RegionFillUp7);
					Connection(ho_RegionFillUp7, &ho_ConnectedRegions3);
					OpeningCircle(ho_ConnectedRegions3, &ho_RegionOpening3, 1.5);
					SelectShape(ho_RegionOpening3, &ho_SelectedRegions11, "area", "and", 13971,
						970000);
					SelectShape(ho_SelectedRegions11, &ho_SelectedRegions46, "column", "and",
						903.8, 1232.34);
					ShapeTrans(ho_SelectedRegions46, &ho_RegionTrans9, "rectangle1");
					SelectShape(ho_RegionTrans9, &ho_SelectedRegions60, "row", "and", 952.29,
						2000);
					DilationRectangle1(ho_SelectedRegions60, &ho_RegionDilation19, 40, 26);
					RegionFeatures(ho_RegionDilation19, "width", &hv_Value7);
					OpeningCircle(ho_RegionDilation19, &ho_RegionOpening47, (hv_Value7 - 15) / 2);
					Union2(ho_RegionOpening47, ho_Rectangle_bottom, &ho_RegionOpening47);
					ClosingRectangle1(ho_RegionOpening47, &ho_RegionOpening47, 1, 200);
					OpeningCircle(ho_RegionOpening47, &ho_RegionOpening47, 3.5);
					SelectShape(ho_RegionTrans9, &ho_SelectedRegions62, "row", "and", 0, 820.84);
					DilationRectangle1(ho_SelectedRegions62, &ho_RegionDilation23, 45, 15);
					RegionFeatures(ho_RegionDilation23, "width", &hv_Value9);
					RegionFeatures(ho_RegionDilation23, "height", &hv_Value10);
					if (0 != (int(hv_Value10 > hv_Value9)))
					{

						OpeningCircle(ho_RegionDilation23, &ho_RegionOpening49, (hv_Value9 - 65) / 2);

						MoveRegion(ho_RegionOpening49, &ho_RegionMoved10, -200, 1);
						Union2(ho_RegionOpening49, ho_RegionMoved10, &ho_RegionUnion28);
					}
					else
					{
						MoveRegion(ho_RegionDilation23, &ho_RegionMoved, -(hv_Value10 - 40), 0);
						Union2(ho_RegionMoved, ho_RegionDilation23, &ho_RegionDilation23);
						MoveRegion(ho_RegionDilation23, &ho_RegionMoved, -(hv_Value10 - 40), 0);
						Union2(ho_RegionMoved, ho_RegionDilation23, &ho_RegionDilation23);
						OpeningCircle(ho_RegionDilation23, &ho_RegionOpening49, (hv_Value9 - 65) / 2);

						MoveRegion(ho_RegionOpening49, &ho_RegionMoved10, -200, 1);
						Union2(ho_RegionOpening49, ho_RegionMoved10, &ho_RegionUnion28);
					}
					ShapeTrans(ho_RegionUnion28, &ho_RegionTrans22, "convex");
					Union2(ho_RegionOpening47, ho_RegionTrans22, &(*ho_camregion));
				}
				if (0 != (int(hv_Number21 == 23)))
				{
					MedianImage(ho_ImageReduced9, &ho_ImageReduced9, "circle", 8, "mirrored");
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult, 0.1, 0);
					Threshold(ho_ImageResult, &ho_Region15, 0, 65);
					FillUp(ho_Region15, &ho_RegionFillUp27);
					OpeningRectangle1(ho_RegionFillUp27, &ho_RegionOpening11, 25, 1);
					DilationRectangle1(ho_RegionOpening11, &(*ho_camregion), 25, 25);
				}
				if (0 != (int(hv_Number21 == 27)))
				{
					//裁剪

					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult3, 0.008,
						0);
					MedianImage(ho_ImageResult3, &ho_ImageMedian1, "circle", 6, "mirrored");
					Threshold(ho_ImageMedian1, &ho_Regions1, 6, 135);
					FillUp(ho_Regions1, &ho_RegionFillUp10);
					OpeningRectangle1(ho_RegionFillUp10, &ho_RegionOpening25, 25, 1);
					Connection(ho_RegionOpening25, &ho_ConnectedRegions);
					SelectShape(ho_ConnectedRegions, &ho_SelectedRegions16, "area", "and",
						105110, 265625);
					DilationRectangle1(ho_SelectedRegions16, &(*ho_camregion), 10, 10);

				}
				if (0 != (int(hv_Number21 == 29)))
				{
					//裁剪
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult3, 0.008,
						0);
					MedianImage(ho_ImageResult3, &ho_ImageMedian1, "circle", 6, "mirrored");
					Threshold(ho_ImageMedian1, &ho_Regions1, 0, 135);
					FillUp(ho_Regions1, &ho_RegionFillUp10);
					OpeningRectangle1(ho_RegionFillUp10, &ho_RegionOpening25, 25, 1);
					Connection(ho_RegionOpening25, &ho_ConnectedRegions22);
					SelectShape(ho_ConnectedRegions22, &ho_SelectedRegions16, "area", "and",
						105110, 165625);
					DilationRectangle1(ho_SelectedRegions16, &(*ho_camregion), 10, 30);
				}

			}
		}
		else if (0 != (int(hv_Substring == HTuple("1_1"))))
		{
			if (0 != (int(hv_Number21 == 25)))
			{
				GenRectangle1(&ho_Rectangle1, 0, 400, 400, 1720);

				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);
				BinaryThreshold(ho_ImageReduced4, &ho_Region, "max_separability", "light",
					&hv_UsedThreshold1);
				FillUp(ho_Region, &ho_Region);
				Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
				Difference(ho_Region, ho_Region20, &ho_Region);
				ClosingRectangle1(ho_Region, &ho_Region, 30, 150);
				FillUp(ho_Region, &ho_Region);
				Connection(ho_Region, &ho_Region);
				ShapeTrans(ho_Region, &ho_Region, "convex");
				Union1(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 50);
				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, (HTuple("width").Append("height")), "and",
					(HTuple(30).Append(300)), (HTuple(99999).Append(99999)));
				Union1(ho_Region, &ho_Region);
				ShapeTrans(ho_Region, &ho_Region, "rectangle1");
				MoveRegion(ho_Region, &ho_RegionMoved, 0, 100);
				Difference(ho_Region, ho_RegionMoved, &ho_Region);
				MoveRegion(ho_Region, &ho_Region, 0, 40);
				ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
				EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 10, 50);
				SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(80).TupleRad(),
					HTuple(100).TupleRad());
				UnionCollinearContoursXld(ho_Edge, &ho_Edge, 200, 1, 30, 0.1, "attr_keep");
				SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 200, 3000, -0.5, 0.5);
				SortContoursXld(ho_Edge, &ho_Edge, "character", "true", "column");
				SelectObj(ho_Edge, &ho_Edge_left, 1);
				GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);
				TupleAdd(hv_Col, -90, &hv_Sub);
				hv_left_xld = hv_Sub;
				TupleInverse(hv_left_xld, &hv_left_xld);
				TupleInverse(hv_Row, &hv_left_Row);
				TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
				TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
				GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
				GenRegionContourXld(ho_Contour, &ho_Region, "filled");
				ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");


			}
			else
			{
				GenRectangle1(&ho_Rectangle1, 0, 700, 2100, 1720);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);
				BinaryThreshold(ho_ImageReduced4, &ho_Region, "max_separability", "light",
					&hv_UsedThreshold1);
				FillUp(ho_Region, &ho_Region);
				Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
				Difference(ho_Region, ho_Region20, &ho_Region);
				ClosingRectangle1(ho_Region, &ho_Region, 30, 150);
				FillUp(ho_Region, &ho_Region);
				Connection(ho_Region, &ho_Region);
				ShapeTrans(ho_Region, &ho_Region, "convex");
				Union1(ho_Region, &ho_Region);
				ShapeTrans(ho_Region, &ho_Region, "convex");
				OpeningRectangle1(ho_Region, &ho_Region, 1, 1700);


				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, (HTuple("width").Append("height")), "and",
					(HTuple(30).Append(1800)), (HTuple(99999).Append(99999)));
				Union1(ho_Region, &ho_Region);
				ShapeTrans(ho_Region, &ho_Region, "rectangle1");
				DilationRectangle1(ho_Region, &ho_Region, 500, 1);
				MoveRegion(ho_Region, &ho_Region, 0, 250);


				ErosionRectangle1(ho_Region, &ho_Region, 90, 1);
				MoveRegion(ho_Region, &ho_RegionMoved, 0, 140);
				Difference(ho_Region, ho_RegionMoved, &ho_Region);

				GrayErosionRect(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);


				if (0 != (HTuple(HTuple(HTuple(HTuple(HTuple(int(hv_Number21 == 3)).TupleOr(int(hv_Number21 == 4))).TupleOr(int(hv_Number21 == 11))).TupleOr(int(hv_Number21 == 15))).TupleOr(int(hv_Number21 == 16))).TupleOr(int(hv_Number21 == 23))))
				{



					DilationRectangle1(ho_Region, &ho_Region, 15, 1);
					ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
					GrayDilationRect(ho_ImageReduced4, &ho_ImageReduced4, 200, 10);
					ErosionRectangle1(ho_Region, &ho_Region, 11, 1);
				}
				ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
				ScaleImage(ho_ImageReduced4, &ho_ImageReduced4, 5, 0);
				EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 7, 30);
				SelectContoursXld(ho_Edges, &ho_Edges, "maximum_extent", 200, 3000, -0.5,
					0.5);
				//select_obj (Edges, Edge, 1)
				//tuple_deg (1.57, angle)
				//get_contour_attrib_xld (Edge, 'edge_direction', Attrib)
				if (HDevWindowStack::IsOpen())
					DispObj(ho_Image, HDevWindowStack::GetActive());
				SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(80).TupleRad(),
					HTuple(100).TupleRad());
				UnionCollinearContoursXld(ho_Edge, &ho_Edge, 400, 1, 30, 0.1, "attr_keep");
				SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 1400, 3000, -0.5,
					0.5);
				SortContoursXld(ho_Edge, &ho_Edge, "character", "true", "column");
				SelectObj(ho_Edge, &ho_Edge_left, 1);

				GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);
				if (0 != (int((hv_Row.TupleLength()) != 0)))
				{
					TupleAdd(hv_Col, -90, &hv_Sub);
					hv_left_xld = hv_Sub;
					TupleInverse(hv_left_xld, &hv_left_xld);
					TupleInverse(hv_Row, &hv_left_Row);
					TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
					TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
					GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
					GenRegionContourXld(ho_Contour, &ho_Region, "filled");
					ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");
				}
				else
				{
					MoveRegion(ho_RegionMoved, &ho_RegionMoved, 0, -300);
					ReduceDomain(ho_Image, ho_RegionMoved, &ho_ImageReduced);
					EdgesSubPix(ho_ImageReduced, &ho_Edge, "canny", 3, 30, 50);
					SortContoursXld(ho_Edge, &ho_Edge, "character", "true", "column");
					SelectObj(ho_Edge, &ho_Edge_left, 1);
					GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);
					TupleAdd(hv_Col, 90, &hv_Sub);
					hv_left_xld = hv_Sub;
					TupleInverse(hv_left_xld, &hv_left_xld);
					TupleInverse(hv_Row, &hv_left_Row);
					TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
					TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
					GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
					GenRegionContourXld(ho_Contour, &ho_Region, "filled");
					ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");








				}
				//***************************************************************8

			}
		}
		else if (0 != (int(hv_Substring == HTuple("3_1"))))
		{
			if (0 != (int(hv_Number21 == 25)))
			{
				GenRectangle1(&ho_Rectangle1, 0, 500, 400, 1720);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);
				Threshold(ho_ImageReduced4, &ho_Region, 0, 30);
				//
				FillUp(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 300);
				Connection(ho_Region, &ho_Region);
				SortRegion(ho_Region, &ho_Region, "first_point", "true", "column");
				SelectObj(ho_Region, &ho_RegionEdge, 1);
				DilationRectangle1(ho_RegionEdge, &ho_Region, 290, 1);
				MoveRegion(ho_Region, &ho_RegionMove, 0, 10);
				Difference(ho_RegionMove, ho_RegionEdge, &ho_Region);

				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, "height", "and", 150, 99999);
				SortRegion(ho_Region, &ho_Region, "first_point", "flase", "column");
				SelectObj(ho_Region, &ho_Region, 1);
				ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");

			}
			else
			{
				GenRectangle1(&ho_Rectangle1, 0, 500, 2100, 1720);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);
				Threshold(ho_ImageReduced4, &ho_Region, 0, 30);
				//
				FillUp(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 500);
				Connection(ho_Region, &ho_Region);
				SortRegion(ho_Region, &ho_Region, "first_point", "true", "column");
				SelectObj(ho_Region, &ho_RegionEdge, 1);
				DilationRectangle1(ho_RegionEdge, &ho_Region, 290, 1);
				MoveRegion(ho_Region, &ho_RegionMove, 0, 10);
				Difference(ho_RegionMove, ho_RegionEdge, &ho_Region);

				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, "height", "and", 150, 99999);
				SortRegion(ho_Region, &ho_Region, "first_point", "flase", "column");
				SelectObj(ho_Region, &ho_Region, 1);
				ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");
				AreaCenter(ho_RegionUnion, &hv_Area, &hv_Row, &hv_Column);
				if (0 != (int(hv_Area < 100)))
				{
					MoveRegion(ho_Region, &ho_Region, 0, 10);
					if (0 != (HTuple(HTuple(HTuple(HTuple(HTuple(int(hv_Number21 == 3)).TupleOr(int(hv_Number21 == 4))).TupleOr(int(hv_Number21 == 11))).TupleOr(int(hv_Number21 == 15))).TupleOr(int(hv_Number21 == 16))).TupleOr(int(hv_Number21 == 23))))
					{

						DilationRectangle1(ho_Region, &ho_Region, 15, 1);
						ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
						GrayDilationRect(ho_ImageReduced4, &ho_ImageReduced4, 400, 10);
						ErosionRectangle1(ho_Region, &ho_Region, 7, 1);
					}
					MeanImage(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);
					ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
					EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 55, 90);
					SelectContoursXld(ho_Edges, &ho_Edges, "maximum_extent", 200, 3000, -0.5,
						0.5);
					SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(80).TupleRad(),
						HTuple(100).TupleRad());
					UnionCollinearContoursXld(ho_Edge, &ho_Edge, 200, 1, 7, 0.1, "attr_keep");
					UnionAdjacentContoursXld(ho_Edge, &ho_Edge, 100, 10, "attr_keep");
					SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 1500, 3000, -0.5,
						0.5);
					SortContoursXld(ho_Edge, &ho_Edge, "character", "true", "column");
					SelectObj(ho_Edge, &ho_Edge_left, 1);
					GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);
					if (0 != (int((hv_Row.TupleLength()) == 0)))
					{
						MoveRegion(ho_Region, &ho_RegionUnion, 1, -30);



					}
					else
					{
						TupleAdd(hv_Col, -95, &hv_Sub);
						hv_left_xld = hv_Sub;
						TupleInverse(hv_left_xld, &hv_left_xld);
						TupleInverse(hv_Row, &hv_left_Row);
						TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
						TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
						GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
						GenRegionContourXld(ho_Contour, &ho_Region, "filled");
						ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");
					}
				}
				//***************************************************************8

			}
		}
		else if (0 != (int(hv_Substring == HTuple("1_2"))))
		{
			if (0 != (int(hv_Number21 == 25)))
			{
				GenRectangle1(&ho_Rectangle1, 0, 400, 400, 1720);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);
				Threshold(ho_ImageReduced4, &ho_Region, 0, 170);
				Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
				Difference(ho_Region, ho_Region20, &ho_Region);
				FillUp(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 200);
				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, (HTuple("height").Append("width")), "and",
					(HTuple(200).Append(50)), (HTuple(99999).Append(9999)));
				Union1(ho_Region, &ho_Region);

				ShapeTrans(ho_Region, &ho_Region, "rectangle1");

				ErosionRectangle1(ho_Region, &ho_Region, 85, 1);
				MoveRegion(ho_Region, &ho_RegionMoved, 0, 120);
				Difference(ho_Region, ho_RegionMoved, &ho_Region);

				//gray_dilation_rect (ImageReduced4, ImageMax, Height, Width)
				GrayOpeningRect(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);





				MeanImage(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);
				ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
				EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 10, 50);
				SegmentContoursXld(ho_Edges, &ho_Edges, "lines_circles", 5, 4, 2);
				SelectContoursXld(ho_Edges, &ho_Edges, "maximum_extent", 100, 3000, -0.5,
					0.5);

				SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(80).TupleRad(),
					HTuple(100).TupleRad());
				UnionCollinearContoursXld(ho_Edge, &ho_Edge, 40, 1, 10, 0.1, "attr_keep");
				SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 100, 3000, -0.5, 0.5);
				SortContoursXld(ho_Edge, &ho_Edge, "upper_left", "false", "column");
				SelectObj(ho_Edge, &ho_Edge_left, 1);
				GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);

				if (0 != (int(hv_Substring == HTuple("3_2"))))
				{
					TupleAdd(hv_Col, -85, &hv_Sub);
				}
				else
				{
					TupleAdd(hv_Col, -95, &hv_Sub);
				}
				hv_left_xld = hv_Sub;
				TupleInverse(hv_left_xld, &hv_left_xld);
				TupleInverse(hv_Row, &hv_left_Row);
				TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
				TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
				GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
				GenRegionContourXld(ho_Contour, &ho_Region, "filled");
				ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");

			}
			else
			{

				GenRectangle1(&ho_Rectangle1, 0, 500, 2100, 1820);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);

				Threshold(ho_ImageReduced4, &ho_Region, 0, 170);
				Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
				Difference(ho_Region, ho_Region20, &ho_Region);
				FillUp(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 1700);
				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, (HTuple("height").Append("width")), "and",
					(HTuple(1900).Append(50)), (HTuple(99999).Append(9999)));
				Union1(ho_Region, &ho_Region);

				ShapeTrans(ho_Region, &ho_Region, "rectangle1");

				ErosionRectangle1(ho_Region, &ho_RegionErosion, 255, 1);
				Difference(ho_Region, ho_RegionErosion, &ho_Region);
				Connection(ho_Region, &ho_Region);
				SelectObj(ho_Region, &ho_Region, 1);
				MoveRegion(ho_Region, &ho_Region, 1, 45);

				//gray_dilation_rect (ImageReduced4, ImageMax, Height, Width)
				GrayOpeningRect(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);

				if (0 != (HTuple(HTuple(HTuple(HTuple(HTuple(int(hv_Number21 == 3)).TupleOr(int(hv_Number21 == 4))).TupleOr(int(hv_Number21 == 11))).TupleOr(int(hv_Number21 == 15))).TupleOr(int(hv_Number21 == 16))).TupleOr(int(hv_Number21 == 23))))
				{

					DilationRectangle1(ho_Region, &ho_Region, 15, 1);
					ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
					GrayDilationRect(ho_ImageReduced4, &ho_ImageReduced4, 400, 10);
					ErosionRectangle1(ho_Region, &ho_Region, 5, 1);
				}
				MeanImage(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);
				Intersection(ho_Region, ho_Rectangle1, &ho_Region);
				ErosionRectangle1(ho_Region, &ho_Region, 5, 1);
				ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
				ScaleImageMax(ho_ImageReduced4, &ho_ImageReduced4);
				EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 7, 20);
				SelectContoursXld(ho_Edges, &ho_Edges, "maximum_extent", 100, 3000, -0.5,
					0.5);
				//select_obj (Edges, ObjectSelected, 2)
				//get_contour_attrib_xld (ObjectSelected, 'response', Attrib)
				SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(70).TupleRad(),
					HTuple(110).TupleRad());
				SegmentContourAttribXld(ho_Edge, &ho_Edge, "response", "and", 50, 250);

				UnionCollinearContoursXld(ho_Edge, &ho_Edge, 250, 1, 7, 0.1, "attr_keep");
				UnionAdjacentContoursXld(ho_Edge, &ho_Edge, 20, 1, "attr_keep");
				SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 1300, 4000, -0.5,
					0.5);


				SortContoursXld(ho_Edge, &ho_Edge, "upper_left", "true", "column");
				SelectObj(ho_Edge, &ho_Edge_left, 1);
				GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);
				if (0 != (int((hv_Row.TupleLength()) != 0)))
				{
					if (0 != (int(hv_Substring == HTuple("3_2"))))
					{
						TupleAdd(hv_Col, -85, &hv_Sub);
					}
					else
					{
						TupleAdd(hv_Col, -95, &hv_Sub);
					}
					hv_left_xld = hv_Sub;
					TupleInverse(hv_left_xld, &hv_left_xld);
					TupleInverse(hv_Row, &hv_left_Row);
					TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
					TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
					GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
					GenRegionContourXld(ho_Contour, &ho_Region, "filled");
					ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");

					Intensity(ho_RegionUnion, ho_Image, &hv_Mean, &hv_Deviation);
				}
				else
				{

					GenRectangle1(&ho_Rectangle1, 0, 500, 2100, 1620);
					ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);

					Threshold(ho_ImageReduced4, &ho_Region, 0, 220);
					Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
					Difference(ho_Region, ho_Region20, &ho_Region);
					FillUp(ho_Region, &ho_Region);
					MoveRegion(ho_Region, &ho_RegionMoved, 1, 90);
					Difference(ho_Region, ho_RegionMoved, &ho_RegionDifference);
					ErosionRectangle1(ho_RegionDifference, &ho_RegionDifference, 7, 7);
					Connection(ho_RegionDifference, &ho_RegionDifference);
					SelectShapeStd(ho_RegionDifference, &ho_RegionDifference, "max_area", 70);
					ShapeTrans(ho_RegionDifference, &ho_RegionUnion, "rectangle1");
					Intensity(ho_RegionUnion, ho_Image, &hv_Mean, &hv_Deviation);

				}





				//***************************************************************8

			}

		}
		else if (0 != (int(hv_Substring == HTuple("3_2"))))
		{
			if (0 != (int(hv_Number21 == 25)))
			{
				GenRectangle1(&ho_Rectangle1, 0, 400, 400, 1720);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);
				Threshold(ho_ImageReduced4, &ho_Region, 0, 220);
				Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
				Difference(ho_Region, ho_Region20, &ho_Region);
				FillUp(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 200);
				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, (HTuple("height").Append("width")), "and",
					(HTuple(200).Append(50)), (HTuple(99999).Append(9999)));
				Union1(ho_Region, &ho_Region);

				ShapeTrans(ho_Region, &ho_Region, "rectangle1");

				ErosionRectangle1(ho_Region, &ho_Region, 85, 1);
				MoveRegion(ho_Region, &ho_RegionMoved, 0, 120);
				Difference(ho_Region, ho_RegionMoved, &ho_Region);

				//gray_dilation_rect (ImageReduced4, ImageMax, Height, Width)
				GrayOpeningRect(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);





				MeanImage(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);
				ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
				ScaleImageMax(ho_ImageReduced4, &ho_ImageReduced4);
				EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 10, 50);
				SegmentContoursXld(ho_Edges, &ho_Edges, "lines_circles", 5, 4, 2);
				SelectContoursXld(ho_Edges, &ho_Edges, "maximum_extent", 100, 3000, -0.5,
					0.5);

				SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(80).TupleRad(),
					HTuple(100).TupleRad());
				UnionCollinearContoursXld(ho_Edge, &ho_Edge, 40, 1, 10, 0.1, "attr_keep");
				SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 100, 3000, -0.5, 0.5);
				SortContoursXld(ho_Edge, &ho_Edge, "upper_left", "false", "column");
				SelectObj(ho_Edge, &ho_Edge_left, 1);
				GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);

				if (0 != (int(hv_Substring == HTuple("3_2"))))
				{
					TupleAdd(hv_Col, -85, &hv_Sub);
				}
				else
				{
					TupleAdd(hv_Col, -95, &hv_Sub);
				}
				hv_left_xld = hv_Sub;
				TupleInverse(hv_left_xld, &hv_left_xld);
				TupleInverse(hv_Row, &hv_left_Row);
				TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
				TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
				GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
				GenRegionContourXld(ho_Contour, &ho_Region, "filled");
				ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");

			}
			else
			{

				GenRectangle1(&ho_Rectangle1, 0, 500, 2100, 1820);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);

				Threshold(ho_ImageReduced4, &ho_Region, 0, 250);
				Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
				Difference(ho_Region, ho_Region20, &ho_Region);
				FillUp(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 5, 1);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 1700);
				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, (HTuple("height").Append("width")), "and",
					(HTuple(1900).Append(50)), (HTuple(99999).Append(9999)));
				Union1(ho_Region, &ho_Region);

				ShapeTrans(ho_Region, &ho_Region, "rectangle1");

				ErosionRectangle1(ho_Region, &ho_RegionErosion, 555, 1);
				Difference(ho_Region, ho_RegionErosion, &ho_Region);
				Connection(ho_Region, &ho_Region);
				SelectObj(ho_Region, &ho_Region, 1);
				MoveRegion(ho_Region, &ho_Region, 1, 45);

				//gray_dilation_rect (ImageReduced4, ImageMax, Height, Width)
				GrayOpeningRect(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);

				if (0 != (HTuple(HTuple(HTuple(HTuple(HTuple(int(hv_Number21 == 3)).TupleOr(int(hv_Number21 == 4))).TupleOr(int(hv_Number21 == 11))).TupleOr(int(hv_Number21 == 15))).TupleOr(int(hv_Number21 == 16))).TupleOr(int(hv_Number21 == 23))))
				{

					DilationRectangle1(ho_Region, &ho_Region, 15, 1);
					ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
					GrayDilationRect(ho_ImageReduced4, &ho_ImageReduced4, 400, 10);
					ErosionRectangle1(ho_Region, &ho_Region, 5, 1);
				}
				MeanImage(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);
				Intersection(ho_Region, ho_Rectangle1, &ho_Region);
				ErosionRectangle1(ho_Region, &ho_Region, 5, 1);
				ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
				ScaleImageMax(ho_ImageReduced4, &ho_ImageReduced4);
				EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 7, 20);
				SelectContoursXld(ho_Edges, &ho_Edges, "maximum_extent", 100, 3000, -0.5,
					0.5);
				//select_obj (Edges, ObjectSelected, 2)
				//get_contour_attrib_xld (ObjectSelected, 'response', Attrib)
				SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(70).TupleRad(),
					HTuple(110).TupleRad());
				SegmentContourAttribXld(ho_Edge, &ho_Edge, "response", "and", 70, 250);

				UnionCollinearContoursXld(ho_Edge, &ho_Edge, 250, 1, 7, 0.1, "attr_keep");
				UnionAdjacentContoursXld(ho_Edge, &ho_Edge, 20, 1, "attr_keep");
				SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 1500, 4000, -0.5,
					0.5);


				SortContoursXld(ho_Edge, &ho_Edge, "upper_left", "true", "column");
				SelectObj(ho_Edge, &ho_Edge_left, 1);
				GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);
				if (0 != (int((hv_Row.TupleLength()) != 0)))
				{
					if (0 != (int(hv_Substring == HTuple("3_2"))))
					{
						TupleAdd(hv_Col, -85, &hv_Sub);
					}
					else
					{
						TupleAdd(hv_Col, -95, &hv_Sub);
					}
					hv_left_xld = hv_Sub;
					TupleInverse(hv_left_xld, &hv_left_xld);
					TupleInverse(hv_Row, &hv_left_Row);
					TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
					TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
					GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
					GenRegionContourXld(ho_Contour, &ho_Region, "filled");
					ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");

					Intensity(ho_RegionUnion, ho_Image, &hv_Mean, &hv_Deviation);
				}
				else
				{

					GenRectangle1(&ho_Rectangle1, 0, 500, 2100, 1620);
					ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);

					Threshold(ho_ImageReduced4, &ho_Region, 0, 220);
					Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
					Difference(ho_Region, ho_Region20, &ho_Region);
					FillUp(ho_Region, &ho_Region);
					MoveRegion(ho_Region, &ho_RegionMoved, 1, 90);
					Difference(ho_Region, ho_RegionMoved, &ho_RegionDifference);
					ErosionRectangle1(ho_RegionDifference, &ho_RegionDifference, 7, 7);
					Connection(ho_RegionDifference, &ho_RegionDifference);
					SelectShapeStd(ho_RegionDifference, &ho_RegionDifference, "max_area", 70);
					ShapeTrans(ho_RegionDifference, &ho_RegionUnion, "rectangle1");
					Intensity(ho_RegionUnion, ho_Image, &hv_Mean, &hv_Deviation);

				}





				//***************************************************************8

			}
		}

		DilationRectangle1((*ho_JTReg), &(*ho_JTReg), 215, 5);
		Union2((*ho_camregion), (*ho_JTReg), &(*ho_camregion));
		Intersection(ho_RectangleImage, (*ho_camregion), &(*ho_camregion));
		CountObj(ho_RegionUnion, &hv_Number1);
		if (0 != (int(hv_Number1 > 0)))
		{
			//通过外轮廓提取拼接处区域
			MoveRegion(ho_RegionUnion, &ho_RegionUnion, 3, 0);
			SmallestRectangle2(ho_RegionUnion, &hv_Row16, &hv_Column16, &hv_Phi3, &hv_Length1,
				&hv_Length2);

			if (true)
			{
				//提取仿射最小外接矩形的四个顶点坐标
				GenRectangle2ContourXld(&(*ho_DetectRegion), hv_Row16, hv_Column16, hv_Phi3,
					hv_Length1, hv_Length2);
				//union1 (Region, DetectRegion)
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
					GenCrossContourXld(&ho_Cross1, 3, hv_Column16 + hv_a, 26, hv_Phi3);
					hv_c = (hv_Length1 * hv_Cos) - (hv_Length2 * hv_Sin);
					hv_d = (hv_Length1 * hv_Sin) + (hv_Length2 * hv_Cos);
					GenCrossContourXld(&ho_Cross2, 3, hv_Column16 + hv_c, 26, hv_Phi3);
					hv_e = (hv_Length1 * hv_Cos) + (hv_Length2 * hv_Sin);
					hv_f = (hv_Length1 * hv_Sin) - (hv_Length2 * hv_Cos);
					GenCrossContourXld(&ho_Cross3, 3, hv_Column16 + hv_e, 26, hv_Phi3);
					hv_g = ((-hv_Length1) * hv_Cos) + (hv_Length2 * hv_Sin);
					hv_h = ((-hv_Length1) * hv_Sin) - (hv_Length2 * hv_Cos);
					GenCrossContourXld(&ho_Cross4, 3, hv_Column16 + hv_g, 26, hv_Phi3);
					//gen_cross_contour_xld (Cross4, Row16-h, Column16+g, 26, Phi3)
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
					if (0 != (HTuple(int(hv_Substring == HTuple("3_1"))).TupleOr(int(hv_Substring == HTuple("3_2")))))
					{
						SelectObj(ho_SortedRegions, &(*ho_PointRegion), 1);

					}
					else
					{
						SelectObj(ho_SortedRegions, &(*ho_PointRegion), 2);

					}
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
		string strerr = std::to_string(hv_ProNum.I()) + "-" + std::to_string(hv_StaNum.I()) + "_" + std::to_string(hv_CamNum.I()) + "_" + std::to_string(hv_ImageNum.I()) + "ImageShieldProcessAMiddleSelfTest4_84_6 error:" + strErr;
		VeErrMessage.push_back(QString::fromStdString(strerr));
	}
	reg = -1;
	return -1;
}

int JSZCAlgorithmsDLLPVD::ImageShieldProcessAMiddleSelfTest4_84_11(HObject ho_Image, HObject* ho_DetectRegion, HObject* ho_PointRegion, HObject* ho_camregion, HObject* ho_JTReg, HTuple hv_ImName)
{
	// Local iconic variables
	HObject  ho_Rectangle_bottom, ho_Rectangle_top;
	HObject  ho_RegionUnion, ho_Rectangle, ho_ImageResult15;
	HObject  ho_Region20, ho_RegionOpening34, ho_ConnectedRegions37;
	HObject  ho_SelectedRegions19, ho_RegionMoved, ho_ImageReduced9;
	HObject  ho_RegionErosion2, ho_ImageMedian9, ho_ImageTexture4;
	HObject  ho_Region5, ho_RegionDilation1, ho_RegionErosion;
	HObject  ho_ImageMedian5, ho_ImageTexture5, ho_ImageTexture8;
	HObject  ho_ImageResult19, ho_Region14, ho_Region27, ho_ConnectedRegions14;
	HObject  ho_ImageTexture, ho_ImageTexture3, ho_ImageResult1;
	HObject  ho_Region29, ho_ConnectedRegions31, ho_SelectedRegions12;
	HObject  ho_RegionClosing8, ho_RegionUnion33, ho_RegionClosing7;
	HObject  ho_RegionOpening29, ho_RegionFillUp14, ho_ConnectedRegions38;
	HObject  ho_SelectedRegions32, ho_SelectedRegions52, ho_RegionTrans30;
	HObject  ho_RegionUnion18, ho_ImageMedian24, ho_ImageTexture1;
	HObject  ho_ImageTexture2, ho_ImageSub, ho_SelectedRegions9;
	HObject  ho_SelectedRegions_big, ho_RegionOpening19, ho_ConnectedRegions39;
	HObject  ho_RegionTrans8, ho_RegionErosion_, ho_ConnectedRegions7;
	HObject  ho_ImageReduced, ho_RegionK, ho_bottom_Reg, ho_Region_big;
	HObject  ho_ConnectedRegions40, ho_SelectedRegions48, ho_SelectedRegions49;
	HObject  ho_RegionUnion7, ho_RegionClosing4, ho_RegionFillUp20;
	HObject  ho_ConnectedRegions41, ho_RegionTrans11, ho_SelectedRegions;
	HObject  ho_JTReg_, ho_ObjectSelected, ho_RegionOpening1;
	HObject  ho_RegionOpening2, ho_SelectedRegions4, ho_Rectangle11;
	HObject  ho_ImageReduced12, ho_ImageMedian11, ho_ImageReduced10;
	HObject  ho_ImageTexture6, ho_ImageTexture7, ho_ImageResult3;
	HObject  ho_ImageMedian10, ho_Region6, ho_ConnectedRegions5;
	HObject  ho_RegionCount, ho_RegionOpening23, ho_RegionUnion23;
	HObject  ho_RegionTrans12, ho_RegionDilation4, ho_RegionDilation8;
	HObject  ho_RegionUnion14, ho_Rectangle5, ho_ImageReduced1;
	HObject  ho_Rectangle3, ho_ImageReduced7, ho_ImageResult4;
	HObject  ho_Region, ho_RegionFillUp3, ho_ConnectedRegions20;
	HObject  ho_SelectedRegions43, ho_SelectedRegions44, ho_RegionUnion15;
	HObject  ho_RegionFillUp1, ho_RegionUnion2, ho_RegionClosing5;
	HObject  ho_ConnectedRegions1, ho_RegionUnion10, ho_ConnectedRegions21;
	HObject  ho_RegionOpening20, ho_RegionTrans6, ho_RegionFillUp3_;
	HObject  ho_Rectangle9, ho_ImageReduced6, ho_Region13, ho_SelectedRegions3;
	HObject  ho_RegionDilation, ho_ImageMedian7, ho_ImageResult12;
	HObject  ho_Regions3, ho_RegionFillUp21, ho_RegionDilation24;
	HObject  ho_RegionFillUp25, ho_RegionOpening8, ho_ConnectedRegions17;
	HObject  ho_SelectedRegions20, ho_RegionMoved7, ho_ImageMedian;
	HObject  ho_ImageResult11, ho_Regions2, ho_RegionFillUp11;
	HObject  ho_RegionOpening15, ho_Region16, ho_ConnectedRegions35;
	HObject  ho_RegionOpening12, ho_SelectedRegions34, ho_ImageMedian3;
	HObject  ho_ImageResult5, ho_RegionFillUp28, ho_ConnectedRegions8;
	HObject  ho_SelectedRegions8, ho_RegionOpening, ho_RegionTrans;
	HObject  ho_ImageResult10, ho_Region19, ho_RegionFillUp29;
	HObject  ho_ImageResult13, ho_Region11, ho_ConnectedRegions24;
	HObject  ho_SelectedRegions107, ho_SelectedRegions22, ho_RegionUnion49;
	HObject  ho_RegionMoved2, ho_ImageResult47, ho_ImageMedian31;
	HObject  ho_Region44, ho_RegionOpening78, ho_ConnectedRegions78;
	HObject  ho_ImageResult8, ho_Region17, ho_RegionFillUp8;
	HObject  ho_RegionOpening17, ho_ImageMedian4, ho_ImageResult6;
	HObject  ho_Region8, ho_RegionFillUp2, ho_ConnectedRegions6;
	HObject  ho_SelectedRegions6, ho_SelectedRegions1, ho_RegionTrans35;
	HObject  ho_RegionUnion24, ho_ImageResult18, ho_Region12;
	HObject  ho_ConnectedRegions27, ho_SelectedRegions2, ho_RegionTrans7;
	HObject  ho_Region24, ho_RegionClosing1, ho_RegionFillUp18;
	HObject  ho_ConnectedRegions32, ho_ConnectedRegions33, ho_SelectedRegions27;
	HObject  ho_RegionTrans25, ho_RegionDilation2, ho_ImageResult9;
	HObject  ho_Region9, ho_RegionFillUp9, ho_RegionOpening22;
	HObject  ho_RegionOpening32, ho_ConnectedRegions25, ho_RegionFillUp4;
	HObject  ho_RegionOpening13, ho_ImageResult32, ho_Region1;
	HObject  ho_RegionOpening6, ho_ConnectedRegions2, ho_SelectedRegions30;
	HObject  ho_ImageResult7, ho_Region4, ho_RegionFillUp6, ho_RegionDilation6;
	HObject  ho_RegionOpening14, ho_ConnectedRegions23, ho_SelectedRegions21;
	HObject  ho_ImageResult23, ho_ConnectedRegions3, ho_SelectedRegions28;
	HObject  ho_RegionOpening9, ho_RegionTrans2, ho_ImageMean6;
	HObject  ho_ImageEmphasize1, ho_RegionOpening10, ho_RegionUnion12;
	HObject  ho_RegionDilation5, ho_RegionUnion16, ho_ConnectedRegions42;
	HObject  ho_RegionTrans15, ho_ImageResult, ho_Region15, ho_RegionFillUp27;
	HObject  ho_RegionOpening11, ho_ObjectSelected1, ho_ObjectSelected2;
	HObject  ho_ImageMedian1, ho_Regions1, ho_RegionFillUp10;
	HObject  ho_RegionOpening25, ho_ConnectedRegions, ho_SelectedRegions16;
	HObject  ho_ConnectedRegions22, ho_Rectangle1, ho_ImageReduced4;
	HObject  ho_Edges, ho_Edge, ho_Edge_left, ho_Contour, ho_RegionEdge;
	HObject  ho_RegionMove, ho_RegionIntersection, ho_RegionDifference;
	HObject  ho_RectangleImage, ho_Cross1, ho_Cross2, ho_Cross3;
	HObject  ho_Cross4, ho_Cross1re, ho_Cross2re, ho_Cross3re;
	HObject  ho_Cross4re, ho_RegionUnion3, ho_RegionUnion4, ho_ConnectedRegions4;
	HObject  ho_SortedRegions;

	// Local control variables
	HTuple  hv_Substring, hv_Substrings, hv_StaNum;
	HTuple  hv_CamNum, hv_ImageNum, hv_Length5, hv_Selected1;
	HTuple  hv_Number21, hv_Width, hv_Height, hv_Row112, hv_Column112;
	HTuple  hv_Row212, hv_Column212, hv_Area6, hv_Row3, hv_Column3;
	HTuple  hv_Value, hv_Number, hv_Value4, hv_UsedThreshold;
	HTuple  hv_UsedThreshold1, hv_Row, hv_Col, hv_Sub, hv_left_xld;
	HTuple  hv_left_Row, hv_Contour_col, hv_Contour_row, hv_Area;
	HTuple  hv_Column, hv_Mean, hv_Deviation, hv_Number1, hv_Row16;
	HTuple  hv_Column16, hv_Phi3, hv_Length1, hv_Length2, hv_Cos;
	HTuple  hv_Sin, hv_a, hv_b, hv_c, hv_d, hv_e, hv_f, hv_g;
	HTuple  hv_h;

	try
	{

		if (HDevWindowStack::IsOpen())
			SetColored(HDevWindowStack::GetActive(), 12);
		TupleStrFirstN(hv_ImName, 2, &hv_Substring);

		//tuple_split (ImName, '_', Substrings)
		//tuple_split (Substrings, '-', Substrings1)
		//Substring := Substrings1[1]+'_'+Substrings1[2]
		//胶条区域
		GenRectangle1(&ho_Rectangle_bottom, 2045, 0, 2047, 1800);
		GenRectangle1(&ho_Rectangle_top, 0, 0, 5, 1800);
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

		if (0 != (int(hv_Substring == HTuple("2_1"))))
		{


			MultImage(ho_Image, ho_Image, &ho_ImageResult15, 0.1, 0);
			GrayDilationRect(ho_ImageResult15, &ho_ImageResult15, 200, 1);
			Threshold(ho_ImageResult15, &ho_Region20, 180, 255);
			FillUp(ho_Region20, &ho_Region20);
			//13边
			if (0 != (HTuple(HTuple(HTuple(int(hv_Number21 != 17)).TupleAnd(int(hv_Number21 != 14))).TupleAnd(int(hv_Number21 != 16))).TupleAnd(int(hv_Number21 != 2))))
			{
				ClosingRectangle1(ho_Region20, &ho_Region20, 400, 1);
			}
			Connection(ho_Region20, &ho_Region20);
			SelectShapeStd(ho_Region20, &ho_Region20, "max_area", 70);
			Union1(ho_Region20, &ho_Region20);


			OpeningRectangle1(ho_Region20, &ho_RegionOpening34, 1, 1900);

			Connection(ho_RegionOpening34, &ho_ConnectedRegions37);
			OpeningRectangle1(ho_ConnectedRegions37, &ho_ConnectedRegions37, 3, 500);
			SelectShapeStd(ho_ConnectedRegions37, &ho_SelectedRegions19, "max_area", 70);

			ShapeTrans(ho_SelectedRegions19, &ho_RegionUnion, "rectangle1");
			//difference (RegionTrans31, RegionMoved12, RegionUnion)
			//提取区域
			MoveRegion(ho_RegionUnion, &ho_RegionMoved, 0, -850);
			Difference(ho_RegionUnion, ho_RegionMoved, &ho_RegionUnion);

			SmallestRectangle1(ho_RegionUnion, &hv_Row112, &hv_Column112, &hv_Row212, &hv_Column212);
			ReduceDomain(ho_Image, ho_RegionUnion, &ho_ImageReduced9);
			ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion2, 50, 1);
			AreaCenter(ho_RegionUnion, &hv_Area6, &hv_Row3, &hv_Column3);





			if (0 != (int(hv_Number21 == 27)))
			{
				MultImage(ho_Image, ho_Image, &ho_ImageResult15, 0.06, 0);
				GrayDilationRect(ho_ImageResult15, &ho_ImageResult15, 200, 1);
				Threshold(ho_ImageResult15, &ho_Region20, 180, 255);
				FillUp(ho_Region20, &ho_Region20);
				ClosingRectangle1(ho_Region20, &ho_Region20, 300, 10);
				OpeningRectangle1(ho_Region20, &ho_Region20, 1, 300);
				Connection(ho_Region20, &ho_Region20);
				SelectShapeStd(ho_Region20, &ho_Region20, "max_area", 70);
				Union1(ho_Region20, &ho_Region20);
				ClosingCircle(ho_Region20, &ho_Region20, 17);

				OpeningRectangle1(ho_Region20, &ho_RegionOpening34, 5, 500);
				Connection(ho_RegionOpening34, &ho_ConnectedRegions37);
				OpeningRectangle1(ho_ConnectedRegions37, &ho_ConnectedRegions37, 3, 500);
				SelectShapeStd(ho_ConnectedRegions37, &ho_SelectedRegions19, "max_area",
					70);
				ShapeTrans(ho_SelectedRegions19, &ho_RegionUnion, "rectangle1");
				MoveRegion(ho_RegionUnion, &ho_RegionMoved, 0, -850);
				Difference(ho_RegionUnion, ho_RegionMoved, &ho_RegionUnion);



				//提取区域
				SmallestRectangle1(ho_RegionUnion, &hv_Row112, &hv_Column112, &hv_Row212,
					&hv_Column212);
				ReduceDomain(ho_Image, ho_RegionUnion, &ho_ImageReduced9);
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion2, 50, 1);
				AreaCenter(ho_RegionUnion, &hv_Area6, &hv_Row3, &hv_Column3);
			}

			if (0 != (int(hv_Number21 == 2)))
			{

			}
			if (0 != (int(hv_Number21 == 3)))
			{
				//裁剪
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				ClosingCircle(ho_Region5, &ho_Region5, 15);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 50);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));




			}
			if (0 != (int(hv_Number21 == 4)))
			{
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 70);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));
			}
			if (0 != (int(hv_Number21 == 5)))
			{
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				ClosingRectangle1(ho_Region5, &ho_Region5, 115, 1);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				SelectShape(ho_Region5, &ho_Region5, "height", "and", 25, 200);
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 70);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));
			}
			if (0 != (int(hv_Number21 == 6)))
			{

				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian5, 21, 21);

				TextureLaws(ho_ImageMedian5, &ho_ImageTexture5, "el", 5, 7);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture8, "le", 5, 7);


				AddImage(ho_ImageTexture5, ho_ImageTexture8, &ho_ImageResult19, 2, -100);
				Threshold(ho_ImageResult19, &ho_Region14, 180, 255);
				Intersection(ho_Region14, ho_RegionErosion, &ho_Region14);
				Connection(ho_Region14, &ho_Region14);
				SelectShape(ho_Region14, &ho_Region14, (HTuple("area").Append("width")),
					"or", (HTuple(700).Append(100)), (HTuple(999999).Append(99999)));
				Union1(ho_Region14, &ho_Region14);

				Connection(ho_Region14, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"and", (HTuple(500).Append(80)), (HTuple(99999).Append(99999)));
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 135);
				ClosingRectangle1(ho_Region27, &ho_Region27, 175, 1);
				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);

				Connection(ho_Region27, &ho_ConnectedRegions14);
				ShapeTrans(ho_ConnectedRegions14, &ho_ConnectedRegions14, "convex");
				DilationCircle(ho_ConnectedRegions14, &(*ho_camregion), 10.5);


			}
			if (0 != (int(hv_Number21 == 7)))
			{

				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 425, 1);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 21, 21);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture, "el", 5, 7);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture3, "le", 5, 7);
				AddImage(ho_ImageTexture, ho_ImageTexture3, &ho_ImageResult1, 3, -300);
				Threshold(ho_ImageResult1, &ho_Region29, 150, 255);
				Intersection(ho_Region29, ho_RegionErosion, &ho_Region29);
				Connection(ho_Region29, &ho_ConnectedRegions31);
				SelectShape(ho_ConnectedRegions31, &ho_SelectedRegions12, (HTuple("area").Append("height")),
					"and", (HTuple(700).Append(50)), (HTuple(999999).Append(99999)));
				Union1(ho_SelectedRegions12, &ho_Region29);

				ClosingRectangle1(ho_Region29, &ho_RegionClosing8, 2, 245);
				//union2 (RegionClosing8, Rectangle_top, RegionClosing8)
				Union2(ho_RegionClosing8, ho_Rectangle_bottom, &ho_RegionClosing8);
				Connection(ho_RegionClosing8, &ho_ConnectedRegions31);
				SelectShape(ho_ConnectedRegions31, &ho_SelectedRegions12, "area", "and",
					200, 999999);
				Union1(ho_SelectedRegions12, &ho_RegionUnion33);
				ClosingRectangle1(ho_RegionUnion33, &ho_RegionClosing7, 15, 1145);
				OpeningRectangle1(ho_RegionClosing7, &ho_RegionOpening29, 5, 3);
				FillUp(ho_RegionOpening29, &ho_RegionFillUp14);
				OpeningRectangle1(ho_RegionFillUp14, &ho_RegionFillUp14, 25, 25);
				Connection(ho_RegionFillUp14, &ho_ConnectedRegions38);
				SelectShape(ho_ConnectedRegions38, &ho_SelectedRegions32, (HTuple("column").Append("width")),
					"and", (HTuple(750).Append(80)), (HTuple(1300).Append(9999)));
				SelectShape(ho_SelectedRegions32, &ho_SelectedRegions52, "area", "and", 400,
					9999999);
				ShapeTrans(ho_SelectedRegions52, &ho_RegionTrans30, "convex");
				DilationCircle(ho_RegionTrans30, &(*ho_camregion), 10.5);
			}
			if (0 != (int(hv_Number21 == 8)))
			{
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 225, 1);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 15, 15);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture, "el", 5, 7);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture3, "le", 5, 7);
				AddImage(ho_ImageTexture, ho_ImageTexture3, &ho_ImageResult1, 2, -100);
				Threshold(ho_ImageResult1, &ho_Region29, 180, 255);
				Intersection(ho_Region29, ho_RegionErosion, &ho_Region29);
				Connection(ho_Region29, &ho_Region29);
				SelectShape(ho_Region29, &ho_Region29, ((HTuple("area").Append("width")).Append("height")),
					"and", ((HTuple(400).Append(80)).Append(80)), ((HTuple(999999).Append(999999)).Append(99999)));
				Union1(ho_Region29, &ho_Region29);
				ClosingRectangle1(ho_Region29, &ho_Region29, 19, 200);
				ClosingRectangle1(ho_Region29, &ho_Region29, 100, 1);


				Connection(ho_Region29, &ho_ConnectedRegions31);
				SelectShape(ho_ConnectedRegions31, &ho_SelectedRegions12, "area", "and",
					200, 999999);
				Union1(ho_SelectedRegions12, &ho_RegionUnion33);

				Union2(ho_RegionUnion33, ho_Rectangle_bottom, &ho_RegionUnion33);
				Union2(ho_RegionUnion33, ho_Rectangle_top, &ho_RegionUnion33);
				ClosingRectangle1(ho_RegionUnion33, &ho_RegionUnion33, 25, 200);
				FillUp(ho_RegionUnion33, &ho_RegionUnion33);
				OpeningRectangle1(ho_RegionUnion33, &ho_RegionClosing7, 25, 25);
				FillUp(ho_RegionClosing7, &ho_RegionFillUp14);
				Connection(ho_RegionFillUp14, &ho_ConnectedRegions38);
				SelectShape(ho_ConnectedRegions38, &ho_SelectedRegions32, "column", "and",
					750, 1300);
				Union1(ho_SelectedRegions32, &ho_RegionUnion18);
				ShapeTrans(ho_RegionUnion18, &ho_RegionTrans30, "convex");
				DilationCircle(ho_RegionTrans30, &(*ho_camregion), 10.5);
			}
			if (0 != (int(hv_Number21 == 9)))
			{
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				GenRectangle1(&ho_Rectangle_top, 0, 0, 5, 1800);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 15, 15);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture, "el", 5, 7);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture3, "le", 5, 7);
				AddImage(ho_ImageTexture, ho_ImageTexture3, &ho_ImageResult1, 3, -300);
				Threshold(ho_ImageResult1, &ho_Region29, 128, 255);
				Intersection(ho_Region29, ho_RegionErosion, &ho_Region29);

				Connection(ho_Region29, &ho_Region29);
				SelectShape(ho_Region29, &ho_Region29, (HTuple("area").Append("width")),
					"and", (HTuple(400).Append(150)), (HTuple(999999).Append(99999)));

				ShapeTrans(ho_Region29, &ho_Region27, "convex");
				Union1(ho_Region27, &ho_Region27);
				ShapeTrans(ho_Region27, &ho_Region27, "rectangle1");
				OpeningCircle(ho_Region27, &ho_Region27, 175);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 185);
				ClosingRectangle1(ho_Region27, &ho_Region27, 175, 1);
				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);

				Connection(ho_Region27, &ho_ConnectedRegions14);
				ShapeTrans(ho_ConnectedRegions14, &ho_ConnectedRegions14, "convex");
				DilationCircle(ho_ConnectedRegions14, &(*ho_camregion), 10.5);
			}
			if (0 != (int(hv_Number21 == 10)))
			{




				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("height")),
					"and", (HTuple(100).Append(100)), (HTuple(9999999).Append(999999)));
				ShapeTrans(ho_Region27, &ho_Region27, "convex");

				Union1(ho_Region27, &ho_Region27);

				ClosingCircle(ho_Region27, &ho_Region27, 25);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 50);
				Connection(ho_Region27, &ho_Region27);
				ShapeTrans(ho_Region27, &ho_Region27, "convex");





				Union1(ho_Region27, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 410);

				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);
				Connection(ho_Region27, &ho_ConnectedRegions14);

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions9, (HTuple("width").Append("area")),
					"and", (HTuple(100).Append(500)), (HTuple(280).Append(999999)));

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions_big, (HTuple("width").Append("area")),
					"and", (HTuple(300).Append(200)), (HTuple(680).Append(999999)));
				DilationCircle(ho_SelectedRegions_big, &ho_SelectedRegions_big, 5);
				Union2(ho_SelectedRegions9, ho_SelectedRegions_big, &ho_RegionOpening19);

				Connection(ho_RegionOpening19, &ho_ConnectedRegions39);
				ShapeTrans(ho_ConnectedRegions39, &ho_RegionTrans8, "convex");
				DilationCircle(ho_RegionTrans8, &(*ho_camregion), 15.5);
			}
			if (0 != (int(hv_Number21 == 11)))
			{

				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 70);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));
			}
			if (0 != (int(hv_Number21 == 12)))
			{
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);

				FillUp(ho_Region5, &ho_Region5);
				ClosingRectangle1(ho_Region5, &ho_Region5, 115, 1);
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 70);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));
				//裁剪

			}
			if (0 != (int(hv_Number21 == 13)))
			{
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(700).Append(100)), (HTuple(99999).Append(99999)));
				ShapeTrans(ho_Region27, &ho_Region27, "convex");

				Union1(ho_Region27, &ho_Region27);

				ClosingCircle(ho_Region27, &ho_Region27, 25);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 50);
				Connection(ho_Region27, &ho_Region27);
				ShapeTrans(ho_Region27, &ho_Region27, "convex");

				Union1(ho_Region27, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);

				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);
				Connection(ho_Region27, &ho_ConnectedRegions14);

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions9, (HTuple("width").Append("area")),
					"and", (HTuple(150).Append(500)), (HTuple(280).Append(999999)));

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions_big, (HTuple("width").Append("area")),
					"and", (HTuple(300).Append(200)), (HTuple(680).Append(999999)));
				DilationCircle(ho_SelectedRegions_big, &ho_SelectedRegions_big, 21);
				Union2(ho_SelectedRegions9, ho_SelectedRegions_big, &ho_RegionOpening19);

				Connection(ho_RegionOpening19, &ho_ConnectedRegions39);
				ShapeTrans(ho_ConnectedRegions39, &ho_RegionTrans8, "convex");
				DilationCircle(ho_RegionTrans8, &(*ho_camregion), 15.5);
			}
			if (0 != (int(hv_Number21 == 14)))
			{


				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 630, 1);
				MoveRegion(ho_RegionErosion, &ho_RegionErosion_, 0, -20);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 1, 0);
				Threshold(ho_ImageSub, &ho_Region27, 200, 255);





				Connection(ho_Region27, &ho_ConnectedRegions7);


				Intersection(ho_Region27, ho_RegionErosion_, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, ((HTuple("area").Append("width")).Append("rect2_len1")),
					"or", ((HTuple(700).Append(100)).Append(12)), ((HTuple(99999).Append(99999)).Append(99999)));


				//***补
				ReduceDomain(ho_Image, ho_RegionErosion, &ho_ImageReduced);
				Threshold(ho_ImageReduced, &ho_RegionK, (HTuple(0).Append(250)), (HTuple(30).Append(255)));
				FillUp(ho_RegionK, &ho_RegionK);
				Connection(ho_RegionK, &ho_RegionK);
				SelectShape(ho_RegionK, &ho_RegionK, "area", "and", 200, 99999);
				Union2(ho_RegionK, ho_Region27, &ho_Region27);
				Union1(ho_Region27, &ho_Region27);
				FillUp(ho_Region27, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				//*****************************************
				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 325, 1);
				Connection(ho_Region27, &ho_Region27);
				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 5);

				OpeningCircle(ho_Region27, &ho_Region27, 11);
				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("height").Append("width")),
					"and", (HTuple(50).Append(100)), (HTuple(99999).Append(99999)));

				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				SelectShape(ho_Region27, &ho_bottom_Reg, (HTuple("row").Append("row")), "or",
					(HTuple(0).Append(2000)), (HTuple(150).Append(2047)));
				SelectShape(ho_Region27, &ho_Region27, "row", "and", 150, 2000);
				OpeningCircle(ho_Region27, &ho_Region27, 35);




				ShapeTrans(ho_Region27, &ho_Region27, "ellipse");
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Union2(ho_Region27, ho_bottom_Reg, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 100, 1);
				ClosingCircle(ho_Region27, &ho_Region27, 11);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 10);

				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);
				Connection(ho_Region27, &ho_ConnectedRegions14);

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions9, (HTuple("width").Append("area")),
					"and", (HTuple(100).Append(500)), (HTuple(280).Append(999999)));

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions_big, (HTuple("width").Append("area")),
					"and", (HTuple(300).Append(200)), (HTuple(680).Append(999999)));
				DilationCircle(ho_SelectedRegions_big, &ho_SelectedRegions_big, 21);
				Union2(ho_SelectedRegions9, ho_SelectedRegions_big, &ho_RegionOpening19);

				Connection(ho_RegionOpening19, &ho_ConnectedRegions39);
				ShapeTrans(ho_ConnectedRegions39, &ho_RegionTrans8, "convex");
				DilationCircle(ho_RegionTrans8, &(*ho_camregion), 5.5);


			}
			if (0 != (int(hv_Number21 == 15)))
			{



				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 300, 1);

				MedianRect(ho_ImageReduced9, &ho_ImageMedian24, 25, 25);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -200);
				Threshold(ho_ImageSub, &ho_Region14, 180, 255);
				Intersection(ho_Region14, ho_RegionErosion, &ho_Region14);

				Connection(ho_Region14, &ho_Region14);
				SelectShape(ho_Region14, &ho_Region14, "area", "and", 70, 9999999);
				ShapeTrans(ho_Region14, &ho_Region14, "convex");
				Union1(ho_Region14, &ho_Region14);
				ClosingRectangle1(ho_Region14, &ho_Region14, 150, 1);
				ClosingRectangle1(ho_Region14, &ho_Region14, 1, 20);
				Connection(ho_Region14, &ho_Region14);
				OpeningCircle(ho_Region14, &ho_Region14, 3.5);
				SelectShape(ho_Region14, &ho_Region14, (HTuple("area").Append("width")),
					"or", (HTuple(700).Append(100)), (HTuple(99999).Append(500)));
				SelectShape(ho_Region14, &ho_Region14, (HTuple("width").Append("height")),
					"or", (HTuple(100).Append(100)), (HTuple(500).Append(500)));
				SelectShape(ho_Region14, &ho_Region_big, "width", "and", 350, 550);




				Union2(ho_Region14, ho_Rectangle_top, &ho_Region14);
				Union2(ho_Region14, ho_Rectangle_bottom, &ho_Region14);
				Union1(ho_Region14, &ho_Region14);
				ClosingRectangle1(ho_Region14, &ho_Region14, 3, 55);
				Union2(ho_Region14, ho_Rectangle_bottom, &ho_Region14);
				Union2(ho_Region14, ho_Rectangle_top, &ho_Region14);
				FillUp(ho_Region14, &ho_Region14);
				OpeningRectangle1(ho_Region14, &ho_Region14, 25, 25);

				Connection(ho_Region14, &ho_ConnectedRegions40);
				SelectShape(ho_ConnectedRegions40, &ho_SelectedRegions48, "area", "and",
					4000, 9999999);
				SelectShape(ho_SelectedRegions48, &ho_SelectedRegions49, "column", "and",
					700, 1300);
				Union1(ho_SelectedRegions49, &ho_RegionUnion7);
				ClosingRectangle1(ho_RegionUnion7, &ho_RegionClosing4, 45, 25);
				FillUp(ho_RegionClosing4, &ho_RegionFillUp20);
				Connection(ho_RegionFillUp20, &ho_ConnectedRegions41);
				ShapeTrans(ho_ConnectedRegions41, &ho_RegionTrans11, "convex");
				SelectShape(ho_RegionTrans11, &ho_SelectedRegions, (HTuple("width").Append("row")),
					"and", (HTuple(150).Append(200)), (HTuple(250).Append(1800)));
				ShapeTrans(ho_SelectedRegions, &ho_SelectedRegions, "outer_circle");
				Union2(ho_SelectedRegions, ho_RegionTrans11, &ho_RegionTrans11);
				Connection(ho_RegionTrans11, &ho_RegionTrans11);
				SelectShape(ho_RegionTrans11, &ho_SelectedRegions, (HTuple("width").Append("row")),
					"and", (HTuple(350).Append(200)), (HTuple(550).Append(1800)));
				Difference(ho_RegionTrans11, ho_SelectedRegions, &ho_RegionTrans11);
				ShapeTrans(ho_SelectedRegions, &ho_SelectedRegions, "rectangle1");
				ErosionRectangle1(ho_SelectedRegions, &ho_SelectedRegions, 75, 75);


				RegionFeatures(ho_SelectedRegions, "width", &hv_Value);
				OpeningCircle(ho_SelectedRegions, &ho_SelectedRegions, hv_Value / 2);
				Union2(ho_SelectedRegions, ho_RegionTrans11, &ho_RegionTrans11);



				DilationCircle(ho_RegionTrans11, &(*ho_camregion), 20.5);

			}
			if (0 != (int(hv_Number21 == 16)))
			{
				//裁剪
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				ClosingRectangle1(ho_Region5, &ho_Region5, 151, 1);
				//closing_circle (Region5, Region5, 7)
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, ((HTuple("width").Append("height")).Append("area")),
					"and", ((HTuple(550).Append(50)).Append(40000)), ((HTuple(99999).Append(200)).Append(99999999)));
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 50);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));


				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 615, 1);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian24, 17, 17);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 1, 0);






				Threshold(ho_ImageSub, &ho_Region27, 200, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, "area", "and", 50, 99999);
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 300, 1);
				OpeningCircle(ho_Region27, &ho_Region27, 1.5);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 35);
				OpeningCircle(ho_Region27, &ho_Region27, 1.5);
				Connection(ho_Region27, &ho_Region27);

				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(300)));
				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 20);
				ClosingRectangle1(ho_Region27, &ho_Region27, 20, 1);
				FillUp(ho_Region27, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				DilationRectangle1((*ho_JTReg), &ho_JTReg_, 100, 50);
				Difference(ho_Region27, ho_JTReg_, &ho_Region27);
				SelectGray(ho_Region27, ho_Image, &ho_Region27, "deviation", "and", 33, 255);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("height").Append("width")),
					"and", (HTuple(50).Append(100)), (HTuple(99999).Append(300)));
				ShapeTrans(ho_Region27, &ho_Region27, "ellipse");
				SelectShape(ho_Region27, &ho_Region27, (HTuple("height").Append("width")),
					"or", (HTuple(100).Append(100)), (HTuple(300).Append(300)));
				DilationCircle(ho_Region27, &(*ho_camregion), 5.5);



			}
			if (0 != (int(hv_Number21 == 17)))
			{
				//裁剪
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 50);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));
			}
			if (0 != (int(hv_Number21 == 18)))
			{

				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				ClosingRectangle1(ho_Region5, &ho_Region5, 131, 1);
				ClosingCircle(ho_Region5, &ho_Region5, 5);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, ((HTuple("width").Append("height")).Append("area")),
					"and", ((HTuple(550).Append(40)).Append(20000)), ((HTuple(99999).Append(200)).Append(99999999)));
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				ClosingCircle(ho_Region5, &ho_Region5, 15);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 60);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));
			}
			if (0 != (int(hv_Number21 == 19)))
			{


			}
			if (0 != (int(hv_Number21 == 20)))
			{

				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(700).Append(100)), (HTuple(99999).Append(99999)));
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 121);
				ClosingRectangle1(ho_Region27, &ho_Region27, 121, 1);
				FillUp(ho_Region27, &ho_Region27);

				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 521);
				FillUp(ho_Region27, &ho_Region27);
				OpeningCircle(ho_Region27, &ho_Region27, 55);


				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 35);
				ClosingRectangle1(ho_Region27, &ho_Region27, 175, 1);
				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);

				Connection(ho_Region27, &ho_ConnectedRegions14);
				ShapeTrans(ho_ConnectedRegions14, &ho_ConnectedRegions14, "convex");
				DilationCircle(ho_ConnectedRegions14, &(*ho_camregion), 10.5);
			}
			if (0 != (int(hv_Number21 == 21)))
			{

				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian24, 21, 21);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);

				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, ((HTuple("area").Append("width")).Append("height")),
					"or", ((HTuple(700).Append(100)).Append(100)), ((HTuple(99999).Append(99999)).Append(99999)));
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 121);


				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));

				ShapeTrans(ho_Region27, &ho_Region27, "convex");

				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);

				Union1(ho_Region27, &ho_Region27);
				ClosingCircle(ho_Region27, &ho_Region27, 11);
				ClosingRectangle1(ho_Region27, &ho_Region27, 100, 1);

				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);
				Connection(ho_Region27, &ho_ConnectedRegions14);

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions9, (HTuple("width").Append("area")),
					"and", (HTuple(100).Append(500)), (HTuple(280).Append(999999)));

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions_big, (HTuple("width").Append("area")),
					"and", (HTuple(300).Append(200)), (HTuple(680).Append(999999)));
				DilationCircle(ho_SelectedRegions_big, &ho_SelectedRegions_big, 21);
				Union2(ho_SelectedRegions9, ho_SelectedRegions_big, &ho_RegionOpening19);

				Connection(ho_RegionOpening19, &ho_ConnectedRegions39);
				ShapeTrans(ho_ConnectedRegions39, &ho_RegionTrans8, "convex");
				DilationCircle(ho_RegionTrans8, &(*ho_camregion), 1);







			}
			if (0 != (int(hv_Number21 == 22)))
			{

				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);

				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(700).Append(100)), (HTuple(99999).Append(99999)));
				Union1(ho_Region27, &ho_Region27);
				OpeningCircle(ho_Region27, &ho_Region27, 2.5);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 121);


				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));

				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				ShapeTrans(ho_Region27, &ho_Region27, "rectangle1");
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 15, 1);
				ShapeTrans(ho_Region27, &ho_Region27, "rectangle1");
				Connection(ho_Region27, &ho_Region27);

				RegionFeatures(ho_Region27, "width", &hv_Value);
				if (0 != (int(hv_Value > 0)))
				{
					DilationRectangle1(ho_Region27, &ho_Region27, 1, hv_Value);
					OpeningCircle(ho_Region27, &ho_Region27, hv_Value / 2);
					MoveRegion(ho_Region27, &ho_Region27, (-hv_Value) / 2, 0);
				}
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);

				Union1(ho_Region27, &ho_Region27);
				ClosingCircle(ho_Region27, &ho_Region27, 11);
				ClosingRectangle1(ho_Region27, &ho_Region27, 200, 200);

				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);
				Connection(ho_Region27, &ho_ConnectedRegions14);

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions9, (HTuple("width").Append("area")),
					"and", (HTuple(100).Append(500)), (HTuple(280).Append(999999)));

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions_big, (HTuple("width").Append("area")),
					"and", (HTuple(300).Append(200)), (HTuple(680).Append(999999)));
				DilationCircle(ho_SelectedRegions_big, &ho_SelectedRegions_big, 3);
				Union2(ho_SelectedRegions9, ho_SelectedRegions_big, &ho_RegionOpening19);

				Connection(ho_RegionOpening19, &ho_ConnectedRegions39);
				ShapeTrans(ho_ConnectedRegions39, &ho_RegionTrans8, "convex");
				DilationCircle(ho_RegionTrans8, &(*ho_camregion), 1);


			}
			if (0 != (int(hv_Number21 == 23)))
			{
				//裁剪
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 50);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));

				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 425, 1);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian24, 21, 21);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);

				SelectShape(ho_Region27, &ho_Region27, ((HTuple("area").Append("width")).Append("height")),
					"or", ((HTuple(700).Append(100)).Append(100)), ((HTuple(99999).Append(99999)).Append(99999)));
				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				ShapeTrans(ho_Region27, &ho_Region27, "rectangle1");
				Union1(ho_Region27, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				ShapeTrans(ho_Region27, &ho_Region27, "rectangle1");
				Union1(ho_Region27, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				SelectObj(ho_Region27, &ho_ObjectSelected, 1);
				RegionFeatures(ho_ObjectSelected, "width", &hv_Value);
				OpeningCircle(ho_ObjectSelected, &ho_RegionOpening1, hv_Value / 2);
				CountObj(ho_Region27, &hv_Number);
				if (0 != (int(hv_Number > 1)))
				{
					SelectObj(ho_Region27, &ho_ObjectSelected, 2);
					RegionFeatures(ho_ObjectSelected, "width", &hv_Value);
					OpeningCircle(ho_ObjectSelected, &ho_RegionOpening2, hv_Value / 2);

					Union2(ho_RegionOpening1, ho_RegionOpening2, &ho_Region27);

				}
				else
				{
					Union2(ho_RegionOpening1, ho_RegionOpening1, &ho_Region27);
				}
				OpeningCircle(ho_Region27, &ho_Region27, 157);




				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				Union1(ho_Region27, &ho_Region27);
				ClosingCircle(ho_Region27, &ho_Region27, 11);
				ClosingRectangle1(ho_Region27, &ho_Region27, 200, 200);

				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);
				Connection(ho_Region27, &ho_ConnectedRegions14);
				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions4, "width", "and",
					250, 99999);
				DilationCircle(ho_SelectedRegions4, &(*ho_camregion), 15.5);

			}
			if (0 != (int(hv_Number21 == 24)))
			{
				//裁剪
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian24, 21, 21);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);

				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));
				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				Union1(ho_Region27, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				ShapeTrans(ho_Region27, &ho_Region27, "rectangle1");
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);
				SelectShape(ho_Region27, &ho_Region27, "width", "and", 250, 450);
				SortRegion(ho_Region27, &ho_Region27, "first_point", "true", "row");
				SelectObj(ho_Region27, &ho_ObjectSelected, 1);
				RegionFeatures(ho_ObjectSelected, "width", &hv_Value);
				DilationRectangle1(ho_ObjectSelected, &ho_ObjectSelected, 1, hv_Value);
				OpeningCircle(ho_ObjectSelected, &ho_RegionOpening1, hv_Value / 2);
				MoveRegion(ho_RegionOpening1, &ho_RegionOpening1, (-hv_Value) / 2, 0);
				SelectObj(ho_Region27, &ho_ObjectSelected, 2);
				RegionFeatures(ho_ObjectSelected, "width", &hv_Value);
				//dilation_rectangle1 (ObjectSelected, ObjectSelected, 1, Value)

				OpeningCircle(ho_ObjectSelected, &ho_RegionOpening2, hv_Value / 2);
				//move_region (RegionOpening2, RegionOpening2, Value/2, 1)
				RegionFeatures(ho_ObjectSelected, "height", &hv_Value);
				Union2(ho_RegionOpening1, ho_RegionOpening2, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);

				if (0 != (int(hv_Value < 800)))
				{
					Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				}

				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 200);
				Union1(ho_Region27, &ho_Region27);
				ClosingCircle(ho_Region27, &ho_Region27, 11);
				ClosingRectangle1(ho_Region27, &ho_Region27, 100, 1);

				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);
				Connection(ho_Region27, &ho_ConnectedRegions14);

				DilationRectangle1(ho_ConnectedRegions14, &ho_ConnectedRegions14, 15, 5);



				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions4, "width", "and",
					250, 99999);
				DilationCircle(ho_SelectedRegions4, &(*ho_camregion), 15.5);


			}
			if (0 != (int(hv_Number21 == 25)))
			{
				//裁剪
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				ClosingRectangle1(ho_Region5, &ho_Region5, 151, 1);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 50);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));

				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 425, 1);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);

				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));
				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				Union1(ho_Region27, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);

				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 200);
				OpeningCircle(ho_Region27, &ho_Region27, 3.5);
				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_SelectedRegions4, (HTuple("width").Append("height")),
					"and", (HTuple(250).Append(100)), (HTuple(99999).Append(99999)));
				DilationCircle(ho_SelectedRegions4, &(*ho_camregion), 15.5);


			}
			if (0 != (int(hv_Number21 == 27)))
			{

				//裁剪
				GenRectangle1(&ho_Rectangle11, 1024, 497, 1455, 1766);
				ReduceDomain(ho_ImageReduced9, ho_Rectangle11, &ho_ImageReduced12);
				MedianRect(ho_ImageReduced12, &ho_ImageMedian11, 10, 10);
				ReduceDomain(ho_ImageMedian11, ho_RegionErosion2, &ho_ImageReduced10);
				TextureLaws(ho_ImageReduced10, &ho_ImageTexture6, "el", 5, 7);
				TextureLaws(ho_ImageReduced10, &ho_ImageTexture7, "le", 5, 7);
				AddImage(ho_ImageTexture6, ho_ImageTexture7, &ho_ImageResult3, 2, -100);
				MedianRect(ho_ImageResult3, &ho_ImageMedian10, 15, 1);
				Threshold(ho_ImageResult3, &ho_Region6, 180, 255);
				Connection(ho_Region6, &ho_ConnectedRegions5);
				RankRegion(ho_ConnectedRegions5, &ho_RegionCount, 80, 15, 1000);
				ClosingRectangle1(ho_RegionCount, &ho_RegionOpening23, 100, 5);
				Union1(ho_RegionOpening23, &ho_RegionUnion23);
				ShapeTrans(ho_RegionUnion23, &ho_RegionTrans12, "rectangle1");
				RegionFeatures(ho_RegionTrans12, "height", &hv_Value4);
				if (0 != (int(hv_Value4 < 120)))
				{
					DilationRectangle1(ho_RegionTrans12, &ho_RegionDilation4, 1, 140);
					MoveRegion(ho_RegionDilation4, &ho_RegionTrans12, 65, 0);
				}
				DilationRectangle1(ho_RegionTrans12, &ho_RegionDilation8, 600, 10);
				Union1(ho_RegionDilation8, &ho_RegionUnion14);
				Intersection(ho_RegionUnion14, ho_RegionUnion, &(*ho_camregion));
			}
			if (0 != (int(hv_Number21 == 29)))
			{

				//裁剪
				GenRectangle1(&ho_Rectangle5, 364, 380, 967, 1726);
				ReduceDomain(ho_Image, ho_Rectangle5, &ho_ImageReduced1);
				MedianRect(ho_ImageReduced1, &ho_ImageMedian11, 10, 10);
				TextureLaws(ho_ImageMedian11, &ho_ImageTexture6, "el", 5, 7);
				TextureLaws(ho_ImageMedian11, &ho_ImageTexture7, "le", 5, 7);
				AddImage(ho_ImageTexture6, ho_ImageTexture7, &ho_ImageResult3, 2, -100);
				MedianRect(ho_ImageResult3, &ho_ImageMedian10, 15, 1);
				Threshold(ho_ImageResult3, &ho_Region6, 150, 255);
				Connection(ho_Region6, &ho_ConnectedRegions5);
				RankRegion(ho_ConnectedRegions5, &ho_RegionCount, 80, 20, 800);
				ClosingRectangle1(ho_RegionCount, &ho_RegionOpening23, 100, 5);
				Union1(ho_RegionOpening23, &ho_RegionUnion23);
				ShapeTrans(ho_RegionUnion23, &ho_RegionTrans12, "rectangle1");
				DilationRectangle1(ho_RegionTrans12, &ho_RegionDilation8, 5, 5);
				Union1(ho_RegionDilation8, &(*ho_camregion));

			}
			Union1((*ho_camregion), &(*ho_camregion));



		}
		else if (0 != (int(hv_Substring == HTuple("2_2"))))
		{
			if (true)
			{
				if (0 != (int(hv_Number21 == 27)))
				{
					GenRectangle1(&ho_Rectangle3, 0, 20, 737, 2041);
					ReduceDomain(ho_Image, ho_Rectangle3, &ho_ImageReduced7);
					MultImage(ho_ImageReduced7, ho_ImageReduced7, &ho_ImageResult4, 0.01, 0);
					Threshold(ho_ImageResult4, &ho_Region, 85, 255);
					FillUp(ho_Region, &ho_RegionFillUp3);
					Connection(ho_RegionFillUp3, &ho_ConnectedRegions20);
					SelectShape(ho_ConnectedRegions20, &ho_SelectedRegions43, (HTuple("area").Append("width")),
						"and", (HTuple(1500).Append(700)), (HTuple(999999999).Append(1500)));
					SelectShape(ho_ConnectedRegions20, &ho_SelectedRegions44, "height", "and",
						400, 99999);
					Union2(ho_SelectedRegions44, ho_SelectedRegions43, &ho_RegionUnion15);
					FillUp(ho_RegionUnion15, &ho_RegionFillUp1);
					Union1(ho_RegionFillUp1, &ho_RegionUnion2);
					ClosingRectangle1(ho_RegionUnion2, &ho_RegionClosing5, 1500, 200);
					Connection(ho_RegionClosing5, &ho_ConnectedRegions1);
					SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions, (HTuple("height").Append("width")),
						"and", (HTuple(400).Append(300)), (HTuple(3000).Append(1600)));
					Union1(ho_SelectedRegions, &ho_RegionUnion10);
					ShapeTrans(ho_RegionUnion10, &ho_ConnectedRegions21, "convex");
					OpeningRectangle1(ho_ConnectedRegions21, &ho_RegionOpening20, 3, 5);
					ShapeTrans(ho_RegionOpening20, &ho_RegionTrans6, "rectangle1");
					MoveRegion(ho_RegionTrans6, &ho_RegionUnion, 5, 0);

					MoveRegion(ho_RegionUnion, &ho_RegionMoved, 0, -900);
					Difference(ho_RegionUnion, ho_RegionMoved, &ho_RegionUnion);
					//提取区域
					SmallestRectangle1(ho_RegionUnion, &hv_Row112, &hv_Column112, &hv_Row212,
						&hv_Column212);
					GenRectangle1(&ho_RegionUnion, 0, hv_Column112, 2048, hv_Column212);
					ReduceDomain(ho_Image, ho_RegionUnion, &ho_ImageReduced9);
					AreaCenter((*ho_camregion), &hv_Area6, &hv_Row3, &hv_Column3);
				}
				else
				{


					MultImage(ho_Image, ho_Image, &ho_ImageResult4, 0.01, 0);
					GrayDilationRect(ho_ImageResult4, &ho_ImageResult4, 300, 1);
					Threshold(ho_ImageResult4, &ho_Region, 175, 255);
					FillUp(ho_Region, &ho_RegionFillUp3);
					//if (Number21!=13 and Number21!=14 and Number21!=15 and Number21!=16 and Number21!=17)
					//closing_rectangle1 (RegionFillUp3, RegionFillUp3, 430, 150)
					//endif
					MoveRegion(ho_RegionFillUp3, &ho_RegionFillUp3_, 0, -200);
					ShapeTrans(ho_RegionFillUp3_, &ho_RegionFillUp3_, "rectangle1");
					Union2(ho_RegionFillUp3, ho_RegionFillUp3_, &ho_RegionFillUp3);
					OpeningRectangle1(ho_RegionFillUp3, &ho_RegionFillUp3, 1, 1900);
					Connection(ho_RegionFillUp3, &ho_ConnectedRegions20);
					SelectShape(ho_ConnectedRegions20, &ho_SelectedRegions43, (HTuple("area").Append("width")),
						"and", (HTuple(1500).Append(700)), (HTuple(999999999).Append(1500)));
					SelectShape(ho_SelectedRegions43, &ho_SelectedRegions44, "height", "and",
						400, 99999);
					Union2(ho_SelectedRegions44, ho_SelectedRegions43, &ho_RegionUnion15);
					FillUp(ho_RegionUnion15, &ho_RegionFillUp1);
					Union1(ho_RegionFillUp1, &ho_RegionUnion2);
					ClosingRectangle1(ho_RegionUnion2, &ho_RegionClosing5, 1500, 200);
					Connection(ho_RegionClosing5, &ho_ConnectedRegions1);
					SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions, (HTuple("height").Append("width")),
						"and", (HTuple(400).Append(300)), (HTuple(3000).Append(1600)));
					Union1(ho_SelectedRegions, &ho_RegionUnion10);
					ShapeTrans(ho_RegionUnion10, &ho_ConnectedRegions21, "convex");
					OpeningRectangle1(ho_ConnectedRegions21, &ho_RegionOpening20, 3, 5);
					ShapeTrans(ho_RegionOpening20, &ho_RegionTrans6, "rectangle1");
					MoveRegion(ho_RegionTrans6, &ho_RegionUnion, 5, 0);
					MoveRegion(ho_RegionUnion, &ho_RegionMoved, 0, -900);
					Difference(ho_RegionUnion, ho_RegionMoved, &ho_RegionUnion);
					//提取区域
					SmallestRectangle1(ho_RegionUnion, &hv_Row112, &hv_Column112, &hv_Row212,
						&hv_Column212);
					GenRectangle1(&ho_RegionUnion, 0, hv_Column112, 2048, hv_Column212);
					ReduceDomain(ho_Image, ho_RegionUnion, &ho_ImageReduced9);
					AreaCenter((*ho_camregion), &hv_Area6, &hv_Row3, &hv_Column3);
				}
				if (0 != (int(hv_Number21 == 2)))
				{
					//裁剪
					GenRectangle1(&ho_Rectangle9, 1717, 412, 2099, 1616);
					ReduceDomain(ho_ImageReduced9, ho_Rectangle9, &ho_ImageReduced6);
					MedianRect(ho_ImageReduced6, &ho_ImageMedian11, 10, 10);
					MedianRect(ho_ImageMedian11, &ho_ImageMedian10, 15, 1);
					VarThreshold(ho_ImageMedian10, &ho_Region13, 50, 800, 0.2, 25, "dark");
					Connection(ho_Region13, &ho_ConnectedRegions5);
					ClosingRectangle1(ho_ConnectedRegions5, &ho_RegionOpening23, 100, 5);
					SelectShape(ho_RegionOpening23, &ho_SelectedRegions3, (HTuple("width").Append("area")),
						"and", (HTuple(200).Append(400)), (HTuple(1200).Append(999999)));
					Union1(ho_SelectedRegions3, &ho_RegionUnion23);
					ShapeTrans(ho_RegionUnion23, &ho_RegionTrans12, "rectangle1");
					DilationRectangle1(ho_RegionTrans12, &ho_RegionDilation, 1000, 1);
					Intersection(ho_RegionDilation, ho_ImageReduced9, &(*ho_camregion));
				}
				if (0 != (int(hv_Number21 == 3)))
				{
					//裁剪
					MedianRect(ho_ImageReduced9, &ho_ImageMedian7, 1, 15);
					MultImage(ho_ImageMedian7, ho_ImageMedian7, &ho_ImageResult12, 0.01, 0);
					Threshold(ho_ImageResult12, &ho_Regions3, 0, 60);
					FillUp(ho_Regions3, &ho_RegionFillUp21);
					OpeningCircle(ho_RegionFillUp21, &ho_RegionFillUp21, 7);
					DilationRectangle1(ho_RegionFillUp21, &ho_RegionDilation24, 9, 1);
					FillUp(ho_RegionDilation24, &ho_RegionFillUp25);
					OpeningCircle(ho_RegionFillUp25, &ho_RegionOpening8, 7);

					Connection(ho_RegionOpening8, &ho_ConnectedRegions17);
					SelectShape(ho_ConnectedRegions17, &ho_SelectedRegions20, "area", "and",
						23689, 195353);
					MoveRegion(ho_SelectedRegions20, &ho_RegionMoved7, 1, 5);
					DilationRectangle1(ho_RegionMoved7, &(*ho_camregion), 55, 30);
				}
				if (0 != (int(hv_Number21 == 4)))
				{

					MedianRect(ho_ImageReduced9, &ho_ImageMedian, 1, 25);
					MultImage(ho_ImageMedian, ho_ImageMedian, &ho_ImageResult11, 0.01, 0);
					Threshold(ho_ImageResult11, &ho_Regions2, 0, 61);
					FillUp(ho_Regions2, &ho_RegionFillUp11);
					OpeningRectangle1(ho_RegionFillUp11, &ho_RegionOpening15, 25, 1);
					Connection(ho_RegionOpening15, &ho_RegionOpening15);
					SelectShape(ho_RegionOpening15, &ho_RegionOpening15, "width", "and", 450,
						99999);
					DilationRectangle1(ho_RegionOpening15, &(*ho_camregion), 15, 15);
				}
				if (0 != (int(hv_Number21 == 5)))
				{
					Threshold(ho_ImageReduced9, &ho_Region16, 0, 90);
					Connection(ho_Region16, &ho_ConnectedRegions35);
					OpeningRectangle1(ho_ConnectedRegions35, &ho_ConnectedRegions35, 15, 1);
					OpeningCircle(ho_ConnectedRegions35, &ho_RegionOpening12, 3.5);
					Connection(ho_RegionOpening12, &ho_RegionOpening12);
					SelectShape(ho_RegionOpening12, &ho_SelectedRegions34, "width", "and",
						500, 1999999);

					DilationRectangle1(ho_SelectedRegions34, &(*ho_camregion), 75, 15);

				}
				if (0 != (int(hv_Number21 == 6)))
				{
					MedianRect(ho_ImageReduced9, &ho_ImageMedian3, 15, 1);
					MultImage(ho_ImageMedian3, ho_ImageMedian3, &ho_ImageResult5, 0.008, 0);
					Threshold(ho_ImageResult5, &ho_Region16, 0, 110);
					FillUp(ho_Region16, &ho_RegionFillUp28);
					Connection(ho_RegionFillUp28, &ho_ConnectedRegions8);
					SelectShape(ho_ConnectedRegions8, &ho_SelectedRegions8, (HTuple("column").Append("area")),
						"and", (HTuple(872.03).Append(500)), (HTuple(2047).Append(500000)));
					OpeningCircle(ho_SelectedRegions8, &ho_RegionOpening, 15);
					ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
					DilationRectangle1(ho_RegionTrans, &ho_RegionTrans, 35, 300);
					SelectShape(ho_RegionTrans, &ho_RegionTrans, "width", "and", 250, 450);
					RegionFeatures(ho_RegionTrans, "width", &hv_Value);
					if (0 != (hv_Value.TupleLength()))
					{
						OpeningCircle(ho_RegionTrans, &ho_RegionTrans, hv_Value / 2);
						MoveRegion(ho_RegionTrans, &ho_RegionTrans, 150, 0);
						DilationCircle(ho_RegionTrans, &(*ho_camregion), 20);
					}

				}
				if (0 != (int(hv_Number21 == 7)))
				{
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult10, 0.01,
						0);
					MedianImage(ho_ImageResult10, &ho_ImageResult10, "circle", 8, "mirrored");
					Threshold(ho_ImageResult10, &ho_Region19, 0, 130);
					FillUp(ho_Region19, &ho_RegionFillUp29);
					Connection(ho_RegionFillUp29, &ho_RegionFillUp29);
					SelectShapeStd(ho_RegionFillUp29, &ho_RegionFillUp29, "max_area", 70);
					ShapeTrans(ho_RegionFillUp29, &ho_RegionFillUp29, "rectangle1");
					RegionFeatures(ho_RegionFillUp29, "width", &hv_Value);
					OpeningCircle(ho_RegionFillUp29, &ho_RegionOpening, hv_Value / 2);
					Union2(ho_RegionOpening, ho_Rectangle_bottom, &ho_RegionOpening);
					ClosingRectangle1(ho_RegionOpening, &ho_RegionOpening, 1, 300);
					OpeningCircle(ho_RegionOpening, &ho_RegionOpening, 3.5);

					DilationCircle(ho_RegionOpening, &(*ho_camregion), 20);
				}
				if (0 != (int(hv_Number21 == 8)))
				{

					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult13, 0.009,
						0);
					Threshold(ho_ImageResult13, &ho_Region11, 0, 128);
					OpeningCircle(ho_Region11, &ho_RegionOpening19, 8.5);
					Connection(ho_RegionOpening19, &ho_ConnectedRegions24);


					SelectShape(ho_ConnectedRegions24, &ho_SelectedRegions107, (HTuple("row").Append("width")),
						"and", (HTuple(0).Append(150)), (HTuple(1000).Append(500)));
					ShapeTrans(ho_SelectedRegions107, &ho_SelectedRegions107, "rectangle1");
					RegionFeatures(ho_SelectedRegions107, "width", &hv_Value);
					if (0 != (hv_Value.TupleLength()))
					{

						DilationRectangle1(ho_SelectedRegions107, &ho_SelectedRegions107, 1,
							hv_Value);
						OpeningCircle(ho_SelectedRegions107, &ho_SelectedRegions107, hv_Value / 2);
						MoveRegion(ho_SelectedRegions107, &ho_SelectedRegions107, (-hv_Value) / 2,
							0);
						DilationRectangle1(ho_SelectedRegions107, &ho_SelectedRegions107, 51,
							21);
					}
					Union2(ho_SelectedRegions107, (*ho_camregion), &(*ho_camregion));

				}
				if (0 != (int(hv_Number21 == 9)))
				{
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult13, 0.009,
						0);
					Threshold(ho_ImageResult13, &ho_Region11, 0, 128);
					ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 225, 1);
					Intersection(ho_Region11, ho_RegionErosion, &ho_Region11);


					OpeningCircle(ho_Region11, &ho_RegionOpening19, 8.5);
					Connection(ho_RegionOpening19, &ho_ConnectedRegions24);
					SelectShape(ho_ConnectedRegions24, &ho_SelectedRegions22, "area", "and",
						2000, 789331);
					Union1(ho_SelectedRegions22, &ho_RegionUnion49);
					ShapeTrans(ho_RegionUnion49, &(*ho_camregion), "rectangle1");
					DilationRectangle1((*ho_camregion), &(*ho_camregion), 55, 55);
					MoveRegion((*ho_camregion), &ho_RegionMoved2, 250, 0);
					Union2((*ho_camregion), ho_RegionMoved2, &(*ho_camregion));
					RegionFeatures((*ho_camregion), "width", &hv_Value);
					if (0 != (int(hv_Value > 0)))
					{
						OpeningCircle((*ho_camregion), &(*ho_camregion), hv_Value / 2);
						DilationCircle((*ho_camregion), &(*ho_camregion), 13.5);
					}
				}
				if (0 != (int(hv_Number21 == 10)))
				{
					//裁剪
					GenRectangle1(&ho_Rectangle9, 1717, 412, 2099, 1616);
					ReduceDomain(ho_ImageReduced9, ho_Rectangle9, &ho_ImageReduced6);
					MedianRect(ho_ImageReduced6, &ho_ImageMedian11, 10, 10);
					MedianRect(ho_ImageMedian11, &ho_ImageMedian10, 15, 1);
					VarThreshold(ho_ImageMedian10, &ho_Region13, 5, 500, 0.2, 15, "dark");
					Connection(ho_Region13, &ho_ConnectedRegions5);
					ClosingRectangle1(ho_ConnectedRegions5, &ho_RegionOpening23, 100, 5);
					SelectShape(ho_RegionOpening23, &ho_SelectedRegions3, (HTuple("width").Append("area")),
						"and", (HTuple(200).Append(400)), (HTuple(1200).Append(999999)));
					Union1(ho_SelectedRegions3, &ho_RegionUnion23);
					ShapeTrans(ho_RegionUnion23, &ho_RegionTrans12, "rectangle1");
					DilationRectangle1(ho_RegionTrans12, &ho_RegionDilation, 1000, 1);
					Intersection(ho_RegionDilation, ho_ImageReduced9, &(*ho_camregion));
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult47, 0.01,
						0);
					MedianImage(ho_ImageResult47, &ho_ImageMedian31, "circle", 16, "mirrored");
					Threshold(ho_ImageMedian31, &ho_Region44, 0, 30);
					OpeningCircle(ho_Region44, &ho_RegionOpening78, 3.5);
					Connection(ho_RegionOpening78, &ho_ConnectedRegions78);
					SelectShape(ho_ConnectedRegions78, &(*ho_camregion), (HTuple("area").Append("width")),
						"and", (HTuple(500).Append(300)), (HTuple(999999).Append(9999)));
					Union1((*ho_camregion), &(*ho_camregion));
					ShapeTrans((*ho_camregion), &(*ho_camregion), "rectangle1");
					OpeningCircle((*ho_camregion), &(*ho_camregion), 175);
					Union2((*ho_camregion), ho_Rectangle_top, &(*ho_camregion));
					ClosingRectangle1((*ho_camregion), &(*ho_camregion), 1, 185);
					OpeningRectangle1((*ho_camregion), &(*ho_camregion), 15, 15);



					DilationCircle((*ho_camregion), &(*ho_camregion), 13.5);
				}
				if (0 != (int(hv_Number21 == 11)))
				{
					//裁剪
					GenRectangle1(&ho_Rectangle9, 653, 506, 959, 1816);
					ReduceDomain(ho_ImageReduced9, ho_Rectangle9, &ho_ImageReduced6);
					MedianRect(ho_ImageReduced6, &ho_ImageMedian11, 10, 10);
					MultImage(ho_ImageMedian11, ho_ImageMedian11, &ho_ImageResult8, 0.008,
						0);
					Threshold(ho_ImageResult8, &ho_Region17, 0, 50);
					FillUp(ho_Region17, &ho_RegionFillUp8);
					OpeningRectangle1(ho_RegionFillUp8, &ho_RegionOpening17, 20, 1);
					DilationRectangle1(ho_RegionOpening17, &(*ho_camregion), 15, 28);

				}
				if (0 != (int(hv_Number21 == 12)))
				{

					MedianRect(ho_ImageReduced9, &ho_ImageMedian4, 25, 1);
					MultImage(ho_ImageMedian4, ho_ImageMedian4, &ho_ImageResult6, 0.009, 0);
					Threshold(ho_ImageResult6, &ho_Region8, 0, 60);
					FillUp(ho_Region8, &ho_RegionFillUp2);
					OpeningRectangle1(ho_RegionFillUp2, &ho_RegionOpening1, 15, 1);
					Connection(ho_RegionOpening1, &ho_ConnectedRegions6);
					SelectShape(ho_ConnectedRegions6, &ho_SelectedRegions6, "area", "and",
						6890, 1.74141e+06);
					SelectShape(ho_SelectedRegions6, &ho_SelectedRegions1, "column", "and",
						874.31, 1280.96);


					DilationRectangle1(ho_SelectedRegions1, &(*ho_camregion), 22, 25);

				}
				if (0 != (int(hv_Number21 == 13)))
				{
					//test
					MedianRect(ho_ImageReduced9, &ho_ImageMedian4, 25, 1);
					MultImage(ho_ImageMedian4, ho_ImageMedian4, &ho_ImageResult6, 0.009, 0);
					Threshold(ho_ImageResult6, &ho_Region8, 0, 60);
					FillUp(ho_Region8, &ho_RegionFillUp2);
					OpeningRectangle1(ho_RegionFillUp2, &ho_RegionOpening1, 15, 1);
					Connection(ho_RegionOpening1, &ho_ConnectedRegions6);
					SelectShape(ho_ConnectedRegions6, &ho_SelectedRegions6, "area", "and",
						6890, 1.74141e+06);
					SelectShape(ho_SelectedRegions6, &ho_SelectedRegions1, "column", "and",
						874.31, 1280.96);
					ShapeTrans(ho_SelectedRegions1, &ho_RegionTrans35, "convex");
					Union1(ho_RegionTrans35, &ho_RegionUnion24);
					DilationRectangle1(ho_RegionUnion24, &(*ho_camregion), 22, 25);

				}
				if (0 != (int(hv_Number21 == 14)))
				{
					MedianImage(ho_ImageReduced9, &ho_ImageReduced9, "circle", 9, "mirrored");
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult18, 0.01,
						0);
					Threshold(ho_ImageResult18, &ho_Region12, 0, 60);
					Connection(ho_Region12, &ho_ConnectedRegions27);
					SelectShape(ho_ConnectedRegions27, &ho_SelectedRegions2, (HTuple("area").Append("ratio")),
						"and", (HTuple(10050).Append(0.2)), (HTuple(99999).Append(3)));
					ShapeTrans(ho_SelectedRegions2, &ho_RegionTrans7, "convex");
					Union1(ho_RegionTrans7, &ho_RegionUnion14);
					DilationCircle(ho_RegionUnion14, &(*ho_camregion), 8.5);
					Threshold(ho_ImageResult18, &ho_Region24, 0, 90);
					ClosingRectangle1(ho_Region24, &ho_RegionClosing1, 55, 55);
					FillUp(ho_RegionClosing1, &ho_RegionFillUp18);
					Connection(ho_RegionFillUp18, &ho_ConnectedRegions32);
					Connection(ho_ConnectedRegions32, &ho_ConnectedRegions33);
					SelectShape(ho_ConnectedRegions33, &ho_SelectedRegions27, (HTuple("area").Append("column")),
						"and", (HTuple(256).Append(795.25)), (HTuple(468464).Append(1263.25)));
					ShapeTrans(ho_SelectedRegions27, &ho_RegionTrans25, "convex");
					DilationRectangle1(ho_RegionTrans25, &ho_RegionDilation2, 25, 25);

					Union2((*ho_camregion), ho_RegionDilation2, &(*ho_camregion));
					ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
					Intersection(ho_RegionErosion, (*ho_camregion), &(*ho_camregion));
				}
				if (0 != (int(hv_Number21 == 15)))
				{
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult9, 0.008,
						0);
					Threshold(ho_ImageResult9, &ho_Region9, 0, 30);
					ClosingRectangle1(ho_Region9, &ho_Region9, 25, 5);
					FillUp(ho_Region9, &ho_RegionFillUp9);
					OpeningCircle(ho_RegionFillUp9, &ho_RegionOpening22, 5.5);
					Connection(ho_RegionOpening22, &ho_RegionOpening22);
					ShapeTrans(ho_RegionOpening22, &ho_RegionOpening22, "convex");
					OpeningRectangle1(ho_RegionOpening22, &ho_RegionOpening32, 21, 1);
					Connection(ho_RegionOpening32, &ho_ConnectedRegions25);

					DilationRectangle1(ho_ConnectedRegions25, &(*ho_camregion), 30, 10);





				}
				if (0 != (int(hv_Number21 == 16)))
				{
					Threshold(ho_ImageReduced9, &ho_Region9, 0, 70);
					FillUp(ho_Region9, &ho_RegionFillUp4);
					Connection(ho_RegionFillUp4, &ho_ConnectedRegions25);
					OpeningCircle(ho_ConnectedRegions25, &ho_RegionOpening13, 15.5);
					DilationRectangle1(ho_RegionOpening13, &(*ho_camregion), 25, 25);

				}
				if (0 != (int(hv_Number21 == 17)))
				{
					Threshold(ho_ImageReduced9, &ho_Region9, 0, 60);
					FillUp(ho_Region9, &ho_RegionFillUp4);
					Connection(ho_RegionFillUp4, &ho_ConnectedRegions25);
					OpeningRectangle1(ho_ConnectedRegions25, &ho_RegionOpening13, 125, 1);
					Connection(ho_RegionOpening13, &ho_RegionOpening13);
					SelectShape(ho_RegionOpening13, &ho_RegionOpening13, "width", "and", 700,
						99999);

					DilationRectangle1(ho_RegionOpening13, &ho_RegionOpening13, 25, 25);

					//裁剪
					GenRectangle1(&ho_Rectangle9, 217, 412, 1099, 1616);
					ReduceDomain(ho_ImageReduced9, ho_Rectangle9, &ho_ImageReduced6);
					MedianRect(ho_ImageReduced6, &ho_ImageMedian11, 10, 10);
					MedianRect(ho_ImageMedian11, &ho_ImageMedian10, 15, 1);
					VarThreshold(ho_ImageMedian10, &ho_Region13, 5, 500, 0.2, 15, "dark");
					Connection(ho_Region13, &ho_ConnectedRegions5);
					ClosingRectangle1(ho_ConnectedRegions5, &ho_RegionOpening23, 100, 5);
					SelectShape(ho_RegionOpening23, &ho_SelectedRegions3, (HTuple("width").Append("height")),
						"and", (HTuple(200).Append(50)), (HTuple(1200).Append(450)));
					Union1(ho_SelectedRegions3, &ho_RegionUnion23);
					ShapeTrans(ho_RegionUnion23, &ho_RegionTrans12, "rectangle1");
					DilationRectangle1(ho_RegionTrans12, &ho_RegionDilation, 1000, 1);
					Intersection(ho_RegionDilation, ho_ImageReduced9, &(*ho_camregion));
					Union2((*ho_camregion), ho_RegionDilation, &(*ho_camregion));
				}
				if (0 != (int(hv_Number21 == 18)))
				{

					//裁剪
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult32, 0.01,
						0);
					MedianRect(ho_ImageResult32, &ho_ImageMedian11, 10, 10);
					Threshold(ho_ImageMedian11, &ho_Region1, 0, 50);
					FillUp(ho_Region1, &ho_Region1);
					OpeningRectangle1(ho_Region1, &ho_Region1, 45, 1);
					OpeningCircle(ho_Region1, &ho_RegionOpening6, 7);
					Connection(ho_RegionOpening6, &ho_ConnectedRegions2);
					SelectShape(ho_ConnectedRegions2, &ho_SelectedRegions30, "width", "and",
						624.8, 71256.9);

					DilationRectangle1(ho_SelectedRegions30, &(*ho_camregion), 45, 25);

				}
				if (0 != (int(hv_Number21 == 19)))
				{

					//提取小区域
					MedianImage(ho_ImageReduced9, &ho_ImageReduced9, "circle", 9, "mirrored");
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult7, 0.01, 0);
					Threshold(ho_ImageReduced9, &ho_Region4, 0, 80);
					FillUp(ho_Region4, &ho_RegionFillUp6);
					DilationCircle(ho_RegionFillUp6, &ho_RegionDilation6, 20.5);
					ErosionCircle(ho_RegionDilation6, &ho_RegionErosion, 20.5);
					OpeningRectangle1(ho_RegionErosion, &ho_RegionOpening14, 15, 15);
					Connection(ho_RegionOpening14, &ho_ConnectedRegions23);
					SelectShape(ho_ConnectedRegions23, &ho_SelectedRegions21, (HTuple("area").Append("column")),
						"and", (HTuple(309872).Append(850.09)), (HTuple(759598).Append(1296.16)));
					ShapeTrans(ho_SelectedRegions21, &ho_SelectedRegions21, "convex");

					DilationRectangle1(ho_SelectedRegions21, &(*ho_camregion), 25, 25);


				}
				if (0 != (int(hv_Number21 == 20)))
				{
					ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 350, 1);
					MedianImage(ho_ImageReduced9, &ho_ImageReduced9, "circle", 8, "mirrored");
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult23, 0.01,
						0);
					Threshold(ho_ImageResult23, &ho_Region4, 0, 80);
					Connection(ho_Region4, &ho_ConnectedRegions3);
					SelectShape(ho_ConnectedRegions3, &ho_SelectedRegions28, (HTuple("area").Append("column")),
						"and", (HTuple(10340).Append(850.09)), (HTuple(500000).Append(1296.16)));
					OpeningCircle(ho_SelectedRegions28, &ho_RegionOpening9, 3.5);
					ShapeTrans(ho_RegionOpening9, &ho_RegionTrans2, "convex");
					//bai
					MeanImage(ho_ImageReduced9, &ho_ImageMean6, 5, 5);
					Emphasize(ho_ImageMean6, &ho_ImageEmphasize1, 45, 45, 9);
					Threshold(ho_ImageEmphasize1, &ho_Region11, 220, 255);
					Intersection(ho_Region11, ho_RegionErosion, &ho_Region11);
					OpeningCircle(ho_Region11, &ho_RegionOpening10, 5.5);
					Connection(ho_RegionOpening10, &ho_ConnectedRegions24);
					SelectShape(ho_ConnectedRegions24, &ho_SelectedRegions22, ((HTuple("column").Append("area")).Append("row")),
						"and", ((HTuple(780).Append(1500)).Append(1850)), ((HTuple(1300).Append(10000)).Append(2100)));
					Union2(ho_RegionTrans2, ho_SelectedRegions22, &ho_RegionUnion12);
					DilationCircle(ho_RegionUnion12, &ho_RegionDilation5, 3.5);
					Union1(ho_RegionDilation5, &ho_RegionUnion16);
					Connection(ho_RegionUnion16, &ho_ConnectedRegions42);

					ShapeTrans(ho_ConnectedRegions42, &ho_RegionTrans15, "convex");
					DilationCircle(ho_RegionTrans15, &(*ho_camregion), 20);
				}
				if (0 != (int(hv_Number21 == 21)))
				{
					//提取小区域
					ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 450, 1);
					ReduceDomain(ho_ImageReduced9, ho_RegionErosion, &ho_ImageReduced9);
					BinaryThreshold(ho_ImageReduced9, &ho_Region9, "max_separability", "dark",
						&hv_UsedThreshold);
					//threshold (ImageReduced9, Region9, 0, 60)
					FillUp(ho_Region9, &ho_RegionFillUp4);
					Connection(ho_RegionFillUp4, &ho_ConnectedRegions25);
					SelectShape(ho_ConnectedRegions25, &ho_ConnectedRegions25, "width", "and",
						250, 99999);
					Union2(ho_ConnectedRegions25, ho_Rectangle_bottom, &ho_ConnectedRegions25
						);
					Union2(ho_ConnectedRegions25, ho_Rectangle_top, &ho_ConnectedRegions25);
					Union1(ho_ConnectedRegions25, &ho_ConnectedRegions25);
					FillUp(ho_ConnectedRegions25, &ho_ConnectedRegions25);
					ClosingRectangle1(ho_ConnectedRegions25, &ho_ConnectedRegions25, 1, 200);


					OpeningRectangle1(ho_ConnectedRegions25, &ho_RegionOpening13, 15, 15);
					Connection(ho_RegionOpening13, &ho_RegionOpening13);
					SelectShape(ho_RegionOpening13, &ho_RegionOpening13, "width", "and", 250,
						99999);
					FillUp(ho_RegionOpening13, &ho_RegionOpening13);
					DilationRectangle1(ho_RegionOpening13, &(*ho_camregion), 65, 25);

				}
				if (0 != (int(hv_Number21 == 22)))
				{


					ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 450, 1);
					ReduceDomain(ho_ImageReduced9, ho_RegionErosion, &ho_ImageReduced9);
					BinaryThreshold(ho_ImageReduced9, &ho_Region9, "max_separability", "dark",
						&hv_UsedThreshold);
					//threshold (ImageReduced9, Region9, 0, 60)
					FillUp(ho_Region9, &ho_RegionFillUp4);
					Connection(ho_RegionFillUp4, &ho_ConnectedRegions25);
					SelectShape(ho_ConnectedRegions25, &ho_ConnectedRegions25, "width", "and",
						250, 99999);

					ShapeTrans(ho_ConnectedRegions25, &ho_RegionTrans, "rectangle1");
					RegionFeatures(ho_RegionTrans, "width", &hv_Value);
					if (0 != (int(hv_Value > 0)))
					{
						DilationRectangle1(ho_RegionTrans, &ho_RegionTrans, 1, hv_Value);

						OpeningCircle(ho_RegionTrans, &ho_ConnectedRegions25, hv_Value / 2);
						MoveRegion(ho_ConnectedRegions25, &ho_ConnectedRegions25, (-hv_Value) / 2,
							0);
					}
					Union2(ho_ConnectedRegions25, ho_Rectangle_bottom, &ho_ConnectedRegions25
						);
					Union2(ho_ConnectedRegions25, ho_Rectangle_top, &ho_ConnectedRegions25);
					Union1(ho_ConnectedRegions25, &ho_ConnectedRegions25);
					ClosingRectangle1(ho_ConnectedRegions25, &ho_ConnectedRegions25, 1, 300);


					OpeningRectangle1(ho_ConnectedRegions25, &ho_RegionOpening13, 15, 15);
					Connection(ho_RegionOpening13, &ho_RegionOpening13);
					SelectShape(ho_RegionOpening13, &ho_RegionOpening13, "width", "and", 250,
						99999);
					FillUp(ho_RegionOpening13, &ho_RegionOpening13);
					DilationRectangle1(ho_RegionOpening13, &(*ho_camregion), 65, 25);





				}
				if (0 != (int(hv_Number21 == 23)))
				{
					MedianImage(ho_ImageReduced9, &ho_ImageReduced9, "circle", 8, "mirrored");
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult, 0.01, 0);
					Threshold(ho_ImageResult, &ho_Region15, 0, 65);
					FillUp(ho_Region15, &ho_RegionFillUp27);
					OpeningRectangle1(ho_RegionFillUp27, &ho_RegionOpening11, 25, 1);
					Connection(ho_RegionOpening11, &ho_RegionOpening11);
					SelectShape(ho_RegionOpening11, &ho_RegionOpening11, "width", "and", 300,
						99999);
					ShapeTrans(ho_RegionOpening11, &ho_SelectedRegions, "rectangle1");
					SelectShape(ho_SelectedRegions, &ho_SelectedRegions, "width", "and", 250,
						99999);
					SortRegion(ho_SelectedRegions, &ho_SelectedRegions, "first_point", "true",
						"row");
					SelectObj(ho_SelectedRegions, &ho_ObjectSelected, 1);
					RegionFeatures(ho_ObjectSelected, "width", &hv_Value);
					OpeningCircle(ho_ObjectSelected, &ho_ObjectSelected1, hv_Value / 2);
					CountObj(ho_SelectedRegions, &hv_Number);
					if (0 != (int(hv_Number > 1)))
					{
						SelectObj(ho_SelectedRegions, &ho_ObjectSelected, 2);
						RegionFeatures(ho_ObjectSelected, "width", &hv_Value);
						DilationRectangle1(ho_ObjectSelected, &ho_ObjectSelected, 1, hv_Value);

						OpeningCircle(ho_ObjectSelected, &ho_ObjectSelected2, hv_Value / 2);
						MoveRegion(ho_ObjectSelected2, &ho_ObjectSelected2, hv_Value / 2, 1);

						Union2(ho_ObjectSelected1, ho_ObjectSelected2, &ho_SelectedRegions);
					}
					else if (0 != (int(hv_Number == 1)))
					{

						Union2(ho_ObjectSelected1, ho_Rectangle_bottom, &ho_ObjectSelected1);
						ClosingRectangle1(ho_ObjectSelected1, &ho_SelectedRegions, 1, 211);
						OpeningCircle(ho_SelectedRegions, &ho_SelectedRegions, 3.5);
					}

					DilationRectangle1(ho_SelectedRegions, &(*ho_camregion), 25, 25);



				}
				if (0 != (int(hv_Number21 == 24)))
				{

					ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 450, 1);
					ReduceDomain(ho_ImageReduced9, ho_RegionErosion, &ho_ImageReduced9);
					BinaryThreshold(ho_ImageReduced9, &ho_Region9, "max_separability", "dark",
						&hv_UsedThreshold);
					//threshold (ImageReduced9, Region9, 0, 60)
					FillUp(ho_Region9, &ho_RegionFillUp4);
					Connection(ho_RegionFillUp4, &ho_ConnectedRegions25);
					SelectShape(ho_ConnectedRegions25, &ho_ConnectedRegions25, "width", "and",
						250, 99999);
					ShapeTrans(ho_ConnectedRegions25, &ho_ConnectedRegions25, "rectangle1");
					SelectShape(ho_ConnectedRegions25, &ho_SelectedRegions, "width", "and",
						250, 99999);
					SortRegion(ho_SelectedRegions, &ho_SelectedRegions, "first_point", "true",
						"row");
					SelectObj(ho_SelectedRegions, &ho_ObjectSelected, 1);
					DilationRectangle1(ho_ObjectSelected, &ho_ObjectSelected, 51, 1);
					RegionFeatures(ho_ObjectSelected, "width", &hv_Value);
					DilationRectangle1(ho_ObjectSelected, &ho_ObjectSelected, 1, hv_Value);
					OpeningCircle(ho_ObjectSelected, &ho_ObjectSelected1, hv_Value / 2);
					MoveRegion(ho_ObjectSelected1, &ho_ObjectSelected1, (-hv_Value) / 2, 1);
					SelectObj(ho_SelectedRegions, &ho_ObjectSelected, 2);
					RegionFeatures(ho_ObjectSelected, "width", &hv_Value);
					OpeningCircle(ho_ObjectSelected, &ho_ObjectSelected2, hv_Value / 2);
					RegionFeatures(ho_ObjectSelected, "height", &hv_Value);
					Union2(ho_ObjectSelected1, ho_ObjectSelected2, &ho_ConnectedRegions25);



					if (0 != (int(hv_Value < 800)))
					{
						Union2(ho_ConnectedRegions25, ho_Rectangle_bottom, &ho_ConnectedRegions25
							);
					}
					Union2(ho_ConnectedRegions25, ho_Rectangle_top, &ho_ConnectedRegions25);
					Union1(ho_ConnectedRegions25, &ho_ConnectedRegions25);
					ClosingRectangle1(ho_ConnectedRegions25, &ho_ConnectedRegions25, 1, 100);


					OpeningRectangle1(ho_ConnectedRegions25, &ho_RegionOpening13, 15, 15);
					Connection(ho_RegionOpening13, &ho_RegionOpening13);
					SelectShape(ho_RegionOpening13, &ho_RegionOpening13, "width", "and", 250,
						99999);







					DilationRectangle1(ho_RegionOpening13, &(*ho_camregion), 65, 25);
				}
				if (0 != (int(hv_Number21 == 25)))
				{
					MedianImage(ho_ImageReduced9, &ho_ImageReduced9, "circle", 8, "mirrored");
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult, 0.01, 0);
					Threshold(ho_ImageResult, &ho_Region15, 0, 65);
					FillUp(ho_Region15, &ho_RegionFillUp27);
					OpeningRectangle1(ho_RegionFillUp27, &ho_RegionOpening11, 25, 1);
					Connection(ho_RegionOpening11, &ho_RegionOpening11);
					SelectShape(ho_RegionOpening11, &ho_RegionOpening11, "width", "and", 150,
						99999);


					SelectShape(ho_RegionOpening11, &ho_RegionOpening12, "width", "and", 500,
						99999);
					DilationRectangle1(ho_RegionOpening12, &ho_RegionOpening12, 5, 15);
					SelectShape(ho_RegionOpening11, &(*ho_camregion), "width", "and", 100,
						500);

					Union2((*ho_camregion), ho_Rectangle_top, &(*ho_camregion));

					ClosingRectangle1((*ho_camregion), &(*ho_camregion), 1, 155);
					OpeningRectangle1((*ho_camregion), &(*ho_camregion), 1, 15);

					DilationRectangle1((*ho_camregion), &(*ho_camregion), 45, 15);
					Union2((*ho_camregion), ho_RegionOpening12, &(*ho_camregion));



				}
				if (0 != (int(hv_Number21 == 27)))
				{
					//裁剪

					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult3, 0.008,
						0);
					MedianImage(ho_ImageResult3, &ho_ImageMedian1, "circle", 6, "mirrored");
					Threshold(ho_ImageMedian1, &ho_Regions1, 6, 135);
					FillUp(ho_Regions1, &ho_RegionFillUp10);
					OpeningRectangle1(ho_RegionFillUp10, &ho_RegionOpening25, 25, 1);
					Connection(ho_RegionOpening25, &ho_ConnectedRegions);
					SelectShape(ho_ConnectedRegions, &ho_SelectedRegions16, "area", "and",
						105110, 265625);
					DilationRectangle1(ho_SelectedRegions16, &(*ho_camregion), 10, 10);

				}
				if (0 != (int(hv_Number21 == 29)))
				{
					//裁剪
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult3, 0.008,
						0);
					MedianImage(ho_ImageResult3, &ho_ImageMedian1, "circle", 6, "mirrored");
					Threshold(ho_ImageMedian1, &ho_Regions1, 0, 135);
					FillUp(ho_Regions1, &ho_RegionFillUp10);
					OpeningRectangle1(ho_RegionFillUp10, &ho_RegionOpening25, 25, 1);
					Connection(ho_RegionOpening25, &ho_ConnectedRegions22);
					SelectShape(ho_ConnectedRegions22, &ho_SelectedRegions16, "area", "and",
						105110, 165625);
					DilationRectangle1(ho_SelectedRegions16, &(*ho_camregion), 10, 30);
				}

			}
		}
		else if (0 != (int(hv_Substring == HTuple("1_1"))))
		{
			if (0 != (int(hv_Number21 == 27)))
			{
				GenRectangle1(&ho_Rectangle1, 0, 400, 400, 1720);

				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);
				BinaryThreshold(ho_ImageReduced4, &ho_Region, "max_separability", "light",
					&hv_UsedThreshold1);
				FillUp(ho_Region, &ho_Region);
				Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
				Difference(ho_Region, ho_Region20, &ho_Region);
				ClosingRectangle1(ho_Region, &ho_Region, 30, 150);
				FillUp(ho_Region, &ho_Region);
				Connection(ho_Region, &ho_Region);
				ShapeTrans(ho_Region, &ho_Region, "convex");
				Union1(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 50);
				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, (HTuple("width").Append("height")), "and",
					(HTuple(30).Append(300)), (HTuple(99999).Append(99999)));
				Union1(ho_Region, &ho_Region);
				ShapeTrans(ho_Region, &ho_Region, "rectangle1");
				MoveRegion(ho_Region, &ho_RegionMoved, 0, 100);
				Difference(ho_Region, ho_RegionMoved, &ho_Region);
				MoveRegion(ho_Region, &ho_Region, 0, 40);
				ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
				EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 10, 50);
				SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(80).TupleRad(),
					HTuple(100).TupleRad());
				UnionCollinearContoursXld(ho_Edge, &ho_Edge, 200, 1, 30, 0.1, "attr_keep");
				SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 200, 3000, -0.5, 0.5);
				SortContoursXld(ho_Edge, &ho_Edge, "character", "true", "column");
				SelectObj(ho_Edge, &ho_Edge_left, 1);
				GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);
				TupleAdd(hv_Col, -90, &hv_Sub);
				hv_left_xld = hv_Sub;
				TupleInverse(hv_left_xld, &hv_left_xld);
				TupleInverse(hv_Row, &hv_left_Row);
				TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
				TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
				GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
				GenRegionContourXld(ho_Contour, &ho_Region, "filled");
				ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");


			}
			else
			{
				GenRectangle1(&ho_Rectangle1, 0, 700, 2100, 1720);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);
				BinaryThreshold(ho_ImageReduced4, &ho_Region, "max_separability", "light",
					&hv_UsedThreshold1);
				FillUp(ho_Region, &ho_Region);
				Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
				Difference(ho_Region, ho_Region20, &ho_Region);
				ClosingRectangle1(ho_Region, &ho_Region, 30, 150);
				FillUp(ho_Region, &ho_Region);
				Connection(ho_Region, &ho_Region);
				ShapeTrans(ho_Region, &ho_Region, "convex");
				Union1(ho_Region, &ho_Region);
				ShapeTrans(ho_Region, &ho_Region, "convex");
				OpeningRectangle1(ho_Region, &ho_Region, 1, 1700);
				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, (HTuple("width").Append("height")), "and",
					(HTuple(30).Append(1600)), (HTuple(99999).Append(99999)));
				Union1(ho_Region, &ho_Region);
				ShapeTrans(ho_Region, &ho_Region, "rectangle1");

				ErosionRectangle1(ho_Region, &ho_Region, 95, 1);
				MoveRegion(ho_Region, &ho_RegionMoved, 0, 140);
				Difference(ho_Region, ho_RegionMoved, &ho_Region);

				GrayErosionRect(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);


				if (0 != (HTuple(HTuple(HTuple(HTuple(HTuple(HTuple(int(hv_Number21 == 3)).TupleOr(int(hv_Number21 == 4))).TupleOr(int(hv_Number21 == 5))).TupleOr(int(hv_Number21 == 12))).TupleOr(int(hv_Number21 == 16))).TupleOr(int(hv_Number21 == 18))).TupleOr(int(hv_Number21 == 25))))
				{

					if (0 != (int(hv_Number21 == 4)))
					{
						DilationRectangle1(ho_Region, &ho_Region, 55, 1);
					}

					DilationRectangle1(ho_Region, &ho_Region, 15, 1);
					ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
					GrayDilationRect(ho_ImageReduced4, &ho_ImageReduced4, 200, 10);
					GrayDilationShape(ho_ImageReduced4, &ho_ImageReduced4, 5, 5, "octagon");
					ScaleImageMax(ho_ImageReduced4, &ho_ImageReduced4);
					ErosionRectangle1(ho_Region, &ho_Region, 11, 1);
				}
				ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
				EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 7, 30);
				SelectContoursXld(ho_Edges, &ho_Edges, "maximum_extent", 200, 3000, -0.5,
					0.5);
				//select_obj (Edges, Edge, 1)
				//tuple_deg (1.57, angle)
				//get_contour_attrib_xld (Edge, 'edge_direction', Attrib)
				if (HDevWindowStack::IsOpen())
					DispObj(ho_Image, HDevWindowStack::GetActive());
				SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(60).TupleRad(),
					HTuple(130).TupleRad());
				SegmentContourAttribXld(ho_Edge, &ho_Edge, "response", "and", 20, 250);


				UnionCollinearContoursXld(ho_Edge, &ho_Edge, 400, 1, 50, 0.1, "attr_keep");
				SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 1400, 3000, -0.5,
					0.5);
				SortContoursXld(ho_Edge, &ho_Edge, "upper_left", "true", "column");
				SelectObj(ho_Edge, &ho_Edge_left, 1);

				GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);
				if (0 != (int((hv_Row.TupleLength()) != 0)))
				{
					TupleAdd(hv_Col, -90, &hv_Sub);
					hv_left_xld = hv_Sub;
					TupleInverse(hv_left_xld, &hv_left_xld);
					TupleInverse(hv_Row, &hv_left_Row);
					TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
					TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
					GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
					GenRegionContourXld(ho_Contour, &ho_Region, "filled");
					ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");
				}
				else
				{
					MoveRegion(ho_RegionMoved, &ho_RegionMoved, 0, -300);
					ReduceDomain(ho_Image, ho_RegionMoved, &ho_ImageReduced);
					EdgesSubPix(ho_ImageReduced, &ho_Edge, "canny", 3, 30, 50);
					SortContoursXld(ho_Edge, &ho_Edge, "character", "true", "column");
					SelectObj(ho_Edge, &ho_Edge_left, 1);
					GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);
					TupleAdd(hv_Col, 90, &hv_Sub);
					hv_left_xld = hv_Sub;
					TupleInverse(hv_left_xld, &hv_left_xld);
					TupleInverse(hv_Row, &hv_left_Row);
					TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
					TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
					GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
					GenRegionContourXld(ho_Contour, &ho_Region, "filled");
					ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");








				}
				//***************************************************************8

			}
		}
		else if (0 != (int(hv_Substring == HTuple("3_1"))))
		{
			if (0 != (int(hv_Number21 == 27)))
			{
				GenRectangle1(&ho_Rectangle1, 0, 500, 400, 1720);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);
				Threshold(ho_ImageReduced4, &ho_Region, 0, 30);
				//
				FillUp(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 300);
				Connection(ho_Region, &ho_Region);
				SortRegion(ho_Region, &ho_Region, "first_point", "true", "column");
				SelectObj(ho_Region, &ho_RegionEdge, 1);
				DilationRectangle1(ho_RegionEdge, &ho_Region, 170, 1);
				MoveRegion(ho_Region, &ho_RegionMove, 0, 10);
				Difference(ho_RegionMove, ho_RegionEdge, &ho_Region);

				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, "height", "and", 150, 99999);
				SortRegion(ho_Region, &ho_Region, "first_point", "flase", "column");
				SelectObj(ho_Region, &ho_Region, 1);
				ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");

			}
			else
			{
				GenRectangle1(&ho_Rectangle1, 0, 500, 2100, 1720);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);
				Threshold(ho_ImageReduced4, &ho_Region, 0, 30);
				//
				FillUp(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 500);
				Connection(ho_Region, &ho_Region);
				SortRegion(ho_Region, &ho_Region, "first_point", "true", "column");
				SelectObj(ho_Region, &ho_RegionEdge, 1);
				DilationRectangle1(ho_RegionEdge, &ho_Region, 200, 1);
				MoveRegion(ho_Region, &ho_RegionMove, 0, 10);
				Difference(ho_RegionMove, ho_RegionEdge, &ho_Region);

				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, "height", "and", 150, 99999);
				SortRegion(ho_Region, &ho_Region, "first_point", "flase", "column");
				SelectObj(ho_Region, &ho_Region, 1);
				ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");
				AreaCenter(ho_RegionUnion, &hv_Area, &hv_Row, &hv_Column);

				MoveRegion(ho_Region, &ho_Region, 0, 30);
				Intersection(ho_Region, ho_RegionUnion, &ho_RegionIntersection);
				if (0 != (HTuple(HTuple(HTuple(HTuple(HTuple(HTuple(int(hv_Number21 == 3)).TupleOr(int(hv_Number21 == 4))).TupleOr(int(hv_Number21 == 5))).TupleOr(int(hv_Number21 == 12))).TupleOr(int(hv_Number21 == 16))).TupleOr(int(hv_Number21 == 18))).TupleOr(int(hv_Number21 == 25))))
				{


					DilationRectangle1(ho_Region, &ho_Region, 15, 1);
					ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
					GrayDilationRect(ho_ImageReduced4, &ho_ImageReduced4, 400, 10);
					GrayClosingShape(ho_ImageReduced4, &ho_ImageReduced4, 9, 9, "octagon");
					ErosionRectangle1(ho_Region, &ho_Region, 7, 1);
				}
				MeanImage(ho_ImageReduced4, &ho_ImageReduced4, 3, 3);
				ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);

				EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 7, 30);
				SelectContoursXld(ho_Edges, &ho_Edges, "maximum_extent", 200, 3000, -0.5,
					0.5);
				//select_obj (Edges, ObjectSelected, 1)

				//get_contour_attrib_xld (ObjectSelected, 'response', Attrib)
				//get_contour_attrib_xld (ObjectSelected, 'edge_direction', Attrib)
				//tuple_deg (4.7, angle)

				SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "or", HTuple(60).TupleRad(),
					HTuple(150).TupleRad());
				SegmentContourAttribXld(ho_Edge, &ho_Edge, "response", "and", 15, 250);
				UnionCollinearContoursXld(ho_Edge, &ho_Edge, 300, 1, 30, HTuple(20).TupleRad(),
					"attr_keep");

				SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 500, 3000, -0.5, 0.5);


				SortContoursXld(ho_Edge, &ho_Edge, "upper_left", "true", "column");
				SelectObj(ho_Edge, &ho_Edge_left, 1);
				GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);
				if (0 != (int((hv_Row.TupleLength()) == 0)))
				{
					MoveRegion(ho_Region, &ho_RegionUnion, 1, 45);
					Difference(ho_Region, ho_RegionUnion, &ho_RegionUnion);
					OpeningCircle(ho_RegionUnion, &ho_RegionUnion, 3.5);
					ShapeTrans(ho_RegionUnion, &ho_RegionUnion, "rectangle1");
				}
				else
				{
					TupleAdd(hv_Col, -95, &hv_Sub);
					hv_left_xld = hv_Sub;
					TupleInverse(hv_left_xld, &hv_left_xld);
					TupleInverse(hv_Row, &hv_left_Row);
					TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
					TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
					GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
					GenRegionContourXld(ho_Contour, &ho_Region, "filled");
					ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");
				}

				//***************************************************************8

			}
		}
		else if (0 != (int(hv_Substring == HTuple("1_2"))))
		{
			if (0 != (int(hv_Number21 == 27)))
			{
				GenRectangle1(&ho_Rectangle1, 0, 500, 400, 1720);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);
				Threshold(ho_ImageReduced4, &ho_Region, 0, 220);
				Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
				Difference(ho_Region, ho_Region20, &ho_Region);
				FillUp(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 200);
				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, (HTuple("height").Append("width")), "and",
					(HTuple(200).Append(50)), (HTuple(99999).Append(9999)));
				Union1(ho_Region, &ho_Region);

				ShapeTrans(ho_Region, &ho_Region, "rectangle1");

				ErosionRectangle1(ho_Region, &ho_Region, 85, 1);
				MoveRegion(ho_Region, &ho_RegionMoved, 0, 120);
				Difference(ho_Region, ho_RegionMoved, &ho_Region);

				//gray_dilation_rect (ImageReduced4, ImageMax, Height, Width)
				//gray_opening_rect (ImageReduced4, ImageReduced4, 5, 5)
				GrayClosingShape(ho_ImageReduced4, &ho_ImageReduced4, 7, 7, "octagon");



				MeanImage(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);
				ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
				EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 10, 50);
				SegmentContoursXld(ho_Edges, &ho_Edges, "lines_circles", 7, 15, 10);
				SelectContoursXld(ho_Edges, &ho_Edges, "maximum_extent", 100, 3000, -0.5,
					0.5);

				SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(60).TupleRad(),
					HTuple(120).TupleRad());
				UnionCollinearContoursXld(ho_Edge, &ho_Edge, 40, 1, 10, 0.1, "attr_keep");
				SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 100, 3000, -0.5, 0.5);
				SortContoursXld(ho_Edge, &ho_Edge, "upper_left", "false", "column");
				SelectObj(ho_Edge, &ho_Edge_left, 1);
				GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);

				if (0 != (int(hv_Substring == HTuple("3_2"))))
				{
					TupleAdd(hv_Col, -85, &hv_Sub);
				}
				else
				{
					TupleAdd(hv_Col, -95, &hv_Sub);
				}
				hv_left_xld = hv_Sub;
				TupleInverse(hv_left_xld, &hv_left_xld);
				TupleInverse(hv_Row, &hv_left_Row);
				TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
				TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
				GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
				GenRegionContourXld(ho_Contour, &ho_Region, "filled");
				ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");

			}
			else
			{

				GenRectangle1(&ho_Rectangle1, 0, 500, 2100, 1820);

				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);

				Threshold(ho_ImageReduced4, &ho_Region, 0, 240);
				Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
				Difference(ho_Region, ho_Region20, &ho_Region);
				FillUp(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 1700);
				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, (HTuple("height").Append("width")), "and",
					(HTuple(1900).Append(50)), (HTuple(99999).Append(9999)));
				Union1(ho_Region, &ho_Region);

				ShapeTrans(ho_Region, &ho_Region, "rectangle1");

				ErosionRectangle1(ho_Region, &ho_RegionErosion, 255, 1);
				Difference(ho_Region, ho_RegionErosion, &ho_Region);
				Connection(ho_Region, &ho_Region);
				SelectObj(ho_Region, &ho_Region, 1);
				MoveRegion(ho_Region, &ho_Region, 1, 45);

				//gray_dilation_rect (ImageReduced4, ImageMax, Height, Width)
				GrayOpeningRect(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);

				if (0 != (HTuple(HTuple(HTuple(HTuple(HTuple(HTuple(int(hv_Number21 == 3)).TupleOr(int(hv_Number21 == 4))).TupleOr(int(hv_Number21 == 5))).TupleOr(int(hv_Number21 == 12))).TupleOr(int(hv_Number21 == 16))).TupleOr(int(hv_Number21 == 18))).TupleOr(int(hv_Number21 == 25))))
				{


					DilationRectangle1(ho_Region, &ho_Region, 15, 1);
					ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
					GrayDilationRect(ho_ImageReduced4, &ho_ImageReduced4, 400, 10);
					ScaleImageMax(ho_ImageReduced4, &ho_ImageReduced4);
					ErosionRectangle1(ho_Region, &ho_Region, 5, 1);
				}
				MeanImage(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);
				Intersection(ho_Region, ho_Rectangle1, &ho_Region);
				ErosionRectangle1(ho_Region, &ho_Region, 5, 1);
				ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);

				EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 7, 20);
				SelectContoursXld(ho_Edges, &ho_Edges, "maximum_extent", 100, 3000, -0.5,
					0.5);
				//select_obj (Edges, ObjectSelected, 2)
				//get_contour_attrib_xld (ObjectSelected, 'response', Attrib)
				SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(70).TupleRad(),
					HTuple(110).TupleRad());
				SegmentContourAttribXld(ho_Edge, &ho_Edge, "response", "and", 70, 250);

				UnionCollinearContoursXld(ho_Edge, &ho_Edge, 250, 1, 7, 0.1, "attr_keep");
				UnionAdjacentContoursXld(ho_Edge, &ho_Edge, 20, 1, "attr_keep");
				SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 1300, 4000, -0.5,
					0.5);

				//**为什么
				SortContoursXld(ho_Edge, &ho_Edge, "upper_left", "false", "column");
				SelectObj(ho_Edge, &ho_Edge_left, 1);
				GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);
				if (0 != (int((hv_Row.TupleLength()) != 0)))
				{
					if (0 != (int(hv_Substring == HTuple("3_2"))))
					{
						TupleAdd(hv_Col, -85, &hv_Sub);
					}
					else
					{
						TupleAdd(hv_Col, -95, &hv_Sub);
					}
					hv_left_xld = hv_Sub;
					TupleInverse(hv_left_xld, &hv_left_xld);
					TupleInverse(hv_Row, &hv_left_Row);
					TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
					TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
					GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
					GenRegionContourXld(ho_Contour, &ho_Region, "filled");
					ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");

					Intensity(ho_RegionUnion, ho_Image, &hv_Mean, &hv_Deviation);
				}
				else
				{

					GenRectangle1(&ho_Rectangle1, 0, 500, 2100, 1620);
					ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);

					Threshold(ho_ImageReduced4, &ho_Region, 0, 220);
					Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
					Difference(ho_Region, ho_Region20, &ho_Region);
					FillUp(ho_Region, &ho_Region);
					MoveRegion(ho_Region, &ho_RegionMoved, 1, 90);
					Difference(ho_Region, ho_RegionMoved, &ho_RegionDifference);
					ErosionRectangle1(ho_RegionDifference, &ho_RegionDifference, 7, 7);
					Connection(ho_RegionDifference, &ho_RegionDifference);
					SelectShapeStd(ho_RegionDifference, &ho_RegionDifference, "max_area", 70);
					ShapeTrans(ho_RegionDifference, &ho_RegionUnion, "rectangle1");
					Intensity(ho_RegionUnion, ho_Image, &hv_Mean, &hv_Deviation);

				}





				//***************************************************************8

			}
		}
		else if (0 != (int(hv_Substring == HTuple("3_2"))))
		{
			if (0 != (int(hv_Number21 == 27)))
			{
				GenRectangle1(&ho_Rectangle1, 0, 500, 400, 1720);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);
				Threshold(ho_ImageReduced4, &ho_Region, 0, 220);
				Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
				Difference(ho_Region, ho_Region20, &ho_Region);
				FillUp(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 200);
				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, (HTuple("height").Append("width")), "and",
					(HTuple(200).Append(50)), (HTuple(99999).Append(9999)));
				Union1(ho_Region, &ho_Region);

				ShapeTrans(ho_Region, &ho_Region, "rectangle1");

				ErosionRectangle1(ho_Region, &ho_Region, 85, 1);
				MoveRegion(ho_Region, &ho_RegionMoved, 0, 120);
				Difference(ho_Region, ho_RegionMoved, &ho_Region);

				//gray_dilation_rect (ImageReduced4, ImageMax, Height, Width)
				GrayOpeningRect(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);





				MeanImage(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);
				ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
				EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 10, 50);
				SegmentContoursXld(ho_Edges, &ho_Edges, "lines_circles", 5, 4, 2);
				SelectContoursXld(ho_Edges, &ho_Edges, "maximum_extent", 100, 3000, -0.5,
					0.5);

				SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(80).TupleRad(),
					HTuple(100).TupleRad());
				UnionCollinearContoursXld(ho_Edge, &ho_Edge, 40, 1, 10, 0.1, "attr_keep");
				SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 100, 3000, -0.5, 0.5);
				SortContoursXld(ho_Edge, &ho_Edge, "upper_left", "true", "column");
				SelectObj(ho_Edge, &ho_Edge_left, 1);
				GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);

				if (0 != (int(hv_Substring == HTuple("3_2"))))
				{
					TupleAdd(hv_Col, -85, &hv_Sub);
				}
				else
				{
					TupleAdd(hv_Col, -95, &hv_Sub);
				}
				hv_left_xld = hv_Sub;
				TupleInverse(hv_left_xld, &hv_left_xld);
				TupleInverse(hv_Row, &hv_left_Row);
				TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
				TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
				GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
				GenRegionContourXld(ho_Contour, &ho_Region, "filled");
				ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");

			}
			else
			{

				GenRectangle1(&ho_Rectangle1, 0, 500, 2100, 1820);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);

				Threshold(ho_ImageReduced4, &ho_Region, 0, 240);
				Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
				Difference(ho_Region, ho_Region20, &ho_Region);
				FillUp(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 1700);
				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, (HTuple("height").Append("width")), "and",
					(HTuple(1900).Append(50)), (HTuple(99999).Append(9999)));
				Union1(ho_Region, &ho_Region);

				ShapeTrans(ho_Region, &ho_Region, "rectangle1");

				ErosionRectangle1(ho_Region, &ho_RegionErosion, 255, 1);
				Difference(ho_Region, ho_RegionErosion, &ho_Region);
				Connection(ho_Region, &ho_Region);
				SelectObj(ho_Region, &ho_Region, 1);
				MoveRegion(ho_Region, &ho_Region, 1, 45);

				//gray_dilation_rect (ImageReduced4, ImageMax, Height, Width)
				GrayOpeningRect(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);

				if (0 != (HTuple(HTuple(HTuple(HTuple(HTuple(HTuple(int(hv_Number21 == 3)).TupleOr(int(hv_Number21 == 4))).TupleOr(int(hv_Number21 == 5))).TupleOr(int(hv_Number21 == 12))).TupleOr(int(hv_Number21 == 16))).TupleOr(int(hv_Number21 == 18))).TupleOr(int(hv_Number21 == 25))))
				{


					DilationRectangle1(ho_Region, &ho_Region, 15, 1);
					ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
					GrayDilationRect(ho_ImageReduced4, &ho_ImageReduced4, 400, 10);
					ScaleImageMax(ho_ImageReduced4, &ho_ImageReduced4);
					ErosionRectangle1(ho_Region, &ho_Region, 5, 1);
				}
				MeanImage(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);
				Intersection(ho_Region, ho_Rectangle1, &ho_Region);
				ErosionRectangle1(ho_Region, &ho_Region, 5, 1);
				ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);

				EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 7, 20);
				SelectContoursXld(ho_Edges, &ho_Edges, "maximum_extent", 100, 3000, -0.5,
					0.5);
				//select_obj (Edges, ObjectSelected, 3)
				//get_contour_attrib_xld (ObjectSelected, 'response', Attrib)
				SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(70).TupleRad(),
					HTuple(110).TupleRad());
				SegmentContourAttribXld(ho_Edge, &ho_Edge, "response", "and", 80, 250);

				UnionCollinearContoursXld(ho_Edge, &ho_Edge, 250, 1, 7, 0.1, "attr_keep");

				UnionAdjacentContoursXld(ho_Edge, &ho_Edge, 20, 1, "attr_keep");
				SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 1300, 4000, -0.5,
					0.5);


				SortContoursXld(ho_Edge, &ho_Edge, "upper_left", "true", "column");
				SelectObj(ho_Edge, &ho_Edge_left, 1);
				GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);
				if (0 != (int((hv_Row.TupleLength()) != 0)))
				{
					if (0 != (int(hv_Substring == HTuple("3_2"))))
					{
						TupleAdd(hv_Col, -85, &hv_Sub);
					}
					else
					{
						TupleAdd(hv_Col, -95, &hv_Sub);
					}
					hv_left_xld = hv_Sub;
					TupleInverse(hv_left_xld, &hv_left_xld);
					TupleInverse(hv_Row, &hv_left_Row);
					TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
					TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
					GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
					GenRegionContourXld(ho_Contour, &ho_Region, "filled");
					ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");

					Intensity(ho_RegionUnion, ho_Image, &hv_Mean, &hv_Deviation);
				}
				else
				{

					GenRectangle1(&ho_Rectangle1, 0, 500, 2100, 1620);
					ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);

					Threshold(ho_ImageReduced4, &ho_Region, 0, 220);
					Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
					Difference(ho_Region, ho_Region20, &ho_Region);
					FillUp(ho_Region, &ho_Region);
					MoveRegion(ho_Region, &ho_RegionMoved, 1, 90);
					Difference(ho_Region, ho_RegionMoved, &ho_RegionDifference);
					ErosionRectangle1(ho_RegionDifference, &ho_RegionDifference, 7, 7);
					Connection(ho_RegionDifference, &ho_RegionDifference);
					SelectShapeStd(ho_RegionDifference, &ho_RegionDifference, "max_area", 70);
					ShapeTrans(ho_RegionDifference, &ho_RegionUnion, "rectangle1");
					Intensity(ho_RegionUnion, ho_Image, &hv_Mean, &hv_Deviation);

				}





				//***************************************************************8

			}

		}
		RegionFeatures((*ho_camregion), "width", &hv_Value);
		if (0 != (int(hv_Value < 700)))
		{
			ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 225, 1);
			Intersection(ho_RegionErosion, (*ho_camregion), &(*ho_camregion));
		}

		DilationRectangle1((*ho_JTReg), &(*ho_JTReg), 215, 5);
		Union2((*ho_camregion), (*ho_JTReg), &(*ho_camregion));
		GenRectangle1(&ho_RectangleImage, 0, 0, 2047, 2047);
		Intersection(ho_RectangleImage, (*ho_camregion), &(*ho_camregion));




		CountObj(ho_RegionUnion, &hv_Number1);
		if (0 != (int(hv_Number1 > 0)))
		{
			//通过外轮廓提取拼接处区域
			MoveRegion(ho_RegionUnion, &ho_RegionUnion, 1, 0);
			SmallestRectangle2(ho_RegionUnion, &hv_Row16, &hv_Column16, &hv_Phi3, &hv_Length1,
				&hv_Length2);

			if (true)
			{
				//提取仿射最小外接矩形的四个顶点坐标
				GenRectangle2ContourXld(&(*ho_DetectRegion), hv_Row16, hv_Column16, hv_Phi3,
					hv_Length1, hv_Length2);
				//union1 (Region, DetectRegion)
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
					GenCrossContourXld(&ho_Cross1, 3, hv_Column16 + hv_a, 26, hv_Phi3);
					hv_c = (hv_Length1 * hv_Cos) - (hv_Length2 * hv_Sin);
					hv_d = (hv_Length1 * hv_Sin) + (hv_Length2 * hv_Cos);
					GenCrossContourXld(&ho_Cross2, 3, hv_Column16 + hv_c, 26, hv_Phi3);
					hv_e = (hv_Length1 * hv_Cos) + (hv_Length2 * hv_Sin);
					hv_f = (hv_Length1 * hv_Sin) - (hv_Length2 * hv_Cos);
					GenCrossContourXld(&ho_Cross3, 3, hv_Column16 + hv_e, 26, hv_Phi3);
					hv_g = ((-hv_Length1) * hv_Cos) + (hv_Length2 * hv_Sin);
					hv_h = ((-hv_Length1) * hv_Sin) - (hv_Length2 * hv_Cos);
					GenCrossContourXld(&ho_Cross4, 3, hv_Column16 + hv_g, 26, hv_Phi3);
					//gen_cross_contour_xld (Cross4, Row16-h, Column16+g, 26, Phi3)
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

					SelectObj(ho_SortedRegions, &(*ho_PointRegion), 2);


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
		string strerr = std::to_string(hv_ProNum.I()) + "-" + std::to_string(hv_StaNum.I()) + "_" + std::to_string(hv_CamNum.I()) + "_" + std::to_string(hv_ImageNum.I()) + "ImageShieldProcessAMiddleSelfTest4_84_11 error:" + strErr;
		VeErrMessage.push_back(QString::fromStdString(strerr));
	}
	reg = -1;
	return -1;
}

int JSZCAlgorithmsDLLPVD::ImageShieldProcessAMiddleSelfTest4_84_12(HObject ho_Image, HObject* ho_DetectRegion, HObject* ho_PointRegion, HObject* ho_camregion, HObject* ho_JTReg, HTuple hv_ImName)
{
	// Local iconic variables
	HObject  ho_Rectangle_bottom, ho_Rectangle_top;
	HObject  ho_RegionUnion, ho_Rectangle, ho_ImageResult15;
	HObject  ho_Region20, ho_RegionOpening34, ho_ConnectedRegions37;
	HObject  ho_SelectedRegions19, ho_RegionMoved, ho_ImageReduced9;
	HObject  ho_RegionErosion2, ho_ImageMedian9, ho_ImageTexture4;
	HObject  ho_Region5, ho_RegionDilation1, ho_RegionErosion;
	HObject  ho_ImageMedian5, ho_ImageTexture5, ho_ImageTexture8;
	HObject  ho_ImageResult19, ho_Region14, ho_Region27, ho_ConnectedRegions14;
	HObject  ho_ImageTexture, ho_ImageTexture3, ho_ImageResult1;
	HObject  ho_Region29, ho_ConnectedRegions31, ho_SelectedRegions12;
	HObject  ho_RegionClosing8, ho_RegionUnion33, ho_RegionClosing7;
	HObject  ho_RegionOpening29, ho_RegionFillUp14, ho_ConnectedRegions38;
	HObject  ho_SelectedRegions32, ho_SelectedRegions52, ho_RegionTrans30;
	HObject  ho_RegionUnion18, ho_ImageMedian24, ho_ImageTexture1;
	HObject  ho_ImageTexture2, ho_ImageSub, ho_SelectedRegions9;
	HObject  ho_SelectedRegions_big, ho_RegionOpening19, ho_ConnectedRegions39;
	HObject  ho_RegionTrans8, ho_RegionErosion_, ho_ConnectedRegions7;
	HObject  ho_ImageReduced, ho_RegionK, ho_bottom_Reg, ho_Region_big;
	HObject  ho_ConnectedRegions40, ho_SelectedRegions48, ho_SelectedRegions49;
	HObject  ho_RegionUnion7, ho_RegionClosing4, ho_RegionFillUp20;
	HObject  ho_ConnectedRegions41, ho_RegionTrans11, ho_SelectedRegions;
	HObject  ho_JTReg_, ho_ObjectSelected, ho_RegionOpening1;
	HObject  ho_RegionOpening2, ho_SelectedRegions4, ho_Rectangle11;
	HObject  ho_ImageReduced12, ho_ImageMedian11, ho_ImageReduced10;
	HObject  ho_ImageTexture6, ho_ImageTexture7, ho_ImageResult3;
	HObject  ho_ImageMedian10, ho_Region6, ho_ConnectedRegions5;
	HObject  ho_RegionCount, ho_RegionOpening23, ho_RegionUnion23;
	HObject  ho_RegionTrans12, ho_RegionDilation4, ho_RegionDilation8;
	HObject  ho_RegionUnion14, ho_Rectangle5, ho_ImageReduced1;
	HObject  ho_Rectangle3, ho_ImageReduced7, ho_ImageResult4;
	HObject  ho_Region, ho_RegionFillUp3, ho_ConnectedRegions20;
	HObject  ho_SelectedRegions43, ho_SelectedRegions44, ho_RegionUnion15;
	HObject  ho_RegionFillUp1, ho_RegionUnion2, ho_RegionClosing5;
	HObject  ho_ConnectedRegions1, ho_RegionUnion10, ho_ConnectedRegions21;
	HObject  ho_RegionOpening20, ho_RegionTrans6, ho_RegionFillUp3_;
	HObject  ho_Rectangle9, ho_ImageReduced6, ho_Region13, ho_SelectedRegions3;
	HObject  ho_RegionDilation, ho_ImageMedian, ho_ImageResult11;
	HObject  ho_Regions2, ho_RegionFillUp11, ho_RegionOpening15;
	HObject  ho_ImageMedian7, ho_ImageResult12, ho_Regions3;
	HObject  ho_RegionFillUp21, ho_RegionDilation24, ho_RegionFillUp25;
	HObject  ho_RegionOpening8, ho_ConnectedRegions17, ho_SelectedRegions20;
	HObject  ho_ObjectSelected1, ho_ObjectSelected2, ho_Region16;
	HObject  ho_ConnectedRegions35, ho_RegionOpening12, ho_SelectedRegions34;
	HObject  ho_ImageMedian3, ho_ImageResult5, ho_RegionFillUp28;
	HObject  ho_ConnectedRegions8, ho_SelectedRegions8, ho_RegionOpening;
	HObject  ho_RegionTrans, ho_ImageResult10, ho_Region19, ho_RegionFillUp29;
	HObject  ho_ImageResult13, ho_Region11, ho_ConnectedRegions24;
	HObject  ho_SelectedRegions107, ho_SelectedRegions22, ho_RegionUnion49;
	HObject  ho_RegionMoved2, ho_ImageResult47, ho_ImageMedian31;
	HObject  ho_Region44, ho_RegionOpening78, ho_ConnectedRegions78;
	HObject  ho_ImageMedian4, ho_ImageResult6, ho_Region8, ho_RegionFillUp2;
	HObject  ho_ConnectedRegions6, ho_SelectedRegions6, ho_SelectedRegions1;
	HObject  ho_RegionTrans35, ho_RegionUnion24, ho_ImageResult18;
	HObject  ho_Region12, ho_ConnectedRegions27, ho_SelectedRegions2;
	HObject  ho_RegionTrans7, ho_Region24, ho_RegionClosing1;
	HObject  ho_RegionFillUp18, ho_ConnectedRegions32, ho_ConnectedRegions33;
	HObject  ho_SelectedRegions27, ho_RegionTrans25, ho_RegionDilation2;
	HObject  ho_ImageResult9, ho_Region9, ho_RegionFillUp9, ho_RegionOpening22;
	HObject  ho_RegionOpening32, ho_ConnectedRegions25, ho_RegionFillUp4;
	HObject  ho_RegionOpening13, ho_ImageResult32, ho_Region1;
	HObject  ho_RegionOpening6, ho_RegionTrans1, ho_ImageResult7;
	HObject  ho_Region4, ho_RegionFillUp6, ho_RegionDilation6;
	HObject  ho_RegionOpening14, ho_ConnectedRegions23, ho_SelectedRegions21;
	HObject  ho_ImageMedian1, ho_Regions1, ho_RegionFillUp10;
	HObject  ho_RegionOpening25, ho_ConnectedRegions, ho_ImageResult23;
	HObject  ho_ConnectedRegions3, ho_SelectedRegions28, ho_RegionOpening9;
	HObject  ho_RegionTrans2, ho_ImageMean6, ho_ImageEmphasize1;
	HObject  ho_RegionOpening10, ho_RegionUnion12, ho_RegionDilation5;
	HObject  ho_RegionUnion16, ho_ConnectedRegions42, ho_RegionTrans15;
	HObject  ho_ImageResult, ho_Region15, ho_RegionFillUp27;
	HObject  ho_RegionOpening11, ho_SelectedRegions16, ho_ConnectedRegions22;
	HObject  ho_Rectangle1, ho_ImageReduced4, ho_Edges, ho_Edge;
	HObject  ho_Edge_left, ho_Contour, ho_RegionEdge, ho_RegionMove;
	HObject  ho_RegionIntersection, ho_RegionDifference, ho_RectangleImage;
	HObject  ho_Cross1, ho_Cross2, ho_Cross3, ho_Cross4, ho_Cross1re;
	HObject  ho_Cross2re, ho_Cross3re, ho_Cross4re, ho_RegionUnion3;
	HObject  ho_RegionUnion4, ho_ConnectedRegions4, ho_SortedRegions;

	// Local control variables
	HTuple  hv_Substring, hv_Substrings, hv_StaNum;
	HTuple  hv_CamNum, hv_ImageNum, hv_Length5, hv_Selected1;
	HTuple  hv_Number21, hv_Width, hv_Height, hv_Row112, hv_Column112;
	HTuple  hv_Row212, hv_Column212, hv_Area6, hv_Row3, hv_Column3;
	HTuple  hv_Value, hv_Number, hv_Value4, hv_UsedThreshold;
	HTuple  hv_UsedThreshold1, hv_Row, hv_Col, hv_Sub, hv_left_xld;
	HTuple  hv_left_Row, hv_Contour_col, hv_Contour_row, hv_Area;
	HTuple  hv_Column, hv_Mean, hv_Deviation, hv_Number1, hv_Row16;
	HTuple  hv_Column16, hv_Phi3, hv_Length1, hv_Length2, hv_Cos;
	HTuple  hv_Sin, hv_a, hv_b, hv_c, hv_d, hv_e, hv_f, hv_g;
	HTuple  hv_h;



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
		GenRectangle1(&ho_Rectangle_bottom, 2045, 0, 2047, 1800);
		GenRectangle1(&ho_Rectangle_top, 0, 0, 5, 1800);
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

		if (0 != (int(hv_Substring == HTuple("2_1"))))
		{


			MultImage(ho_Image, ho_Image, &ho_ImageResult15, 0.1, 0);
			GrayDilationRect(ho_ImageResult15, &ho_ImageResult15, 200, 1);
			Threshold(ho_ImageResult15, &ho_Region20, 180, 255);
			FillUp(ho_Region20, &ho_Region20);
			//13边
			if (0 != (HTuple(HTuple(int(hv_Number21 != 14)).TupleAnd(int(hv_Number21 != 16))).TupleAnd(int(hv_Number21 != 2))))
			{
				ClosingRectangle1(ho_Region20, &ho_Region20, 400, 1);
			}
			Connection(ho_Region20, &ho_Region20);
			SelectShapeStd(ho_Region20, &ho_Region20, "max_area", 70);
			Union1(ho_Region20, &ho_Region20);


			OpeningRectangle1(ho_Region20, &ho_RegionOpening34, 1, 1900);

			Connection(ho_RegionOpening34, &ho_ConnectedRegions37);
			OpeningRectangle1(ho_ConnectedRegions37, &ho_ConnectedRegions37, 3, 500);
			SelectShapeStd(ho_ConnectedRegions37, &ho_SelectedRegions19, "max_area", 70);

			ShapeTrans(ho_SelectedRegions19, &ho_RegionUnion, "rectangle1");
			//difference (RegionTrans31, RegionMoved12, RegionUnion)
			//提取区域
			MoveRegion(ho_RegionUnion, &ho_RegionMoved, 0, -850);
			Difference(ho_RegionUnion, ho_RegionMoved, &ho_RegionUnion);

			SmallestRectangle1(ho_RegionUnion, &hv_Row112, &hv_Column112, &hv_Row212, &hv_Column212);
			ReduceDomain(ho_Image, ho_RegionUnion, &ho_ImageReduced9);
			ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion2, 50, 1);
			AreaCenter(ho_RegionUnion, &hv_Area6, &hv_Row3, &hv_Column3);





			if (0 != (int(hv_Number21 == 27)))
			{
				MultImage(ho_Image, ho_Image, &ho_ImageResult15, 0.06, 0);
				GrayDilationRect(ho_ImageResult15, &ho_ImageResult15, 200, 1);
				Threshold(ho_ImageResult15, &ho_Region20, 180, 255);
				FillUp(ho_Region20, &ho_Region20);
				ClosingRectangle1(ho_Region20, &ho_Region20, 300, 10);
				OpeningRectangle1(ho_Region20, &ho_Region20, 1, 300);
				Connection(ho_Region20, &ho_Region20);
				SelectShapeStd(ho_Region20, &ho_Region20, "max_area", 70);
				Union1(ho_Region20, &ho_Region20);
				ClosingCircle(ho_Region20, &ho_Region20, 17);

				OpeningRectangle1(ho_Region20, &ho_RegionOpening34, 5, 500);
				Connection(ho_RegionOpening34, &ho_ConnectedRegions37);
				OpeningRectangle1(ho_ConnectedRegions37, &ho_ConnectedRegions37, 3, 500);
				SelectShapeStd(ho_ConnectedRegions37, &ho_SelectedRegions19, "max_area",
					70);
				ShapeTrans(ho_SelectedRegions19, &ho_RegionUnion, "rectangle1");
				MoveRegion(ho_RegionUnion, &ho_RegionMoved, 0, -850);
				Difference(ho_RegionUnion, ho_RegionMoved, &ho_RegionUnion);



				//提取区域
				SmallestRectangle1(ho_RegionUnion, &hv_Row112, &hv_Column112, &hv_Row212,
					&hv_Column212);
				ReduceDomain(ho_Image, ho_RegionUnion, &ho_ImageReduced9);
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion2, 50, 1);
				AreaCenter(ho_RegionUnion, &hv_Area6, &hv_Row3, &hv_Column3);
			}

			if (0 != (int(hv_Number21 == 2)))
			{
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				ClosingCircle(ho_Region5, &ho_Region5, 15);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 50);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));
			}
			if (0 != (int(hv_Number21 == 3)))
			{
				//裁剪
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				ClosingCircle(ho_Region5, &ho_Region5, 15);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 50);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));
				//*********************************************************************************

				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian5, 21, 21);

				TextureLaws(ho_ImageMedian5, &ho_ImageTexture5, "el", 5, 7);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture8, "le", 5, 7);


				AddImage(ho_ImageTexture5, ho_ImageTexture8, &ho_ImageResult19, 2, -100);
				Threshold(ho_ImageResult19, &ho_Region14, 180, 255);
				Intersection(ho_Region14, ho_RegionErosion, &ho_Region14);
				Connection(ho_Region14, &ho_Region14);
				SelectShape(ho_Region14, &ho_Region14, (HTuple("area").Append("width")),
					"or", (HTuple(700).Append(100)), (HTuple(999999).Append(99999)));
				Union1(ho_Region14, &ho_Region14);

				Connection(ho_Region14, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"and", (HTuple(500).Append(80)), (HTuple(99999).Append(99999)));
				//union2 (Region27, Rectangle_top, Region27)
				//union2 (Region27, Rectangle_bottom, Region27)
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 135);
				ClosingRectangle1(ho_Region27, &ho_Region27, 175, 1);
				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);

				Connection(ho_Region27, &ho_ConnectedRegions14);
				ShapeTrans(ho_ConnectedRegions14, &ho_ConnectedRegions14, "convex");
				DilationCircle(ho_ConnectedRegions14, &(*ho_camregion), 10.5);







			}
			if (0 != (int(hv_Number21 == 4)))
			{
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 70);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));

				//*************************************************************
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian5, 21, 21);

				TextureLaws(ho_ImageMedian5, &ho_ImageTexture5, "el", 5, 7);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture8, "le", 5, 7);


				AddImage(ho_ImageTexture5, ho_ImageTexture8, &ho_ImageResult19, 2, -100);
				Threshold(ho_ImageResult19, &ho_Region14, 180, 255);
				Intersection(ho_Region14, ho_RegionErosion, &ho_Region14);
				Connection(ho_Region14, &ho_Region14);
				SelectShape(ho_Region14, &ho_Region14, (HTuple("area").Append("width")),
					"or", (HTuple(700).Append(100)), (HTuple(999999).Append(99999)));
				Union1(ho_Region14, &ho_Region14);

				Connection(ho_Region14, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"and", (HTuple(500).Append(80)), (HTuple(99999).Append(99999)));
				//union2 (Region27, Rectangle_top, Region27)
				//union2 (Region27, Rectangle_bottom, Region27)
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 135);
				ClosingRectangle1(ho_Region27, &ho_Region27, 175, 1);
				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);

				Connection(ho_Region27, &ho_ConnectedRegions14);
				ShapeTrans(ho_ConnectedRegions14, &ho_ConnectedRegions14, "convex");
				DilationCircle(ho_ConnectedRegions14, &(*ho_camregion), 10.5);






			}
			if (0 != (int(hv_Number21 == 5)))
			{
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				ClosingRectangle1(ho_Region5, &ho_Region5, 115, 1);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				SelectShape(ho_Region5, &ho_Region5, "height", "and", 25, 200);
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 70);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));
				//*************************************************
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian5, 21, 21);

				TextureLaws(ho_ImageMedian5, &ho_ImageTexture5, "el", 5, 7);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture8, "le", 5, 7);


				AddImage(ho_ImageTexture5, ho_ImageTexture8, &ho_ImageResult19, 2, -100);
				Threshold(ho_ImageResult19, &ho_Region14, 180, 255);
				Intersection(ho_Region14, ho_RegionErosion, &ho_Region14);
				Connection(ho_Region14, &ho_Region14);
				SelectShape(ho_Region14, &ho_Region14, (HTuple("area").Append("width")),
					"or", (HTuple(700).Append(100)), (HTuple(999999).Append(99999)));
				Union1(ho_Region14, &ho_Region14);

				Connection(ho_Region14, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"and", (HTuple(500).Append(80)), (HTuple(99999).Append(99999)));
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				//union2 (Region27, Rectangle_bottom, Region27)
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 135);
				ClosingRectangle1(ho_Region27, &ho_Region27, 175, 1);
				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);

				Connection(ho_Region27, &ho_ConnectedRegions14);
				ShapeTrans(ho_ConnectedRegions14, &ho_ConnectedRegions14, "convex");
				DilationCircle(ho_ConnectedRegions14, &(*ho_camregion), 10.5);


			}
			if (0 != (int(hv_Number21 == 6)))
			{

				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian5, 21, 21);

				TextureLaws(ho_ImageMedian5, &ho_ImageTexture5, "el", 5, 7);
				TextureLaws(ho_ImageMedian5, &ho_ImageTexture8, "le", 5, 7);


				AddImage(ho_ImageTexture5, ho_ImageTexture8, &ho_ImageResult19, 2, -100);
				Threshold(ho_ImageResult19, &ho_Region14, 180, 255);
				Intersection(ho_Region14, ho_RegionErosion, &ho_Region14);
				Connection(ho_Region14, &ho_Region14);
				SelectShape(ho_Region14, &ho_Region14, (HTuple("area").Append("width")),
					"or", (HTuple(700).Append(100)), (HTuple(999999).Append(99999)));
				Union1(ho_Region14, &ho_Region14);

				Connection(ho_Region14, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"and", (HTuple(500).Append(80)), (HTuple(99999).Append(99999)));
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 135);
				ClosingRectangle1(ho_Region27, &ho_Region27, 175, 1);
				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);

				Connection(ho_Region27, &ho_ConnectedRegions14);
				ShapeTrans(ho_ConnectedRegions14, &ho_ConnectedRegions14, "convex");
				DilationCircle(ho_ConnectedRegions14, &(*ho_camregion), 10.5);


			}
			if (0 != (int(hv_Number21 == 7)))
			{

				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 425, 1);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 21, 21);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture, "el", 5, 7);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture3, "le", 5, 7);
				AddImage(ho_ImageTexture, ho_ImageTexture3, &ho_ImageResult1, 3, -300);
				Threshold(ho_ImageResult1, &ho_Region29, 150, 255);
				Intersection(ho_Region29, ho_RegionErosion, &ho_Region29);
				Connection(ho_Region29, &ho_ConnectedRegions31);
				SelectShape(ho_ConnectedRegions31, &ho_SelectedRegions12, (HTuple("area").Append("height")),
					"and", (HTuple(700).Append(50)), (HTuple(999999).Append(99999)));
				Union1(ho_SelectedRegions12, &ho_Region29);

				ClosingRectangle1(ho_Region29, &ho_RegionClosing8, 2, 245);
				//union2 (RegionClosing8, Rectangle_top, RegionClosing8)
				Union2(ho_RegionClosing8, ho_Rectangle_bottom, &ho_RegionClosing8);
				Connection(ho_RegionClosing8, &ho_ConnectedRegions31);
				SelectShape(ho_ConnectedRegions31, &ho_SelectedRegions12, "area", "and",
					200, 999999);
				Union1(ho_SelectedRegions12, &ho_RegionUnion33);
				ClosingRectangle1(ho_RegionUnion33, &ho_RegionClosing7, 15, 1145);
				OpeningRectangle1(ho_RegionClosing7, &ho_RegionOpening29, 5, 3);
				FillUp(ho_RegionOpening29, &ho_RegionFillUp14);
				OpeningRectangle1(ho_RegionFillUp14, &ho_RegionFillUp14, 25, 25);
				Connection(ho_RegionFillUp14, &ho_ConnectedRegions38);
				SelectShape(ho_ConnectedRegions38, &ho_SelectedRegions32, (HTuple("column").Append("width")),
					"and", (HTuple(750).Append(80)), (HTuple(1300).Append(9999)));
				SelectShape(ho_SelectedRegions32, &ho_SelectedRegions52, "area", "and", 400,
					9999999);
				ShapeTrans(ho_SelectedRegions52, &ho_RegionTrans30, "convex");
				DilationCircle(ho_RegionTrans30, &(*ho_camregion), 10.5);
			}
			if (0 != (int(hv_Number21 == 8)))
			{
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 225, 1);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 15, 15);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture, "el", 5, 7);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture3, "le", 5, 7);
				AddImage(ho_ImageTexture, ho_ImageTexture3, &ho_ImageResult1, 2, -100);
				Threshold(ho_ImageResult1, &ho_Region29, 180, 255);
				Intersection(ho_Region29, ho_RegionErosion, &ho_Region29);
				Connection(ho_Region29, &ho_Region29);
				SelectShape(ho_Region29, &ho_Region29, ((HTuple("area").Append("width")).Append("height")),
					"and", ((HTuple(400).Append(80)).Append(80)), ((HTuple(999999).Append(999999)).Append(99999)));
				Union1(ho_Region29, &ho_Region29);
				ClosingRectangle1(ho_Region29, &ho_Region29, 19, 200);
				ClosingRectangle1(ho_Region29, &ho_Region29, 100, 1);


				Connection(ho_Region29, &ho_ConnectedRegions31);
				SelectShape(ho_ConnectedRegions31, &ho_SelectedRegions12, "area", "and",
					200, 999999);
				Union1(ho_SelectedRegions12, &ho_RegionUnion33);

				Union2(ho_RegionUnion33, ho_Rectangle_bottom, &ho_RegionUnion33);
				Union2(ho_RegionUnion33, ho_Rectangle_top, &ho_RegionUnion33);
				ClosingRectangle1(ho_RegionUnion33, &ho_RegionUnion33, 25, 200);
				FillUp(ho_RegionUnion33, &ho_RegionUnion33);
				OpeningRectangle1(ho_RegionUnion33, &ho_RegionClosing7, 25, 25);
				FillUp(ho_RegionClosing7, &ho_RegionFillUp14);
				Connection(ho_RegionFillUp14, &ho_ConnectedRegions38);
				SelectShape(ho_ConnectedRegions38, &ho_SelectedRegions32, "column", "and",
					750, 1300);
				Union1(ho_SelectedRegions32, &ho_RegionUnion18);
				ShapeTrans(ho_RegionUnion18, &ho_RegionTrans30, "convex");
				DilationCircle(ho_RegionTrans30, &(*ho_camregion), 10.5);
			}
			if (0 != (int(hv_Number21 == 9)))
			{
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				GenRectangle1(&ho_Rectangle_top, 0, 0, 5, 1800);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 15, 15);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture, "el", 5, 7);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture3, "le", 5, 7);
				AddImage(ho_ImageTexture, ho_ImageTexture3, &ho_ImageResult1, 3, -300);
				Threshold(ho_ImageResult1, &ho_Region29, 128, 255);
				Intersection(ho_Region29, ho_RegionErosion, &ho_Region29);

				Connection(ho_Region29, &ho_Region29);
				SelectShape(ho_Region29, &ho_Region29, (HTuple("area").Append("width")),
					"and", (HTuple(400).Append(150)), (HTuple(999999).Append(99999)));

				ShapeTrans(ho_Region29, &ho_Region27, "convex");
				Union1(ho_Region27, &ho_Region27);
				ShapeTrans(ho_Region27, &ho_Region27, "rectangle1");
				OpeningCircle(ho_Region27, &ho_Region27, 175);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 185);
				ClosingRectangle1(ho_Region27, &ho_Region27, 175, 1);
				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);

				Connection(ho_Region27, &ho_ConnectedRegions14);
				ShapeTrans(ho_ConnectedRegions14, &ho_ConnectedRegions14, "convex");
				DilationCircle(ho_ConnectedRegions14, &(*ho_camregion), 10.5);
			}
			if (0 != (int(hv_Number21 == 10)))
			{

				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				ClosingRectangle1(ho_Region5, &ho_Region5, 115, 1);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				SelectShape(ho_Region5, &ho_Region5, "height", "and", 25, 200);
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 70);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));


				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("height")),
					"and", (HTuple(100).Append(100)), (HTuple(9999999).Append(999999)));
				ShapeTrans(ho_Region27, &ho_Region27, "convex");

				Union1(ho_Region27, &ho_Region27);

				ClosingCircle(ho_Region27, &ho_Region27, 25);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 50);
				Connection(ho_Region27, &ho_Region27);
				ShapeTrans(ho_Region27, &ho_Region27, "convex");





				Union1(ho_Region27, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 410);

				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);
				Connection(ho_Region27, &ho_ConnectedRegions14);

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions9, (HTuple("width").Append("area")),
					"and", (HTuple(100).Append(500)), (HTuple(280).Append(999999)));

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions_big, (HTuple("width").Append("area")),
					"and", (HTuple(300).Append(200)), (HTuple(680).Append(999999)));
				DilationCircle(ho_SelectedRegions_big, &ho_SelectedRegions_big, 5);
				Union2(ho_SelectedRegions9, ho_SelectedRegions_big, &ho_RegionOpening19);

				Connection(ho_RegionOpening19, &ho_ConnectedRegions39);
				ShapeTrans(ho_ConnectedRegions39, &ho_RegionTrans8, "convex");
				DilationCircle(ho_RegionTrans8, &(*ho_camregion), 15.5);
			}
			if (0 != (int(hv_Number21 == 11)))
			{

				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 70);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));
			}
			if (0 != (int(hv_Number21 == 12)))
			{
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);

				FillUp(ho_Region5, &ho_Region5);
				ClosingRectangle1(ho_Region5, &ho_Region5, 115, 1);
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 70);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));
				//裁剪
				//*****************************************************************
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(700).Append(100)), (HTuple(99999).Append(99999)));
				ShapeTrans(ho_Region27, &ho_Region27, "convex");

				Union1(ho_Region27, &ho_Region27);

				ClosingCircle(ho_Region27, &ho_Region27, 25);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 50);
				Connection(ho_Region27, &ho_Region27);
				ShapeTrans(ho_Region27, &ho_Region27, "convex");

				Union1(ho_Region27, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);

				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);
				Connection(ho_Region27, &ho_ConnectedRegions14);

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions9, (HTuple("width").Append("area")),
					"and", (HTuple(150).Append(500)), (HTuple(280).Append(999999)));

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions_big, (HTuple("width").Append("area")),
					"and", (HTuple(300).Append(200)), (HTuple(680).Append(999999)));
				DilationCircle(ho_SelectedRegions_big, &ho_SelectedRegions_big, 21);
				Union2(ho_SelectedRegions9, ho_SelectedRegions_big, &ho_RegionOpening19);

				Connection(ho_RegionOpening19, &ho_ConnectedRegions39);
				ShapeTrans(ho_ConnectedRegions39, &ho_RegionTrans8, "convex");
				DilationCircle(ho_RegionTrans8, &(*ho_camregion), 15.5);




			}
			if (0 != (int(hv_Number21 == 13)))
			{
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(700).Append(100)), (HTuple(99999).Append(99999)));
				ShapeTrans(ho_Region27, &ho_Region27, "convex");

				Union1(ho_Region27, &ho_Region27);

				ClosingCircle(ho_Region27, &ho_Region27, 25);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 50);
				Connection(ho_Region27, &ho_Region27);
				ShapeTrans(ho_Region27, &ho_Region27, "convex");

				Union1(ho_Region27, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);

				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);
				Connection(ho_Region27, &ho_ConnectedRegions14);

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions9, (HTuple("width").Append("area")),
					"and", (HTuple(150).Append(500)), (HTuple(280).Append(999999)));

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions_big, (HTuple("width").Append("area")),
					"and", (HTuple(300).Append(200)), (HTuple(680).Append(999999)));
				DilationCircle(ho_SelectedRegions_big, &ho_SelectedRegions_big, 5);
				Union2(ho_SelectedRegions9, ho_SelectedRegions_big, &ho_RegionOpening19);

				Connection(ho_RegionOpening19, &ho_ConnectedRegions39);
				ShapeTrans(ho_ConnectedRegions39, &ho_RegionTrans8, "convex");
				DilationCircle(ho_RegionTrans8, &(*ho_camregion), 7);
			}
			if (0 != (int(hv_Number21 == 14)))
			{


				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 630, 1);
				MoveRegion(ho_RegionErosion, &ho_RegionErosion_, 0, -20);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 1, 0);
				Threshold(ho_ImageSub, &ho_Region27, 200, 255);





				Connection(ho_Region27, &ho_ConnectedRegions7);


				Intersection(ho_Region27, ho_RegionErosion_, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, ((HTuple("area").Append("width")).Append("rect2_len1")),
					"or", ((HTuple(700).Append(100)).Append(12)), ((HTuple(99999).Append(99999)).Append(99999)));


				//***补
				ReduceDomain(ho_Image, ho_RegionErosion, &ho_ImageReduced);
				Threshold(ho_ImageReduced, &ho_RegionK, (HTuple(0).Append(250)), (HTuple(20).Append(255)));
				FillUp(ho_RegionK, &ho_RegionK);
				RankRegion(ho_RegionK, &ho_RegionK, 15, 15, 170);
				Connection(ho_RegionK, &ho_RegionK);
				SelectShape(ho_RegionK, &ho_RegionK, "area", "and", 200, 99999);
				Union2(ho_RegionK, ho_Region27, &ho_Region27);
				Union1(ho_Region27, &ho_Region27);
				FillUp(ho_Region27, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				//*****************************************
				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 325, 1);
				Connection(ho_Region27, &ho_Region27);
				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 5);

				OpeningCircle(ho_Region27, &ho_Region27, 11);
				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("height").Append("width")),
					"and", (HTuple(50).Append(100)), (HTuple(99999).Append(99999)));

				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				SelectShape(ho_Region27, &ho_bottom_Reg, (HTuple("row").Append("row")), "or",
					(HTuple(0).Append(2000)), (HTuple(150).Append(2047)));
				SelectShape(ho_Region27, &ho_Region27, "row", "and", 150, 2000);
				OpeningCircle(ho_Region27, &ho_Region27, 35);




				ShapeTrans(ho_Region27, &ho_Region27, "ellipse");
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Union2(ho_Region27, ho_bottom_Reg, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 100, 1);
				ClosingCircle(ho_Region27, &ho_Region27, 11);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 10);

				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);
				Connection(ho_Region27, &ho_ConnectedRegions14);

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions9, (HTuple("width").Append("area")),
					"and", (HTuple(100).Append(500)), (HTuple(280).Append(999999)));

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions_big, (HTuple("width").Append("area")),
					"and", (HTuple(300).Append(200)), (HTuple(680).Append(999999)));
				DilationCircle(ho_SelectedRegions_big, &ho_SelectedRegions_big, 21);
				Union2(ho_SelectedRegions9, ho_SelectedRegions_big, &ho_RegionOpening19);

				Connection(ho_RegionOpening19, &ho_ConnectedRegions39);
				ShapeTrans(ho_ConnectedRegions39, &ho_RegionTrans8, "convex");
				DilationCircle(ho_RegionTrans8, &(*ho_camregion), 5.5);


			}
			if (0 != (int(hv_Number21 == 15)))
			{

				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 70);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));
				//*************************************************
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 300, 1);

				MedianRect(ho_ImageReduced9, &ho_ImageMedian24, 25, 25);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -200);
				Threshold(ho_ImageSub, &ho_Region14, 180, 255);
				Intersection(ho_Region14, ho_RegionErosion, &ho_Region14);

				Connection(ho_Region14, &ho_Region14);
				SelectShape(ho_Region14, &ho_Region14, "area", "and", 70, 9999999);
				ShapeTrans(ho_Region14, &ho_Region14, "convex");
				Union1(ho_Region14, &ho_Region14);
				ClosingRectangle1(ho_Region14, &ho_Region14, 150, 1);
				ClosingRectangle1(ho_Region14, &ho_Region14, 1, 20);
				Connection(ho_Region14, &ho_Region14);
				OpeningCircle(ho_Region14, &ho_Region14, 3.5);
				SelectShape(ho_Region14, &ho_Region14, (HTuple("area").Append("width")),
					"or", (HTuple(700).Append(100)), (HTuple(99999).Append(500)));
				SelectShape(ho_Region14, &ho_Region14, (HTuple("width").Append("height")),
					"or", (HTuple(100).Append(100)), (HTuple(500).Append(500)));
				SelectShape(ho_Region14, &ho_Region_big, "width", "and", 350, 550);




				Union2(ho_Region14, ho_Rectangle_top, &ho_Region14);
				Union2(ho_Region14, ho_Rectangle_bottom, &ho_Region14);
				Union1(ho_Region14, &ho_Region14);
				ClosingRectangle1(ho_Region14, &ho_Region14, 3, 55);
				Union2(ho_Region14, ho_Rectangle_bottom, &ho_Region14);
				Union2(ho_Region14, ho_Rectangle_top, &ho_Region14);
				FillUp(ho_Region14, &ho_Region14);
				OpeningRectangle1(ho_Region14, &ho_Region14, 25, 25);

				Connection(ho_Region14, &ho_ConnectedRegions40);
				SelectShape(ho_ConnectedRegions40, &ho_SelectedRegions48, "area", "and",
					4000, 9999999);
				SelectShape(ho_SelectedRegions48, &ho_SelectedRegions49, "column", "and",
					700, 1300);
				Union1(ho_SelectedRegions49, &ho_RegionUnion7);
				ClosingRectangle1(ho_RegionUnion7, &ho_RegionClosing4, 45, 25);
				FillUp(ho_RegionClosing4, &ho_RegionFillUp20);
				Connection(ho_RegionFillUp20, &ho_ConnectedRegions41);
				ShapeTrans(ho_ConnectedRegions41, &ho_RegionTrans11, "convex");
				SelectShape(ho_RegionTrans11, &ho_SelectedRegions, (HTuple("width").Append("row")),
					"and", (HTuple(150).Append(200)), (HTuple(250).Append(1800)));
				ShapeTrans(ho_SelectedRegions, &ho_SelectedRegions, "outer_circle");
				Union2(ho_SelectedRegions, ho_RegionTrans11, &ho_RegionTrans11);
				Connection(ho_RegionTrans11, &ho_RegionTrans11);
				SelectShape(ho_RegionTrans11, &ho_SelectedRegions, (HTuple("width").Append("row")),
					"and", (HTuple(350).Append(200)), (HTuple(550).Append(1800)));
				Difference(ho_RegionTrans11, ho_SelectedRegions, &ho_RegionTrans11);
				ShapeTrans(ho_SelectedRegions, &ho_SelectedRegions, "rectangle1");
				ErosionRectangle1(ho_SelectedRegions, &ho_SelectedRegions, 75, 75);


				RegionFeatures(ho_SelectedRegions, "width", &hv_Value);
				if (0 != (int(hv_Value > 0)))
				{
					OpeningCircle(ho_SelectedRegions, &ho_SelectedRegions, hv_Value / 2);
					Union2(ho_SelectedRegions, ho_RegionTrans11, &ho_RegionTrans11);



					DilationCircle(ho_RegionTrans11, &(*ho_camregion), 20.5);
				}
			}
			if (0 != (int(hv_Number21 == 16)))
			{
				//裁剪
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				ClosingRectangle1(ho_Region5, &ho_Region5, 151, 1);
				//closing_circle (Region5, Region5, 7)
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, ((HTuple("width").Append("height")).Append("area")),
					"and", ((HTuple(550).Append(50)).Append(40000)), ((HTuple(99999).Append(200)).Append(99999999)));
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 50);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));


				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 615, 1);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian24, 17, 17);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 1, 0);






				Threshold(ho_ImageSub, &ho_Region27, 200, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, "area", "and", 50, 99999);
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 300, 1);
				OpeningCircle(ho_Region27, &ho_Region27, 1.5);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 35);
				OpeningCircle(ho_Region27, &ho_Region27, 1.5);
				Connection(ho_Region27, &ho_Region27);

				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(300)));
				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 20);
				ClosingRectangle1(ho_Region27, &ho_Region27, 20, 1);
				FillUp(ho_Region27, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				DilationRectangle1((*ho_JTReg), &ho_JTReg_, 100, 50);
				Difference(ho_Region27, ho_JTReg_, &ho_Region27);
				SelectGray(ho_Region27, ho_Image, &ho_Region27, "deviation", "and", 33, 255);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("height").Append("width")),
					"and", (HTuple(50).Append(100)), (HTuple(99999).Append(300)));
				ShapeTrans(ho_Region27, &ho_Region27, "ellipse");
				SelectShape(ho_Region27, &ho_Region27, (HTuple("height").Append("width")),
					"or", (HTuple(100).Append(100)), (HTuple(300).Append(300)));
				DilationCircle(ho_Region27, &(*ho_camregion), 5.5);



			}
			if (0 != (int(hv_Number21 == 17)))
			{
				//裁剪
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 50);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));

				//****************************
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(700).Append(100)), (HTuple(99999).Append(99999)));
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 121);
				ClosingRectangle1(ho_Region27, &ho_Region27, 121, 1);
				FillUp(ho_Region27, &ho_Region27);

				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 521);
				FillUp(ho_Region27, &ho_Region27);
				OpeningCircle(ho_Region27, &ho_Region27, 55);


				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 35);
				ClosingRectangle1(ho_Region27, &ho_Region27, 175, 1);
				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);

				Connection(ho_Region27, &ho_ConnectedRegions14);
				ShapeTrans(ho_ConnectedRegions14, &ho_ConnectedRegions14, "convex");
				DilationCircle(ho_ConnectedRegions14, &(*ho_camregion), 10.5);

			}
			if (0 != (int(hv_Number21 == 18)))
			{

				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				ClosingRectangle1(ho_Region5, &ho_Region5, 131, 1);
				ClosingCircle(ho_Region5, &ho_Region5, 5);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, ((HTuple("width").Append("height")).Append("area")),
					"and", ((HTuple(550).Append(40)).Append(20000)), ((HTuple(99999).Append(200)).Append(99999999)));
				OpeningRectangle1(ho_Region5, &ho_Region5, 125, 1);
				ClosingCircle(ho_Region5, &ho_Region5, 15);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 60);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));



				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(700).Append(100)), (HTuple(99999).Append(99999)));
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 121);
				ClosingRectangle1(ho_Region27, &ho_Region27, 121, 1);
				FillUp(ho_Region27, &ho_Region27);

				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 521);
				FillUp(ho_Region27, &ho_Region27);
				OpeningCircle(ho_Region27, &ho_Region27, 55);


				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 35);
				ClosingRectangle1(ho_Region27, &ho_Region27, 175, 1);
				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);

				Connection(ho_Region27, &ho_ConnectedRegions14);
				ShapeTrans(ho_ConnectedRegions14, &ho_ConnectedRegions14, "convex");
				DilationCircle(ho_ConnectedRegions14, &(*ho_camregion), 10.5);


			}
			if (0 != (int(hv_Number21 == 19)))
			{

				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(700).Append(100)), (HTuple(99999).Append(99999)));
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 121);
				ClosingRectangle1(ho_Region27, &ho_Region27, 121, 1);
				FillUp(ho_Region27, &ho_Region27);

				//union2 (Region27, Rectangle_bottom, Region27)
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 521);
				FillUp(ho_Region27, &ho_Region27);
				OpeningCircle(ho_Region27, &ho_Region27, 55);


				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 35);
				ClosingRectangle1(ho_Region27, &ho_Region27, 175, 1);
				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);

				Connection(ho_Region27, &ho_ConnectedRegions14);
				ShapeTrans(ho_ConnectedRegions14, &ho_ConnectedRegions14, "convex");
				DilationCircle(ho_ConnectedRegions14, &(*ho_camregion), 10.5);



			}
			if (0 != (int(hv_Number21 == 20)))
			{

				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(700).Append(100)), (HTuple(99999).Append(99999)));
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 121);
				ClosingRectangle1(ho_Region27, &ho_Region27, 121, 1);
				FillUp(ho_Region27, &ho_Region27);

				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 521);
				FillUp(ho_Region27, &ho_Region27);
				OpeningCircle(ho_Region27, &ho_Region27, 55);


				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 35);
				ClosingRectangle1(ho_Region27, &ho_Region27, 175, 1);
				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);

				Connection(ho_Region27, &ho_ConnectedRegions14);
				ShapeTrans(ho_ConnectedRegions14, &ho_ConnectedRegions14, "convex");
				DilationCircle(ho_ConnectedRegions14, &(*ho_camregion), 10.5);
			}
			if (0 != (int(hv_Number21 == 21)))
			{

				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian24, 21, 21);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);

				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, ((HTuple("area").Append("width")).Append("height")),
					"or", ((HTuple(700).Append(100)).Append(100)), ((HTuple(99999).Append(99999)).Append(99999)));
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 121);


				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));

				ShapeTrans(ho_Region27, &ho_Region27, "convex");

				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);

				Union1(ho_Region27, &ho_Region27);
				ClosingCircle(ho_Region27, &ho_Region27, 11);
				ClosingRectangle1(ho_Region27, &ho_Region27, 100, 1);

				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);
				Connection(ho_Region27, &ho_ConnectedRegions14);

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions9, (HTuple("width").Append("area")),
					"and", (HTuple(100).Append(500)), (HTuple(280).Append(999999)));

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions_big, (HTuple("width").Append("area")),
					"and", (HTuple(300).Append(200)), (HTuple(680).Append(999999)));
				DilationCircle(ho_SelectedRegions_big, &ho_SelectedRegions_big, 21);
				Union2(ho_SelectedRegions9, ho_SelectedRegions_big, &ho_RegionOpening19);

				Connection(ho_RegionOpening19, &ho_ConnectedRegions39);
				ShapeTrans(ho_ConnectedRegions39, &ho_RegionTrans8, "convex");
				DilationCircle(ho_RegionTrans8, &(*ho_camregion), 1);







			}
			if (0 != (int(hv_Number21 == 22)))
			{

				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);

				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(700).Append(100)), (HTuple(99999).Append(99999)));
				Union1(ho_Region27, &ho_Region27);
				OpeningCircle(ho_Region27, &ho_Region27, 2.5);
				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 121);


				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));

				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				ShapeTrans(ho_Region27, &ho_Region27, "rectangle1");
				Union1(ho_Region27, &ho_Region27);
				ClosingRectangle1(ho_Region27, &ho_Region27, 15, 1);
				ShapeTrans(ho_Region27, &ho_Region27, "rectangle1");
				Connection(ho_Region27, &ho_Region27);

				RegionFeatures(ho_Region27, "width", &hv_Value);
				if (0 != (int(hv_Value > 0)))
				{
					DilationRectangle1(ho_Region27, &ho_Region27, 1, hv_Value);
					OpeningCircle(ho_Region27, &ho_Region27, hv_Value / 2);
					MoveRegion(ho_Region27, &ho_Region27, (-hv_Value) / 2, 0);
				}
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);

				Union1(ho_Region27, &ho_Region27);
				ClosingCircle(ho_Region27, &ho_Region27, 11);
				ClosingRectangle1(ho_Region27, &ho_Region27, 200, 200);

				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);
				Connection(ho_Region27, &ho_ConnectedRegions14);

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions9, (HTuple("width").Append("area")),
					"and", (HTuple(100).Append(500)), (HTuple(280).Append(999999)));

				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions_big, (HTuple("width").Append("area")),
					"and", (HTuple(300).Append(200)), (HTuple(680).Append(999999)));
				DilationCircle(ho_SelectedRegions_big, &ho_SelectedRegions_big, 3);
				Union2(ho_SelectedRegions9, ho_SelectedRegions_big, &ho_RegionOpening19);

				Connection(ho_RegionOpening19, &ho_ConnectedRegions39);
				ShapeTrans(ho_ConnectedRegions39, &ho_RegionTrans8, "convex");
				DilationCircle(ho_RegionTrans8, &(*ho_camregion), 1);


			}
			if (0 != (int(hv_Number21 == 23)))
			{
				//裁剪
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 50);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));

				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 425, 1);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian24, 21, 21);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);

				SelectShape(ho_Region27, &ho_Region27, ((HTuple("area").Append("width")).Append("height")),
					"or", ((HTuple(700).Append(100)).Append(100)), ((HTuple(99999).Append(99999)).Append(99999)));
				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				ShapeTrans(ho_Region27, &ho_Region27, "rectangle1");
				Union1(ho_Region27, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				ShapeTrans(ho_Region27, &ho_Region27, "rectangle1");
				Union1(ho_Region27, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				SelectObj(ho_Region27, &ho_ObjectSelected, 1);
				RegionFeatures(ho_ObjectSelected, "width", &hv_Value);
				OpeningCircle(ho_ObjectSelected, &ho_RegionOpening1, hv_Value / 2);
				CountObj(ho_Region27, &hv_Number);
				if (0 != (int(hv_Number > 1)))
				{
					SelectObj(ho_Region27, &ho_ObjectSelected, 2);
					RegionFeatures(ho_ObjectSelected, "width", &hv_Value);
					OpeningCircle(ho_ObjectSelected, &ho_RegionOpening2, hv_Value / 2);

					Union2(ho_RegionOpening1, ho_RegionOpening2, &ho_Region27);

				}
				else
				{
					Union2(ho_RegionOpening1, ho_RegionOpening1, &ho_Region27);
				}
				OpeningCircle(ho_Region27, &ho_Region27, 157);




				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
				Union1(ho_Region27, &ho_Region27);
				ClosingCircle(ho_Region27, &ho_Region27, 11);
				ClosingRectangle1(ho_Region27, &ho_Region27, 200, 200);

				FillUp(ho_Region27, &ho_Region27);
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);
				Connection(ho_Region27, &ho_ConnectedRegions14);
				SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions4, "width", "and",
					250, 99999);
				DilationCircle(ho_SelectedRegions4, &(*ho_camregion), 15.5);

			}
			if (0 != (int(hv_Number21 == 24)))
			{

				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 50);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));

				//*************************************

				//裁剪
				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian24, 21, 21);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);

				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));
				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				Union1(ho_Region27, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);
				ShapeTrans(ho_Region27, &ho_Region27, "rectangle1");
				OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);
				SelectShape(ho_Region27, &ho_Region27, "width", "and", 250, 450);
				SortRegion(ho_Region27, &ho_Region27, "first_point", "true", "row");
				SelectObj(ho_Region27, &ho_ObjectSelected, 1);
				RegionFeatures(ho_ObjectSelected, "width", &hv_Value);
				if (0 != (int(hv_Value > 0)))
				{
					DilationRectangle1(ho_ObjectSelected, &ho_ObjectSelected, 1, hv_Value);
					OpeningCircle(ho_ObjectSelected, &ho_RegionOpening1, hv_Value / 2);
					MoveRegion(ho_RegionOpening1, &ho_RegionOpening1, (-hv_Value) / 2, 0);
					SelectObj(ho_Region27, &ho_ObjectSelected, 2);
					RegionFeatures(ho_ObjectSelected, "width", &hv_Value);
					//dilation_rectangle1 (ObjectSelected, ObjectSelected, 1, Value)

					OpeningCircle(ho_ObjectSelected, &ho_RegionOpening2, hv_Value / 2);
					//move_region (RegionOpening2, RegionOpening2, Value/2, 1)
					RegionFeatures(ho_ObjectSelected, "height", &hv_Value);
					Union2(ho_RegionOpening1, ho_RegionOpening2, &ho_Region27);
					Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);

					if (0 != (int(hv_Value < 800)))
					{
						Union2(ho_Region27, ho_Rectangle_bottom, &ho_Region27);
					}

					ClosingRectangle1(ho_Region27, &ho_Region27, 1, 200);
					Union1(ho_Region27, &ho_Region27);
					ClosingCircle(ho_Region27, &ho_Region27, 11);
					ClosingRectangle1(ho_Region27, &ho_Region27, 100, 1);

					FillUp(ho_Region27, &ho_Region27);
					OpeningRectangle1(ho_Region27, &ho_Region27, 35, 35);
					Connection(ho_Region27, &ho_ConnectedRegions14);

					DilationRectangle1(ho_ConnectedRegions14, &ho_ConnectedRegions14, 15, 5);



					SelectShape(ho_ConnectedRegions14, &ho_SelectedRegions4, "width", "and",
						250, 99999);
					DilationCircle(ho_SelectedRegions4, &(*ho_camregion), 15.5);
				}

			}
			if (0 != (int(hv_Number21 == 25)))
			{
				//裁剪
				MedianRect(ho_ImageReduced9, &ho_ImageMedian9, 10, 10);
				TextureLaws(ho_ImageMedian9, &ho_ImageTexture4, "el", 5, 7);
				Threshold(ho_ImageTexture4, &ho_Region5, 0, 20);
				RankRegion(ho_Region5, &ho_Region5, 20, 20, 350);
				FillUp(ho_Region5, &ho_Region5);
				ClosingRectangle1(ho_Region5, &ho_Region5, 151, 1);
				Connection(ho_Region5, &ho_Region5);
				SelectShape(ho_Region5, &ho_Region5, "width", "and", 550, 99999);
				ShapeTrans(ho_Region5, &ho_Region5, "rectangle1");
				DilationRectangle1(ho_Region5, &ho_RegionDilation1, 500, 50);
				Intersection(ho_ImageReduced9, ho_RegionDilation1, &(*ho_JTReg));

				ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 425, 1);
				MedianRect(ho_ImageReduced9, &ho_ImageMedian24, 15, 15);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture1, "el", 5, 7);
				TextureLaws(ho_ImageMedian24, &ho_ImageTexture2, "le", 5, 7);
				AddImage(ho_ImageTexture1, ho_ImageTexture2, &ho_ImageSub, 3, -300);
				Threshold(ho_ImageSub, &ho_Region27, 180, 255);
				Intersection(ho_Region27, ho_RegionErosion, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);

				SelectShape(ho_Region27, &ho_Region27, (HTuple("area").Append("width")),
					"or", (HTuple(400).Append(100)), (HTuple(99999).Append(99999)));
				ShapeTrans(ho_Region27, &ho_Region27, "convex");
				Union1(ho_Region27, &ho_Region27);
				Union2(ho_Region27, ho_Rectangle_top, &ho_Region27);
				Connection(ho_Region27, &ho_Region27);

				ClosingRectangle1(ho_Region27, &ho_Region27, 1, 200);
				OpeningCircle(ho_Region27, &ho_Region27, 3.5);
				Connection(ho_Region27, &ho_Region27);
				SelectShape(ho_Region27, &ho_SelectedRegions4, (HTuple("width").Append("height")),
					"and", (HTuple(250).Append(100)), (HTuple(99999).Append(99999)));
				DilationCircle(ho_SelectedRegions4, &(*ho_camregion), 15.5);


			}
			if (0 != (int(hv_Number21 == 27)))
			{

				//裁剪
				GenRectangle1(&ho_Rectangle11, 1024, 497, 1455, 1766);
				ReduceDomain(ho_ImageReduced9, ho_Rectangle11, &ho_ImageReduced12);
				MedianRect(ho_ImageReduced12, &ho_ImageMedian11, 10, 10);
				ReduceDomain(ho_ImageMedian11, ho_RegionErosion2, &ho_ImageReduced10);
				TextureLaws(ho_ImageReduced10, &ho_ImageTexture6, "el", 5, 7);
				TextureLaws(ho_ImageReduced10, &ho_ImageTexture7, "le", 5, 7);
				AddImage(ho_ImageTexture6, ho_ImageTexture7, &ho_ImageResult3, 2, -100);
				MedianRect(ho_ImageResult3, &ho_ImageMedian10, 15, 1);
				Threshold(ho_ImageResult3, &ho_Region6, 180, 255);
				Connection(ho_Region6, &ho_ConnectedRegions5);
				RankRegion(ho_ConnectedRegions5, &ho_RegionCount, 80, 15, 1000);
				ClosingRectangle1(ho_RegionCount, &ho_RegionOpening23, 100, 5);
				Union1(ho_RegionOpening23, &ho_RegionUnion23);
				ShapeTrans(ho_RegionUnion23, &ho_RegionTrans12, "rectangle1");
				RegionFeatures(ho_RegionTrans12, "height", &hv_Value4);
				if (0 != (int(hv_Value4 < 120)))
				{
					DilationRectangle1(ho_RegionTrans12, &ho_RegionDilation4, 1, 140);
					MoveRegion(ho_RegionDilation4, &ho_RegionTrans12, 65, 0);
				}
				DilationRectangle1(ho_RegionTrans12, &ho_RegionDilation8, 600, 10);
				Union1(ho_RegionDilation8, &ho_RegionUnion14);
				Intersection(ho_RegionUnion14, ho_RegionUnion, &(*ho_camregion));
			}
			if (0 != (int(hv_Number21 == 29)))
			{

				//裁剪
				GenRectangle1(&ho_Rectangle5, 364, 380, 967, 1726);
				ReduceDomain(ho_Image, ho_Rectangle5, &ho_ImageReduced1);
				MedianRect(ho_ImageReduced1, &ho_ImageMedian11, 10, 10);
				TextureLaws(ho_ImageMedian11, &ho_ImageTexture6, "el", 5, 7);
				TextureLaws(ho_ImageMedian11, &ho_ImageTexture7, "le", 5, 7);
				AddImage(ho_ImageTexture6, ho_ImageTexture7, &ho_ImageResult3, 2, -100);
				MedianRect(ho_ImageResult3, &ho_ImageMedian10, 15, 1);
				Threshold(ho_ImageResult3, &ho_Region6, 150, 255);
				Connection(ho_Region6, &ho_ConnectedRegions5);
				RankRegion(ho_ConnectedRegions5, &ho_RegionCount, 80, 20, 800);
				ClosingRectangle1(ho_RegionCount, &ho_RegionOpening23, 100, 5);
				Union1(ho_RegionOpening23, &ho_RegionUnion23);
				ShapeTrans(ho_RegionUnion23, &ho_RegionTrans12, "rectangle1");
				DilationRectangle1(ho_RegionTrans12, &ho_RegionDilation8, 5, 5);
				Union1(ho_RegionDilation8, &(*ho_camregion));

			}
			Union1((*ho_camregion), &(*ho_camregion));



		}
		else if (0 != (int(hv_Substring == HTuple("2_2"))))
		{
			if (true)
			{
				if (0 != (int(hv_Number21 == 27)))
				{
					GenRectangle1(&ho_Rectangle3, 0, 20, 737, 2041);
					ReduceDomain(ho_Image, ho_Rectangle3, &ho_ImageReduced7);
					MultImage(ho_ImageReduced7, ho_ImageReduced7, &ho_ImageResult4, 0.01, 0);
					Threshold(ho_ImageResult4, &ho_Region, 85, 255);
					FillUp(ho_Region, &ho_RegionFillUp3);
					Connection(ho_RegionFillUp3, &ho_ConnectedRegions20);
					SelectShape(ho_ConnectedRegions20, &ho_SelectedRegions43, (HTuple("area").Append("width")),
						"and", (HTuple(1500).Append(700)), (HTuple(999999999).Append(1500)));
					SelectShape(ho_ConnectedRegions20, &ho_SelectedRegions44, "height", "and",
						400, 99999);
					Union2(ho_SelectedRegions44, ho_SelectedRegions43, &ho_RegionUnion15);
					FillUp(ho_RegionUnion15, &ho_RegionFillUp1);
					Union1(ho_RegionFillUp1, &ho_RegionUnion2);
					ClosingRectangle1(ho_RegionUnion2, &ho_RegionClosing5, 1500, 200);
					Connection(ho_RegionClosing5, &ho_ConnectedRegions1);
					SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions, (HTuple("height").Append("width")),
						"and", (HTuple(400).Append(300)), (HTuple(3000).Append(1600)));
					Union1(ho_SelectedRegions, &ho_RegionUnion10);
					ShapeTrans(ho_RegionUnion10, &ho_ConnectedRegions21, "convex");
					OpeningRectangle1(ho_ConnectedRegions21, &ho_RegionOpening20, 3, 5);
					ShapeTrans(ho_RegionOpening20, &ho_RegionTrans6, "rectangle1");
					MoveRegion(ho_RegionTrans6, &ho_RegionUnion, 5, 0);

					MoveRegion(ho_RegionUnion, &ho_RegionMoved, 0, -900);
					Difference(ho_RegionUnion, ho_RegionMoved, &ho_RegionUnion);
					//提取区域
					SmallestRectangle1(ho_RegionUnion, &hv_Row112, &hv_Column112, &hv_Row212,
						&hv_Column212);
					GenRectangle1(&ho_RegionUnion, 0, hv_Column112, 2048, hv_Column212);
					ReduceDomain(ho_Image, ho_RegionUnion, &ho_ImageReduced9);
					AreaCenter((*ho_camregion), &hv_Area6, &hv_Row3, &hv_Column3);
				}
				else
				{


					MultImage(ho_Image, ho_Image, &ho_ImageResult4, 0.01, 0);
					GrayDilationRect(ho_ImageResult4, &ho_ImageResult4, 300, 1);
					Threshold(ho_ImageResult4, &ho_Region, 175, 255);
					FillUp(ho_Region, &ho_RegionFillUp3);
					//if (Number21!=13 and Number21!=14 and Number21!=15 and Number21!=16 and Number21!=17)
					//closing_rectangle1 (RegionFillUp3, RegionFillUp3, 430, 150)
					//endif
					MoveRegion(ho_RegionFillUp3, &ho_RegionFillUp3_, 0, -200);
					ShapeTrans(ho_RegionFillUp3_, &ho_RegionFillUp3_, "rectangle1");
					Union2(ho_RegionFillUp3, ho_RegionFillUp3_, &ho_RegionFillUp3);
					OpeningRectangle1(ho_RegionFillUp3, &ho_RegionFillUp3, 1, 1900);
					Connection(ho_RegionFillUp3, &ho_ConnectedRegions20);
					SelectShape(ho_ConnectedRegions20, &ho_SelectedRegions43, (HTuple("area").Append("width")),
						"and", (HTuple(1500).Append(700)), (HTuple(999999999).Append(1500)));
					SelectShape(ho_SelectedRegions43, &ho_SelectedRegions44, "height", "and",
						400, 99999);
					Union2(ho_SelectedRegions44, ho_SelectedRegions43, &ho_RegionUnion15);
					FillUp(ho_RegionUnion15, &ho_RegionFillUp1);
					Union1(ho_RegionFillUp1, &ho_RegionUnion2);
					ClosingRectangle1(ho_RegionUnion2, &ho_RegionClosing5, 1500, 200);
					Connection(ho_RegionClosing5, &ho_ConnectedRegions1);
					SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions, (HTuple("height").Append("width")),
						"and", (HTuple(400).Append(300)), (HTuple(3000).Append(1600)));
					Union1(ho_SelectedRegions, &ho_RegionUnion10);
					ShapeTrans(ho_RegionUnion10, &ho_ConnectedRegions21, "convex");
					OpeningRectangle1(ho_ConnectedRegions21, &ho_RegionOpening20, 3, 5);
					ShapeTrans(ho_RegionOpening20, &ho_RegionTrans6, "rectangle1");
					MoveRegion(ho_RegionTrans6, &ho_RegionUnion, 5, 0);
					MoveRegion(ho_RegionUnion, &ho_RegionMoved, 0, -850);
					Difference(ho_RegionUnion, ho_RegionMoved, &ho_RegionUnion);
					//提取区域
					SmallestRectangle1(ho_RegionUnion, &hv_Row112, &hv_Column112, &hv_Row212,
						&hv_Column212);
					GenRectangle1(&ho_RegionUnion, 0, hv_Column112, 2048, hv_Column212);
					ReduceDomain(ho_Image, ho_RegionUnion, &ho_ImageReduced9);
					AreaCenter((*ho_camregion), &hv_Area6, &hv_Row3, &hv_Column3);
				}
				if (0 != (int(hv_Number21 == 2)))
				{
					//裁剪
					GenRectangle1(&ho_Rectangle9, 1717, 412, 2099, 1616);
					ReduceDomain(ho_ImageReduced9, ho_Rectangle9, &ho_ImageReduced6);
					MedianRect(ho_ImageReduced6, &ho_ImageMedian11, 10, 10);
					MedianRect(ho_ImageMedian11, &ho_ImageMedian10, 15, 1);
					VarThreshold(ho_ImageMedian10, &ho_Region13, 50, 800, 0.2, 25, "dark");
					Connection(ho_Region13, &ho_ConnectedRegions5);
					ClosingRectangle1(ho_ConnectedRegions5, &ho_RegionOpening23, 100, 5);
					SelectShape(ho_RegionOpening23, &ho_SelectedRegions3, (HTuple("width").Append("area")),
						"and", (HTuple(200).Append(400)), (HTuple(1200).Append(999999)));
					Union1(ho_SelectedRegions3, &ho_RegionUnion23);
					ShapeTrans(ho_RegionUnion23, &ho_RegionTrans12, "rectangle1");
					DilationRectangle1(ho_RegionTrans12, &ho_RegionDilation, 1000, 1);
					Intersection(ho_RegionDilation, ho_ImageReduced9, &(*ho_camregion));

					MedianRect(ho_ImageReduced9, &ho_ImageMedian, 1, 25);
					MultImage(ho_ImageMedian, ho_ImageMedian, &ho_ImageResult11, 0.01, 0);
					Threshold(ho_ImageResult11, &ho_Regions2, 0, 61);
					FillUp(ho_Regions2, &ho_RegionFillUp11);
					OpeningRectangle1(ho_RegionFillUp11, &ho_RegionOpening15, 55, 1);
					Connection(ho_RegionOpening15, &ho_RegionOpening15);
					SelectShape(ho_RegionOpening15, &ho_RegionOpening15, (HTuple("width").Append("height")),
						"and", (HTuple(500).Append(30)), (HTuple(1000).Append(400)));
					ShapeTrans(ho_RegionOpening15, &ho_RegionOpening15, "convex");

					DilationRectangle1(ho_RegionOpening15, &(*ho_JTReg), 55, 25);

				}
				if (0 != (int(hv_Number21 == 3)))
				{
					//裁剪
					MedianRect(ho_ImageReduced9, &ho_ImageMedian7, 1, 15);
					MultImage(ho_ImageMedian7, ho_ImageMedian7, &ho_ImageResult12, 0.01, 0);
					Threshold(ho_ImageResult12, &ho_Regions3, 0, 60);
					FillUp(ho_Regions3, &ho_RegionFillUp21);
					OpeningCircle(ho_RegionFillUp21, &ho_RegionFillUp21, 7);
					DilationRectangle1(ho_RegionFillUp21, &ho_RegionDilation24, 9, 1);
					FillUp(ho_RegionDilation24, &ho_RegionFillUp25);
					OpeningCircle(ho_RegionFillUp25, &ho_RegionOpening8, 7);

					Connection(ho_RegionOpening8, &ho_ConnectedRegions17);
					SelectShape(ho_ConnectedRegions17, &ho_SelectedRegions20, "width", "and",
						250, 450);
					ShapeTrans(ho_SelectedRegions20, &ho_SelectedRegions20, "rectangle1");

					SortRegion(ho_SelectedRegions20, &ho_SelectedRegions20, "first_point",
						"true", "row");

					SelectObj(ho_SelectedRegions20, &ho_ObjectSelected1, 1);

					RegionFeatures(ho_ObjectSelected1, "width", &hv_Value);
					if (0 != (int(hv_Value > 0)))
					{
						OpeningCircle(ho_ObjectSelected1, &ho_ObjectSelected1, hv_Value / 2);
						Union2(ho_ObjectSelected1, (*ho_camregion), &(*ho_camregion));
					}
					CountObj(ho_SelectedRegions20, &hv_Number);
					if (0 != (int(hv_Number == 2)))
					{
						SelectObj(ho_SelectedRegions20, &ho_ObjectSelected2, 2);
						DilationRectangle1(ho_ObjectSelected2, &ho_ObjectSelected2, 1, hv_Value);
						RegionFeatures(ho_ObjectSelected2, "width", &hv_Value);
						if (0 != (int(hv_Value > 0)))
						{
							OpeningCircle(ho_ObjectSelected2, &ho_ObjectSelected2, hv_Value / 2);
							MoveRegion(ho_ObjectSelected2, &ho_ObjectSelected2, hv_Value / 2, 1);
							Union2(ho_ObjectSelected2, (*ho_camregion), &(*ho_camregion));
						}
					}

					DilationRectangle1((*ho_camregion), &(*ho_camregion), 55, 30);
				}
				if (0 != (int(hv_Number21 == 4)))
				{

					MedianRect(ho_ImageReduced9, &ho_ImageMedian, 1, 25);
					MultImage(ho_ImageMedian, ho_ImageMedian, &ho_ImageResult11, 0.01, 0);
					Threshold(ho_ImageResult11, &ho_Regions2, 0, 61);
					FillUp(ho_Regions2, &ho_RegionFillUp11);
					OpeningRectangle1(ho_RegionFillUp11, &ho_RegionOpening15, 25, 1);
					Connection(ho_RegionOpening15, &ho_RegionOpening15);
					SelectShape(ho_RegionOpening15, &ho_RegionOpening15, "width", "and", 270,
						400);
					ShapeTrans(ho_RegionOpening15, &ho_RegionOpening15, "convex");

					DilationRectangle1(ho_RegionOpening15, &(*ho_camregion), 55, 25);
				}
				if (0 != (int(hv_Number21 == 5)))
				{
					Threshold(ho_ImageReduced9, &ho_Region16, 0, 90);
					Connection(ho_Region16, &ho_ConnectedRegions35);
					OpeningRectangle1(ho_ConnectedRegions35, &ho_ConnectedRegions35, 15, 1);
					OpeningCircle(ho_ConnectedRegions35, &ho_RegionOpening12, 3.5);
					Connection(ho_RegionOpening12, &ho_RegionOpening12);
					SelectShape(ho_RegionOpening12, &ho_SelectedRegions34, "width", "and",
						250, 1999999);
					FillUp(ho_SelectedRegions34, &ho_SelectedRegions34);
					ShapeTrans(ho_SelectedRegions34, &ho_SelectedRegions34, "convex");


					DilationRectangle1(ho_SelectedRegions34, &(*ho_camregion), 75, 15);

				}
				if (0 != (int(hv_Number21 == 6)))
				{
					MedianRect(ho_ImageReduced9, &ho_ImageMedian3, 15, 1);
					MultImage(ho_ImageMedian3, ho_ImageMedian3, &ho_ImageResult5, 0.008, 0);
					Threshold(ho_ImageResult5, &ho_Region16, 0, 110);
					FillUp(ho_Region16, &ho_RegionFillUp28);
					Connection(ho_RegionFillUp28, &ho_ConnectedRegions8);
					SelectShape(ho_ConnectedRegions8, &ho_SelectedRegions8, (HTuple("column").Append("area")),
						"and", (HTuple(872.03).Append(500)), (HTuple(2047).Append(500000)));
					OpeningCircle(ho_SelectedRegions8, &ho_RegionOpening, 15);
					ShapeTrans(ho_RegionOpening, &ho_RegionTrans, "rectangle1");
					DilationRectangle1(ho_RegionTrans, &ho_RegionTrans, 35, 300);
					SelectShape(ho_RegionTrans, &ho_RegionTrans, "width", "and", 250, 450);
					RegionFeatures(ho_RegionTrans, "width", &hv_Value);
					if (0 != (hv_Value.TupleLength()))
					{
						OpeningCircle(ho_RegionTrans, &ho_RegionTrans, hv_Value / 2);
						MoveRegion(ho_RegionTrans, &ho_RegionTrans, 150, 0);
						DilationCircle(ho_RegionTrans, &(*ho_camregion), 20);
					}

				}
				if (0 != (int(hv_Number21 == 7)))
				{
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult10, 0.01,
						0);
					MedianImage(ho_ImageResult10, &ho_ImageResult10, "circle", 8, "mirrored");
					Threshold(ho_ImageResult10, &ho_Region19, 0, 130);
					FillUp(ho_Region19, &ho_RegionFillUp29);
					Connection(ho_RegionFillUp29, &ho_RegionFillUp29);
					SelectShapeStd(ho_RegionFillUp29, &ho_RegionFillUp29, "max_area", 70);
					ShapeTrans(ho_RegionFillUp29, &ho_RegionFillUp29, "rectangle1");
					RegionFeatures(ho_RegionFillUp29, "width", &hv_Value);
					OpeningCircle(ho_RegionFillUp29, &ho_RegionOpening, hv_Value / 2);
					Union2(ho_RegionOpening, ho_Rectangle_bottom, &ho_RegionOpening);
					ClosingRectangle1(ho_RegionOpening, &ho_RegionOpening, 1, 300);
					OpeningCircle(ho_RegionOpening, &ho_RegionOpening, 3.5);

					DilationCircle(ho_RegionOpening, &(*ho_camregion), 20);
				}
				if (0 != (int(hv_Number21 == 8)))
				{

					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult13, 0.009,
						0);
					Threshold(ho_ImageResult13, &ho_Region11, 0, 128);
					OpeningCircle(ho_Region11, &ho_RegionOpening19, 8.5);
					Connection(ho_RegionOpening19, &ho_ConnectedRegions24);


					SelectShape(ho_ConnectedRegions24, &ho_SelectedRegions107, (HTuple("row").Append("width")),
						"and", (HTuple(0).Append(150)), (HTuple(1000).Append(500)));
					ShapeTrans(ho_SelectedRegions107, &ho_SelectedRegions107, "rectangle1");
					RegionFeatures(ho_SelectedRegions107, "width", &hv_Value);
					if (0 != (hv_Value.TupleLength()))
					{

						DilationRectangle1(ho_SelectedRegions107, &ho_SelectedRegions107, 1,
							hv_Value);
						OpeningCircle(ho_SelectedRegions107, &ho_SelectedRegions107, hv_Value / 2);
						MoveRegion(ho_SelectedRegions107, &ho_SelectedRegions107, (-hv_Value) / 2,
							0);
						DilationRectangle1(ho_SelectedRegions107, &ho_SelectedRegions107, 51,
							21);
					}
					Union2(ho_SelectedRegions107, (*ho_camregion), &(*ho_camregion));

				}
				if (0 != (int(hv_Number21 == 9)))
				{
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult13, 0.009,
						0);
					Threshold(ho_ImageResult13, &ho_Region11, 0, 128);
					ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 225, 1);
					Intersection(ho_Region11, ho_RegionErosion, &ho_Region11);


					OpeningCircle(ho_Region11, &ho_RegionOpening19, 8.5);
					Connection(ho_RegionOpening19, &ho_ConnectedRegions24);
					SelectShape(ho_ConnectedRegions24, &ho_SelectedRegions22, "area", "and",
						2000, 789331);
					Union1(ho_SelectedRegions22, &ho_RegionUnion49);
					ShapeTrans(ho_RegionUnion49, &(*ho_camregion), "rectangle1");
					DilationRectangle1((*ho_camregion), &(*ho_camregion), 55, 55);
					MoveRegion((*ho_camregion), &ho_RegionMoved2, 250, 0);
					Union2((*ho_camregion), ho_RegionMoved2, &(*ho_camregion));
					RegionFeatures((*ho_camregion), "width", &hv_Value);
					if (0 != (int(hv_Value > 0)))
					{
						OpeningCircle((*ho_camregion), &(*ho_camregion), hv_Value / 2);
						DilationCircle((*ho_camregion), &(*ho_camregion), 13.5);
					}
				}
				if (0 != (int(hv_Number21 == 10)))
				{

					MedianRect(ho_ImageReduced9, &ho_ImageMedian, 1, 25);
					MultImage(ho_ImageMedian, ho_ImageMedian, &ho_ImageResult11, 0.01, 0);
					Threshold(ho_ImageResult11, &ho_Regions2, 0, 61);
					FillUp(ho_Regions2, &ho_RegionFillUp11);
					OpeningRectangle1(ho_RegionFillUp11, &ho_RegionOpening15, 55, 1);
					Connection(ho_RegionOpening15, &ho_RegionOpening15);
					SelectShape(ho_RegionOpening15, &ho_RegionOpening15, (HTuple("width").Append("height")),
						"and", (HTuple(500).Append(30)), (HTuple(1000).Append(400)));
					ShapeTrans(ho_RegionOpening15, &ho_RegionOpening15, "convex");

					DilationRectangle1(ho_RegionOpening15, &(*ho_JTReg), 55, 25);


					//裁剪
					GenRectangle1(&ho_Rectangle9, 1717, 412, 2099, 1616);
					ReduceDomain(ho_ImageReduced9, ho_Rectangle9, &ho_ImageReduced6);
					MedianRect(ho_ImageReduced6, &ho_ImageMedian11, 10, 10);
					MedianRect(ho_ImageMedian11, &ho_ImageMedian10, 15, 1);
					VarThreshold(ho_ImageMedian10, &ho_Region13, 5, 500, 0.2, 15, "dark");
					Connection(ho_Region13, &ho_ConnectedRegions5);
					ClosingRectangle1(ho_ConnectedRegions5, &ho_RegionOpening23, 100, 5);
					SelectShape(ho_RegionOpening23, &ho_SelectedRegions3, (HTuple("width").Append("area")),
						"and", (HTuple(200).Append(400)), (HTuple(1200).Append(999999)));
					Union1(ho_SelectedRegions3, &ho_RegionUnion23);
					ShapeTrans(ho_RegionUnion23, &ho_RegionTrans12, "rectangle1");
					DilationRectangle1(ho_RegionTrans12, &ho_RegionDilation, 1000, 1);
					Intersection(ho_RegionDilation, ho_ImageReduced9, &(*ho_camregion));
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult47, 0.01,
						0);
					MedianImage(ho_ImageResult47, &ho_ImageMedian31, "circle", 16, "mirrored");
					Threshold(ho_ImageMedian31, &ho_Region44, 0, 30);
					OpeningCircle(ho_Region44, &ho_RegionOpening78, 15);
					Connection(ho_RegionOpening78, &ho_ConnectedRegions78);
					SelectShape(ho_ConnectedRegions78, &(*ho_camregion), (HTuple("area").Append("width")),
						"and", (HTuple(500).Append(300)), (HTuple(999999).Append(9999)));
					Union1((*ho_camregion), &(*ho_camregion));
					ShapeTrans((*ho_camregion), &(*ho_camregion), "rectangle1");
					OpeningCircle((*ho_camregion), &(*ho_camregion), 175);
					Union2((*ho_camregion), ho_Rectangle_top, &(*ho_camregion));
					ClosingRectangle1((*ho_camregion), &(*ho_camregion), 1, 185);
					OpeningRectangle1((*ho_camregion), &(*ho_camregion), 15, 15);



					DilationCircle((*ho_camregion), &(*ho_camregion), 13.5);
				}
				if (0 != (int(hv_Number21 == 11)))
				{
					//裁剪
					MedianRect(ho_ImageReduced9, &ho_ImageMedian4, 25, 1);
					MultImage(ho_ImageMedian4, ho_ImageMedian4, &ho_ImageResult6, 0.1, 0);
					Threshold(ho_ImageResult6, &ho_Region8, 0, 60);
					FillUp(ho_Region8, &ho_RegionFillUp2);
					OpeningRectangle1(ho_RegionFillUp2, &ho_RegionOpening1, 15, 1);
					Connection(ho_RegionOpening1, &ho_ConnectedRegions6);
					SelectShape(ho_ConnectedRegions6, &(*ho_JTReg), (HTuple("width").Append("height")),
						"and", (HTuple(500).Append(30)), (HTuple(1000).Append(400)));


					SelectShape(ho_ConnectedRegions6, &(*ho_camregion), "width", "and", 100,
						400);

					DilationRectangle1((*ho_JTReg), &(*ho_JTReg), 22, 25);
					DilationRectangle1((*ho_camregion), &(*ho_camregion), 22, 25);

				}
				if (0 != (int(hv_Number21 == 12)))
				{

					MedianRect(ho_ImageReduced9, &ho_ImageMedian4, 25, 1);
					MultImage(ho_ImageMedian4, ho_ImageMedian4, &ho_ImageResult6, 0.01, 0);
					Threshold(ho_ImageResult6, &ho_Region8, 0, 60);
					FillUp(ho_Region8, &ho_RegionFillUp2);

					OpeningRectangle1(ho_RegionFillUp2, &ho_RegionOpening1, 15, 1);
					Connection(ho_RegionOpening1, &ho_ConnectedRegions6);
					ShapeTrans(ho_ConnectedRegions6, &ho_ConnectedRegions6, "convex");
					Union1(ho_ConnectedRegions6, &ho_ConnectedRegions6);

					DilationRectangle1(ho_ConnectedRegions6, &(*ho_camregion), 22, 25);

				}
				if (0 != (int(hv_Number21 == 13)))
				{
					//test
					MedianRect(ho_ImageReduced9, &ho_ImageMedian4, 25, 1);
					MultImage(ho_ImageMedian4, ho_ImageMedian4, &ho_ImageResult6, 0.009, 0);
					Threshold(ho_ImageResult6, &ho_Region8, 0, 60);
					FillUp(ho_Region8, &ho_RegionFillUp2);
					OpeningRectangle1(ho_RegionFillUp2, &ho_RegionOpening1, 15, 1);
					Connection(ho_RegionOpening1, &ho_ConnectedRegions6);
					SelectShape(ho_ConnectedRegions6, &ho_SelectedRegions6, "area", "and",
						6890, 1.74141e+06);
					SelectShape(ho_SelectedRegions6, &ho_SelectedRegions1, "column", "and",
						874.31, 1280.96);
					ShapeTrans(ho_SelectedRegions1, &ho_RegionTrans35, "convex");
					Union1(ho_RegionTrans35, &ho_RegionUnion24);
					DilationRectangle1(ho_RegionUnion24, &(*ho_camregion), 22, 25);

				}
				if (0 != (int(hv_Number21 == 14)))
				{
					MedianImage(ho_ImageReduced9, &ho_ImageReduced9, "circle", 9, "mirrored");
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult18, 0.01,
						0);
					Threshold(ho_ImageResult18, &ho_Region12, 0, 60);
					Connection(ho_Region12, &ho_ConnectedRegions27);
					SelectShape(ho_ConnectedRegions27, &ho_SelectedRegions2, (HTuple("area").Append("ratio")),
						"and", (HTuple(10050).Append(0.2)), (HTuple(99999).Append(3)));
					ShapeTrans(ho_SelectedRegions2, &ho_RegionTrans7, "convex");
					Union1(ho_RegionTrans7, &ho_RegionUnion14);
					DilationCircle(ho_RegionUnion14, &(*ho_camregion), 8.5);
					Threshold(ho_ImageResult18, &ho_Region24, 0, 90);
					ClosingRectangle1(ho_Region24, &ho_RegionClosing1, 55, 55);
					FillUp(ho_RegionClosing1, &ho_RegionFillUp18);
					Connection(ho_RegionFillUp18, &ho_ConnectedRegions32);
					Connection(ho_ConnectedRegions32, &ho_ConnectedRegions33);
					SelectShape(ho_ConnectedRegions33, &ho_SelectedRegions27, (HTuple("area").Append("column")),
						"and", (HTuple(256).Append(795.25)), (HTuple(468464).Append(1263.25)));
					ShapeTrans(ho_SelectedRegions27, &ho_RegionTrans25, "convex");
					DilationRectangle1(ho_RegionTrans25, &ho_RegionDilation2, 25, 25);

					Union2((*ho_camregion), ho_RegionDilation2, &(*ho_camregion));
					ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 325, 1);
					Intersection(ho_RegionErosion, (*ho_camregion), &(*ho_camregion));
				}
				if (0 != (int(hv_Number21 == 15)))
				{
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult9, 0.008,
						0);
					Threshold(ho_ImageResult9, &ho_Region9, 0, 30);
					ClosingRectangle1(ho_Region9, &ho_Region9, 25, 5);
					FillUp(ho_Region9, &ho_RegionFillUp9);
					OpeningCircle(ho_RegionFillUp9, &ho_RegionOpening22, 5.5);
					Connection(ho_RegionOpening22, &ho_RegionOpening22);
					ShapeTrans(ho_RegionOpening22, &ho_RegionOpening22, "convex");
					OpeningRectangle1(ho_RegionOpening22, &ho_RegionOpening32, 21, 1);
					Connection(ho_RegionOpening32, &ho_ConnectedRegions25);

					DilationRectangle1(ho_ConnectedRegions25, &(*ho_camregion), 30, 10);





				}
				if (0 != (int(hv_Number21 == 16)))
				{
					Threshold(ho_ImageReduced9, &ho_Region9, 0, 70);
					FillUp(ho_Region9, &ho_RegionFillUp4);
					Connection(ho_RegionFillUp4, &ho_ConnectedRegions25);
					OpeningCircle(ho_ConnectedRegions25, &ho_RegionOpening13, 15.5);
					DilationRectangle1(ho_RegionOpening13, &(*ho_camregion), 25, 25);

				}
				if (0 != (int(hv_Number21 == 17)))
				{
					Threshold(ho_ImageReduced9, &ho_Region9, 0, 60);
					FillUp(ho_Region9, &ho_RegionFillUp4);
					Connection(ho_RegionFillUp4, &ho_ConnectedRegions25);
					OpeningRectangle1(ho_ConnectedRegions25, &ho_RegionOpening13, 125, 1);
					Connection(ho_RegionOpening13, &ho_RegionOpening13);
					SelectShape(ho_RegionOpening13, &ho_RegionOpening13, "width", "and", 700,
						99999);

					DilationRectangle1(ho_RegionOpening13, &ho_RegionOpening13, 25, 25);

					//裁剪
					GenRectangle1(&ho_Rectangle9, 217, 412, 1099, 1616);
					ReduceDomain(ho_ImageReduced9, ho_Rectangle9, &ho_ImageReduced6);
					MedianRect(ho_ImageReduced6, &ho_ImageMedian11, 10, 10);
					MedianRect(ho_ImageMedian11, &ho_ImageMedian10, 15, 1);
					VarThreshold(ho_ImageMedian10, &ho_Region13, 5, 500, 0.2, 15, "dark");
					Connection(ho_Region13, &ho_ConnectedRegions5);
					ClosingRectangle1(ho_ConnectedRegions5, &ho_RegionOpening23, 100, 5);
					SelectShape(ho_RegionOpening23, &ho_SelectedRegions3, (HTuple("width").Append("height")),
						"and", (HTuple(200).Append(50)), (HTuple(1200).Append(450)));
					Union1(ho_SelectedRegions3, &ho_RegionUnion23);
					ShapeTrans(ho_RegionUnion23, &ho_RegionTrans12, "rectangle1");
					DilationRectangle1(ho_RegionTrans12, &ho_RegionDilation, 1000, 1);
					Intersection(ho_RegionDilation, ho_ImageReduced9, &(*ho_camregion));
					Union2((*ho_camregion), ho_RegionDilation, &(*ho_camregion));
					//***************************8
					ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 350, 1);
					ReduceDomain(ho_ImageReduced9, ho_RegionErosion, &ho_ImageReduced9);
					BinaryThreshold(ho_ImageReduced9, &ho_Region9, "max_separability", "dark",
						&hv_UsedThreshold);
					//threshold (ImageReduced9, Region9, 0, 60)
					FillUp(ho_Region9, &ho_RegionFillUp4);
					Connection(ho_RegionFillUp4, &ho_ConnectedRegions25);
					SelectShape(ho_ConnectedRegions25, &ho_ConnectedRegions25, "width", "and",
						250, 99999);
					Union2(ho_ConnectedRegions25, ho_Rectangle_bottom, &ho_ConnectedRegions25
						);
					Union2(ho_ConnectedRegions25, ho_Rectangle_top, &ho_ConnectedRegions25);
					Union1(ho_ConnectedRegions25, &ho_ConnectedRegions25);
					FillUp(ho_ConnectedRegions25, &ho_ConnectedRegions25);
					ClosingRectangle1(ho_ConnectedRegions25, &ho_ConnectedRegions25, 1, 200);


					OpeningRectangle1(ho_ConnectedRegions25, &ho_RegionOpening13, 15, 15);
					Connection(ho_RegionOpening13, &ho_RegionOpening13);
					SelectShape(ho_RegionOpening13, &ho_RegionOpening13, "width", "and", 250,
						99999);
					FillUp(ho_RegionOpening13, &ho_RegionOpening13);
					DilationRectangle1(ho_RegionOpening13, &(*ho_camregion), 65, 25);



				}
				if (0 != (int(hv_Number21 == 18)))
				{

					//裁剪
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult32, 0.1, 0);
					MedianRect(ho_ImageResult32, &ho_ImageMedian11, 10, 10);
					Threshold(ho_ImageMedian11, &ho_Region1, 0, 50);
					FillUp(ho_Region1, &ho_Region1);
					OpeningRectangle1(ho_Region1, &ho_Region1, 45, 1);
					OpeningCircle(ho_Region1, &ho_RegionOpening6, 7);

					ShapeTrans(ho_RegionOpening6, &ho_RegionTrans1, "rectangle1");

					DilationRectangle1(ho_RegionTrans1, &(*ho_camregion), 65, 525);




				}
				if (0 != (int(hv_Number21 == 19)))
				{

					//提取小区域
					MedianImage(ho_ImageReduced9, &ho_ImageReduced9, "circle", 9, "mirrored");
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult7, 0.01, 0);
					Threshold(ho_ImageReduced9, &ho_Region4, 0, 80);
					FillUp(ho_Region4, &ho_RegionFillUp6);
					DilationCircle(ho_RegionFillUp6, &ho_RegionDilation6, 20.5);
					ErosionCircle(ho_RegionDilation6, &ho_RegionErosion, 20.5);
					OpeningRectangle1(ho_RegionErosion, &ho_RegionOpening14, 15, 15);
					Connection(ho_RegionOpening14, &ho_ConnectedRegions23);
					SelectShape(ho_ConnectedRegions23, &ho_SelectedRegions21, (HTuple("area").Append("column")),
						"and", (HTuple(309872).Append(850.09)), (HTuple(759598).Append(1296.16)));
					ShapeTrans(ho_SelectedRegions21, &ho_SelectedRegions21, "convex");

					DilationRectangle1(ho_SelectedRegions21, &(*ho_camregion), 25, 25);
					//************************
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult3, 0.1, 0);
					MedianImage(ho_ImageResult3, &ho_ImageMedian1, "circle", 6, "mirrored");
					Threshold(ho_ImageMedian1, &ho_Regions1, 6, 135);
					FillUp(ho_Regions1, &ho_RegionFillUp10);
					OpeningRectangle1(ho_RegionFillUp10, &ho_RegionOpening25, 25, 1);
					Connection(ho_RegionOpening25, &ho_ConnectedRegions);

					DilationRectangle1(ho_ConnectedRegions, &(*ho_camregion), 80, 80);

				}
				if (0 != (int(hv_Number21 == 20)))
				{
					ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 350, 1);
					MedianImage(ho_ImageReduced9, &ho_ImageReduced9, "circle", 8, "mirrored");
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult23, 0.01,
						0);
					Threshold(ho_ImageResult23, &ho_Region4, 0, 80);
					Connection(ho_Region4, &ho_ConnectedRegions3);
					SelectShape(ho_ConnectedRegions3, &ho_SelectedRegions28, (HTuple("area").Append("column")),
						"and", (HTuple(10340).Append(850.09)), (HTuple(500000).Append(1296.16)));
					OpeningCircle(ho_SelectedRegions28, &ho_RegionOpening9, 3.5);
					ShapeTrans(ho_RegionOpening9, &ho_RegionTrans2, "convex");
					//bai
					MeanImage(ho_ImageReduced9, &ho_ImageMean6, 5, 5);
					Emphasize(ho_ImageMean6, &ho_ImageEmphasize1, 45, 45, 9);
					Threshold(ho_ImageEmphasize1, &ho_Region11, 220, 255);
					Intersection(ho_Region11, ho_RegionErosion, &ho_Region11);
					OpeningCircle(ho_Region11, &ho_RegionOpening10, 5.5);
					Connection(ho_RegionOpening10, &ho_ConnectedRegions24);
					SelectShape(ho_ConnectedRegions24, &ho_SelectedRegions22, ((HTuple("column").Append("area")).Append("row")),
						"and", ((HTuple(780).Append(1500)).Append(1850)), ((HTuple(1300).Append(10000)).Append(2100)));
					Union2(ho_RegionTrans2, ho_SelectedRegions22, &ho_RegionUnion12);
					DilationCircle(ho_RegionUnion12, &ho_RegionDilation5, 3.5);
					Union1(ho_RegionDilation5, &ho_RegionUnion16);
					Connection(ho_RegionUnion16, &ho_ConnectedRegions42);

					ShapeTrans(ho_ConnectedRegions42, &ho_RegionTrans15, "convex");
					DilationCircle(ho_RegionTrans15, &(*ho_camregion), 20);
				}
				if (0 != (int(hv_Number21 == 21)))
				{
					//提取小区域
					ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 450, 1);
					ReduceDomain(ho_ImageReduced9, ho_RegionErosion, &ho_ImageReduced9);
					BinaryThreshold(ho_ImageReduced9, &ho_Region9, "max_separability", "dark",
						&hv_UsedThreshold);
					//threshold (ImageReduced9, Region9, 0, 60)
					FillUp(ho_Region9, &ho_RegionFillUp4);
					Connection(ho_RegionFillUp4, &ho_ConnectedRegions25);
					SelectShape(ho_ConnectedRegions25, &ho_ConnectedRegions25, "width", "and",
						250, 99999);
					Union2(ho_ConnectedRegions25, ho_Rectangle_bottom, &ho_ConnectedRegions25
						);
					Union2(ho_ConnectedRegions25, ho_Rectangle_top, &ho_ConnectedRegions25);
					Union1(ho_ConnectedRegions25, &ho_ConnectedRegions25);
					FillUp(ho_ConnectedRegions25, &ho_ConnectedRegions25);
					ClosingRectangle1(ho_ConnectedRegions25, &ho_ConnectedRegions25, 1, 200);


					OpeningRectangle1(ho_ConnectedRegions25, &ho_RegionOpening13, 15, 15);
					Connection(ho_RegionOpening13, &ho_RegionOpening13);
					SelectShape(ho_RegionOpening13, &ho_RegionOpening13, "width", "and", 250,
						99999);
					FillUp(ho_RegionOpening13, &ho_RegionOpening13);
					DilationRectangle1(ho_RegionOpening13, &(*ho_camregion), 65, 25);

				}
				if (0 != (int(hv_Number21 == 22)))
				{








				}
				if (0 != (int(hv_Number21 == 23)))
				{
					MedianRect(ho_ImageReduced9, &ho_ImageMedian, 1, 25);
					MultImage(ho_ImageMedian, ho_ImageMedian, &ho_ImageResult11, 0.01, 0);
					Threshold(ho_ImageResult11, &ho_Regions2, 0, 61);
					FillUp(ho_Regions2, &ho_RegionFillUp11);
					OpeningRectangle1(ho_RegionFillUp11, &ho_RegionOpening15, 55, 1);
					Connection(ho_RegionOpening15, &ho_RegionOpening15);
					SelectShape(ho_RegionOpening15, &ho_RegionOpening15, (HTuple("width").Append("height")),
						"and", (HTuple(500).Append(30)), (HTuple(1000).Append(400)));
					ShapeTrans(ho_RegionOpening15, &ho_RegionOpening15, "convex");

					DilationRectangle1(ho_RegionOpening15, &(*ho_JTReg), 55, 25);



				}
				if (0 != (int(hv_Number21 == 24)))
				{
					MedianRect(ho_ImageReduced9, &ho_ImageMedian, 1, 25);
					MultImage(ho_ImageMedian, ho_ImageMedian, &ho_ImageResult11, 0.01, 0);
					Threshold(ho_ImageResult11, &ho_Regions2, 0, 61);
					FillUp(ho_Regions2, &ho_RegionFillUp11);
					OpeningRectangle1(ho_RegionFillUp11, &ho_RegionOpening15, 55, 1);
					Connection(ho_RegionOpening15, &ho_RegionOpening15);
					SelectShape(ho_RegionOpening15, &ho_RegionOpening15, (HTuple("width").Append("height")),
						"and", (HTuple(500).Append(30)), (HTuple(1000).Append(400)));
					ShapeTrans(ho_RegionOpening15, &ho_RegionOpening15, "convex");

					DilationRectangle1(ho_RegionOpening15, &(*ho_JTReg), 55, 25);
					//*************

				}
				if (0 != (int(hv_Number21 == 25)))
				{
					MedianImage(ho_ImageReduced9, &ho_ImageReduced9, "circle", 8, "mirrored");
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult, 0.01, 0);
					Threshold(ho_ImageResult, &ho_Region15, 0, 65);
					FillUp(ho_Region15, &ho_RegionFillUp27);
					OpeningRectangle1(ho_RegionFillUp27, &ho_RegionOpening11, 25, 1);
					Connection(ho_RegionOpening11, &ho_RegionOpening11);
					SelectShape(ho_RegionOpening11, &ho_RegionOpening11, "width", "and", 150,
						99999);


					SelectShape(ho_RegionOpening11, &ho_RegionOpening12, "width", "and", 500,
						99999);
					DilationRectangle1(ho_RegionOpening12, &ho_RegionOpening12, 5, 15);
					SelectShape(ho_RegionOpening11, &(*ho_camregion), "width", "and", 100,
						500);

					Union2((*ho_camregion), ho_Rectangle_top, &(*ho_camregion));

					ClosingRectangle1((*ho_camregion), &(*ho_camregion), 1, 155);
					OpeningRectangle1((*ho_camregion), &(*ho_camregion), 1, 15);

					DilationRectangle1((*ho_camregion), &(*ho_camregion), 45, 15);
					Union2((*ho_camregion), ho_RegionOpening12, &(*ho_camregion));



				}
				if (0 != (int(hv_Number21 == 27)))
				{
					//裁剪

					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult3, 0.008,
						0);
					MedianImage(ho_ImageResult3, &ho_ImageMedian1, "circle", 6, "mirrored");
					Threshold(ho_ImageMedian1, &ho_Regions1, 6, 135);
					FillUp(ho_Regions1, &ho_RegionFillUp10);
					OpeningRectangle1(ho_RegionFillUp10, &ho_RegionOpening25, 25, 1);
					Connection(ho_RegionOpening25, &ho_ConnectedRegions);
					SelectShape(ho_ConnectedRegions, &ho_SelectedRegions16, "area", "and",
						105110, 265625);
					DilationRectangle1(ho_SelectedRegions16, &(*ho_camregion), 10, 10);

				}
				if (0 != (int(hv_Number21 == 29)))
				{
					//裁剪
					MultImage(ho_ImageReduced9, ho_ImageReduced9, &ho_ImageResult3, 0.008,
						0);
					MedianImage(ho_ImageResult3, &ho_ImageMedian1, "circle", 6, "mirrored");
					Threshold(ho_ImageMedian1, &ho_Regions1, 0, 135);
					FillUp(ho_Regions1, &ho_RegionFillUp10);
					OpeningRectangle1(ho_RegionFillUp10, &ho_RegionOpening25, 25, 1);
					Connection(ho_RegionOpening25, &ho_ConnectedRegions22);
					SelectShape(ho_ConnectedRegions22, &ho_SelectedRegions16, "area", "and",
						105110, 165625);
					DilationRectangle1(ho_SelectedRegions16, &(*ho_camregion), 10, 30);
				}

			}
		}
		else if (0 != (int(hv_Substring == HTuple("1_1"))))
		{
			if (0 != (int(hv_Number21 == 27)))
			{
				GenRectangle1(&ho_Rectangle1, 0, 400, 400, 1720);

				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);
				BinaryThreshold(ho_ImageReduced4, &ho_Region, "max_separability", "light",
					&hv_UsedThreshold1);
				FillUp(ho_Region, &ho_Region);
				Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
				Difference(ho_Region, ho_Region20, &ho_Region);
				ClosingRectangle1(ho_Region, &ho_Region, 30, 150);
				FillUp(ho_Region, &ho_Region);
				Connection(ho_Region, &ho_Region);
				ShapeTrans(ho_Region, &ho_Region, "convex");
				Union1(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 50);
				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, (HTuple("width").Append("height")), "and",
					(HTuple(30).Append(300)), (HTuple(99999).Append(99999)));
				Union1(ho_Region, &ho_Region);
				ShapeTrans(ho_Region, &ho_Region, "rectangle1");
				MoveRegion(ho_Region, &ho_RegionMoved, 0, 100);
				Difference(ho_Region, ho_RegionMoved, &ho_Region);
				MoveRegion(ho_Region, &ho_Region, 0, 40);
				ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
				EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 10, 50);
				SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(80).TupleRad(),
					HTuple(100).TupleRad());
				UnionCollinearContoursXld(ho_Edge, &ho_Edge, 200, 1, 30, 0.1, "attr_keep");
				SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 200, 3000, -0.5, 0.5);
				SortContoursXld(ho_Edge, &ho_Edge, "character", "true", "column");
				SelectObj(ho_Edge, &ho_Edge_left, 1);
				GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);
				TupleAdd(hv_Col, -90, &hv_Sub);
				hv_left_xld = hv_Sub;
				TupleInverse(hv_left_xld, &hv_left_xld);
				TupleInverse(hv_Row, &hv_left_Row);
				TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
				TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
				GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
				GenRegionContourXld(ho_Contour, &ho_Region, "filled");
				ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");


			}
			else
			{
				GenRectangle1(&ho_Rectangle1, 0, 700, 2100, 1720);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);
				BinaryThreshold(ho_ImageReduced4, &ho_Region, "max_separability", "light",
					&hv_UsedThreshold1);
				FillUp(ho_Region, &ho_Region);
				Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
				Difference(ho_Region, ho_Region20, &ho_Region);
				ClosingRectangle1(ho_Region, &ho_Region, 30, 150);
				FillUp(ho_Region, &ho_Region);
				Connection(ho_Region, &ho_Region);
				ShapeTrans(ho_Region, &ho_Region, "convex");
				Union1(ho_Region, &ho_Region);
				ShapeTrans(ho_Region, &ho_Region, "convex");
				OpeningRectangle1(ho_Region, &ho_Region, 1, 1700);
				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, (HTuple("width").Append("height")), "and",
					(HTuple(30).Append(1600)), (HTuple(99999).Append(99999)));
				Union1(ho_Region, &ho_Region);
				ShapeTrans(ho_Region, &ho_Region, "rectangle1");

				ErosionRectangle1(ho_Region, &ho_Region, 95, 1);
				MoveRegion(ho_Region, &ho_RegionMoved, 0, 140);
				Difference(ho_Region, ho_RegionMoved, &ho_Region);

				GrayErosionRect(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);


				if (0 != (HTuple(HTuple(HTuple(HTuple(HTuple(HTuple(int(hv_Number21 == 3)).TupleOr(int(hv_Number21 == 4))).TupleOr(int(hv_Number21 == 5))).TupleOr(int(hv_Number21 == 12))).TupleOr(int(hv_Number21 == 16))).TupleOr(int(hv_Number21 == 18))).TupleOr(int(hv_Number21 == 25))))
				{

					if (0 != (int(hv_Number21 == 4)))
					{
						DilationRectangle1(ho_Region, &ho_Region, 55, 1);
					}

					DilationRectangle1(ho_Region, &ho_Region, 15, 1);
					ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
					GrayDilationRect(ho_ImageReduced4, &ho_ImageReduced4, 200, 10);
					GrayDilationShape(ho_ImageReduced4, &ho_ImageReduced4, 5, 5, "octagon");
					ScaleImageMax(ho_ImageReduced4, &ho_ImageReduced4);
					ErosionRectangle1(ho_Region, &ho_Region, 11, 1);
				}
				ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
				EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 7, 30);
				SelectContoursXld(ho_Edges, &ho_Edges, "maximum_extent", 200, 3000, -0.5,
					0.5);
				//select_obj (Edges, Edge, 1)
				//tuple_deg (1.57, angle)
				//get_contour_attrib_xld (Edge, 'edge_direction', Attrib)
				if (HDevWindowStack::IsOpen())
					DispObj(ho_Image, HDevWindowStack::GetActive());
				SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(60).TupleRad(),
					HTuple(130).TupleRad());
				SegmentContourAttribXld(ho_Edge, &ho_Edge, "response", "and", 20, 250);


				UnionCollinearContoursXld(ho_Edge, &ho_Edge, 400, 1, 50, 0.1, "attr_keep");
				SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 1400, 3000, -0.5,
					0.5);
				SortContoursXld(ho_Edge, &ho_Edge, "upper_left", "true", "column");
				SelectObj(ho_Edge, &ho_Edge_left, 1);

				GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);
				if (0 != (int((hv_Row.TupleLength()) != 0)))
				{
					TupleAdd(hv_Col, -90, &hv_Sub);
					hv_left_xld = hv_Sub;
					TupleInverse(hv_left_xld, &hv_left_xld);
					TupleInverse(hv_Row, &hv_left_Row);
					TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
					TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
					GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
					GenRegionContourXld(ho_Contour, &ho_Region, "filled");
					ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");
				}
				else
				{
					MoveRegion(ho_RegionMoved, &ho_RegionMoved, 0, -300);
					ReduceDomain(ho_Image, ho_RegionMoved, &ho_ImageReduced);
					EdgesSubPix(ho_ImageReduced, &ho_Edge, "canny", 3, 30, 50);
					SortContoursXld(ho_Edge, &ho_Edge, "character", "true", "column");
					SelectObj(ho_Edge, &ho_Edge_left, 1);
					GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);
					TupleAdd(hv_Col, 90, &hv_Sub);
					hv_left_xld = hv_Sub;
					TupleInverse(hv_left_xld, &hv_left_xld);
					TupleInverse(hv_Row, &hv_left_Row);
					TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
					TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
					GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
					GenRegionContourXld(ho_Contour, &ho_Region, "filled");
					ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");








				}
				//***************************************************************8

			}
		}
		else if (0 != (int(hv_Substring == HTuple("3_1"))))
		{
			if (0 != (int(hv_Number21 == 27)))
			{
				GenRectangle1(&ho_Rectangle1, 0, 500, 400, 1720);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);
				Threshold(ho_ImageReduced4, &ho_Region, 0, 30);
				//
				FillUp(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 300);
				Connection(ho_Region, &ho_Region);
				SortRegion(ho_Region, &ho_Region, "first_point", "true", "column");
				SelectObj(ho_Region, &ho_RegionEdge, 1);
				DilationRectangle1(ho_RegionEdge, &ho_Region, 170, 1);
				MoveRegion(ho_Region, &ho_RegionMove, 0, 10);
				Difference(ho_RegionMove, ho_RegionEdge, &ho_Region);

				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, "height", "and", 150, 99999);
				SortRegion(ho_Region, &ho_Region, "first_point", "flase", "column");
				SelectObj(ho_Region, &ho_Region, 1);
				ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");

			}
			else
			{
				GenRectangle1(&ho_Rectangle1, 0, 500, 2100, 1720);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);
				Threshold(ho_ImageReduced4, &ho_Region, 0, 30);
				//
				FillUp(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 500);
				Connection(ho_Region, &ho_Region);
				SortRegion(ho_Region, &ho_Region, "first_point", "true", "column");
				SelectObj(ho_Region, &ho_RegionEdge, 1);
				DilationRectangle1(ho_RegionEdge, &ho_Region, 290, 1);
				MoveRegion(ho_Region, &ho_RegionMove, 0, 10);
				Difference(ho_RegionMove, ho_RegionEdge, &ho_Region);

				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, "height", "and", 150, 99999);
				SortRegion(ho_Region, &ho_Region, "first_point", "flase", "column");
				SelectObj(ho_Region, &ho_Region, 1);
				ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");
				AreaCenter(ho_RegionUnion, &hv_Area, &hv_Row, &hv_Column);

				MoveRegion(ho_Region, &ho_Region, 0, 30);
				Intersection(ho_Region, ho_RegionUnion, &ho_RegionIntersection);
				if (0 != (HTuple(HTuple(HTuple(HTuple(HTuple(HTuple(int(hv_Number21 == 3)).TupleOr(int(hv_Number21 == 4))).TupleOr(int(hv_Number21 == 5))).TupleOr(int(hv_Number21 == 12))).TupleOr(int(hv_Number21 == 16))).TupleOr(int(hv_Number21 == 18))).TupleOr(int(hv_Number21 == 25))))
				{


					DilationRectangle1(ho_Region, &ho_Region, 15, 1);
					ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
					GrayDilationRect(ho_ImageReduced4, &ho_ImageReduced4, 400, 10);
					GrayClosingShape(ho_ImageReduced4, &ho_ImageReduced4, 9, 9, "octagon");
					ErosionRectangle1(ho_Region, &ho_Region, 7, 1);
				}
				MeanImage(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);
				ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);

				EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 7, 30);
				SelectContoursXld(ho_Edges, &ho_Edges, "maximum_extent", 200, 3000, -0.5,
					0.5);
				//select_obj (Edges, ObjectSelected, 1)

				//get_contour_attrib_xld (ObjectSelected, 'response', Attrib)
				//get_contour_attrib_xld (ObjectSelected, 'edge_direction', Attrib)
				//tuple_deg (4.7, angle)

				SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "or", HTuple(70).TupleRad(),
					HTuple(140).TupleRad());
				SegmentContourAttribXld(ho_Edge, &ho_Edge, "response", "and", 15, 250);
				UnionCollinearContoursXld(ho_Edge, &ho_Edge, 300, 1, 30, HTuple(20).TupleRad(),
					"attr_keep");

				SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 500, 3000, -0.5, 0.5);


				SortContoursXld(ho_Edge, &ho_Edge, "upper_left", "true", "column");
				SelectObj(ho_Edge, &ho_Edge_left, 1);
				GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);
				if (0 != (int((hv_Row.TupleLength()) == 0)))
				{
					MoveRegion(ho_Region, &ho_RegionUnion, 1, 65);
					Difference(ho_Region, ho_RegionUnion, &ho_RegionUnion);


				}
				else
				{
					TupleAdd(hv_Col, -95, &hv_Sub);
					hv_left_xld = hv_Sub;
					TupleInverse(hv_left_xld, &hv_left_xld);
					TupleInverse(hv_Row, &hv_left_Row);
					TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
					TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
					GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
					GenRegionContourXld(ho_Contour, &ho_Region, "filled");
					ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");
				}

				//***************************************************************8

			}
		}
		else if (0 != (int(hv_Substring == HTuple("1_2"))))
		{
			if (0 != (int(hv_Number21 == 27)))
			{
				GenRectangle1(&ho_Rectangle1, 0, 500, 400, 1720);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);
				Threshold(ho_ImageReduced4, &ho_Region, 0, 200);
				Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
				Difference(ho_Region, ho_Region20, &ho_Region);
				FillUp(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 200);
				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, (HTuple("height").Append("width")), "and",
					(HTuple(200).Append(50)), (HTuple(99999).Append(9999)));
				Union1(ho_Region, &ho_Region);

				ShapeTrans(ho_Region, &ho_Region, "rectangle1");

				ErosionRectangle1(ho_Region, &ho_Region, 85, 1);
				MoveRegion(ho_Region, &ho_RegionMoved, 0, 120);
				Difference(ho_Region, ho_RegionMoved, &ho_Region);

				//gray_dilation_rect (ImageReduced4, ImageMax, Height, Width)
				//gray_opening_rect (ImageReduced4, ImageReduced4, 5, 5)
				GrayClosingShape(ho_ImageReduced4, &ho_ImageReduced4, 7, 7, "octagon");



				MeanImage(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);
				ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
				EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 10, 50);
				SegmentContoursXld(ho_Edges, &ho_Edges, "lines_circles", 7, 15, 10);
				SelectContoursXld(ho_Edges, &ho_Edges, "maximum_extent", 100, 3000, -0.5,
					0.5);

				SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(60).TupleRad(),
					HTuple(120).TupleRad());
				UnionCollinearContoursXld(ho_Edge, &ho_Edge, 40, 1, 10, 0.1, "attr_keep");
				SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 100, 3000, -0.5, 0.5);
				SortContoursXld(ho_Edge, &ho_Edge, "upper_left", "false", "column");
				SelectObj(ho_Edge, &ho_Edge_left, 1);
				GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);

				if (0 != (int(hv_Substring == HTuple("3_2"))))
				{
					TupleAdd(hv_Col, -85, &hv_Sub);
				}
				else
				{
					TupleAdd(hv_Col, -95, &hv_Sub);
				}
				hv_left_xld = hv_Sub;
				TupleInverse(hv_left_xld, &hv_left_xld);
				TupleInverse(hv_Row, &hv_left_Row);
				TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
				TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
				GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
				GenRegionContourXld(ho_Contour, &ho_Region, "filled");
				ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");

			}
			else
			{

				GenRectangle1(&ho_Rectangle1, 0, 500, 2100, 1820);

				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);

				Threshold(ho_ImageReduced4, &ho_Region, 0, 200);
				Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
				Difference(ho_Region, ho_Region20, &ho_Region);
				FillUp(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 1700);
				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, (HTuple("height").Append("width")), "and",
					(HTuple(1900).Append(50)), (HTuple(99999).Append(9999)));
				Union1(ho_Region, &ho_Region);

				ShapeTrans(ho_Region, &ho_Region, "rectangle1");

				ErosionRectangle1(ho_Region, &ho_RegionErosion, 255, 1);
				Difference(ho_Region, ho_RegionErosion, &ho_Region);
				Connection(ho_Region, &ho_Region);
				SelectObj(ho_Region, &ho_Region, 1);
				MoveRegion(ho_Region, &ho_Region, 1, 45);

				//gray_dilation_rect (ImageReduced4, ImageMax, Height, Width)
				GrayOpeningRect(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);

				if (0 != (HTuple(HTuple(HTuple(HTuple(HTuple(HTuple(int(hv_Number21 == 3)).TupleOr(int(hv_Number21 == 4))).TupleOr(int(hv_Number21 == 5))).TupleOr(int(hv_Number21 == 12))).TupleOr(int(hv_Number21 == 16))).TupleOr(int(hv_Number21 == 18))).TupleOr(int(hv_Number21 == 25))))
				{


					DilationRectangle1(ho_Region, &ho_Region, 15, 1);
					ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
					GrayDilationRect(ho_ImageReduced4, &ho_ImageReduced4, 400, 10);
					ScaleImageMax(ho_ImageReduced4, &ho_ImageReduced4);
					ErosionRectangle1(ho_Region, &ho_Region, 5, 1);
				}
				MeanImage(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);
				Intersection(ho_Region, ho_Rectangle1, &ho_Region);
				ErosionRectangle1(ho_Region, &ho_Region, 5, 1);
				ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);

				EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 7, 20);
				SelectContoursXld(ho_Edges, &ho_Edges, "maximum_extent", 100, 3000, -0.5,
					0.5);
				//select_obj (Edges, ObjectSelected, 2)
				//get_contour_attrib_xld (ObjectSelected, 'response', Attrib)
				SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(70).TupleRad(),
					HTuple(110).TupleRad());
				SegmentContourAttribXld(ho_Edge, &ho_Edge, "response", "and", 70, 250);

				UnionCollinearContoursXld(ho_Edge, &ho_Edge, 250, 1, 7, 0.1, "attr_keep");
				UnionAdjacentContoursXld(ho_Edge, &ho_Edge, 20, 1, "attr_keep");
				SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 1300, 4000, -0.5,
					0.5);

				//**为什么
				SortContoursXld(ho_Edge, &ho_Edge, "upper_left", "false", "column");
				SelectObj(ho_Edge, &ho_Edge_left, 1);
				GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);
				if (0 != (int((hv_Row.TupleLength()) != 0)))
				{
					if (0 != (int(hv_Substring == HTuple("3_2"))))
					{
						TupleAdd(hv_Col, -85, &hv_Sub);
					}
					else
					{
						TupleAdd(hv_Col, -95, &hv_Sub);
					}
					hv_left_xld = hv_Sub;
					TupleInverse(hv_left_xld, &hv_left_xld);
					TupleInverse(hv_Row, &hv_left_Row);
					TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
					TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
					GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
					GenRegionContourXld(ho_Contour, &ho_Region, "filled");
					ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");

					Intensity(ho_RegionUnion, ho_Image, &hv_Mean, &hv_Deviation);
				}
				else
				{

					GenRectangle1(&ho_Rectangle1, 0, 500, 2100, 1620);
					ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);

					Threshold(ho_ImageReduced4, &ho_Region, 0, 220);
					Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
					Difference(ho_Region, ho_Region20, &ho_Region);
					FillUp(ho_Region, &ho_Region);
					MoveRegion(ho_Region, &ho_RegionMoved, 1, 90);
					Difference(ho_Region, ho_RegionMoved, &ho_RegionDifference);
					ErosionRectangle1(ho_RegionDifference, &ho_RegionDifference, 7, 7);
					Connection(ho_RegionDifference, &ho_RegionDifference);
					SelectShapeStd(ho_RegionDifference, &ho_RegionDifference, "max_area", 70);
					ShapeTrans(ho_RegionDifference, &ho_RegionUnion, "rectangle1");
					Intensity(ho_RegionUnion, ho_Image, &hv_Mean, &hv_Deviation);

				}





				//***************************************************************8

			}
		}
		else if (0 != (int(hv_Substring == HTuple("3_2"))))
		{
			if (0 != (int(hv_Number21 == 27)))
			{
				GenRectangle1(&ho_Rectangle1, 0, 500, 400, 1720);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);
				Threshold(ho_ImageReduced4, &ho_Region, 0, 220);
				Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
				Difference(ho_Region, ho_Region20, &ho_Region);
				FillUp(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 200);
				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, (HTuple("height").Append("width")), "and",
					(HTuple(200).Append(50)), (HTuple(99999).Append(9999)));
				Union1(ho_Region, &ho_Region);

				ShapeTrans(ho_Region, &ho_Region, "rectangle1");

				ErosionRectangle1(ho_Region, &ho_Region, 85, 1);
				MoveRegion(ho_Region, &ho_RegionMoved, 0, 120);
				Difference(ho_Region, ho_RegionMoved, &ho_Region);

				//gray_dilation_rect (ImageReduced4, ImageMax, Height, Width)
				GrayOpeningRect(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);





				MeanImage(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);
				ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
				EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 10, 50);
				SegmentContoursXld(ho_Edges, &ho_Edges, "lines_circles", 5, 4, 2);
				SelectContoursXld(ho_Edges, &ho_Edges, "maximum_extent", 100, 3000, -0.5,
					0.5);

				SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(80).TupleRad(),
					HTuple(100).TupleRad());
				UnionCollinearContoursXld(ho_Edge, &ho_Edge, 40, 1, 10, 0.1, "attr_keep");
				SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 100, 3000, -0.5, 0.5);
				SortContoursXld(ho_Edge, &ho_Edge, "upper_left", "true", "column");
				SelectObj(ho_Edge, &ho_Edge_left, 1);
				GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);

				if (0 != (int(hv_Substring == HTuple("3_2"))))
				{
					TupleAdd(hv_Col, -85, &hv_Sub);
				}
				else
				{
					TupleAdd(hv_Col, -95, &hv_Sub);
				}
				hv_left_xld = hv_Sub;
				TupleInverse(hv_left_xld, &hv_left_xld);
				TupleInverse(hv_Row, &hv_left_Row);
				TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
				TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
				GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
				GenRegionContourXld(ho_Contour, &ho_Region, "filled");
				ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");

			}
			else
			{

				GenRectangle1(&ho_Rectangle1, 0, 500, 2100, 1820);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);

				Threshold(ho_ImageReduced4, &ho_Region, 0, 240);
				Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
				Difference(ho_Region, ho_Region20, &ho_Region);
				FillUp(ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 1, 1700);
				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, (HTuple("height").Append("width")), "and",
					(HTuple(1900).Append(50)), (HTuple(99999).Append(9999)));
				Union1(ho_Region, &ho_Region);

				ShapeTrans(ho_Region, &ho_Region, "rectangle1");

				ErosionRectangle1(ho_Region, &ho_RegionErosion, 255, 1);
				Difference(ho_Region, ho_RegionErosion, &ho_Region);
				Connection(ho_Region, &ho_Region);
				SelectObj(ho_Region, &ho_Region, 1);
				MoveRegion(ho_Region, &ho_Region, 1, 35);

				//gray_dilation_rect (ImageReduced4, ImageMax, Height, Width)
				GrayOpeningRect(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);

				if (0 != (HTuple(HTuple(HTuple(HTuple(HTuple(HTuple(int(hv_Number21 == 3)).TupleOr(int(hv_Number21 == 4))).TupleOr(int(hv_Number21 == 5))).TupleOr(int(hv_Number21 == 12))).TupleOr(int(hv_Number21 == 16))).TupleOr(int(hv_Number21 == 18))).TupleOr(int(hv_Number21 == 25))))
				{


					DilationRectangle1(ho_Region, &ho_Region, 15, 1);
					ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);
					GrayDilationRect(ho_ImageReduced4, &ho_ImageReduced4, 400, 10);
					ScaleImageMax(ho_ImageReduced4, &ho_ImageReduced4);
					ErosionRectangle1(ho_Region, &ho_Region, 5, 1);
				}
				MeanImage(ho_ImageReduced4, &ho_ImageReduced4, 5, 5);
				Intersection(ho_Region, ho_Rectangle1, &ho_Region);
				ErosionRectangle1(ho_Region, &ho_Region, 5, 1);
				ReduceDomain(ho_ImageReduced4, ho_Region, &ho_ImageReduced4);

				EdgesSubPix(ho_ImageReduced4, &ho_Edges, "canny", 15, 7, 20);
				SelectContoursXld(ho_Edges, &ho_Edges, "maximum_extent", 100, 3000, -0.5,
					0.5);
				//select_obj (Edges, ObjectSelected, 3)
				//get_contour_attrib_xld (ObjectSelected, 'response', Attrib)
				SegmentContourAttribXld(ho_Edges, &ho_Edge, "edge_direction", "and", HTuple(70).TupleRad(),
					HTuple(110).TupleRad());
				SegmentContourAttribXld(ho_Edge, &ho_Edge, "response", "and", 80, 250);

				UnionCollinearContoursXld(ho_Edge, &ho_Edge, 250, 1, 7, 0.1, "attr_keep");

				UnionAdjacentContoursXld(ho_Edge, &ho_Edge, 20, 1, "attr_keep");
				SelectContoursXld(ho_Edge, &ho_Edge, "maximum_extent", 1300, 4000, -0.5,
					0.5);


				SortContoursXld(ho_Edge, &ho_Edge, "upper_left", "true", "column");
				SelectObj(ho_Edge, &ho_Edge_left, 1);
				GetContourXld(ho_Edge_left, &hv_Row, &hv_Col);
				if (0 != (int((hv_Row.TupleLength()) != 0)))
				{
					if (0 != (int(hv_Substring == HTuple("3_2"))))
					{
						TupleAdd(hv_Col, -85, &hv_Sub);
					}
					else
					{
						TupleAdd(hv_Col, -95, &hv_Sub);
					}
					hv_left_xld = hv_Sub;
					TupleInverse(hv_left_xld, &hv_left_xld);
					TupleInverse(hv_Row, &hv_left_Row);
					TupleConcat(hv_Col, hv_left_xld, &hv_Contour_col);
					TupleConcat(hv_Row, hv_left_Row, &hv_Contour_row);
					GenContourPolygonXld(&ho_Contour, hv_Contour_row, hv_Contour_col);
					GenRegionContourXld(ho_Contour, &ho_Region, "filled");
					ShapeTrans(ho_Region, &ho_RegionUnion, "rectangle1");

					Intensity(ho_RegionUnion, ho_Image, &hv_Mean, &hv_Deviation);
				}
				else
				{

					GenRectangle1(&ho_Rectangle1, 0, 500, 2100, 1620);
					ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced4);

					Threshold(ho_ImageReduced4, &ho_Region, 0, 220);
					Threshold(ho_ImageReduced4, &ho_Region20, 0, 0);
					Difference(ho_Region, ho_Region20, &ho_Region);
					FillUp(ho_Region, &ho_Region);
					MoveRegion(ho_Region, &ho_RegionMoved, 1, 90);
					Difference(ho_Region, ho_RegionMoved, &ho_RegionDifference);
					ErosionRectangle1(ho_RegionDifference, &ho_RegionDifference, 7, 7);
					Connection(ho_RegionDifference, &ho_RegionDifference);
					SelectShapeStd(ho_RegionDifference, &ho_RegionDifference, "max_area", 70);
					ShapeTrans(ho_RegionDifference, &ho_RegionUnion, "rectangle1");
					Intensity(ho_RegionUnion, ho_Image, &hv_Mean, &hv_Deviation);

				}





				//***************************************************************8

			}

		}
		RegionFeatures((*ho_camregion), "width", &hv_Value);
		if (0 != (int(hv_Value < 700)))
		{
			ErosionRectangle1(ho_RegionUnion, &ho_RegionErosion, 225, 1);
			Intersection(ho_RegionErosion, (*ho_camregion), &(*ho_camregion));
		}

		DilationRectangle1((*ho_JTReg), &(*ho_JTReg), 215, 5);
		Union2((*ho_camregion), (*ho_JTReg), &(*ho_camregion));
		GenRectangle1(&ho_RectangleImage, 0, 0, 2047, 2047);
		Intersection(ho_RectangleImage, (*ho_camregion), &(*ho_camregion));




		CountObj(ho_RegionUnion, &hv_Number1);
		if (0 != (int(hv_Number1 > 0)))
		{
			//通过外轮廓提取拼接处区域
			MoveRegion(ho_RegionUnion, &ho_RegionUnion, 1, 0);
			SmallestRectangle2(ho_RegionUnion, &hv_Row16, &hv_Column16, &hv_Phi3, &hv_Length1,
				&hv_Length2);

			if (true)
			{
				//提取仿射最小外接矩形的四个顶点坐标
				GenRectangle2ContourXld(&(*ho_DetectRegion), hv_Row16, hv_Column16, hv_Phi3,
					hv_Length1, hv_Length2);
				//union1 (Region, DetectRegion)
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
					GenCrossContourXld(&ho_Cross1, 3, hv_Column16 + hv_a, 26, hv_Phi3);
					hv_c = (hv_Length1 * hv_Cos) - (hv_Length2 * hv_Sin);
					hv_d = (hv_Length1 * hv_Sin) + (hv_Length2 * hv_Cos);
					GenCrossContourXld(&ho_Cross2, 3, hv_Column16 + hv_c, 26, hv_Phi3);
					hv_e = (hv_Length1 * hv_Cos) + (hv_Length2 * hv_Sin);
					hv_f = (hv_Length1 * hv_Sin) - (hv_Length2 * hv_Cos);
					GenCrossContourXld(&ho_Cross3, 3, hv_Column16 + hv_e, 26, hv_Phi3);
					hv_g = ((-hv_Length1) * hv_Cos) + (hv_Length2 * hv_Sin);
					hv_h = ((-hv_Length1) * hv_Sin) - (hv_Length2 * hv_Cos);
					GenCrossContourXld(&ho_Cross4, 3, hv_Column16 + hv_g, 26, hv_Phi3);
					//gen_cross_contour_xld (Cross4, Row16-h, Column16+g, 26, Phi3)
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

					SelectObj(ho_SortedRegions, &(*ho_PointRegion), 2);


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
		string strerr = std::to_string(hv_ProNum.I()) + "-" + std::to_string(hv_StaNum.I()) + "_" + std::to_string(hv_CamNum.I()) + "_" + std::to_string(hv_ImageNum.I()) + "ImageShieldProcessAMiddleSelfTest4_84_12 error:" + strErr;
		VeErrMessage.push_back(QString::fromStdString(strerr));
	}
	reg = -1;
	return -1;
}

int JSZCAlgorithmsDLLPVD::ImageProcessZJ4BlackDefects1Machine1_2_3Station(HObject ho_Image, HObject ho_DetectReg,
	HObject ho_Mask, HTuple hv_ProNum, HTuple hv_StaNum, HTuple hv_CamNum, HTuple hv_ImageNum,
	HTuple* hv_dt)
{
	// Local iconic variables
	HObject  ho_reg, ho_EmptyRegion, ho_JTRegion;
	HObject  ho_RegionUnion, ho_camregion, ho_BlackSE, ho_RegionDetect;
	HObject  ho_Rectangle, ho_ImageReduced, ho_ImageTopHat, ho_RegionDetect_;
	HObject  ho_ImageTopHat_, ho_SortedRegions, ho_ImageBlackEdge;
	HObject  ho_Region, ho_ImageTexture, ho_RegionJT, ho_RegionCount;
	HObject  ho_ImageMean5, ho_RegionDynThresh5, ho_RegionErosion5;
	HObject  ho_RegionIntersection5, ho_ConnectedRegions13, ho_SelectedRegions15;
	HObject  ho_RegionUnion2, ho_RegionClosing5, ho_ConnectedRegions22;
	HObject  ho_SelectedRegions16, ho_RegionMoved, ho_Region_;
	HObject  ho_ImageMedian, ho_Region_Blob, ho_SelectedRegions;
	HObject  ho_ImageBlackEdge_, ho_Region_dectct2, ho_ImageMedian1;
	HObject  ho_RegionDynThresh, ho_ConnectedRegions, ho_Region_dectct2_;
	HObject  ho_RegionInner, ho_Region_detect, ho_JTRegion_;
	HObject  ho_RegionDifference, ho_JTRegion_down, ho_RegionBlack;
	HObject  ho_ImageClosing, ho_ImageSub, ho_ImageScale, ho_RegionTrans;
	HObject  ho_RegionErosion, ho_RegionIntersection, ho_JTRegion_down_;
	HObject  ho_Rectangle1, ho_ImageReduced11, ho_RegionDilation;
	HObject  ho_ImageMeanA, ho_ImageMeanB, ho_Region_detect_;
	HObject  ho_regions, ho_camregion1, ho_Region_detect1, ho_Region_detect2;
	HObject  ho_SelectedRegions1, ho_SelectedRegions2, ho_ConnectedRegions23;
	HObject  ho_SelectedRegions28, ho_RegionMoved3, ho_RegionClosing1;
	HObject  ho_RegionDilation2, ho_ImageReduced1, ho_ImageScaled1;
	HObject  ho_ImageMean1, ho_RegionDynThresh1, ho_RegionClosing2;
	HObject  ho_RegionOpening, ho_RegionErosion3, ho_RegionIntersection2;
	HObject  ho_ConnectedRegions4, ho_SelectedRegions5, ho_RegionOpening1;
	HObject  ho_ConnectedRegions5, ho_SelectedRegions6, ho_RegionDilation3;
	HObject  ho_ROI_0, ho_ImageMean, ho_RegionBorder, ho_ObjectSelected;
	HObject  ho_RegionIntersection1, ho_SelectedRegions23, ho_Lines;
	HObject  ho_SelectedContours, ho_RegionDilation1, ho_ImageMedian3;
	HObject  ho_EdgeAmplitude2, ho_ImageScaled2, ho_Region2;
	HObject  ho_ConnectedRegions3, ho_SelectedRegions4, ho_SelectedRegions27;
	HObject  ho_region_zw, ho_ConnectedRegions1, ho_RegionClosing;
	HObject  ho_camregion2, ho_Region1, ho_JTRegion1, ho_Regions;
	HObject  ho_Selected_circles, ho_EmptyRegion2, ho_EmptyRegion1;
	HObject  ho___Tmp_Obj_0;

	// Local control variables
	HTuple  hv_Num, hv_N, hv_n, hv_Index9, hv__, hv_Row;
	HTuple  hv_Column, hv_Area, hv_Number, hv_Min, hv_Max, hv_Range;
	HTuple  hv_Mult, hv_Add, hv_Mean1, hv_Deviation1, hv_Index;
	HTuple  hv_Area1, hv_Row3, hv_Column3, hv_Mean, hv_Deviation;
	HTuple  hv_GenParamValue, hv_Index10, hv_name;

	try
	{
		//缺陷暂存区域
		GenEmptyObj(&ho_reg);
		GenEmptyRegion(&ho_EmptyRegion);
		GenEmptyRegion(&ho_JTRegion);
		GenRegionContourXld(ho_DetectReg, &ho_DetectReg, "filled");
		Union1(ho_DetectReg, &ho_RegionUnion);
		Union1(ho_Mask, &ho_camregion);
		DilationCircle(ho_camregion, &ho_camregion, 35);
		GenDiscSe(&ho_BlackSE, "byte", 95, 5, 0);

		//缺陷个数
		hv_Num = HTuple();
		//屏蔽检测项
		hv_N = 0;
		//n[0]:黑点/腐蚀 41
		//n[1]:划伤 42
		//n[2]:打磨纹 43
		//n[3]:多字体 47
		//n[4]:毛刺 60
		//n[5]:脏污 51
		//n[6]:异物 48
		//n[7]:边缘 52
		//n[8]:焊穿 57
		//n[9]:刀纹 45
		//n[10]:压伤 58
		//n[11]:漏组件 46
		//n[12]:横纹 44
		//n[13]:过铣 56
		//n[14]:飞漆 59
		//n[15]:溢漆 49
		//n[16]:漏喷砂 MOP

		CreateDict(&(*hv_dt));

		hv_n.Clear();
		hv_n[0] = "DT41_T";
		hv_n[1] = "DT42_T";
		hv_n[2] = "DT43_T";
		hv_n[3] = "DT47_T";
		hv_n[4] = "DT60_T";
		hv_n[5] = "DT51_T";
		hv_n[6] = "DT48_T";
		hv_n[7] = "DT52_T";
		hv_n[8] = "DT57_T";
		hv_n[9] = "DT45_T";
		hv_n[10] = "DT58_T";
		hv_n[11] = "DT46_T";
		hv_n[12] = "DT44_T";
		hv_n[13] = "DT56_T";
		hv_n[14] = "DT59_T";
		hv_n[15] = "DT49_T";
		hv_n[16] = "MOP_T";
		GenEmptyRegion(&ho_EmptyRegion);
		{
			HTuple end_val43 = (hv_n.TupleLength()) - 1;
			HTuple step_val43 = 1;
			for (hv_Index9 = 0; hv_Index9.Continue(end_val43, step_val43); hv_Index9 += step_val43)
			{
				SetDictObject(ho_EmptyRegion, (*hv_dt), HTuple(hv_n[hv_Index9]));
			}
		}
		MedianRect(ho_Image, &ho_Image, 3, 3);
		//****************************1-1   **************************************
		if (0 != (HTuple(int(hv_StaNum == 1)).TupleAnd(int(hv_CamNum == 1))))
		{

			Union1(ho_RegionUnion, &ho_RegionDetect);

			//*****提取黑缝隙
			AreaCenter(ho_RegionDetect, &hv__, &hv_Row, &hv_Column);
			GenRectangle1(&ho_Rectangle, 0, hv_Column - 50, 2048, hv_Column + 200);
			ReduceDomain(ho_Image, ho_Rectangle, &ho_ImageReduced);

			AutoThreshold(ho_ImageReduced, &ho_ImageTopHat, 9);
			ClosingRectangle1(ho_ImageTopHat, &ho_ImageTopHat, 5, 5);
			//gray_tophat (ImageReduced, BlackSE, ImageTopHat)
			//threshold (ImageTopHat, ImageTopHat, 0, 50)

			FillUp(ho_ImageTopHat, &ho_ImageTopHat);
			if (0 != (HTuple(HTuple(HTuple(HTuple(HTuple(int(hv_ImageNum == 3)).TupleOr(int(hv_ImageNum == 5))).TupleOr(int(hv_ImageNum == 12))).TupleOr(int(hv_ImageNum == 16))).TupleOr(int(hv_ImageNum == 18))).TupleOr(int(hv_ImageNum == 25))))
			{
				OpeningRectangle1(ho_ImageTopHat, &ho_ImageTopHat, 10, 180);
			}
			Connection(ho_ImageTopHat, &ho_ImageTopHat);
			SelectShape(ho_ImageTopHat, &ho_ImageTopHat, "height", "and", 2000, 99999);
			DilationRectangle1(ho_RegionDetect, &ho_RegionDetect_, 25, 51);
			SelectShapeProto(ho_ImageTopHat, ho_RegionDetect_, &ho_ImageTopHat_, "overlaps_rel",
				5, 100);

			AreaCenter(ho_ImageTopHat_, &hv_Area, &hv__, &hv__);
			if (0 != (hv_Area.TupleLength()))
			{
				SortRegion(ho_ImageTopHat_, &ho_SortedRegions, "upper_right", "false", "column");
				SelectObj(ho_SortedRegions, &ho_ImageBlackEdge, 1);
			}
			else
			{
				SortRegion(ho_ImageTopHat, &ho_SortedRegions, "upper_left", "true", "column");
				SelectObj(ho_SortedRegions, &ho_ImageBlackEdge, 1);
			}
			ErosionRectangle1(ho_ImageBlackEdge, &ho_ImageBlackEdge, 11, 11);
			ExpandGray(ho_ImageBlackEdge, ho_Image, ho_ImageBlackEdge, &ho_ImageBlackEdge,
				50, "image", 3);
			DilationRectangle1(ho_ImageBlackEdge, &ho_ImageBlackEdge, 100, 11);
			MoveRegion(ho_ImageBlackEdge, &ho_ImageBlackEdge, 0, 47);
			DilationRectangle1(ho_ImageBlackEdge, &ho_ImageBlackEdge, 1, 51);
			//*************************************
			//1-1-2
			Union1(ho_RegionUnion, &ho_Region);
			ReduceDomain(ho_Image, ho_Region, &ho_ImageReduced);
			//***提取胶条
			if (0 != (HTuple(HTuple(HTuple(HTuple(HTuple(int(hv_ImageNum == 3)).TupleOr(int(hv_ImageNum == 4))).TupleOr(int(hv_ImageNum == 11))).TupleOr(int(hv_ImageNum == 15))).TupleOr(int(hv_ImageNum == 16))).TupleOr(int(hv_ImageNum == 23))))
			{
				ReduceDomain(ho_Image, ho_Region, &ho_ImageReduced);
				TextureLaws(ho_ImageReduced, &ho_ImageTexture, "el", 5, 7);
				Threshold(ho_ImageTexture, &ho_RegionJT, 0, 55);
				RankRegion(ho_RegionJT, &ho_RegionCount, 15, 15, 110);
				Connection(ho_RegionCount, &ho_RegionCount);
				SelectShape(ho_RegionCount, &ho_RegionCount, "width", "and", 50, 99999);
				OpeningRectangle1(ho_RegionCount, &ho_RegionCount, 20, 1);
				Connection(ho_RegionCount, &ho_RegionCount);
				SelectShapeStd(ho_RegionCount, &ho_RegionCount, "max_area", 70);
				FillUp(ho_RegionCount, &ho_RegionCount);
				ShapeTrans(ho_RegionCount, &ho_RegionCount, "rectangle1");
				DilationRectangle1(ho_RegionCount, &ho_JTRegion, 221, 91);
			}
			MeanImage(ho_ImageReduced, &ho_ImageMean5, 3, 19);
			DynThreshold(ho_ImageReduced, ho_ImageMean5, &ho_RegionDynThresh5, 30, "light");
			ErosionRectangle1(ho_Region, &ho_RegionErosion5, 16, 11);
			Intersection(ho_RegionErosion5, ho_RegionDynThresh5, &ho_RegionIntersection5
				);
			Connection(ho_RegionIntersection5, &ho_ConnectedRegions13);
			SelectShape(ho_ConnectedRegions13, &ho_SelectedRegions15, "area", "and", 40,
				9999);
			Union1(ho_SelectedRegions15, &ho_RegionUnion2);
			ClosingCircle(ho_RegionUnion2, &ho_RegionClosing5, 9.5);
			Connection(ho_RegionClosing5, &ho_ConnectedRegions22);
			Difference(ho_ConnectedRegions22, ho_JTRegion, &ho_ConnectedRegions22);

			SelectShape(ho_ConnectedRegions22, &ho_SelectedRegions16, ((HTuple("area").Append("height")).Append("width")),
				"and", ((HTuple(160).Append(10)).Append(5)), ((HTuple(99999).Append(99)).Append(60)));
			ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[10])), ho_SelectedRegions16,
				&ho___Tmp_Obj_0);
			SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[10]));
			//*****碰伤
			MoveRegion(ho_ImageBlackEdge, &ho_RegionMoved, 0, -15);
			Difference(ho_RegionMoved, ho_ImageBlackEdge, &ho_Region);
			MoveRegion(ho_Region, &ho_Region, 0, 15);
			DilationRectangle1(ho_Region, &ho_Region, 20, 1);
			ClosingRectangle1(ho_Region, &ho_Region, 1, 10);
			DilationRectangle1(ho_Region, &ho_Region_, 51, 51);
			ReduceDomain(ho_Image, ho_Region_, &ho_ImageReduced);
			MedianRect(ho_ImageReduced, &ho_ImageMedian, 9, 5);
			GrayRangeRect(ho_ImageMedian, &ho_ImageReduced, 15, 5);
			Threshold(ho_ImageReduced, &ho_Region_Blob, 100, 255);
			Intersection(ho_Region_Blob, ho_Region, &ho_Region);
			Difference(ho_Region, ho_JTRegion, &ho_Region);
			Connection(ho_Region, &ho_SelectedRegions);
			SelectGray(ho_SelectedRegions, ho_Image, &ho_SelectedRegions, (HTuple("deviation").Append("min")),
				"and", (HTuple(30).Append(0)), (HTuple(255).Append(15)));
			SelectShape(ho_SelectedRegions, &ho_SelectedRegions, ((HTuple("area").Append("width")).Append("anisometry")),
				"and", ((HTuple(100).Append(6)).Append(0.5)), ((HTuple(9999999).Append(30)).Append(10)));
			CountObj(ho_SelectedRegions, &hv_Number);
			if (0 != hv_Number)
			{
				ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[10])), ho_SelectedRegions,
					&ho___Tmp_Obj_0);
				SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[10]));
			}
			Union1(ho_RegionUnion, &ho_Region);
			MoveRegion(ho_ImageBlackEdge, &ho_ImageBlackEdge_, 0, -15);
			Difference(ho_Region, ho_ImageBlackEdge_, &ho_Region);
			Union1(ho_RegionUnion, &ho_Region_dectct2);
			ReduceDomain(ho_Image, ho_Region_dectct2, &ho_ImageReduced);
			MedianRect(ho_ImageReduced, &ho_ImageMedian, 5, 5);
			MedianRect(ho_ImageReduced, &ho_ImageMedian1, 25, 200);
			DynThreshold(ho_ImageMedian, ho_ImageMedian1, &ho_RegionDynThresh, 35, "not_equal");
			DilationRectangle1(ho_JTRegion, &ho_JTRegion, 221, 91);
			Difference(ho_RegionDynThresh, ho_JTRegion, &ho_RegionDynThresh);
			MoveRegion(ho_ImageBlackEdge, &ho_ImageBlackEdge_, 0, -20);
			Difference(ho_RegionDynThresh, ho_ImageBlackEdge_, &ho_RegionDynThresh);
			Connection(ho_RegionDynThresh, &ho_ConnectedRegions);
			ErosionRectangle1(ho_Region_dectct2, &ho_Region_dectct2_, 5, 3);
			SelectShapeProto(ho_ConnectedRegions, ho_Region_dectct2_, &ho_ConnectedRegions,
				"overlaps_rel", 100, 100);
			SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, (HTuple("rb").Append("area")),
				"and", (HTuple(4).Append(100)), (HTuple(300).Append(9999999)));
			CountObj(ho_SelectedRegions, &hv_Number);
			if (0 != hv_Number)
			{
				ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_SelectedRegions,
					&ho___Tmp_Obj_0);
				SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
			}

		}
		//****************************1-2   **************************************
		if (0 != (HTuple(int(hv_StaNum == 1)).TupleAnd(int(hv_CamNum == 2))))
		{
			Union1(ho_RegionUnion, &ho_RegionDetect);
			//*****提取黑缝隙
			AreaCenter(ho_RegionDetect, &hv__, &hv_Row, &hv_Column);
			GenRectangle1(&ho_Rectangle, 0, hv_Column - 50, 2048, hv_Column + 200);
			ReduceDomain(ho_Image, ho_Rectangle, &ho_ImageReduced);
			AutoThreshold(ho_ImageReduced, &ho_ImageTopHat, 11);
			ClosingRectangle1(ho_ImageTopHat, &ho_ImageTopHat, 5, 5);
			//gray_tophat (ImageReduced, BlackSE, ImageTopHat)
			//threshold (ImageTopHat, ImageTopHat, 0, 50)
			FillUp(ho_ImageTopHat, &ho_ImageTopHat);
			if (0 != (HTuple(HTuple(HTuple(HTuple(HTuple(int(hv_ImageNum == 3)).TupleOr(int(hv_ImageNum == 5))).TupleOr(int(hv_ImageNum == 12))).TupleOr(int(hv_ImageNum == 16))).TupleOr(int(hv_ImageNum == 18))).TupleOr(int(hv_ImageNum == 25))))
			{
				OpeningRectangle1(ho_ImageTopHat, &ho_ImageTopHat, 10, 180);
			}
			Connection(ho_ImageTopHat, &ho_ImageTopHat);
			SelectShape(ho_ImageTopHat, &ho_ImageTopHat, "height", "and", 2000, 99999);
			DilationRectangle1(ho_RegionDetect, &ho_RegionDetect_, 25, 51);
			SelectShapeProto(ho_ImageTopHat, ho_RegionDetect_, &ho_ImageTopHat_, "overlaps_rel",
				5, 100);
			AreaCenter(ho_ImageTopHat_, &hv_Area, &hv__, &hv__);
			if (0 != (hv_Area.TupleLength()))
			{
				SortRegion(ho_ImageTopHat_, &ho_SortedRegions, "upper_right", "false", "column");
				SelectObj(ho_SortedRegions, &ho_ImageBlackEdge, 1);
			}
			else
			{
				SortRegion(ho_ImageTopHat, &ho_SortedRegions, "upper_left", "true", "column");
				SelectObj(ho_SortedRegions, &ho_ImageBlackEdge, 1);
			}
			DilationRectangle1(ho_ImageBlackEdge, &ho_ImageBlackEdge, 100, 11);
			MoveRegion(ho_ImageBlackEdge, &ho_ImageBlackEdge, 0, 47);
			DilationRectangle1(ho_ImageBlackEdge, &ho_ImageBlackEdge, 1, 51);
			Difference(ho_RegionUnion, ho_ImageBlackEdge, &ho_RegionInner);
			if (0 != (HTuple(HTuple(HTuple(HTuple(HTuple(HTuple(int(hv_ImageNum == 2)).TupleOr(int(hv_ImageNum == 3))).TupleOr(int(hv_ImageNum == 4))).TupleOr(int(hv_ImageNum == 8))).TupleOr(int(hv_ImageNum == 11))).TupleOr(int(hv_ImageNum == 16))).TupleOr(int(hv_ImageNum == 15))))
			{
				Union1(ho_RegionUnion, &ho_Region_detect);
				ReduceDomain(ho_Image, ho_Region_detect, &ho_ImageReduced);
				Threshold(ho_ImageReduced, &ho_JTRegion_, 0, 55);
				SelectShape(ho_JTRegion_, &ho_JTRegion_, "width", "and", 30, 99999);
				FillUp(ho_JTRegion_, &ho_JTRegion);
				MoveRegion(ho_JTRegion, &ho_RegionMoved, 100, 0);
				Difference(ho_RegionMoved, ho_JTRegion, &ho_RegionDifference);
				OpeningRectangle1(ho_RegionDifference, &ho_RegionDifference, 20, 1);
				ClosingRectangle1(ho_RegionDifference, &ho_RegionDifference, 1, 10);
				Connection(ho_RegionDifference, &ho_JTRegion_down);
				SelectShapeStd(ho_JTRegion_down, &ho_JTRegion_down, "max_area", 70);
				FillUp(ho_JTRegion_down, &ho_JTRegion_down);

				Threshold(ho_ImageReduced, &ho_RegionBlack, 0, 70);
				Intersection(ho_RegionBlack, ho_JTRegion_down, &ho_RegionBlack);
				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 11, 61);
				SubImage(ho_ImageClosing, ho_ImageReduced, &ho_ImageSub, 1, 0);
				MinMaxGray(ho_Region_detect, ho_ImageSub, 10, &hv_Min, &hv_Max, &hv_Range);
				hv_Mult = 255 / hv_Range;
				hv_Add = (-hv_Mult) * hv_Min;
				ScaleImage(ho_ImageSub, &ho_ImageScale, hv_Mult, hv_Add);
				Threshold(ho_ImageScale, &ho_Region, 250, 255);
				FillUpShape(ho_Region, &ho_Region, "area", 1, 100);
				Intersection(ho_Region, ho_JTRegion_down, &ho_Region);
				Union2(ho_Region, ho_RegionBlack, &ho_Region);
				OpeningCircle(ho_Region, &ho_Region, 3.5);
				Connection(ho_Region, &ho_Region);
				MoveRegion(ho_Region_detect, &ho_RegionMoved, 0, -20);
				Intersection(ho_Region, ho_RegionMoved, &ho_Region);
				SelectShape(ho_Region, &ho_Region, (HTuple("area").Append("anisometry")),
					"and", (HTuple(100).Append(0.5)), (HTuple(99999).Append(6)));
				Connection(ho_Region, &ho_Region);
				ShapeTrans(ho_Region, &ho_RegionTrans, "rectangle1");
				DilationRectangle1(ho_RegionTrans, &ho_RegionTrans, 1, 61);
				Intersection(ho_RegionTrans, ho_JTRegion_down, &ho_RegionTrans);
				SelectGray(ho_RegionTrans, ho_Image, &ho_RegionTrans, (HTuple("deviation").Append("mean")),
					"and", (HTuple(20).Append(15)), (HTuple(255).Append(150)));
				Intersection(ho_Region, ho_RegionTrans, &ho_Region);
				ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_Region, &ho___Tmp_Obj_0
					);
				SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
				ReduceDomain(ho_Image, ho_Region_detect, &ho_ImageReduced);
				ErosionRectangle1(ho_Region_detect, &ho_RegionErosion, 51, 1);
				DilationRectangle1(ho_JTRegion_, &ho_JTRegion_, 55, 25);
				Difference(ho_RegionErosion, ho_JTRegion_, &ho_RegionErosion);
				MinMaxGray(ho_RegionErosion, ho_Image, 10, &hv_Min, &hv_Max, &hv_Range);
				if (0 != (int(hv_Range > 30)))
				{
					hv_Mult = 255 / hv_Range;
					hv_Add = (-hv_Mult) * hv_Min;
					ScaleImage(ho_Image, &ho_ImageScale, hv_Mult, hv_Add);
					Threshold(ho_ImageScale, &ho_Region, 0, 50);
					MoveRegion(ho_RegionUnion, &ho_RegionMoved, 0, -30);
					Intersection(ho_RegionMoved, ho_RegionUnion, &ho_RegionMoved);
					Intersection(ho_Region, ho_RegionMoved, &ho_RegionIntersection);
					Difference(ho_RegionIntersection, ho_JTRegion_, &ho_RegionIntersection);
					MoveRegion(ho_ImageBlackEdge, &ho_ImageBlackEdge_, 1, -20);
					Difference(ho_RegionIntersection, ho_ImageBlackEdge_, &ho_RegionIntersection
						);
					Connection(ho_RegionIntersection, &ho_RegionCount);
					OpeningCircle(ho_RegionCount, &ho_RegionCount, 2.5);
					SelectShape(ho_RegionCount, &ho_RegionCount, ((HTuple("area").Append("width")).Append("height")),
						"and", ((HTuple(10).Append(5)).Append(5)), ((HTuple(99999).Append(99999)).Append(99999)));
					ShapeTrans(ho_RegionCount, &ho_RegionTrans, "rectangle1");
					SelectGray(ho_RegionTrans, ho_Image, &ho_RegionTrans, (HTuple("deviation").Append("mean")),
						"and", (HTuple(15).Append(10)), (HTuple(255).Append(160)));
					Intersection(ho_RegionTrans, ho_RegionCount, &ho_RegionCount);
					Intersection(ho_RegionCount, ho_RegionErosion, &ho_RegionCount);
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_RegionCount,
						&ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
				}
				GrayRangeRect(ho_Image, &ho_ImageReduced, 15, 5);
				Threshold(ho_ImageReduced, &ho_Region_Blob, 70, 255);
				MoveRegion(ho_Region_detect, &ho_Region, 0, 20);
				Intersection(ho_Region_Blob, ho_Region, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 9, 5);
				MoveRegion(ho_JTRegion_down, &ho_JTRegion_down_, -130, 1);
				DilationRectangle1(ho_JTRegion_down_, &ho_JTRegion_down_, 121, 151);
				Difference(ho_Region, ho_JTRegion_down_, &ho_Region);
				MoveRegion(ho_ImageBlackEdge, &ho_ImageBlackEdge_, 1, -10);
				Difference(ho_ImageBlackEdge_, ho_ImageBlackEdge, &ho_ImageBlackEdge_);
				Intersection(ho_Region, ho_ImageBlackEdge_, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 3, 3);
				Connection(ho_Region, &ho_SelectedRegions);
				SelectShape(ho_SelectedRegions, &ho_SelectedRegions, (HTuple("area").Append("width")),
					"and", (HTuple(100).Append(6)), (HTuple(9999999).Append(9999)));
				CountObj(ho_SelectedRegions, &hv_Number);

				if (0 != hv_Number)
				{
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[10])), ho_SelectedRegions,
						&ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[10]));
				}
			}
			if (0 != (int(hv_ImageNum == 13)))
			{
				Union1(ho_RegionUnion, &ho_Region_detect);
				ErosionRectangle1(ho_Region_detect, &ho_RegionErosion, 21, 1);
				MinMaxGray(ho_RegionErosion, ho_Image, 10, &hv_Min, &hv_Max, &hv_Range);
				if (0 != (int(hv_Range > 30)))
				{
					hv_Mult = 255 / hv_Range;
					hv_Add = (-hv_Mult) * hv_Min;
					ScaleImage(ho_Image, &ho_ImageScale, hv_Mult, hv_Add);
					Threshold(ho_ImageScale, &ho_Region, 0, 50);
					MoveRegion(ho_RegionUnion, &ho_RegionMoved, 0, -50);
					Intersection(ho_RegionMoved, ho_RegionUnion, &ho_RegionMoved);


					Intersection(ho_Region, ho_RegionMoved, &ho_RegionIntersection);

					Connection(ho_RegionIntersection, &ho_RegionCount);
					SelectShape(ho_RegionCount, &ho_RegionCount, ((HTuple("area").Append("width")).Append("height")),
						"and", ((HTuple(10).Append(5)).Append(5)), ((HTuple(99999).Append(99999)).Append(99999)));
					ShapeTrans(ho_RegionCount, &ho_RegionTrans, "rectangle1");
					SelectGray(ho_RegionTrans, ho_Image, &ho_RegionTrans, "deviation", "and",
						10, 255);
					Intersection(ho_RegionTrans, ho_RegionCount, &ho_RegionCount);
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_RegionCount,
						&ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
				}
			}

			if (0 != (HTuple(int(hv_ImageNum == 14)).TupleOr(int(hv_ImageNum == 20))))
			{

				Union1(ho_RegionInner, &ho_Region_detect);
				ErosionRectangle1(ho_Region_detect, &ho_RegionErosion, 7, 1);
				MoveRegion(ho_RegionErosion, &ho_RegionErosion, 0, -10);
				MinMaxGray(ho_RegionErosion, ho_Image, 5, &hv_Min, &hv_Max, &hv_Range);
				if (0 != (int(hv_Range > 25)))
				{
					hv_Mult = 255 / hv_Range;
					hv_Add = (-hv_Mult) * hv_Min;
					ScaleImage(ho_Image, &ho_ImageScale, hv_Mult, hv_Add);
					Threshold(ho_ImageScale, &ho_Region, 0, 10);
					FillUpShape(ho_Region, &ho_Region, "area", 1, 100);

					Intersection(ho_Region, ho_RegionErosion, &ho_RegionIntersection);

					Connection(ho_RegionIntersection, &ho_RegionCount);
					SelectGray(ho_RegionCount, ho_Image, &ho_RegionCount, "mean", "and", 0,
						hv_Min);
					SelectShape(ho_RegionCount, &ho_RegionCount, ((HTuple("area").Append("width")).Append("height")),
						"and", ((HTuple(150).Append(20)).Append(25)), ((HTuple(99999).Append(99999)).Append(99999)));
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_RegionCount,
						&ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
				}
				GrayRangeRect(ho_Image, &ho_ImageReduced, 15, 5);

				Threshold(ho_ImageReduced, &ho_Region_Blob, 70, 255);





				MoveRegion(ho_ImageBlackEdge, &ho_ImageBlackEdge_, 0, -15);
				Difference(ho_ImageBlackEdge_, ho_ImageBlackEdge, &ho_ImageBlackEdge_);

				Intersection(ho_Region_Blob, ho_ImageBlackEdge_, &ho_Region);
				OpeningRectangle1(ho_Region, &ho_Region, 7, 5);
				Connection(ho_Region, &ho_SelectedRegions);
				SelectShape(ho_SelectedRegions, &ho_SelectedRegions, (HTuple("area").Append("width")),
					"and", (HTuple(100).Append(6)), (HTuple(9999999).Append(9999)));
				CountObj(ho_SelectedRegions, &hv_Number);

				if (0 != hv_Number)
				{
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[10])), ho_SelectedRegions,
						&ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[10]));
				}




			}

			if (0 != (int(hv_ImageNum == 15)))
			{






			}
			if (0 != (int(hv_ImageNum == 18)))
			{

				Union1(ho_RegionInner, &ho_Region_detect);
				ErosionRectangle1(ho_Region_detect, &ho_RegionErosion, 7, 1);
				MoveRegion(ho_RegionErosion, &ho_RegionErosion, 0, -10);
				MinMaxGray(ho_RegionErosion, ho_Image, 10, &hv_Min, &hv_Max, &hv_Range);
				if (0 != (int(hv_Range > 40)))
				{
					hv_Mult = 255 / hv_Range;
					hv_Add = (-hv_Mult) * hv_Min;
					ScaleImage(ho_Image, &ho_ImageScale, hv_Mult, hv_Add);
					Threshold(ho_ImageScale, &ho_Region, 0, 10);
					FillUpShape(ho_Region, &ho_Region, "area", 1, 100);

					Intersection(ho_Region, ho_RegionErosion, &ho_RegionIntersection);

					Connection(ho_RegionIntersection, &ho_RegionCount);
					SelectGray(ho_RegionCount, ho_Image, &ho_RegionCount, "mean", "and", 0,
						hv_Min);
					SelectShape(ho_RegionCount, &ho_RegionCount, ((HTuple("area").Append("width")).Append("height")),
						"and", ((HTuple(150).Append(20)).Append(25)), ((HTuple(99999).Append(99999)).Append(99999)));
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_RegionCount,
						&ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
				}

			}
		}
		//****************************2-1   **************************************
		if (0 != (HTuple(int(hv_StaNum == 2)).TupleAnd(int(hv_CamNum == 1))))
		{
			Union1(ho_RegionUnion, &ho_RegionDetect);


			if (0 != (int(hv_ImageNum == 1)))
			{
				//2-1-1
				//漏喷砂
				GenRectangle1(&ho_Rectangle1, 70, 720, 1500, 1300);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced11);
				Intensity(ho_Rectangle1, ho_ImageReduced11, &hv_Mean1, &hv_Deviation1);
				if (0 != (int(hv_Mean1 < 31)))
				{
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[16])), ho_ImageReduced11,
						&ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[16]));
				}
				Union1(ho_RegionDetect, &ho_RegionDilation);
				MoveRegion(ho_RegionDilation, &ho_RegionDilation, 0, -850);
				Difference(ho_RegionDetect, ho_RegionDilation, &ho_RegionDilation);

				ErosionRectangle1(ho_RegionDilation, &ho_RegionDilation, 25, 1);
				DilationRectangle1(ho_camregion, &ho_camregion, 51, 1);
				Union1(ho_camregion, &ho_Region);
				Difference(ho_RegionDilation, ho_Region, &ho_Region_detect);



				MinMaxGray(ho_Region_detect, ho_Image, 3, &hv_Min, &hv_Max, &hv_Range);
				MeanImage(ho_Image, &ho_ImageMeanA, 9, 9);
				MeanImage(ho_Image, &ho_ImageMeanB, 95, 125);
				DynThreshold(ho_ImageMeanA, ho_ImageMeanB, &ho_RegionDynThresh, 30, "not_equal");
				Intersection(ho_RegionDynThresh, ho_Region_detect, &ho_RegionDynThresh);

				Connection(ho_RegionDynThresh, &ho_RegionIntersection);

				ErosionRectangle1(ho_Region_detect, &ho_Region_detect_, 11, 11);
				SelectShapeProto(ho_RegionIntersection, ho_Region_detect_, &ho_regions, "overlaps_rel",
					100, 100);



				Connection(ho_regions, &ho_RegionIntersection);
				SelectShape(ho_RegionIntersection, &ho_SelectedRegions, (HTuple("area").Append("width")),
					"and", (HTuple(180).Append(0)), (HTuple(99999).Append(200)));
				SelectGray(ho_SelectedRegions, ho_Image, &ho_SelectedRegions, (HTuple("mean").Append("mean")),
					"or", HTuple(0).TupleConcat(hv_Max), hv_Min.TupleConcat(255));

				CountObj(ho_SelectedRegions, &hv_Number);
				if (0 != hv_Number)
				{
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_SelectedRegions,
						&ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
				}
			}

			if (0 != (int(hv_ImageNum == 2)))
			{
				//2-1-2
				//漏喷砂
				GenRectangle1(&ho_Rectangle1, 70, 720, 1500, 1300);
				ReduceDomain(ho_Image, ho_Rectangle1, &ho_ImageReduced11);
				Intensity(ho_Rectangle1, ho_ImageReduced11, &hv_Mean1, &hv_Deviation1);
				if (0 != (int(hv_Mean1 < 31)))
				{
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[16])), ho_ImageReduced11,
						&ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[16]));
				}
				Union1(ho_RegionUnion, &ho_Region);
				MoveRegion(ho_Region, &ho_RegionMoved, 0, -800);
				Difference(ho_Region, ho_RegionMoved, &ho_RegionDifference);
				MoveRegion(ho_RegionDifference, &ho_RegionDifference, 0, -40);

				DilationRectangle1(ho_camregion, &ho_camregion1, 11, 11);
				Difference(ho_RegionDifference, ho_camregion, &ho_Region_detect);



				MinMaxGray(ho_Region_detect, ho_Image, 3, &hv_Min, &hv_Max, &hv_Range);
				MeanImage(ho_Image, &ho_ImageMeanA, 9, 9);
				MeanImage(ho_Image, &ho_ImageMeanB, 55, 65);
				DynThreshold(ho_ImageMeanA, ho_ImageMeanB, &ho_RegionDynThresh, 35, "light");
				Intersection(ho_RegionDynThresh, ho_Region_detect, &ho_RegionDynThresh);
				Connection(ho_RegionDynThresh, &ho_RegionIntersection);
				SelectShape(ho_RegionIntersection, &ho_SelectedRegions, (HTuple("area").Append("width")),
					"and", (HTuple(190).Append(0)), (HTuple(99999).Append(200)));

				CountObj(ho_SelectedRegions, &hv_Number);
				if (0 != hv_Number)
				{
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_SelectedRegions,
						&ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
				}


			}
			if (0 != (int(hv_ImageNum == 3)))
			{
				//2-1-11 划伤

				Union1(ho_RegionDetect, &ho_RegionDilation);
				MoveRegion(ho_RegionDilation, &ho_RegionDilation, 0, -900);
				Difference(ho_RegionDetect, ho_RegionDilation, &ho_RegionDilation);

				ErosionRectangle1(ho_RegionDilation, &ho_RegionDilation, 100, 1);
				DilationRectangle1(ho_camregion, &ho_camregion, 51, 31);
				Union1(ho_camregion, &ho_Region);
				Difference(ho_RegionDilation, ho_Region, &ho_RegionDilation);


				Difference(ho_RegionDilation, ho_Region, &ho_Region_detect);
				ErosionRectangle1(ho_Region_detect, &ho_Region_detect1, 200, 1);
				Difference(ho_Region_detect, ho_Region_detect1, &ho_Region_detect2);
				MinMaxGray(ho_Region_detect, ho_Image, 3, &hv_Min, &hv_Max, &hv_Range);
				MeanImage(ho_Image, &ho_ImageMeanA, 5, 5);
				MeanImage(ho_Image, &ho_ImageMeanB, 95, 125);
				DynThreshold(ho_ImageMeanA, ho_ImageMeanB, &ho_RegionDynThresh, 30, "not_equal");
				ClosingCircle(ho_RegionDynThresh, &ho_RegionDynThresh, 3.5);
				Intersection(ho_RegionDynThresh, ho_Region_detect, &ho_RegionDynThresh);
				Connection(ho_RegionDynThresh, &ho_RegionIntersection);
				SelectShape(ho_RegionIntersection, &ho_SelectedRegions, (HTuple("area").Append("width")),
					"and", (HTuple(170).Append(5)), (HTuple(99999).Append(200)));


				Intersection(ho_SelectedRegions, ho_Region_detect1, &ho_SelectedRegions1);
				SelectGray(ho_SelectedRegions1, ho_Image, &ho_SelectedRegions1, (HTuple("mean").Append("mean")),
					"or", HTuple(0).TupleConcat(hv_Max + 10), hv_Min.TupleConcat(255));

				Intersection(ho_SelectedRegions, ho_Region_detect2, &ho_SelectedRegions2);

				SelectGray(ho_SelectedRegions2, ho_Image, &ho_SelectedRegions2, (HTuple("mean").Append("mean")),
					"or", HTuple(0).TupleConcat(hv_Max + 30), (hv_Min - 20).TupleConcat(255));

				Union2(ho_SelectedRegions1, ho_SelectedRegions2, &ho_SelectedRegions);
				Connection(ho_SelectedRegions, &ho_ConnectedRegions23);
				SelectShape(ho_ConnectedRegions23, &ho_SelectedRegions28, "area", "and",
					100, 99999);


				CountObj(ho_SelectedRegions28, &hv_Number);
				if (0 != hv_Number)
				{
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_SelectedRegions28,
						&ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
				}
				//胶条边压伤

				MoveRegion(ho_camregion, &ho_RegionMoved3, -55, -10);
				ClosingCircle(ho_RegionMoved3, &ho_RegionClosing1, 9.5);
				DilationRectangle1(ho_RegionClosing1, &ho_RegionDilation2, 40, 11);
				ReduceDomain(ho_Image, ho_RegionDilation2, &ho_ImageReduced1);
				ScaleImage(ho_ImageReduced1, &ho_ImageScaled1, 1.1, -40);
				MeanImage(ho_ImageScaled1, &ho_ImageMean1, 11, 9);
				DynThreshold(ho_ImageScaled1, ho_ImageMean1, &ho_RegionDynThresh1, 43, "light");
				Intersection(ho_RegionDynThresh1, ho_RegionDetect, &ho_RegionDynThresh1);

				ClosingRectangle1(ho_RegionDynThresh1, &ho_RegionClosing2, 30, 2);
				OpeningRectangle1(ho_RegionClosing2, &ho_RegionOpening, 5, 1);
				ErosionCircle(ho_RegionDilation2, &ho_RegionErosion3, 19.5);
				Intersection(ho_RegionErosion3, ho_RegionOpening, &ho_RegionIntersection2
					);
				Connection(ho_RegionIntersection2, &ho_ConnectedRegions4);
				SelectShape(ho_ConnectedRegions4, &ho_SelectedRegions5, "area", "and", 350,
					9999);
				OpeningRectangle1(ho_SelectedRegions5, &ho_RegionOpening1, 1, 9);
				Connection(ho_RegionOpening1, &ho_ConnectedRegions5);
				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions6, "area", "and", 40,
					999);
				DilationCircle(ho_SelectedRegions6, &ho_RegionDilation3, 5.5);
				ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[10])), ho_RegionDilation3,
					&ho___Tmp_Obj_0);
				SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[10]));
			}


			if (0 != (HTuple(HTuple(HTuple(HTuple(HTuple(int(hv_ImageNum == 4)).TupleOr(int(hv_ImageNum == 5))).TupleOr(int(hv_ImageNum == 6))).TupleOr(int(hv_ImageNum == 7))).TupleOr(int(hv_ImageNum == 8))).TupleOr(int(hv_ImageNum == 10))))
			{
				//2-1-11 划伤
				Union1(ho_RegionDetect, &ho_RegionDilation);
				MoveRegion(ho_RegionDilation, &ho_RegionDilation, 0, -850);
				Difference(ho_RegionDetect, ho_RegionDilation, &ho_RegionDilation);

				ErosionRectangle1(ho_RegionDilation, &ho_RegionDilation, 50, 1);
				DilationRectangle1(ho_camregion, &ho_camregion, 51, 31);
				Union1(ho_camregion, &ho_Region);
				Difference(ho_RegionDilation, ho_Region, &ho_RegionDilation);


				Difference(ho_RegionDilation, ho_Region, &ho_Region_detect);

				MinMaxGray(ho_Region_detect, ho_Image, 3, &hv_Min, &hv_Max, &hv_Range);
				MeanImage(ho_Image, &ho_ImageMeanA, 5, 5);
				MeanImage(ho_Image, &ho_ImageMeanB, 95, 125);
				DynThreshold(ho_ImageMeanA, ho_ImageMeanB, &ho_RegionDynThresh, 20, "not_equal");
				Connection(ho_RegionDynThresh, &ho_RegionIntersection);
				SelectShape(ho_RegionIntersection, &ho_SelectedRegions, (HTuple("area").Append("width")),
					"and", (HTuple(100).Append(0)), (HTuple(99999).Append(500)));


				ShapeTrans(ho_SelectedRegions, &ho_RegionTrans, "rectangle1");
				SelectGray(ho_RegionTrans, ho_Image, &ho_RegionTrans, "deviation", "and",
					10, 255);
				Intersection(ho_RegionTrans, ho_SelectedRegions, &ho_SelectedRegions);


				ErosionRectangle1(ho_Region_detect, &ho_Region_detect_, 5, 1);

				SelectShapeProto(ho_SelectedRegions, ho_Region_detect_, &ho_SelectedRegions,
					"overlaps_rel", 100, 100);



				CountObj(ho_SelectedRegions, &hv_Number);
				if (0 != hv_Number)
				{
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_SelectedRegions,
						&ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
				}

			}
			if (0 != (int(hv_ImageNum == 9)))
			{
				GenRectangle1(&ho_ROI_0, 0, 1000.412, 2040.92, 2926.43);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				MeanImage(ho_ImageReduced, &ho_ImageMean, 19, 19);
				AutoThreshold(ho_ImageMean, &ho_Region, 2);
				Connection(ho_Region, &ho_Region);
				SortRegion(ho_Region, &ho_Region, "upper_right", "false", "column");
				SelectObj(ho_Region, &ho_Region, 1);
				ShapeTrans(ho_Region, &ho_Region, "rectangle1");
				DilationRectangle1(ho_Region, &ho_RegionDilation, 1600, 1);
				Difference(ho_RegionDilation, ho_Region, &ho_RegionDilation);
				Connection(ho_RegionDilation, &ho_RegionDilation);
				SelectObj(ho_RegionDilation, &ho_RegionDilation, 1);
				MoveRegion(ho_RegionDilation, &ho_Region_detect, 0, -10);
				ErosionRectangle1(ho_Region_detect, &ho_Region_detect1, 200, 1);
				Difference(ho_Region_detect, ho_Region_detect1, &ho_Region_detect2);
				MinMaxGray(ho_Region_detect, ho_Image, 4, &hv_Min, &hv_Max, &hv_Range);
				MeanImage(ho_Image, &ho_ImageMeanA, 9, 9);
				MeanImage(ho_Image, &ho_ImageMeanB, 95, 125);
				DynThreshold(ho_ImageMeanA, ho_ImageMeanB, &ho_RegionDynThresh, 10, "not_equal");
				Intersection(ho_RegionDynThresh, ho_Region_detect, &ho_RegionDynThresh);
				Connection(ho_RegionDynThresh, &ho_RegionIntersection);
				SelectShape(ho_RegionIntersection, &ho_SelectedRegions, (HTuple("area").Append("width")),
					"and", (HTuple(100).Append(0)), (HTuple(99999).Append(700)));
				Intersection(ho_SelectedRegions, ho_Region_detect1, &ho_SelectedRegions1);
				SelectGray(ho_SelectedRegions1, ho_Image, &ho_SelectedRegions1, (HTuple("mean").Append("mean")),
					"or", HTuple(0).TupleConcat(hv_Max + 10), (hv_Min - 10).TupleConcat(255));
				SelectShape(ho_SelectedRegions1, &ho_SelectedRegions1, "area", "and", 100,
					99999);
				Intersection(ho_SelectedRegions, ho_Region_detect2, &ho_SelectedRegions2);
				SelectGray(ho_SelectedRegions2, ho_Image, &ho_SelectedRegions2, (HTuple("mean").Append("mean")),
					"or", HTuple(0).TupleConcat(hv_Max + 20), (hv_Min - 10).TupleConcat(255));
				Union2(ho_SelectedRegions1, ho_SelectedRegions2, &ho_SelectedRegions);
				GenEmptyObj(&ho_regions);
				CountObj(ho_SelectedRegions, &hv_Number);
				ErosionRectangle1(ho_Region_detect, &ho_RegionBorder, 2, 2);
				Difference(ho_Region_detect, ho_RegionBorder, &ho_RegionBorder);

				{
					HTuple end_val675 = hv_Number;
					HTuple step_val675 = 1;
					for (hv_Index = 1; hv_Index.Continue(end_val675, step_val675); hv_Index += step_val675)
					{
						SelectObj(ho_SelectedRegions, &ho_ObjectSelected, hv_Index);
						Intersection(ho_ObjectSelected, ho_RegionBorder, &ho_RegionIntersection1
							);
						AreaCenter(ho_RegionIntersection1, &hv_Area1, &hv_Row3, &hv_Column3);
						Intensity(ho_ObjectSelected, ho_Image, &hv_Mean, &hv_Deviation);
						if (0 != (HTuple(int(hv_Area1 == 0)).TupleOr(int(hv_Mean > hv_Max))))
						{
							ConcatObj(ho_ObjectSelected, ho_regions, &ho_regions);

						}
					}
				}
				Difference(ho_regions, ho_camregion, &ho_regions);
				Connection(ho_regions, &ho_SelectedRegions);

				CountObj(ho_SelectedRegions, &hv_Number);
				if (0 != hv_Number)
				{
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_SelectedRegions,
						&ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
				}

			}
			if (0 != (int(hv_ImageNum == 11)))
			{
				//2-1-11 划伤
				Union1(ho_RegionUnion, &ho_Region);
				MoveRegion(ho_Region, &ho_RegionMoved, 0, -800);
				Difference(ho_Region, ho_RegionMoved, &ho_RegionDifference);
				MoveRegion(ho_RegionDifference, &ho_RegionDifference, 0, -40);

				DilationRectangle1(ho_camregion, &ho_camregion1, 11, 11);
				Difference(ho_RegionDifference, ho_camregion, &ho_Region_detect);



				MinMaxGray(ho_Region_detect, ho_Image, 3, &hv_Min, &hv_Max, &hv_Range);
				MeanImage(ho_Image, &ho_ImageMeanA, 5, 5);
				MeanImage(ho_Image, &ho_ImageMeanB, 95, 125);
				DynThreshold(ho_ImageMeanA, ho_ImageMeanB, &ho_RegionDynThresh, 25, "not_equal");
				Intersection(ho_RegionDynThresh, ho_Region_detect, &ho_RegionDynThresh);
				Connection(ho_RegionDynThresh, &ho_RegionIntersection);
				SelectShape(ho_RegionIntersection, &ho_SelectedRegions, (HTuple("area").Append("width")),
					"and", (HTuple(100).Append(0)), (HTuple(99999).Append(200)));

				ErosionRectangle1(ho_Region_detect, &ho_Region_detect_, 5, 1);
				SelectShapeProto(ho_SelectedRegions, ho_Region_detect_, &ho_SelectedRegions,
					"overlaps_rel", 100, 100);

				CountObj(ho_SelectedRegions, &hv_Number);
				if (0 != hv_Number)
				{
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_SelectedRegions,
						&ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
				}
			}

			if (0 != (HTuple(int(hv_ImageNum == 12)).TupleOr(int(hv_ImageNum == 13))))
			{
				//2-1-13
				Union1(ho_RegionUnion, &ho_Region);
				MoveRegion(ho_Region, &ho_RegionMoved, 0, -800);
				Difference(ho_Region, ho_RegionMoved, &ho_RegionDifference);
				MoveRegion(ho_RegionDifference, &ho_RegionDifference, 0, -40);


				Difference(ho_RegionDifference, ho_camregion, &ho_Region_detect);
				MinMaxGray(ho_Region_detect, ho_Image, 3, &hv_Min, &hv_Max, &hv_Range);
				MeanImage(ho_Image, &ho_ImageMeanA, 9, 9);
				MeanImage(ho_Image, &ho_ImageMeanB, 95, 175);
				DynThreshold(ho_ImageMeanA, ho_ImageMeanB, &ho_RegionDynThresh, 30, "not_equal");
				ClosingCircle(ho_RegionDynThresh, &ho_RegionDynThresh, 3.5);
				Connection(ho_RegionDynThresh, &ho_RegionIntersection);
				SelectShape(ho_RegionIntersection, &ho_SelectedRegions, (HTuple("area").Append("width")),
					"and", (HTuple(180).Append(0)), (HTuple(99999).Append(200)));

				Intersection(ho_SelectedRegions, ho_Region_detect, &ho_SelectedRegions);

				GenRectangle1(&ho_ROI_0, -176.899, 389.342, 222.091, 1682.84);
				Difference(ho_SelectedRegions, ho_ROI_0, &ho_SelectedRegions);

				SelectShape(ho_SelectedRegions, &ho_SelectedRegions23, (HTuple("area").Append("anisometry")),
					"and", (HTuple(50).Append(1)), (HTuple(99999).Append(10)));






				CountObj(ho_SelectedRegions23, &hv_Number);
				if (0 != hv_Number)
				{
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_SelectedRegions23,
						&ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
				}


			}
			if (0 != (int(hv_ImageNum == 14)))
			{
				//2-1-14
				Union1(ho_RegionDetect, &ho_RegionDilation);
				MoveRegion(ho_RegionDilation, &ho_RegionDilation, 0, -900);
				Difference(ho_RegionDetect, ho_RegionDilation, &ho_RegionDilation);

				ErosionRectangle1(ho_RegionDilation, &ho_RegionDilation, 100, 1);
				DilationRectangle1(ho_camregion, &ho_camregion, 11, 1);
				Union1(ho_camregion, &ho_Region);



				Difference(ho_RegionDilation, ho_Region, &ho_RegionDilation);
				Connection(ho_RegionDilation, &ho_RegionDilation);
				SelectObj(ho_RegionDilation, &ho_RegionDilation, 1);
				MoveRegion(ho_RegionDilation, &ho_RegionDilation, 0, -00);
				ReduceDomain(ho_Image, ho_RegionDilation, &ho_ImageReduced);
				LinesGauss(ho_ImageReduced, &ho_Lines, 7.2, 0.1, 0.3, "dark", "false", "none",
					"false");
				SelectContoursXld(ho_Lines, &ho_SelectedContours, "contour_length", 700,
					99999, -0.5, 0.5);

				GenRegionContourXld(ho_SelectedContours, &ho_Region, "filled");
				Union1(ho_Region, &ho_Region);
				AreaCenter(ho_Region, &hv_Area, &hv_Row, &hv_Column);
				if (0 != (int(hv_Area > 1)))
				{
					ShapeTrans(ho_Region, &ho_Region, "rectangle1");
					DilationRectangle1(ho_Region, &ho_Region, 10, 1);
					DilationRectangle1(ho_Region, &ho_RegionDilation1, 300, 1);
					Difference(ho_RegionDilation1, ho_Region, &ho_RegionDifference);
					MinMaxGray(ho_RegionDifference, ho_Image, 0.02, &hv_Min, &hv_Max, &hv_Range);
					Threshold(ho_Image, &ho_Region_Blob, hv_Max, 255);
					Intersection(ho_Region_Blob, ho_RegionDifference, &ho_RegionIntersection
						);
					Connection(ho_RegionIntersection, &ho_RegionIntersection);
					SelectShape(ho_RegionIntersection, &ho_SelectedRegions, "area", "and",
						50, 99999);

					CountObj(ho_SelectedRegions, &hv_Number);

					if (0 != hv_Number)
					{
						ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[0])), ho_SelectedRegions,
							&ho___Tmp_Obj_0);
						SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[0]));
					}
				}

				MeanImage(ho_Image, &ho_ImageMeanA, 7, 7);
				MeanImage(ho_Image, &ho_ImageMeanB, 65, 175);
				DynThreshold(ho_ImageMeanA, ho_ImageMeanB, &ho_RegionDynThresh, 35, "not_equal");
				ClosingCircle(ho_RegionDynThresh, &ho_RegionDynThresh, 3.5);
				Intersection(ho_RegionDynThresh, ho_RegionDilation, &ho_RegionDynThresh);
				Connection(ho_RegionDynThresh, &ho_RegionDynThresh);
				SelectShape(ho_RegionDynThresh, &ho_RegionDynThresh, "area", "and", 100,
					99999);



				CountObj(ho_RegionDynThresh, &hv_Number);
				if (0 != hv_Number)
				{
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_RegionDynThresh,
						&ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
				}







			}

			if (0 != (int(hv_ImageNum == 15)))
			{
				//2-1-15  胶条边压伤
				Union1(ho_RegionDetect, &ho_RegionDilation);
				MoveRegion(ho_RegionDilation, &ho_RegionDilation, 0, -850);
				Difference(ho_RegionDetect, ho_RegionDilation, &ho_RegionDilation);

				ErosionRectangle1(ho_RegionDilation, &ho_RegionDilation, 51, 1);
				DilationRectangle1(ho_camregion, &ho_camregion, 11, 51);
				Union1(ho_camregion, &ho_Region);
				Difference(ho_RegionDilation, ho_Region, &ho_RegionDilation);

				MoveRegion(ho_RegionDilation, &ho_RegionDilation, 0, -00);
				ReduceDomain(ho_Image, ho_RegionDilation, &ho_ImageReduced);

				MedianRect(ho_ImageReduced, &ho_ImageMedian3, 50, 10);
				SobelAmp(ho_ImageMedian3, &ho_EdgeAmplitude2, "sum_abs", 5);
				ScaleImage(ho_EdgeAmplitude2, &ho_ImageScaled2, 50, -300);
				Threshold(ho_ImageScaled2, &ho_Region2, 0, 55);
				Connection(ho_Region2, &ho_ConnectedRegions3);
				SelectShape(ho_ConnectedRegions3, &ho_SelectedRegions4, (HTuple("area").Append("height")),
					"and", (HTuple(60000).Append(100)), (HTuple(149999).Append(140)));
				MoveRegion(ho_SelectedRegions4, &ho_RegionMoved3, -55, -10);
				ClosingCircle(ho_RegionMoved3, &ho_RegionClosing1, 9.5);
				DilationRectangle1(ho_RegionClosing1, &ho_RegionDilation2, 40, 11);
				ReduceDomain(ho_Image, ho_RegionDilation2, &ho_ImageReduced1);
				ScaleImage(ho_ImageReduced1, &ho_ImageScaled1, 1.1, -40);
				MeanImage(ho_ImageScaled1, &ho_ImageMean1, 17, 7);
				DynThreshold(ho_ImageScaled1, ho_ImageMean1, &ho_RegionDynThresh1, 39, "light");
				ClosingRectangle1(ho_RegionDynThresh1, &ho_RegionClosing2, 30, 2);
				OpeningRectangle1(ho_RegionClosing2, &ho_RegionOpening, 5, 1);
				ErosionCircle(ho_RegionDilation2, &ho_RegionErosion3, 19.5);
				Intersection(ho_RegionErosion3, ho_RegionOpening, &ho_RegionIntersection2
					);
				Connection(ho_RegionIntersection2, &ho_ConnectedRegions4);
				SelectShape(ho_ConnectedRegions4, &ho_SelectedRegions5, "area", "and", 350,
					9999);
				OpeningRectangle1(ho_SelectedRegions5, &ho_RegionOpening1, 1, 6);
				Connection(ho_RegionOpening1, &ho_ConnectedRegions5);
				SelectShape(ho_ConnectedRegions5, &ho_SelectedRegions6, "area", "and", 40,
					999);
				DilationCircle(ho_SelectedRegions6, &ho_RegionDilation3, 5.5);
				ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[10])), ho_RegionDilation3,
					&ho___Tmp_Obj_0);
				SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[10]));
				MeanImage(ho_Image, &ho_ImageMeanA, 7, 7);
				MeanImage(ho_Image, &ho_ImageMeanB, 65, 175);
				DynThreshold(ho_ImageMeanA, ho_ImageMeanB, &ho_RegionDynThresh, 35, "not_equal");
				ClosingCircle(ho_RegionDynThresh, &ho_RegionDynThresh, 3.5);
				Intersection(ho_RegionDynThresh, ho_RegionDilation, &ho_RegionDynThresh);
				Connection(ho_RegionDynThresh, &ho_RegionDynThresh);
				SelectShape(ho_RegionDynThresh, &ho_RegionDynThresh, "area", "and", 100,
					99999);



				CountObj(ho_RegionDynThresh, &hv_Number);
				if (0 != hv_Number)
				{
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_RegionDynThresh,
						&ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
				}
			}

			if (0 != (int(hv_ImageNum == 16)))
			{
				//2-1-16

				Union1(ho_RegionDetect, &ho_RegionDilation);
				MoveRegion(ho_RegionDilation, &ho_RegionDilation, 0, -850);
				Difference(ho_RegionDetect, ho_RegionDilation, &ho_RegionDilation);

				ErosionRectangle1(ho_RegionDilation, &ho_RegionDilation, 51, 1);
				DilationRectangle1(ho_camregion, &ho_camregion, 11, 51);
				Union1(ho_camregion, &ho_Region);
				Difference(ho_RegionDilation, ho_Region, &ho_Region_detect);


				Connection(ho_Region_detect, &ho_Region_detect);
				SelectShapeStd(ho_Region_detect, &ho_Region_detect, "max_area", 70);


				ErosionRectangle1(ho_Region_detect, &ho_Region_detect1, 200, 1);
				Difference(ho_Region_detect, ho_Region_detect1, &ho_Region_detect2);
				MinMaxGray(ho_Region_detect, ho_Image, 3, &hv_Min, &hv_Max, &hv_Range);
				MeanImage(ho_Image, &ho_ImageMeanA, 7, 7);
				MeanImage(ho_Image, &ho_ImageMeanB, 65, 175);
				DynThreshold(ho_ImageMeanA, ho_ImageMeanB, &ho_RegionDynThresh, 35, "not_equal");
				Connection(ho_RegionDynThresh, &ho_RegionIntersection);
				Intersection(ho_RegionIntersection, ho_Region_detect, &ho_RegionIntersection
					);
				SelectShape(ho_RegionIntersection, &ho_SelectedRegions, (HTuple("area").Append("width")),
					"and", (HTuple(150).Append(0)), (HTuple(999).Append(200)));

				Intersection(ho_SelectedRegions, ho_Region_detect1, &ho_SelectedRegions1);
				SelectGray(ho_SelectedRegions1, ho_Image, &ho_SelectedRegions1, (HTuple("mean").Append("mean")),
					"or", HTuple(0).TupleConcat(hv_Max + 20), (hv_Min - 10).TupleConcat(255));

				Intersection(ho_SelectedRegions, ho_Region_detect2, &ho_SelectedRegions2);
				SelectGray(ho_SelectedRegions2, ho_Image, &ho_SelectedRegions2, (HTuple("mean").Append("mean")),
					"or", HTuple(0).TupleConcat(hv_Max + 30), (hv_Min - 5).TupleConcat(255));

				Union2(ho_SelectedRegions1, ho_SelectedRegions2, &ho_SelectedRegions);

				Connection(ho_SelectedRegions, &ho_SelectedRegions);
				ErosionRectangle1(ho_Region_detect, &ho_RegionBorder, 3, 3);
				SelectShapeProto(ho_SelectedRegions, ho_RegionBorder, &ho_SelectedRegions,
					"overlaps_rel", 100, 100);


				Connection(ho_SelectedRegions, &ho_SelectedRegions);

				CountObj(ho_SelectedRegions, &hv_Number);
				if (0 != hv_Number)
				{
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_SelectedRegions,
						&ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
				}




			}
			if (0 != (HTuple(int(hv_ImageNum == 17)).TupleOr(int(hv_ImageNum == 18))))
			{
				//2-1-17
				Union1(ho_RegionDetect, &ho_RegionDilation);
				MoveRegion(ho_RegionDilation, &ho_RegionDilation, 0, -850);
				Difference(ho_RegionDetect, ho_RegionDilation, &ho_RegionDilation);

				ErosionRectangle1(ho_RegionDilation, &ho_RegionDilation, 51, 1);
				DilationRectangle1(ho_camregion, &ho_camregion, 11, 51);
				Union1(ho_camregion, &ho_Region);
				Difference(ho_RegionDilation, ho_Region, &ho_RegionDilation);
				Connection(ho_RegionDilation, &ho_RegionDilation);
				SelectObj(ho_RegionDilation, &ho_RegionDilation, 1);
				MoveRegion(ho_RegionDilation, &ho_Region_detect, 0, -20);


				MinMaxGray(ho_Region_detect, ho_Image, 3, &hv_Min, &hv_Max, &hv_Range);
				MeanImage(ho_Image, &ho_ImageMeanA, 9, 9);
				MeanImage(ho_Image, &ho_ImageMeanB, 75, 125);
				DynThreshold(ho_ImageMeanA, ho_ImageMeanB, &ho_RegionDynThresh, 35, "not_equal");


				Intersection(ho_RegionDynThresh, ho_Region_detect, &ho_RegionDynThresh);
				Connection(ho_RegionDynThresh, &ho_RegionIntersection);

				GenEmptyObj(&ho_regions);
				CountObj(ho_RegionIntersection, &hv_Number);
				ErosionRectangle1(ho_Region_detect, &ho_RegionBorder, 2, 2);
				Difference(ho_Region_detect, ho_RegionBorder, &ho_RegionBorder);

				{
					HTuple end_val965 = hv_Number;
					HTuple step_val965 = 1;
					for (hv_Index = 1; hv_Index.Continue(end_val965, step_val965); hv_Index += step_val965)
					{
						SelectObj(ho_RegionIntersection, &ho_ObjectSelected, hv_Index);
						Intersection(ho_ObjectSelected, ho_RegionBorder, &ho_RegionIntersection1
							);
						AreaCenter(ho_RegionIntersection1, &hv_Area1, &hv_Row3, &hv_Column3);
						Intensity(ho_ObjectSelected, ho_Image, &hv_Mean, &hv_Deviation);
						if (0 != (HTuple(int(hv_Area1 == 0)).TupleOr(int(hv_Mean > hv_Max))))
						{
							ConcatObj(ho_ObjectSelected, ho_regions, &ho_regions);

						}
					}
				}

				Connection(ho_regions, &ho_RegionIntersection);
				SelectShape(ho_RegionIntersection, &ho_SelectedRegions, (HTuple("area").Append("width")),
					"and", (HTuple(100).Append(0)), (HTuple(99999).Append(200)));
				SelectGray(ho_SelectedRegions, ho_Image, &ho_SelectedRegions, (HTuple("mean").Append("mean")),
					"or", HTuple(0).TupleConcat(hv_Max), hv_Min.TupleConcat(255));
				ShapeTrans(ho_SelectedRegions, &ho_RegionTrans, "rectangle1");
				SelectGray(ho_RegionTrans, ho_Image, &ho_RegionTrans, "deviation", "and",
					10, 255);
				Intersection(ho_RegionTrans, ho_SelectedRegions, &ho_SelectedRegions);


				CountObj(ho_SelectedRegions, &hv_Number);
				if (0 != hv_Number)
				{
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_SelectedRegions,
						&ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
				}
			}


			if (0 != (int(hv_ImageNum == 19)))
			{
				//2-1-19
				Union1(ho_RegionDetect, &ho_RegionDilation);
				MoveRegion(ho_RegionDilation, &ho_RegionDilation, 0, -850);
				Difference(ho_RegionDetect, ho_RegionDilation, &ho_RegionDilation);

				ErosionRectangle1(ho_RegionDilation, &ho_RegionDilation, 51, 1);
				DilationRectangle1(ho_camregion, &ho_camregion, 11, 51);
				Union1(ho_camregion, &ho_Region);
				Difference(ho_RegionDilation, ho_Region, &ho_RegionDilation);
				Connection(ho_RegionDilation, &ho_RegionDilation);
				SelectObj(ho_RegionDilation, &ho_RegionDilation, 1);
				MoveRegion(ho_RegionDilation, &ho_Region_detect, 0, -20);

				MinMaxGray(ho_Region_detect, ho_Image, 2, &hv_Min, &hv_Max, &hv_Range);
				MeanImage(ho_Image, &ho_ImageMeanA, 9, 9);
				MeanImage(ho_Image, &ho_ImageMeanB, 55, 125);
				DynThreshold(ho_ImageMeanA, ho_ImageMeanB, &ho_RegionDynThresh, 30, "not_equal");
				Connection(ho_RegionDynThresh, &ho_RegionIntersection);
				SelectShape(ho_RegionIntersection, &ho_SelectedRegions, (HTuple("area").Append("width")),
					"and", (HTuple(100).Append(0)), (HTuple(99999).Append(200)));
				SelectGray(ho_SelectedRegions, ho_Image, &ho_SelectedRegions, (HTuple("mean").Append("mean")),
					"or", HTuple(0).TupleConcat(hv_Max), hv_Min.TupleConcat(255));
				Intersection(ho_SelectedRegions, ho_Region_detect, &ho_SelectedRegions);

				ShapeTrans(ho_SelectedRegions, &ho_RegionTrans, "rectangle1");
				SelectGray(ho_RegionTrans, ho_Image, &ho_RegionTrans, "deviation", "and",
					10, 255);
				Intersection(ho_RegionTrans, ho_SelectedRegions, &ho_SelectedRegions);


				CountObj(ho_SelectedRegions, &hv_Number);
				if (0 != hv_Number)
				{
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_SelectedRegions,
						&ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
				}
			}
			if (0 != (int(hv_ImageNum == 23)))
			{

				Union1(ho_RegionDetect, &ho_RegionDilation);
				MoveRegion(ho_RegionDilation, &ho_RegionDilation, 0, -850);
				Difference(ho_RegionDetect, ho_RegionDilation, &ho_RegionDilation);

				ErosionRectangle1(ho_RegionDilation, &ho_RegionDilation, 51, 1);
				DilationRectangle1(ho_camregion, &ho_camregion, 11, 61);
				Union1(ho_camregion, &ho_Region);

				ReduceDomain(ho_Image, ho_RegionDilation, &ho_ImageReduced);

				Difference(ho_RegionDilation, ho_Region, &ho_Region_detect);

				MinMaxGray(ho_Region_detect, ho_Image, 3, &hv_Min, &hv_Max, &hv_Range);
				MeanImage(ho_Image, &ho_ImageMeanA, 7, 7);
				MeanImage(ho_Image, &ho_ImageMeanB, 95, 125);
				DynThreshold(ho_ImageMeanA, ho_ImageMeanB, &ho_RegionDynThresh, 30, "not_equal");
				Connection(ho_RegionDynThresh, &ho_RegionIntersection);
				SelectShape(ho_RegionIntersection, &ho_SelectedRegions, (HTuple("area").Append("width")),
					"and", (HTuple(100).Append(0)), (HTuple(99999).Append(200)));
				SelectGray(ho_SelectedRegions, ho_Image, &ho_SelectedRegions, (HTuple("mean").Append("mean")),
					"or", HTuple(0).TupleConcat(hv_Max), hv_Min.TupleConcat(255));
				Intersection(ho_SelectedRegions, ho_Region_detect, &ho_SelectedRegions);
				SelectShape(ho_SelectedRegions, &ho_SelectedRegions27, "area", "and", 250,
					99999);
				CountObj(ho_SelectedRegions27, &hv_Number);
				if (0 != hv_Number)
				{
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_SelectedRegions,
						&ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
				}

			}
			if (0 != (int(hv_ImageNum == 24)))
			{

				Union1(ho_RegionDetect, &ho_RegionDilation);
				MoveRegion(ho_RegionDilation, &ho_RegionDilation, 0, -850);
				Difference(ho_RegionDetect, ho_RegionDilation, &ho_RegionDilation);

				ErosionRectangle1(ho_RegionDilation, &ho_RegionDilation, 51, 1);
				DilationRectangle1(ho_camregion, &ho_camregion, 11, 61);
				Union1(ho_camregion, &ho_Region);

				ReduceDomain(ho_Image, ho_RegionDilation, &ho_ImageReduced);

				Difference(ho_RegionDilation, ho_Region, &ho_Region_detect);

				MinMaxGray(ho_Region_detect, ho_Image, 3, &hv_Min, &hv_Max, &hv_Range);
				MeanImage(ho_Image, &ho_ImageMeanA, 7, 7);
				MeanImage(ho_Image, &ho_ImageMeanB, 95, 125);
				DynThreshold(ho_ImageMeanA, ho_ImageMeanB, &ho_RegionDynThresh, 30, "not_equal");
				ClosingCircle(ho_RegionDynThresh, &ho_RegionDynThresh, 3.5);
				Connection(ho_RegionDynThresh, &ho_RegionIntersection);
				SelectShape(ho_RegionIntersection, &ho_SelectedRegions, (HTuple("area").Append("width")),
					"and", (HTuple(100).Append(0)), (HTuple(99999).Append(200)));

				Intersection(ho_SelectedRegions, ho_Region_detect, &ho_SelectedRegions);

				CountObj(ho_SelectedRegions, &hv_Number);
				if (0 != hv_Number)
				{
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_SelectedRegions,
						&ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
				}






			}
		}
		//****************************2-2   **************************************
		if (0 != (HTuple(int(hv_StaNum == 2)).TupleAnd(int(hv_CamNum == 2))))
		{
			Union1(ho_RegionUnion, &ho_RegionDetect);
			Union1(ho_RegionDetect, &ho_RegionDilation);
			//2-2-2 脏污
			Union1(ho_RegionDetect, &ho_RegionDilation);
			MoveRegion(ho_RegionDilation, &ho_RegionDilation, 0, -850);
			Difference(ho_RegionDetect, ho_RegionDilation, &ho_RegionDilation);

			ErosionRectangle1(ho_RegionDilation, &ho_RegionDilation, 51, 1);
			DilationRectangle1(ho_camregion, &ho_camregion, 11, 21);
			Union1(ho_camregion, &ho_Region);
			Difference(ho_RegionDilation, ho_Region, &ho_Region_detect);
			//****检测浅脏污
			MinMaxGray(ho_Region_detect, ho_Image, 5, &hv_Min, &hv_Max, &hv_Range);
			if (0 != (int(hv_Range > 30)))
			{
				hv_Mult = 255 / hv_Range;
				hv_Add = (-hv_Mult) * hv_Min;
				ScaleImage(ho_Image, &ho_ImageScale, hv_Mult, hv_Add);
				Threshold(ho_ImageScale, &ho_Region, 0, 0);
				Union1(ho_Region, &ho_Region_);
				FillUpShape(ho_Region, &ho_Region, "area", 1, 30);
				OpeningCircle(ho_Region, &ho_Region, 3.5);
				RankRegion(ho_Region, &ho_RegionCount, 11, 11, 80);
				FillUp(ho_RegionCount, &ho_RegionCount);
				OpeningCircle(ho_RegionCount, &ho_RegionCount, 3);
				Intersection(ho_RegionCount, ho_Region_detect, &ho_RegionCount);
				Union1(ho_RegionCount, &ho_SelectedRegions);
				Connection(ho_SelectedRegions, &ho_SelectedRegions);
				SelectShape(ho_SelectedRegions, &ho_SelectedRegions, "area", "and", 450,
					99999);

				ErosionRectangle1(ho_camregion, &ho_camregion, 5, 11);
				ErosionRectangle1(ho_RegionDilation, &ho_Region_detect, 11, 1);
				Difference(ho_Region_detect, ho_camregion, &ho_Region_detect);
				SelectShapeProto(ho_SelectedRegions, ho_Region_detect, &ho_regions, "overlaps_rel",
					100, 100);

				Intersection(ho_regions, ho_Region_, &ho_regions);
				Connection(ho_regions, &ho_regions);
				SelectShape(ho_regions, &ho_region_zw, ((HTuple("area").Append("width")).Append("height")),
					"and", ((HTuple(150).Append(5)).Append(5)), ((HTuple(99999).Append(99999)).Append(99999)));
				CountObj(ho_region_zw, &hv_Number);
				if (0 != hv_Number)
				{
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_region_zw, &ho___Tmp_Obj_0
						);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
				}
			}
			//**斑点检测
			MinMaxGray(ho_Region_detect, ho_Image, 3, &hv_Min, &hv_Max, &hv_Range);
			MeanImage(ho_Image, &ho_ImageMeanA, 9, 9);
			MeanImage(ho_Image, &ho_ImageMeanB, 55, 225);
			DynThreshold(ho_ImageMeanA, ho_ImageMeanB, &ho_RegionDynThresh, 20, "not_equal");
			Connection(ho_RegionDynThresh, &ho_RegionIntersection);
			SelectShape(ho_RegionIntersection, &ho_SelectedRegions, (HTuple("area").Append("width")),
				"and", (HTuple(150).Append(0)), (HTuple(99999).Append(200)));

			Intersection(ho_SelectedRegions, ho_Region_detect, &ho_SelectedRegions1);
			SelectGray(ho_SelectedRegions1, ho_Image, &ho_SelectedRegions1, (HTuple("mean").Append("mean")),
				"or", HTuple(0).TupleConcat(hv_Max + 10), (hv_Min - 10).TupleConcat(255));
			Intersection(ho_SelectedRegions, ho_Region_detect, &ho_SelectedRegions2);
			SelectGray(ho_SelectedRegions2, ho_Image, &ho_SelectedRegions2, (HTuple("mean").Append("mean")),
				"or", HTuple(0).TupleConcat(hv_Max + 20), (hv_Min - 20).TupleConcat(255));
			Union2(ho_SelectedRegions1, ho_SelectedRegions2, &ho_SelectedRegions);
			ErosionRectangle1(ho_Region_detect, &ho_Region_detect_, 11, 11);
			SelectShapeProto(ho_SelectedRegions, ho_Region_detect_, &ho_SelectedRegions,
				"overlaps_rel", 100, 100);

			Connection(ho_SelectedRegions, &ho_SelectedRegions);
			ShapeTrans(ho_SelectedRegions, &ho_RegionTrans, "rectangle1");
			SelectGray(ho_RegionTrans, ho_Image, &ho_RegionTrans, "deviation", "and", 13,
				255);
			Intersection(ho_RegionTrans, ho_SelectedRegions, &ho_SelectedRegions);

			CountObj(ho_SelectedRegions, &hv_Number);
			if (0 != hv_Number)
			{
				ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_SelectedRegions,
					&ho___Tmp_Obj_0);
				SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
			}

			if (0 != (int(hv_ImageNum == 12)))
			{
				//2-2-12
				Union1(ho_RegionDetect, &ho_RegionDilation);
				MoveRegion(ho_RegionDilation, &ho_RegionDilation, 0, -850);
				Difference(ho_RegionDetect, ho_RegionDilation, &ho_RegionDilation);

				ErosionRectangle1(ho_RegionDilation, &ho_RegionDilation, 71, 1);
				DilationRectangle1(ho_camregion, &ho_camregion, 11, 51);
				Union1(ho_camregion, &ho_Region);


				Difference(ho_RegionDilation, ho_Region, &ho_Region_detect);

				ReduceDomain(ho_Image, ho_Region_detect, &ho_ImageReduced);
				MedianRect(ho_ImageReduced, &ho_ImageMedian, 15, 15);
				MedianRect(ho_ImageReduced, &ho_ImageMedian1, 55, 255);
				DynThreshold(ho_ImageMedian, ho_ImageMedian1, &ho_RegionDynThresh, 30, "light");
				Connection(ho_RegionDynThresh, &ho_ConnectedRegions1);
				SelectShape(ho_ConnectedRegions1, &ho_SelectedRegions1, "area", "and", 200,
					999999);
				ShapeTrans(ho_SelectedRegions1, &ho_RegionTrans, "rectangle1");
				SelectGray(ho_RegionTrans, ho_Image, &ho_RegionTrans, "deviation", "and",
					15, 255);
				Intersection(ho_RegionTrans, ho_SelectedRegions1, &ho_SelectedRegions1);


				CountObj(ho_SelectedRegions1, &hv_Number);
				if (0 != hv_Number)
				{
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[0])), ho_SelectedRegions1,
						&ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[0]));
				}
			}
			if (0 != (int(hv_ImageNum == 13)))
			{
				GenRectangle1(&ho_ROI_0, 1056.5, 639.412, 2040.92, 1426.43);
				ReduceDomain(ho_Image, ho_ROI_0, &ho_ImageReduced);
				MeanImage(ho_ImageReduced, &ho_ImageMean, 3, 3);
				Threshold(ho_ImageMean, &ho_Region, 0, 30);

				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, "width", "and", 410, 430);
				FillUp(ho_Region, &ho_Region);
				ExpandGray(ho_Region, ho_Image, ho_EmptyRegion, &ho_Region, 15, "image",
					7);
				FillUp(ho_Region, &ho_Region);
				Difference(ho_ROI_0, ho_Region, &ho_Region);
				Connection(ho_Region, &ho_Region);
				SelectShapeStd(ho_Region, &ho_Region, "max_area", 70);
				ClosingCircle(ho_Region, &ho_RegionClosing, 15);
				Difference(ho_RegionClosing, ho_Region, &ho_Region);
				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region, (HTuple("area").Append("anisometry")),
					"and", (HTuple(15).Append(0.6)), (HTuple(50).Append(1.6)));
				SelectGray(ho_Region, ho_Image, &ho_SelectedRegions, "mean", "and", 0, 50);
				CountObj(ho_SelectedRegions, &hv_Number);
				if (0 != hv_Number)
				{
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[0])), ho_SelectedRegions,
						&ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[0]));
				}
			}
			if (0 != (int(hv_ImageNum == 14)))
			{

				Connection(ho_camregion, &ho_camregion);
				SelectShapeStd(ho_camregion, &ho_SelectedRegions, "max_area", 70);
				DilationCircle(ho_SelectedRegions, &ho_camregion1, 15);

				ErosionCircle(ho_SelectedRegions, &ho_camregion2, 5);
				Difference(ho_camregion1, ho_camregion2, &ho_RegionDifference);
				ReduceDomain(ho_Image, ho_RegionDifference, &ho_ImageReduced);
				Threshold(ho_ImageReduced, &ho_Region, 0, 55);
				Connection(ho_Region, &ho_Region);
				SelectShape(ho_Region, &ho_Region1, ((HTuple("anisometry").Append("area")).Append("row")),
					"and", ((HTuple(0.5).Append(15)).Append(5)), ((HTuple(3).Append(30)).Append(2048)));

				ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[0])), ho_Region1, &ho___Tmp_Obj_0
					);
				SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[0]));


			}
		}







		//****************************3-1   **************************************
		if (0 != (HTuple(int(hv_StaNum == 3)).TupleAnd(int(hv_CamNum == 1))))
		{
			if (0 != (HTuple(int(hv_StaNum == 1)).TupleAnd(int(hv_CamNum == 1))))
			{

				Union1(ho_RegionUnion, &ho_RegionDetect);

				//*****提取黑缝隙
				AreaCenter(ho_RegionDetect, &hv__, &hv_Row, &hv_Column);
				GenRectangle1(&ho_Rectangle, 0, hv_Column - 50, 2048, hv_Column + 200);
				ReduceDomain(ho_Image, ho_Rectangle, &ho_ImageReduced);

				AutoThreshold(ho_ImageReduced, &ho_ImageTopHat, 9);
				ClosingRectangle1(ho_ImageTopHat, &ho_ImageTopHat, 5, 5);
				//gray_tophat (ImageReduced, BlackSE, ImageTopHat)
				//threshold (ImageTopHat, ImageTopHat, 0, 50)

				FillUp(ho_ImageTopHat, &ho_ImageTopHat);
				if (0 != (HTuple(HTuple(HTuple(HTuple(HTuple(int(hv_ImageNum == 3)).TupleOr(int(hv_ImageNum == 5))).TupleOr(int(hv_ImageNum == 12))).TupleOr(int(hv_ImageNum == 16))).TupleOr(int(hv_ImageNum == 18))).TupleOr(int(hv_ImageNum == 25))))
				{
					OpeningRectangle1(ho_ImageTopHat, &ho_ImageTopHat, 10, 180);
				}
				Connection(ho_ImageTopHat, &ho_ImageTopHat);
				SelectShape(ho_ImageTopHat, &ho_ImageTopHat, "height", "and", 2000, 99999);
				DilationRectangle1(ho_RegionDetect, &ho_RegionDetect_, 25, 51);
				SelectShapeProto(ho_ImageTopHat, ho_RegionDetect_, &ho_ImageTopHat_, "overlaps_rel",
					5, 100);

				AreaCenter(ho_ImageTopHat_, &hv_Area, &hv__, &hv__);
				if (0 != (hv_Area.TupleLength()))
				{
					SortRegion(ho_ImageTopHat_, &ho_SortedRegions, "upper_right", "false",
						"column");
					SelectObj(ho_SortedRegions, &ho_ImageBlackEdge, 1);
				}
				else
				{
					SortRegion(ho_ImageTopHat, &ho_SortedRegions, "upper_left", "true", "column");
					SelectObj(ho_SortedRegions, &ho_ImageBlackEdge, 1);
				}

				DilationRectangle1(ho_ImageBlackEdge, &ho_ImageBlackEdge, 100, 11);
				MoveRegion(ho_ImageBlackEdge, &ho_ImageBlackEdge, 0, 47);
				DilationRectangle1(ho_ImageBlackEdge, &ho_ImageBlackEdge, 1, 51);

				//*************************************



				//1-1-2
				Union1(ho_RegionUnion, &ho_Region);

				ReduceDomain(ho_Image, ho_Region, &ho_ImageReduced);
				//***提取胶条
				if (0 != (HTuple(HTuple(HTuple(HTuple(HTuple(int(hv_ImageNum == 3)).TupleOr(int(hv_ImageNum == 4))).TupleOr(int(hv_ImageNum == 11))).TupleOr(int(hv_ImageNum == 15))).TupleOr(int(hv_ImageNum == 16))).TupleOr(int(hv_ImageNum == 23))))
				{

					ReduceDomain(ho_Image, ho_Region, &ho_ImageReduced);
					TextureLaws(ho_ImageReduced, &ho_ImageTexture, "el", 5, 7);
					Threshold(ho_ImageTexture, &ho_RegionJT, 0, 55);
					RankRegion(ho_RegionJT, &ho_RegionCount, 15, 15, 110);
					Connection(ho_RegionCount, &ho_RegionCount);
					SelectShape(ho_RegionCount, &ho_RegionCount, "width", "and", 50, 99999);
					OpeningRectangle1(ho_RegionCount, &ho_RegionCount, 20, 1);
					Connection(ho_RegionCount, &ho_RegionCount);
					SelectShapeStd(ho_RegionCount, &ho_RegionCount, "max_area", 70);

					FillUp(ho_RegionCount, &ho_RegionCount);


					ShapeTrans(ho_RegionCount, &ho_RegionCount, "rectangle1");
					DilationRectangle1(ho_RegionCount, &ho_JTRegion, 221, 91);

				}

				MeanImage(ho_ImageReduced, &ho_ImageMean5, 3, 19);
				DynThreshold(ho_ImageReduced, ho_ImageMean5, &ho_RegionDynThresh5, 30, "light");
				ErosionRectangle1(ho_Region, &ho_RegionErosion5, 16, 11);
				Intersection(ho_RegionErosion5, ho_RegionDynThresh5, &ho_RegionIntersection5
					);
				Connection(ho_RegionIntersection5, &ho_ConnectedRegions13);
				SelectShape(ho_ConnectedRegions13, &ho_SelectedRegions15, "area", "and",
					40, 9999);
				Union1(ho_SelectedRegions15, &ho_RegionUnion2);
				ClosingCircle(ho_RegionUnion2, &ho_RegionClosing5, 9.5);
				Connection(ho_RegionClosing5, &ho_ConnectedRegions22);
				Difference(ho_ConnectedRegions22, ho_JTRegion, &ho_ConnectedRegions22);

				SelectShape(ho_ConnectedRegions22, &ho_SelectedRegions16, ((HTuple("area").Append("height")).Append("width")),
					"and", ((HTuple(160).Append(10)).Append(5)), ((HTuple(99999).Append(99)).Append(60)));
				ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[10])), ho_SelectedRegions16,
					&ho___Tmp_Obj_0);
				SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[10]));
				//*****碰伤
				MoveRegion(ho_ImageBlackEdge, &ho_RegionMoved, 0, -15);

				Difference(ho_RegionMoved, ho_ImageBlackEdge, &ho_Region);
				MoveRegion(ho_Region, &ho_Region, 0, 15);
				DilationRectangle1(ho_Region, &ho_Region, 20, 1);
				ClosingRectangle1(ho_Region, &ho_Region, 1, 10);
				ReduceDomain(ho_Image, ho_Region, &ho_ImageReduced);
				MedianRect(ho_ImageReduced, &ho_ImageMedian, 9, 5);

				GrayRangeRect(ho_ImageMedian, &ho_ImageReduced, 15, 5);
				Threshold(ho_ImageReduced, &ho_Region_Blob, 100, 255);


				Intersection(ho_Region_Blob, ho_Region, &ho_Region);
				Difference(ho_Region, ho_JTRegion, &ho_Region);
				Connection(ho_Region, &ho_SelectedRegions);
				SelectGray(ho_SelectedRegions, ho_Image, &ho_SelectedRegions, (HTuple("deviation").Append("min")),
					"and", (HTuple(30).Append(0)), (HTuple(255).Append(15)));

				SelectShape(ho_SelectedRegions, &ho_SelectedRegions, ((HTuple("area").Append("width")).Append("anisometry")),
					"and", ((HTuple(100).Append(6)).Append(0.5)), ((HTuple(9999999).Append(30)).Append(50)));
				CountObj(ho_SelectedRegions, &hv_Number);
				if (0 != hv_Number)
				{
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[10])), ho_SelectedRegions,
						&ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[10]));
				}


				Union1(ho_RegionUnion, &ho_Region);
				MoveRegion(ho_ImageBlackEdge, &ho_ImageBlackEdge_, 0, -15);
				Difference(ho_Region, ho_ImageBlackEdge_, &ho_Region);

				Union1(ho_Region, &ho_Region_dectct2);
				ReduceDomain(ho_Image, ho_Region_dectct2, &ho_ImageReduced);
				MedianRect(ho_ImageReduced, &ho_ImageMedian, 5, 5);
				MedianRect(ho_ImageReduced, &ho_ImageMedian1, 25, 200);
				DynThreshold(ho_ImageMedian, ho_ImageMedian1, &ho_RegionDynThresh, 35, "not_equal");
				Difference(ho_RegionDynThresh, ho_JTRegion, &ho_RegionDynThresh);
				Connection(ho_RegionDynThresh, &ho_ConnectedRegions);

				SelectShape(ho_ConnectedRegions, &ho_SelectedRegions, (HTuple("rb").Append("area")),
					"and", (HTuple(4).Append(100)), (HTuple(300).Append(9999999)));
				CountObj(ho_SelectedRegions, &hv_Number);
				if (0 != hv_Number)
				{
					ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_SelectedRegions,
						&ho___Tmp_Obj_0);
					SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
				}

			}



		}
		//****************************3-2   **************************************
		if (0 != (HTuple(int(hv_StaNum == 3)).TupleAnd(int(hv_CamNum == 2))))
		{

			Union1(ho_RegionUnion, &ho_RegionDetect);

			//*****提取黑缝隙
			AreaCenter(ho_RegionDetect, &hv__, &hv_Row, &hv_Column);
			GenRectangle1(&ho_Rectangle, 0, hv_Column - 50, 2048, hv_Column + 200);
			ReduceDomain(ho_Image, ho_Rectangle, &ho_ImageReduced);

			AutoThreshold(ho_ImageReduced, &ho_ImageTopHat, 11);
			ClosingRectangle1(ho_ImageTopHat, &ho_ImageTopHat, 5, 5);
			//gray_tophat (ImageReduced, BlackSE, ImageTopHat)
			//threshold (ImageTopHat, ImageTopHat, 0, 50)

			FillUp(ho_ImageTopHat, &ho_ImageTopHat);
			if (0 != (HTuple(HTuple(HTuple(HTuple(HTuple(int(hv_ImageNum == 3)).TupleOr(int(hv_ImageNum == 5))).TupleOr(int(hv_ImageNum == 12))).TupleOr(int(hv_ImageNum == 16))).TupleOr(int(hv_ImageNum == 18))).TupleOr(int(hv_ImageNum == 25))))
			{
				OpeningRectangle1(ho_ImageTopHat, &ho_ImageTopHat, 10, 180);
			}
			Connection(ho_ImageTopHat, &ho_ImageTopHat);
			SelectShape(ho_ImageTopHat, &ho_ImageTopHat, "height", "and", 2000, 99999);
			DilationRectangle1(ho_RegionDetect, &ho_RegionDetect_, 21, 11);
			SelectShapeProto(ho_ImageTopHat, ho_RegionDetect_, &ho_ImageTopHat_, "overlaps_rel",
				5, 100);

			AreaCenter(ho_ImageTopHat_, &hv_Area, &hv__, &hv__);
			if (0 != (hv_Area.TupleLength()))
			{
				SortRegion(ho_ImageTopHat_, &ho_SortedRegions, "upper_right", "false", "column");
				SelectObj(ho_SortedRegions, &ho_ImageBlackEdge, 1);
			}
			else
			{
				SortRegion(ho_ImageTopHat, &ho_SortedRegions, "upper_left", "true", "column");
				SelectObj(ho_SortedRegions, &ho_ImageBlackEdge, 1);
			}

			DilationRectangle1(ho_ImageBlackEdge, &ho_ImageBlackEdge, 100, 11);
			MoveRegion(ho_ImageBlackEdge, &ho_ImageBlackEdge, 0, 47);
			DilationRectangle1(ho_ImageBlackEdge, &ho_ImageBlackEdge, 1, 51);



			Union1(ho_RegionUnion, &ho_Region_detect);

			ReduceDomain(ho_Image, ho_Region_detect, &ho_ImageReduced);
			Threshold(ho_ImageReduced, &ho_JTRegion_, 0, 50);
			OpeningRectangle1(ho_JTRegion_, &ho_RegionOpening, 1, 200);
			Difference(ho_JTRegion_, ho_RegionOpening, &ho_JTRegion_);



			OpeningCircle(ho_JTRegion_, &ho_JTRegion_, 5.5);
			FillUp(ho_JTRegion_, &ho_JTRegion);
			ErosionRectangle1(ho_JTRegion, &ho_JTRegion, 21, 11);
			ExpandGray(ho_JTRegion, ho_ImageReduced, ho_JTRegion, &ho_JTRegion, 85, "image",
				2);
			FillUp(ho_JTRegion, &ho_JTRegion);
			OpeningRectangle1(ho_JTRegion, &ho_JTRegion1, 30, 1);
			DilationRectangle1(ho_JTRegion1, &ho_JTRegion1, 51, 81);

			MoveRegion(ho_JTRegion, &ho_RegionMoved, 110, 0);
			Difference(ho_RegionMoved, ho_JTRegion, &ho_RegionDifference);

			OpeningCircle(ho_RegionDifference, &ho_RegionDifference, 9.5);
			ClosingCircle(ho_RegionDifference, &ho_RegionDifference, 3.5);
			FillUp(ho_RegionDifference, &ho_RegionDifference);
			OpeningRectangle1(ho_RegionDifference, &ho_RegionDifference, 20, 1);
			ClosingRectangle1(ho_RegionDifference, &ho_RegionDifference, 1, 10);



			Connection(ho_RegionDifference, &ho_JTRegion);
			SelectShapeStd(ho_JTRegion, &ho_JTRegion, "max_area", 70);


			GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 11, 91);
			SubImage(ho_ImageClosing, ho_ImageReduced, &ho_ImageSub, 1, 0);
			Union1(ho_Region_detect, &ho_Region_detect);
			Difference(ho_Region_detect, ho_JTRegion_, &ho_Region_detect);
			Union1(ho_RegionDifference, &ho_RegionDifference);
			MinMaxGray(ho_Region_detect, ho_ImageSub, 20, &hv_Min, &hv_Max, &hv_Range);
			hv_Mult = 255 / hv_Range;
			hv_Add = (-hv_Mult) * hv_Min;
			ScaleImage(ho_ImageSub, &ho_ImageScale, hv_Mult, hv_Add);



			Threshold(ho_ImageScale, &ho_Region, 250, 255);
			FillUpShape(ho_Region, &ho_Region, "area", 1, 100);
			Intersection(ho_Region, ho_JTRegion, &ho_Region);


			OpeningCircle(ho_Region, &ho_Region, 3.5);
			Connection(ho_Region, &ho_Region);

			SelectShape(ho_Region, &ho_Region, (HTuple("area").Append("anisometry")), "and",
				(HTuple(100).Append(0.5)), (HTuple(99999).Append(6)));
			MoveRegion(ho_Region_detect, &ho_RegionMoved, 0, -20);
			Intersection(ho_Region, ho_RegionMoved, &ho_Region);
			Connection(ho_Region, &ho_Region);
			ShapeTrans(ho_Region, &ho_RegionTrans, "rectangle1");
			DilationRectangle1(ho_JTRegion_, &ho_JTRegion_, 11, 11);
			Difference(ho_RegionTrans, ho_JTRegion_, &ho_RegionTrans);
			SelectGray(ho_RegionTrans, ho_Image, &ho_RegionTrans, (HTuple("deviation").Append("mean")),
				"and", (HTuple(20).Append(15)), (HTuple(255).Append(120)));
			Intersection(ho_Region, ho_RegionTrans, &ho_Region);


			ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_Region, &ho___Tmp_Obj_0
				);
			SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));




			if (0 != (int(hv_ImageNum == 23)))
			{

				Union1(ho_RegionUnion, &ho_Region_detect);

				ReduceDomain(ho_Image, ho_Region_detect, &ho_ImageReduced);
				Threshold(ho_ImageReduced, &ho_JTRegion_, 0, 50);
				FillUp(ho_JTRegion_, &ho_JTRegion);
				OpeningRectangle1(ho_JTRegion, &ho_JTRegion1, 30, 1);
				DilationRectangle1(ho_JTRegion1, &ho_JTRegion1, 51, 71);

				MoveRegion(ho_JTRegion, &ho_RegionMoved, 110, 0);
				Difference(ho_RegionMoved, ho_JTRegion, &ho_RegionDifference);
				ClosingCircle(ho_RegionDifference, &ho_RegionDifference, 3.5);
				FillUp(ho_RegionDifference, &ho_RegionDifference);
				OpeningRectangle1(ho_RegionDifference, &ho_RegionDifference, 20, 1);
				ClosingRectangle1(ho_RegionDifference, &ho_RegionDifference, 1, 10);



				Connection(ho_RegionDifference, &ho_JTRegion);
				SelectShapeStd(ho_JTRegion, &ho_JTRegion, "max_area", 70);


				GrayClosingRect(ho_ImageReduced, &ho_ImageClosing, 11, 91);
				SubImage(ho_ImageClosing, ho_ImageReduced, &ho_ImageSub, 1, 0);
				Union1(ho_Region_detect, &ho_Region_detect);
				Difference(ho_Region_detect, ho_JTRegion_, &ho_Region_detect);
				Union1(ho_RegionDifference, &ho_RegionDifference);
				MinMaxGray(ho_Region_detect, ho_ImageSub, 20, &hv_Min, &hv_Max, &hv_Range);
				hv_Mult = 255 / hv_Range;
				hv_Add = (-hv_Mult) * hv_Min;
				ScaleImage(ho_ImageSub, &ho_ImageScale, hv_Mult, hv_Add);



				Threshold(ho_ImageScale, &ho_Region, 250, 255);
				FillUpShape(ho_Region, &ho_Region, "area", 1, 100);
				Intersection(ho_Region, ho_JTRegion, &ho_Region);


				OpeningCircle(ho_Region, &ho_Region, 3.5);
				Connection(ho_Region, &ho_Region);

				SelectShape(ho_Region, &ho_Region, (HTuple("area").Append("anisometry")),
					"and", (HTuple(100).Append(0.5)), (HTuple(99999).Append(6)));
				MoveRegion(ho_Region_detect, &ho_RegionMoved, 0, -20);
				Intersection(ho_Region, ho_RegionMoved, &ho_Region);
				Connection(ho_Region, &ho_Region);
				ShapeTrans(ho_Region, &ho_RegionTrans, "rectangle1");
				DilationRectangle1(ho_JTRegion_, &ho_JTRegion_, 11, 11);
				Difference(ho_RegionTrans, ho_JTRegion_, &ho_RegionTrans);
				SelectGray(ho_RegionTrans, ho_Image, &ho_RegionTrans, (HTuple("deviation").Append("mean")),
					"and", (HTuple(20).Append(15)), (HTuple(255).Append(120)));
				Intersection(ho_Region, ho_RegionTrans, &ho_Region);


				ConcatObj((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_Region, &ho___Tmp_Obj_0
					);
				SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));






			}



		}
		//**************

		GenEmptyRegion(&ho_Regions);
		ho_Regions = (*hv_dt).TupleGetDictObject(HTuple(hv_n[16]));
		Union1(ho_Regions, &ho_Regions);
		SelectShape(ho_Regions, &ho_Selected_circles, (HTuple("area").Append("circularity")),
			"or", (HTuple(0).Append(0.7)), (HTuple(200).Append(1)));
		Union2(ho_Selected_circles, (*hv_dt).TupleGetDictObject(HTuple(hv_n[0])), &ho___Tmp_Obj_0
			);
		SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[0]));
		Difference(ho_Regions, ho_Selected_circles, &ho_Regions);
		SelectShape(ho_Regions, &ho_Regions, ((HTuple("area").Append("width")).Append("height")),
			"and", ((HTuple(5).Append(3)).Append(3)), ((HTuple(999999).Append(999999)).Append(999999)));
		Union1(ho_Regions, &ho_Regions);
		SelectShape(ho_Regions, &ho_Regions, ((HTuple("area").Append("width")).Append("height")),
			"and", ((HTuple(5).Append(3)).Append(3)), ((HTuple(999999).Append(999999)).Append(999999)));
		Union2(ho_Regions, (*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), &ho___Tmp_Obj_0
			);
		SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
		//********
		//额外规则----1
		Union1((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), &ho___Tmp_Obj_0);
		SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
		Connection((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), &ho___Tmp_Obj_0);
		SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
		ShapeTrans((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), &ho_RegionTrans, "rectangle1");
		DilationRectangle1(ho_RegionTrans, &ho_RegionTrans, 31, 31);
		if (0 != (HTuple(HTuple(HTuple(int(hv_StaNum == 3)).TupleAnd(int(hv_CamNum == 1))).TupleOr(HTuple(int(hv_StaNum == 1)).TupleAnd(int(hv_CamNum == 1)))).TupleOr(HTuple(int(hv_StaNum == 2)).TupleAnd(int(hv_CamNum == 1)))))
		{
			SelectGray(ho_RegionTrans, ho_Image, &ho_RegionTrans, "deviation", "and", 15,
				255);
		}
		else
		{
			SelectGray(ho_RegionTrans, ho_Image, &ho_RegionTrans, "deviation", "and", 10,
				255);
		}

		Intersection(ho_RegionTrans, (*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), &ho___Tmp_Obj_0
			);
		SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
		//**********************
		//额外规则----2
		Union1((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), &ho___Tmp_Obj_0);
		SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
		Connection((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), &ho___Tmp_Obj_0);
		SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
		Union1((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), &ho_Region);
		SelectShape((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), &ho_SelectedRegions,
			((HTuple("area").Append("circularity")).Append("anisometry")), "and", ((HTuple(0).Append(0.15)).Append(0)),
			((HTuple(650).Append(1)).Append(4)));
		ShapeTrans((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), &ho_RegionTrans, "rectangle1");

		SelectGray(ho_RegionTrans, ho_Image, &ho_RegionTrans, "deviation", "and", 0,
			30);

		Intersection(ho_SelectedRegions, ho_RegionTrans, &ho_SelectedRegions);

		Difference((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_SelectedRegions,
			&ho___Tmp_Obj_0);
		SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));

		SelectShape((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), &ho_SelectedRegions,
			((HTuple("area").Append("circularity")).Append("anisometry")), "and", ((HTuple(0).Append(0.75)).Append(0)),
			((HTuple(200).Append(1)).Append(1.5)));
		Difference((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_SelectedRegions,
			&ho___Tmp_Obj_0);
		SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));



		ShapeTrans((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), &ho_RegionTrans, "rectangle1");
		DilationRectangle1(ho_RegionTrans, &ho_RegionTrans, 21, 21);
		SelectGray(ho_RegionTrans, ho_Image, &ho_RegionTrans, "deviation", "and", 0,
			13);
		Difference((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_RegionTrans, &ho___Tmp_Obj_0
			);
		SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));

		//**********************
		//额外规则----3
		if (0 != (HTuple(HTuple(HTuple(HTuple(HTuple(HTuple(int(hv_StaNum == 1)).TupleAnd(int(hv_CamNum == 1))).TupleAnd(int(hv_ImageNum == 16))).TupleOr(HTuple(HTuple(int(hv_StaNum == 1)).TupleAnd(int(hv_CamNum == 2))).TupleAnd(int(hv_ImageNum == 16)))).TupleOr(HTuple(HTuple(int(hv_StaNum == 2)).TupleAnd(int(hv_CamNum == 2))).TupleAnd(int(hv_ImageNum == 16)))).TupleOr(HTuple(HTuple(int(hv_StaNum == 3)).TupleAnd(int(hv_CamNum == 1))).TupleAnd(int(hv_ImageNum == 16)))).TupleOr(HTuple(HTuple(int(hv_StaNum == 3)).TupleAnd(int(hv_CamNum == 2))).TupleAnd(int(hv_ImageNum == 16)))))
		{
			GenRectangle1(&ho_ROI_0, 0, 0, 1100, 2048);
			Difference((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_ROI_0, &ho___Tmp_Obj_0
				);
			SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
			Difference((*hv_dt).TupleGetDictObject(HTuple(hv_n[10])), ho_ROI_0, &ho___Tmp_Obj_0
				);
			SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[10]));
		}




		if (0 != (HTuple(HTuple(int(hv_StaNum == 3)).TupleAnd(int(hv_CamNum == 1))).TupleAnd(int(hv_ImageNum == 23))))
		{
			AreaCenter(ho_JTRegion, &hv_Area, &hv__, &hv__);
			if (0 != (int(hv_Area < 8000)))
			{
				GenRectangle1(&ho_ROI_0, 869.91, 691.889, 1529.05, 1410.32);
				Difference((*hv_dt).TupleGetDictObject(HTuple(hv_n[10])), ho_ROI_0, &ho___Tmp_Obj_0
					);
				SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[10]));
			}


			GenRectangle1(&ho_ROI_0, 1586.83, 394.444, 2056.77, 1637.69);
			Difference((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_ROI_0, &ho___Tmp_Obj_0
				);
			SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
		}
		if (0 != (HTuple(HTuple(int(hv_StaNum == 3)).TupleAnd(int(hv_CamNum == 1))).TupleAnd(int(hv_ImageNum == 4))))
		{
			AreaCenter(ho_JTRegion, &hv_Area, &hv__, &hv__);
			if (0 != (int(hv_Area < 8000)))
			{

				GenRectangle1(&ho_ROI_0, 951.576, 484.552, 1746.61, 1413.97);
				Difference((*hv_dt).TupleGetDictObject(HTuple(hv_n[10])), ho_ROI_0, &ho___Tmp_Obj_0
					);
				SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[10]));

				Difference((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_ROI_0, &ho___Tmp_Obj_0
					);
				SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
			}
			GenRectangle1(&ho_ROI_0, -74.2418, 330.309, 954.309, 1620.55);
			Difference((*hv_dt).TupleGetDictObject(HTuple(hv_n[10])), ho_ROI_0, &ho___Tmp_Obj_0
				);
			SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[10]));
			Difference((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_ROI_0, &ho___Tmp_Obj_0
				);
			SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
		}

		if (0 != (int(hv_ImageNum == 4)))
		{
			//****抖动屏蔽
			GenRectangle1(&ho_ROI_0, 0, 0, 800, 2048);
			Difference((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_ROI_0, &ho___Tmp_Obj_0
				);
			SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
			Difference((*hv_dt).TupleGetDictObject(HTuple(hv_n[10])), ho_ROI_0, &ho___Tmp_Obj_0
				);
			SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[10]));
		}





		if (0 != (HTuple(HTuple(int(hv_StaNum == 3)).TupleAnd(int(hv_CamNum == 1))).TupleAnd(int(hv_ImageNum == 15))))
		{

			GenRectangle1(&ho_ROI_0, 296.794, 481.157, 679.274, 1423.9);
			Difference((*hv_dt).TupleGetDictObject(HTuple(hv_n[10])), ho_ROI_0, &ho___Tmp_Obj_0
				);
			SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[10]));

		}
		if (0 != (HTuple(HTuple(HTuple(HTuple(HTuple(HTuple(int(hv_StaNum == 1)).TupleAnd(int(hv_CamNum == 1))).TupleAnd(int(hv_ImageNum == 15))).TupleOr(HTuple(HTuple(int(hv_StaNum == 1)).TupleAnd(int(hv_CamNum == 2))).TupleAnd(int(hv_ImageNum == 15)))).TupleOr(HTuple(HTuple(int(hv_StaNum == 2)).TupleAnd(int(hv_CamNum == 2))).TupleAnd(int(hv_ImageNum == 15)))).TupleOr(HTuple(HTuple(int(hv_StaNum == 3)).TupleAnd(int(hv_CamNum == 1))).TupleAnd(int(hv_ImageNum == 15)))).TupleOr(HTuple(HTuple(int(hv_StaNum == 3)).TupleAnd(int(hv_CamNum == 2))).TupleAnd(int(hv_ImageNum == 15)))))
		{

			//****抖动屏蔽
			GenRectangle1(&ho_ROI_0, 955, 0, 2048, 2048);
			Difference((*hv_dt).TupleGetDictObject(HTuple(hv_n[10])), ho_ROI_0, &ho___Tmp_Obj_0
				);
			SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[10]));
			Difference((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_ROI_0, &ho___Tmp_Obj_0
				);
			SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));

		}



		if (0 != (HTuple(HTuple(int(hv_StaNum == 3)).TupleAnd(int(hv_CamNum == 1))).TupleAnd(int(hv_ImageNum == 16))))
		{


			GenRectangle1(&ho_ROI_0, 1177.12, -254.589, 1977.92, 1990.84);
			Difference((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_ROI_0, &ho___Tmp_Obj_0
				);
			SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
			Difference((*hv_dt).TupleGetDictObject(HTuple(hv_n[10])), ho_ROI_0, &ho___Tmp_Obj_0
				);
			SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[10]));
		}



		if (0 != (HTuple(HTuple(int(hv_StaNum == 2)).TupleAnd(int(hv_CamNum == 1))).TupleAnd(int(hv_ImageNum == 13))))
		{
			GenRectangle1(&ho_ROI_0, 1718.73, -0.367855, 2111.29, 2137.77);
			Difference((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_ROI_0, &ho___Tmp_Obj_0
				);
			SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
		}

		if (0 != (HTuple(HTuple(int(hv_StaNum == 2)).TupleAnd(int(hv_CamNum == 1))).TupleAnd(int(hv_ImageNum == 15))))
		{

			GenRectangle1(&ho_ROI_0, -98.9641, 3.38946, 234.375, 1977.42);
			Difference((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_ROI_0, &ho___Tmp_Obj_0
				);
			SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
		}
		if (0 != (HTuple(HTuple(int(hv_StaNum == 2)).TupleAnd(int(hv_CamNum == 1))).TupleAnd(int(hv_ImageNum == 14))))
		{


			GenRectangle1(&ho_ROI_0, 1823.9, -374.945, 2107.05, 2269.97);
			Difference((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_ROI_0, &ho___Tmp_Obj_0
				);
			SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
		}
		if (0 != (HTuple(HTuple(int(hv_StaNum == 2)).TupleAnd(int(hv_CamNum == 2))).TupleAnd(int(hv_ImageNum == 12))))
		{



			GenRectangle1(&ho_ROI_0, 1837.63, -64.1559, 2133.65, 2059.5);
			Difference((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_ROI_0, &ho___Tmp_Obj_0
				);
			SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
		}

		if (0 != (HTuple(HTuple(int(hv_StaNum == 2)).TupleAnd(int(hv_CamNum == 2))).TupleAnd(int(hv_ImageNum == 13))))
		{




			GenRectangle1(&ho_ROI_0, -152.124, 98.0482, 197.531, 1840.7);
			Difference((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_ROI_0, &ho___Tmp_Obj_0
				);
			SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
			GenRectangle1(&ho_ROI_0, 1791.89, -118.776, 2209.75, 1896.87);
			Difference((*hv_dt).TupleGetDictObject(HTuple(hv_n[5])), ho_ROI_0, &ho___Tmp_Obj_0
				);
			SetDictObject(ho___Tmp_Obj_0, (*hv_dt), HTuple(hv_n[5]));
		}
		//**********************




		GetDictParam((*hv_dt), "keys", HTuple(), &hv_GenParamValue);


		{
			HTuple end_val1749 = (hv_GenParamValue.TupleLength()) - 1;
			HTuple step_val1749 = 1;
			for (hv_Index10 = 0; hv_Index10.Continue(end_val1749, step_val1749); hv_Index10 += step_val1749)
			{
				GenEmptyRegion(&ho_EmptyRegion2);
				GenEmptyRegion(&ho_EmptyRegion1);
				hv_name = HTuple(hv_GenParamValue[hv_Index10]);
				ho_EmptyRegion1 = (*hv_dt).TupleGetDictObject(hv_name);
				Union1(ho_EmptyRegion1, &ho_EmptyRegion1);
				AreaCenter(ho_EmptyRegion1, &hv_Area, &hv_Row, &hv_Column);
				if (0 != (HTuple(int(hv_Area < 10)).TupleOr(int(hv_Index10 == 16))))
				{
					RemoveDictKey((*hv_dt), hv_name);
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
		string strerr = std::to_string(hv_ProNum.I()) + "-" + std::to_string(hv_StaNum.I()) + "_" + std::to_string(hv_CamNum.I()) + "_" + std::to_string(hv_ImageNum.I()) + "ImageProcessZJ4BlackDefects1Machine1_2_3Station error:" + strErr;
		VeErrMessage.push_back(QString::fromStdString(strerr));

		GenEmptyRegion(&ho_EmptyRegion);
		{
			HTuple end_val1700 = (hv_n.TupleLength()) - 1;
			HTuple step_val1700 = 1;
			for (hv_Index9 = 0; hv_Index9.Continue(end_val1700, step_val1700); hv_Index9 += step_val1700)
			{
				SetDictObject(ho_EmptyRegion, (*hv_dt), HTuple(hv_n[hv_Index9]));
			}
		}
		reg = -1;
		return -1;

	}
	reg = -1;
	return -1;
}
#pragma endregion
















































