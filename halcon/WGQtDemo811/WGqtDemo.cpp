#include "WGqtDemo.h"
#include <QTimer>
#include <winuser.h>  

#pragma execution_character_set("utf-8")
WGqtDemo::WGqtDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui = new Ui::WGqtDemoClass();
	//ui->centralWidget->set
	/*int wi = ui->centralWidget->width();
	int hi = ui->centralWidget->height();*/
	setFixedSize(1420, 1071);
	ui->setupUi(this);
	GenEmptyObj(&ho_EmptyTextObject);
	hhh.GenEmptyObj();
	// 创建Halcon窗口和初始化
	//Hlong HWinld = (Hlong)ui->HWinHandle->winId();
	//HTuple Hwidth = ui->HWinHandle->width();
	//HTuple Hheigth = ui->HWinHandle->height();
	Hlong HWinld = (Hlong)ui->label_2->winId();
	Hwidth = ui->label_2->width();
	Hheigth = ui->label_2->height();
	ui->tabWidget->setStyleSheet(
		"QTabWidget{"
		"background-color:rgb(203, 203, 152) ;"					 //rgb(170, 170, 127)
		"}"
		"QTabWidget::pane{"
		"background-color:rgb(203, 203, 152) ;"
		"    border:9px;"
		"}"
		"QTabWidget::tab-bar{"
		"        alignment:left;"
		"}"
		"QTabBar::tab{"
		"    background:rgb(14, 106, 175);"
		"    border-radius: 10px;"
		"    min-width:35ex;"
		"    min-height:10ex;"
		"}"
		"QTabBar::tab:hover{"
		"    background-color: yellow;"
		"color:black;"
		"}"
		"QTabBar::tab:selected{"
		"    border-color: black;"
		"    background:green;"
		"    color:white;"
		"}"
		);
	OpenWindow(0, 0, Hwidth, Hheigth, HWinld, "", "", &hv_WindowHandle);
	HDevWindowStack::Push(hv_WindowHandle);
	SetColored(hv_WindowHandle, 12);
	SetDraw(hv_WindowHandle, "margin");
	SetWindowAttr("background_color", "black");
	// 信号和槽函数链接
	connect(ui->pBt_Draw, &QPushButton::clicked, this, &WGqtDemo::Draw_Regions);
	connect(ui->pBt_Draw_2, &QPushButton::clicked, this, &WGqtDemo::stopRun);
	connect(ui->pBt_Draw_3, &QPushButton::clicked, this, &WGqtDemo::on_selectBtn);
	//connect(ui.pBt_Draw,);
	// 初始化控件颜色 	  	  textEdit_err		   textEdit_err
	//ui->centralWidget->setStyleSheet("border-radius: 3px;background-color:rgb(144, 144, 0);");
	ui->ImageName->setFixedWidth(80);
	ui->ImageName->setFixedHeight(30);
	ui->ImageName->setStyleSheet("font: bold 16px; border-width: 2px;border-radius: 3px;color: rgb(0, 0, 0); background-color: rgb(170, 170, 255);");
	ui->textEdit_path->setStyleSheet("font: bold 16px;border-width: 2px;border-radius: 3px;color: rgb(0, 0, 0); background-color: rgb(170, 170, 255);");
	ui->Timetext->setFixedWidth(50);
	ui->Timetext->setFixedHeight(30);
	ui->Timetext->setStyleSheet("font: bold 16px;border-width: 2px;border-radius: 3px;color: rgb(0, 0, 0); background-color: rgb(170, 170, 255);");
	ui->textEdit_err->setStyleSheet("font: bold 16px;border-width: 2px;border-radius: 3px;color: rgb(0, 0, 0); background-color: rgb(170, 170, 255);");
	// groupBox_5
	ui->groupBox_5->setStyleSheet("font: bold 20px;");
	ui->groupBox_6->setStyleSheet("font: bold 20px;");
	ui->groupBox_5->setStyleSheet("QGroupBox {border-width:2px;border-style:solid;border-color:rgb(129, 64, 0);margin-top:1.5ex;}"\
		"QGroupBox::title{subcontrol-origin:margin;subcontrol-position:top left;left:7px;margin-left: 0px;padding:0.1px;}");
	ui->groupBox_2->setStyleSheet("QGroupBox {border-width:2px;border-style:solid;border-color:rgb(129, 64, 0);margin-top:1.5ex;}"\
		"QGroupBox::title{subcontrol-origin:margin;subcontrol-position:top left;left:7px;margin-left: 0px;padding:0.1px;}");
	ui->groupBox_7->setStyleSheet("QGroupBox {border-width:2px;border-style:solid;border-color:rgb(129, 64, 0);margin-top:1.5ex;}"\
		"QGroupBox::title{subcontrol-origin:margin;subcontrol-position:top left;left:7px;margin-left: 0px;padding:0.1px;}");
	ui->groupBox_3->setStyleSheet("QGroupBox {border-width:2px;border-style:solid;border-color:rgb(129, 64, 0);margin-top:1.5ex;}"\
		"QGroupBox::title{subcontrol-origin:margin;subcontrol-position:top left;left:7px;margin-left: 0px;padding:0.1px;}");
	ui->groupBox_8->setStyleSheet("QGroupBox {border-width:2px;border-style:solid;border-color:rgb(129, 64, 0);margin-top:1.5ex;}"\
		"QGroupBox::title{subcontrol-origin:margin;subcontrol-position:top left;left:7px;margin-left: 0px;padding:0.1px;}");
	ui->groupBox_4->setStyleSheet("QGroupBox {border-width:2px;border-style:solid;border-color:rgb(129, 64, 0);margin-top:1.5ex;}"\
		"QGroupBox::title{subcontrol-origin:margin;subcontrol-position:top left;left:7px;margin-left: 0px;padding:0.1px;}");
	ui->groupBox_6->setStyleSheet("QGroupBox {border-width:2px;border-style:solid;border-color:rgb(129, 64, 0);margin-top:1.5ex;}"\
		"QGroupBox::title{subcontrol-origin:margin;subcontrol-position:top left;left:7px;margin-left: 0px;padding:0.1px;}");

	QFont ft;
	ft.setPointSize(16);
	ft.setBold(75);
	ui->label_5->setFont(ft);
	ui->label_3->setFont(ft);
	ui->label_6->setFont(ft);
	ui->label_4->setFont(ft);
	ui->label->setFont(ft);

	// 初始化控件
	// 根据自己项目适配自己的配置
#pragma region OQC
	//ui->radioButton_OQC->setChecked(true);
#pragma endregion

#pragma region Q1
	ui->radioButton_Q1->setChecked(true);
#pragma endregion

#pragma region PVD
	//ui->radioButton_PVD->setChecked(true);
#pragma endregion  

	ui->radioButton_A->setChecked(true);
	ui->radioButton_host1->setChecked(true);
	ui->radioButton_hostA->setChecked(true);
	ui->radioButton_OR->setChecked(true);

	// 设置按钮鼠标移动到这里变成手
	ui->pBt_Draw->setCursor(QCursor(Qt::PointingHandCursor));
	ui->pBt_Draw_2->setCursor(QCursor(Qt::PointingHandCursor));
	ui->pBt_Draw_3->setCursor(QCursor(Qt::PointingHandCursor));
	ui->pBt_Draw->setStyleSheet("border-radius: 10px;color: rgb(255, 255, 255); background-color: rgb(0, 170, 255);");
	ui->pBt_Draw_2->setStyleSheet("border-radius: 10px;color: rgb(255, 255, 255); background-color: rgb(0, 170, 255);");
	ui->pBt_Draw_3->setStyleSheet("border-radius: 10px;color: rgb(255, 255, 255); background-color: rgb(0, 170, 255);");


	// 设置提醒用户选择文件
	ui->textEdit_path->append("<font color=\"#FF0000\"> 请选择图像文件！</font> ");
	ui->ImageName->setText("0_0+0");
	// 设置算法运行和停止按钮无效
	ui->pBt_Draw->setEnabled(false);
	ui->pBt_Draw_2->setEnabled(false);

	//SetPart(hv_WindowHandle, 0, 0, 2000, 2000);
	// 程序延时初始化				
	ui->Timetext->setText("50");
	// 设置产品名	   	
	ui->ProductName->addItem("OQC84_内腔_蓝色");
	ui->ProductName->addItem("OQC84_内腔_灰色");
	ui->ProductName->addItem("OQC84_内腔_黑色");
	ui->ProductName->addItem("OQC84_内腔_银色");
	ui->ProductName->addItem("OQC84_外观_蓝色");
	ui->ProductName->addItem("OQC84_外观_灰色");
	ui->ProductName->addItem("OQC84_外观_黑色");
	ui->ProductName->addItem("OQC84_外观_银色");
	ui->ProductName->addItem("自检4_84");
	// 设置默认选项
	ui->ProductName->setCurrentIndex(1);
	ui->ProductName->setStyleSheet("border-radius: 6px;color: rgb(255, 255, 255); background-color: rgb(0, 170, 255);");
	// 算法模式
	ui->AlgorithmMode->addItem("检测算法");
	ui->AlgorithmMode->addItem("定位算法");
	// 设置默认选项
	ui->AlgorithmMode->setCurrentIndex(0);
	ui->AlgorithmMode->setStyleSheet("border-radius: 6px;color: rgb(255, 255, 255); background-color: rgb(0, 170, 255);");

	ui->centralWidget->setStyleSheet("border-radius: 3px;background-color:rgb(203, 203, 152);");
}
WGqtDemo::~WGqtDemo()
{
	if (ui != nullptr)
	{
		delete ui;
	}
	//delete jszc;
}

// 算法运行按钮
void WGqtDemo::Draw_Regions()
{

	//将按钮的背景色设置为lü绿色
	ui->pBt_Draw->setStyleSheet("border-radius: 10px;color: rgb(255, 255, 255); background-color: green;");
	ui->pBt_Draw_2->setStyleSheet("border-radius: 10px;color: rgb(255, 255, 255); background-color: rgb(0, 170, 255);");
	ui->pBt_Draw_3->setStyleSheet("border-radius: 10px;color: rgb(255, 255, 255); background-color: rgb(0, 170, 255);");
	runbool = true;
	// 清空错误信息
	ui->textEdit_err->clear();
	// 遍历图像
	ListFiles(path.toStdString().data(), ((((HTuple("recursive").Append("directories")).Append("files")).Append("follow_links")).Append("max_depth 5")),
		&hv_ImageFiles);
	TupleRegexpSelect(hv_ImageFiles, (HTuple("\\.(tif|tiff|gif|bmp|jpg|jpeg|jp2|png|pcx|pgm|ppm|pbm|xwd|ima|hobj)$").Append("ignore_case")),
		&hv_ImageFiles);

	// 界面上选择是原图还是缺陷图测试						 .currentText()
	if (ui->radioButton_OR->isChecked())
	{
		QString str = ui->AlgorithmMode->currentText();
		if (str == "检测算法")
		{
			TupleRegexpSelect(hv_ImageFiles, "\\\\inner\\\\ORIG\\\\", &hv_ImageFiles);
		}
		else if (str == "定位算法")
		{
			TupleRegexpSelect(hv_ImageFiles, "\\\\outer\\\\ORIG\\\\", &hv_ImageFiles);
		}
	}
	{
		//初始化
		hv_Ts = HTuple();
		hv_SCINam = HTuple();
		hv_SCIANum = HTuple();
		hv_SCINNum = HTuple();
		CreateDict(&hv_Dict);
		CreateDict(&hv_DictData);
		hv_ProNum = 1;
		HTuple  hv_ImageFiles1, LOC;
		// 获取控件上图像名字
		s = ui->ImageName->text();
		if (ui->AlgorithmMode->currentText() == "定位算法")
		{
			LOC = 1;
		}
		else
		{
			LOC = 0;
		}
		Filter_Test_Images(s.toStdString().data(), hv_ImageFiles, 1, LOC, &hv_ProNum, &hv_StaNum, &hv_CamNum, &hv_ImageNum, &hv_ImageFiles);

		HTuple end_val41 = (hv_ImageFiles.TupleLength()) - 1;
		HTuple step_val41 = 1;

		for (hv_Index = 0; hv_Index.Continue(end_val41, step_val41); hv_Index += step_val41)
		{
			Filter_Test_Images(s.toStdString().data(), HTuple(hv_ImageFiles[hv_Index]), 0, LOC, &hv_ProNum, &hv_StaNum, &hv_CamNum, &hv_ImageNum, &hv_ImageFiles1);
			if (hv_ImageFiles1 > 0)
			{
				int tm = ui->Timetext->text().toInt();
				Sleep(tm);
				// 读取本地图像和获取图像大小
				ReadImage(&ho_Image, HTuple(hv_ImageFiles[hv_Index]));
				GetImageSize(ho_Image, &witdh, &hvheight);

				HTuple hv_DictHandle, hv_s, MachineNum;
				HTuple hv_mc;

				if (ui->radioButton_host1->isChecked())
				{
					hv_mc = "1";
				}
				else if (ui->radioButton_host2->isChecked())
				{
					hv_mc = "2";
				}
				else if (ui->radioButton_host3->isChecked())
				{
					hv_mc = "3";
				}
				else if (ui->radioButton_host4->isChecked())
				{
					hv_mc = "4";
				}


				QString strFileQ1_Dict = "../x64/Release/Q1AlgorithmConfig.hdict";
				HTuple hv_p = strFileQ1_Dict.toStdString().c_str();
				if (ui->radioButton_hostA->isChecked())
				{
					hv_s = "1";
				}
				else if (ui->radioButton_hostB->isChecked())
				{
					hv_s = "2";
				}
				ReadDict(hv_p, HTuple(), HTuple(), &hv_DictHandle);
				hv_AlgorParaQ1Handle = (((hv_DictHandle.TupleGetDictTuple("Machine")).TupleGetDictTuple(hv_mc)).TupleGetDictTuple("Side")).TupleGetDictTuple(hv_s);
				processImage(); // 图像处理
				if (runbool == false)
				{
					break;
				}
			}
		}
		// 判断是否有图像
		if (end_val41 <= 0)
		{
			showErrmess("选择的文件没有图像！");
		}
	}
	ui->pBt_Draw->setStyleSheet("border-radius: 10px;color: rgb(255, 255, 255); background-color: rgb(0, 170, 255);");
	//响应界面显示 
	QApplication::processEvents();
}

// 图像处理函数
void  WGqtDemo::processImage()
{

	// 调用函数使用的字段定义
	hv_N = 0;
	hv_ro = HTuple();
	hv_co = HTuple();
	hv_te = HTuple();
	HTuple num, hv_Length2;
	int net = 1;
	GenEmptyObj(&ho_reg);
	try
	{
		CountSeconds(&hv_S0);

		/************************************************************
		*Description:          算法所有调用逻辑全部在这下方写
		************************************************************/
#pragma region 算法调用逻辑	
		// 调用OQC算法
		if (ui->radioButton_OQC->isChecked())
		{
			if (ui->AlgorithmMode->currentText() == "检测算法")
			{

				if (hv_StaNum == 1)
				{
					QString productname = ui->ProductName->currentText();

					Aerr = jszcOQC.ImageProcessOQC84lumen4ColourDefects1Machine1Station(ho_Image, hv_ProNum, hv_StaNum, hv_CamNum, hv_ImageNum, productname.toStdString().data(), &hv_dt);

					if (jszcOQC.reg < 0)
					{
						for (int i = 0; i < jszcOQC.VeErrMessage.size(); i++)
						{
							showErrmess(jszcOQC.VeErrMessage[i]);
						}

					}
				}
				else if (hv_StaNum == 2)
				{
					Aerr = jszcOQC.ImageProcessOQC84lumenBlueDefects1Machine2Station(ho_Image, hv_ProNum, hv_StaNum, hv_CamNum, hv_ImageNum, &hv_dt);

					if (jszcOQC.reg < 0)
					{
						for (int i = 0; i < jszcOQC.VeErrMessage.size(); i++)
						{
							showErrmess(jszcOQC.VeErrMessage[i]);
						}

					}
				}
				else if (hv_StaNum == 4)
				{
					Aerr = jszcOQC.ImageProcessOQC84lumenBlueDefects1Machine4Station(ho_Image, hv_ProNum, hv_StaNum, hv_CamNum, hv_ImageNum, &hv_dt);

					if (jszcOQC.reg < 0)
					{
						for (int i = 0; i < jszcOQC.VeErrMessage.size(); i++)
						{
							showErrmess(jszcOQC.VeErrMessage[i]);
						}

					}
				}
			}
			else if (ui->AlgorithmMode->currentText() == "定位算法")
			{

				QString productname = ui->ProductName->currentText();

				ho_DetectRegion.GenEmptyObj();
				ho_camregion.GenEmptyObj();
				ho_PointRegion.GenEmptyObj();

				if (productname == "OQC84_外观_灰色")
				{

					Aerr = jszcOQC.ImageShieldProcessOQC84OuterGrayFrame(ho_Image, &ho_DetectRegion, &ho_PointRegion, &ho_camregion, &ho_JTReg, hv_ProNum, hv_StaNum, hv_CamNum, hv_ImageNum);

					if (jszcOQC.reg < 0)
					{
						for (int i = 0; i < jszcOQC.VeErrMessage.size(); i++)
						{
							showErrmess(jszcOQC.VeErrMessage[i]);
						}

					}


				}
				else if (productname == "OQC84_外观_银色")
				{
					Aerr = jszcOQC.ImageShieldProcessOQC84OuterSilverFrame(ho_Image, &ho_DetectRegion, &ho_PointRegion, &ho_camregion, &ho_JTReg, hv_ProNum, hv_StaNum, hv_CamNum, hv_ImageNum);

					if (jszcOQC.reg < 0)
					{
						for (int i = 0; i < jszcOQC.VeErrMessage.size(); i++)
						{
							showErrmess(jszcOQC.VeErrMessage[i]);
						}

					}
				}
			}
			jszcOQC.clearVec();
		}

		// 调用Q1算法
		if (ui->radioButton_Q1->isChecked())
		{
			hv_Length2 = 0;

			if (hv_StaNum == 1 || hv_StaNum == 5)
			{
				Aerr = jszcQ1.ImageProcessQ1_84GrayLumenDefects1Station(ho_Image, hv_ProNum, hv_StaNum, hv_CamNum, hv_ImageNum, hv_AlgorParaQ1Handle, &hv_dt);

				if (jszcQ1.reg < 0)
				{
					for (int i = 0; i < jszcQ1.VeErrMessage.size(); i++)
					{
						showErrmess(jszcQ1.VeErrMessage[i]);
					}

				}
			}
			else if (hv_StaNum == 2)
			{
				Aerr = jszcQ1.ImageProcessQ1_84LumenRoleDefects2Station(ho_Image, hv_ProNum, hv_StaNum, hv_CamNum, hv_ImageNum, hv_AlgorParaQ1Handle, &hv_dt);

				if (jszcQ1.reg < 0)
				{
					for (int i = 0; i < jszcQ1.VeErrMessage.size(); i++)
					{
						showErrmess(jszcQ1.VeErrMessage[i]);
					}

				}
			}
			else if (hv_StaNum == 3 || hv_StaNum == 4)
			{
				Aerr = jszcQ1.ImageProcessQ1_84GrayLumenDefects3Station(ho_Image, hv_ProNum, hv_StaNum, hv_CamNum, hv_ImageNum, &hv_dt);

				if (jszcQ1.reg < 0)
				{
					for (int i = 0; i < jszcQ1.VeErrMessage.size(); i++)
					{
						showErrmess(jszcQ1.VeErrMessage[i]);
					}

				}
			}
			jszcQ1.clearVec();
		}

		// 调用PVD算法
		if (ui->radioButton_PVD->isChecked())
		{
			if (ui->AlgorithmMode->currentText() == "检测算法")
			{

			}
			else if (ui->AlgorithmMode->currentText() == "定位算法")
			{

			}
			jszcPVD.clearVec();
		}

		CountSeconds(&hv_S1);
	}
	catch (...)
	{
		showErrmess("调用算法逻辑错误");
	}
#pragma endregion

	if (ui->AlgorithmMode->currentText() == "检测算法")
	{
#pragma region 解析算法输出结果信息
		try
		{
			TupleLength(hv_dt, &hv_Length2);
			if (0 != (int(hv_Length2 > 0)))
			{
				GetDictParam(hv_dt, "keys", HTuple(), &hv_GenParamValue);
				if (0 != (hv_GenParamValue.TupleLength()))
				{
					{
						HTuple end_val112 = (hv_GenParamValue.TupleLength()) - 1;
						HTuple step_val112 = 1;
						for (hv_Index1 = 0; hv_Index1.Continue(end_val112, step_val112); hv_Index1 += step_val112)
						{
							AreaCenter(hv_dt.TupleGetDictObject(HTuple(hv_GenParamValue[hv_Index1])),
								&hv_Area, &hv_Row, &hv_Column);

							CountObj(hv_dt.TupleGetDictObject(HTuple(hv_GenParamValue[hv_Index1])), &hv_Number);
							SmallestRectangle1(hv_dt.TupleGetDictObject(HTuple(hv_GenParamValue[hv_Index1])),
								&hv_Row1, &hv_Column1, &hv_Row2, &hv_Column2);
							hv_ro = hv_ro.TupleConcat(hv_Row1);
							hv_co = hv_co.TupleConcat(hv_Column2);

							TupleGenConst(hv_Number, HTuple(hv_GenParamValue[hv_Index1]), &hv_Newtuple);

							hv_te = hv_te.TupleConcat(hv_Newtuple);
							ConcatObj(ho_reg, hv_dt.TupleGetDictObject(HTuple(hv_GenParamValue[hv_Index1])),
								&ho_reg);
						}
					}
					Union1(ho_reg, &ho_RegionUnion);
					AreaCenter(ho_RegionUnion, &hv_Area1, &hv_Row3, &hv_Column3);
					if (0 != hv_Area1)
					{
						hv_N = 1;
					}
				}

				//*********************************************************************
				//对结果进行分析处理并生成可显示的字符串text

				hv_Ts = hv_Ts.TupleConcat(hv_S1 - hv_S0);
				hv_o = (((hv_StaNum + "_") + hv_CamNum) + "_") + hv_ImageNum;
				TupleFind(hv_SCINam, hv_o, &hv_Indices);
				if (0 != (int(hv_Indices < 0)))
				{
					hv_SCINam = hv_SCINam.TupleConcat(hv_o);
					hv_SCIANum = hv_SCIANum.TupleConcat(0);
					hv_SCINNum = hv_SCINNum.TupleConcat(0);
				}
				TupleFind(hv_SCINam, hv_o, &hv_Indices1);
				hv_SCIANum[hv_Indices1] = HTuple(hv_SCIANum[hv_Indices1]) + 1;
				if (0 != (int(hv_N > 0)))
				{
					hv_SCINNum[hv_Indices1] = HTuple(hv_SCINNum[hv_Indices1]) + 1;
				}
				Display_Text(ho_Image, ho_reg, HTuple(hv_ImageFiles[hv_Index]), 4, hv_N, hv_SCINam, hv_SCINNum,
					hv_SCIANum, hv_Ts, "auto", 0, 0, 1, 1, 1,
					1, hv_Dict, hv_DictData, 10, Hheigth, 1, &hv_text);
			}
			else
			{
				showErrmess("hv_dt字典为空");
			}
		}
		catch (...)
		{
			showErrmess("hv_dt字典为空");
		}
#pragma endregion	

		//**************************显示检测结果*******************************************		
		set_display_font(hv_WindowHandle, 10, "楷体", "false", "false");
		SetPart(hv_WindowHandle, 0, 0, hvheight - 1, witdh - 1);
		// 显示图像
		DispObj(ho_Image, HDevWindowStack::GetActive());
		// 显示缺陷结果

		DispObj(ho_reg, HDevWindowStack::GetActive());
		// 显示测试信息
		disp_message(hv_WindowHandle, hv_te, "image", hv_ro - 5, hv_co + 5, "red", "false");
		disp_message(hv_WindowHandle, hv_text, "window", 12, 12, "green", "false");
	}
	else if (ui->AlgorithmMode->currentText() == "定位算法")
	{
		//  解析定位结果



		//**************************显示定位结果*******************************************		
		set_display_font(hv_WindowHandle, 10, "楷体", "false", "false");
		SetPart(hv_WindowHandle, 0, 0, hvheight - 1, witdh - 1);
		// 显示图像
		DispObj(ho_Image, HDevWindowStack::GetActive());
		// 显示定位结果	

		DispObj(ho_DetectRegion, hv_WindowHandle);
		SetColor(HDevWindowStack::GetActive(), "green");
		DispObj(ho_PointRegion, HDevWindowStack::GetActive());
		DispObj(ho_camregion, HDevWindowStack::GetActive());
		DispObj(ho_JTReg, HDevWindowStack::GetActive());
		SetColor(HDevWindowStack::GetActive(), "red");
		// 显示测试信息
		disp_message(hv_WindowHandle, hv_te, "image", hv_ro - 5, hv_co + 5, "red", "false");
	}
	

	//响应界面显示 
	QApplication::processEvents();
}

// 停止运行按钮
void WGqtDemo::stopRun()
{
	//ui->pBt_Draw->setStyleSheet("border-radius: 10px;color: rgb(255, 255, 255); background-color: rgb(0, 170, 255);");
	ui->pBt_Draw_2->setStyleSheet("border-radius: 10px;color: rgb(255, 255, 255); background-color: rgb(255, 133, 135);");
	runbool = false;

}

// 选择文件
void WGqtDemo::on_selectBtn()
{
	// 清空选择路径提示信息
	ui->textEdit_path->clear();
	// 读取文件夹
	path = QFileDialog::getExistingDirectory(this, "选择文件目录", "");
	ui->textEdit_path->append(path);
	ui->pBt_Draw_3->setText("选择完成");
	// 选择文件后打开算法运行和停止按钮使能
	ui->pBt_Draw->setEnabled(true);
	ui->pBt_Draw_2->setEnabled(true);
	ui->pBt_Draw_3->setStyleSheet("border-radius: 10px;color: rgb(0, 0, 0); background-color: rgb(85, 255, 127);");
}

// 显示错误信息
void WGqtDemo::showErrmess(QString err)
{
	err = "ERR:=> " + err;
	ui->textEdit_err->append("<font color=\"#FF0000\">" + err + "</font> ");
}

#pragma region halcon外部函数
void  WGqtDemo::set_display_font(HTuple hv_WindowHandle, HTuple hv_Size, HTuple hv_Font, HTuple hv_Bold,
	HTuple hv_Slant)
{

	// Local iconic variables

	// Local control variables
	HTuple  hv_OS, hv_Fonts, hv_Style, hv_Exception;
	HTuple  hv_AvailableFonts, hv_Fdx, hv_Indices;

	//This procedure sets the text font of the current window with
	//the specified attributes.
	//
	//Input parameters:
	//WindowHandle: The graphics window for which the font will be set
	//Size: The font size. If Size=-1, the default of 16 is used.
	//Bold: If set to 'true', a bold font is used
	//Slant: If set to 'true', a slanted font is used
	//
	GetSystem("operating_system", &hv_OS);
	if (0 != (HTuple(int(hv_Size == HTuple())).TupleOr(int(hv_Size == -1))))
	{
		hv_Size = 16;
	}
	if (0 != (int((hv_OS.TupleSubstr(0, 2)) == HTuple("Win"))))
	{
		//Restore previous behaviour
		hv_Size = (1.13677*hv_Size).TupleInt();
	}
	else
	{
		hv_Size = hv_Size.TupleInt();
	}
	if (0 != (int(hv_Font == HTuple("Courier"))))
	{
		hv_Fonts.Clear();
		hv_Fonts[0] = "Courier";
		hv_Fonts[1] = "Courier 10 Pitch";
		hv_Fonts[2] = "Courier New";
		hv_Fonts[3] = "CourierNew";
		hv_Fonts[4] = "Liberation Mono";
	}
	else if (0 != (int(hv_Font == HTuple("mono"))))
	{
		hv_Fonts.Clear();
		hv_Fonts[0] = "Consolas";
		hv_Fonts[1] = "Menlo";
		hv_Fonts[2] = "Courier";
		hv_Fonts[3] = "Courier 10 Pitch";
		hv_Fonts[4] = "FreeMono";
		hv_Fonts[5] = "Liberation Mono";
	}
	else if (0 != (int(hv_Font == HTuple("sans"))))
	{
		hv_Fonts.Clear();
		hv_Fonts[0] = "Luxi Sans";
		hv_Fonts[1] = "DejaVu Sans";
		hv_Fonts[2] = "FreeSans";
		hv_Fonts[3] = "Arial";
		hv_Fonts[4] = "Liberation Sans";
	}
	else if (0 != (int(hv_Font == HTuple("serif"))))
	{
		hv_Fonts.Clear();
		hv_Fonts[0] = "Times New Roman";
		hv_Fonts[1] = "Luxi Serif";
		hv_Fonts[2] = "DejaVu Serif";
		hv_Fonts[3] = "FreeSerif";
		hv_Fonts[4] = "Utopia";
		hv_Fonts[5] = "Liberation Serif";
	}
	else
	{
		hv_Fonts = hv_Font;
	}
	hv_Style = "";
	if (0 != (int(hv_Bold == HTuple("true"))))
	{
		hv_Style += HTuple("Bold");
	}
	else if (0 != (int(hv_Bold != HTuple("false"))))
	{
		hv_Exception = "Wrong value of control parameter Bold";
		throw HException(hv_Exception);
	}
	if (0 != (int(hv_Slant == HTuple("true"))))
	{
		hv_Style += HTuple("Italic");
	}
	else if (0 != (int(hv_Slant != HTuple("false"))))
	{
		hv_Exception = "Wrong value of control parameter Slant";
		throw HException(hv_Exception);
	}
	if (0 != (int(hv_Style == HTuple(""))))
	{
		hv_Style = "Normal";
	}
	QueryFont(hv_WindowHandle, &hv_AvailableFonts);
	hv_Font = "";
	{
		HTuple end_val48 = (hv_Fonts.TupleLength()) - 1;
		HTuple step_val48 = 1;
		for (hv_Fdx = 0; hv_Fdx.Continue(end_val48, step_val48); hv_Fdx += step_val48)
		{
			hv_Indices = hv_AvailableFonts.TupleFind(HTuple(hv_Fonts[hv_Fdx]));
			if (0 != (int((hv_Indices.TupleLength()) > 0)))
			{
				if (0 != (int(HTuple(hv_Indices[0]) >= 0)))
				{
					hv_Font = HTuple(hv_Fonts[hv_Fdx]);
					break;
				}
			}
		}
	}
	if (0 != (int(hv_Font == HTuple(""))))
	{
		throw HException("Wrong value of control parameter Font");
	}
	hv_Font = (((hv_Font + "-") + hv_Style) + "-") + hv_Size;
	SetFont(hv_WindowHandle, hv_Font);
	return;
}

void  WGqtDemo::Display_Text(HObject ho_Image, HObject ho_deReg, HTuple hv_path, HTuple hv_Lev,
	HTuple hv_Stt, HTuple hv_SCINam, HTuple hv_SCINNum, HTuple hv_SCIANum, HTuple hv_Ts,
	HTuple hv_TimeFormat, HTuple hv_Summary, HTuple hv_Pdd, HTuple hv_Pat, HTuple hv_Img,
	HTuple hv_Reg, HTuple hv_NPro, HTuple hv_Dict, HTuple hv_DictData, HTuple hv_FontSize,
	HTuple hv_WindowH, HTuple hv_AH, HTuple *hv_text)
{

	// Local iconic variables

	// Local control variables
	HTuple  hv_Substrings1, hv_Length3, hv_Pro, hv_ppr;
	HTuple  hv_Matches, hv_GenParamValue2, hv_Indices3, hv_GenParamValue3;
	HTuple  hv_Indices4, hv_GenParamValue, hv_Indices1, hv_GenParamValue1;
	HTuple  hv_Indices2, hv_AllPro, hv_NGPro, hv_Index4, hv_GenParamValue4;
	HTuple  hv_ff, hv_fontsizes, hv_pix, hv_d, hv_h, hv_a, hv_Newtuple;
	HTuple  hv_Length2, hv_T, hv_Sum, hv_ave, hv_Max, hv_Indices;
	HTuple  hv_d0, hv_d1, hv_d2, hv_tt0, hv_tt1, hv_Ttx, hv_ttx;
	HTuple  hv_Sum1, hv_Sum2, hv_tx0, hv_Length, hv_f, hv_Ceil;
	HTuple  hv_Index, hv_Index1, hv_Length1, hv_k, hv_Substrings;
	HTuple  hv_Number, hv_txt0, hv_txt1, hv_txt2, hv_txt3, hv_txt4;
	HTuple  hv_txt5, hv_txt6, hv_txt7, hv_txt8, hv_tx1, hv_txt9;
	HTuple  hv_txt10, hv_txt11, hv_tx2, hv_g, hv_j, hv_Index2;
	HTuple  hv_gg, hv_GenParamValue5, hv_Index3, hv_s, hv_cc;
	HTuple  hv_Index5, hv_Exception, hv___Tmp_Ctrl_Dict_Init_0;
	HTuple  hv___Tmp_Ctrl_Dict_Init_1, hv___Tmp_Ctrl_Dict_Init_2;
	HTuple  hv___Tmp_Ctrl_Dict_Init_3, hv___Tmp_Ctrl_Dict_Init_4;
	HTuple  hv___Tmp_Ctrl_Dict_Init_5;

	try
	{
		TupleSplit(hv_path, "\\", &hv_Substrings1);
		TupleLength(hv_Substrings1, &hv_Length3);
		//产品编号
		hv_Pro = HTuple(hv_Substrings1[hv_Length3 - hv_Lev]);
		hv_ppr = HTuple(hv_Substrings1[(hv_Length3 - hv_Lev) - 1]);
		hv_Pro = (hv_ppr + "-") + hv_Pro;
		TupleRegexpMatch(HTuple(hv_Substrings1[hv_Length3 - 1]), "([\\d]*_[\\d]*_[\\d]*)(?=\\.)",
			&hv_Matches);
		//产品数据
		GetDictParam(hv_DictData, "keys", HTuple(), &hv_GenParamValue2);
		TupleFind(hv_GenParamValue2, hv_Pro, &hv_Indices3);
		if (0 != (int(hv_Indices3 < 0)))
		{
			CreateDict(&hv___Tmp_Ctrl_Dict_Init_0);
			SetDictTuple(hv_DictData, hv_Pro, hv___Tmp_Ctrl_Dict_Init_0);
			hv___Tmp_Ctrl_Dict_Init_0 = HTuple(HNULL);
		}
		if (0 != (int(hv_Stt > 0)))
		{
			GetDictParam(hv_DictData.TupleGetDictTuple(hv_Pro), "keys", HTuple(), &hv_GenParamValue3);
			TupleFind(hv_GenParamValue3, hv_Matches, &hv_Indices4);
			if (0 != (int(hv_Indices4 < 0)))
			{
				CreateDict(&hv___Tmp_Ctrl_Dict_Init_1);
				SetDictTuple(hv_DictData.TupleGetDictTuple(hv_Pro), hv_Matches, hv___Tmp_Ctrl_Dict_Init_1);
				hv___Tmp_Ctrl_Dict_Init_1 = HTuple(HNULL);
			}
		}
		//字典
		if (0 != (int(hv_Pdd == 1)))
		{
			if (0 != (int(hv_NPro == 0)))
			{
				GetDictParam(hv_Dict, "keys", HTuple(), &hv_GenParamValue);
				TupleFind(hv_GenParamValue, hv_Pro, &hv_Indices1);
				if (0 != (int(hv_Indices1 < 0)))
				{
					CreateDict(&hv___Tmp_Ctrl_Dict_Init_2);
					SetDictTuple(hv_Dict, hv_Pro, hv___Tmp_Ctrl_Dict_Init_2);
					hv___Tmp_Ctrl_Dict_Init_2 = HTuple(HNULL);
				}
				GetDictParam(hv_Dict.TupleGetDictTuple(hv_Pro), "keys", HTuple(), &hv_GenParamValue1);
				TupleFind(hv_GenParamValue1, hv_Matches, &hv_Indices2);
				if (0 != (int(hv_Indices2 < 0)))
				{
					CreateDict(&hv___Tmp_Ctrl_Dict_Init_3);
					SetDictTuple(hv_Dict.TupleGetDictTuple(hv_Pro), hv_Matches, hv___Tmp_Ctrl_Dict_Init_3);
					hv___Tmp_Ctrl_Dict_Init_3 = HTuple(HNULL);
				}
				if (0 != (int(hv_Pat == 1)))
				{
					SetDictTuple((hv_Dict.TupleGetDictTuple(hv_Pro)).TupleGetDictTuple(hv_Matches),
						"path", hv_path);
				}
				if (0 != (int(hv_Img == 1)))
				{
					SetDictObject(ho_Image, (hv_Dict.TupleGetDictTuple(hv_Pro)).TupleGetDictTuple(hv_Matches),
						"image");
				}
				if (0 != (int(hv_Reg == 1)))
				{
					SetDictObject(ho_deReg, (hv_Dict.TupleGetDictTuple(hv_Pro)).TupleGetDictTuple(hv_Matches),
						"region");
				}

			}
			else if (0 != (int(hv_NPro != 0)))
			{
				if (0 != (int(hv_Stt > 0)))
				{
					GetDictParam(hv_Dict, "keys", HTuple(), &hv_GenParamValue);
					TupleFind(hv_GenParamValue, hv_Pro, &hv_Indices1);
					if (0 != (int(hv_Indices1 < 0)))
					{
						CreateDict(&hv___Tmp_Ctrl_Dict_Init_4);
						SetDictTuple(hv_Dict, hv_Pro, hv___Tmp_Ctrl_Dict_Init_4);
						hv___Tmp_Ctrl_Dict_Init_4 = HTuple(HNULL);
					}
					GetDictParam(hv_Dict.TupleGetDictTuple(hv_Pro), "keys", HTuple(), &hv_GenParamValue1);
					TupleFind(hv_GenParamValue1, hv_Matches, &hv_Indices2);
					if (0 != (int(hv_Indices2 < 0)))
					{
						CreateDict(&hv___Tmp_Ctrl_Dict_Init_5);
						SetDictTuple(hv_Dict.TupleGetDictTuple(hv_Pro), hv_Matches, hv___Tmp_Ctrl_Dict_Init_5);
						hv___Tmp_Ctrl_Dict_Init_5 = HTuple(HNULL);
					}
					if (0 != (int(hv_Pat == 1)))
					{
						SetDictTuple((hv_Dict.TupleGetDictTuple(hv_Pro)).TupleGetDictTuple(hv_Matches),
							"path", hv_path);
					}

					if (0 != (int(hv_Img == 1)))
					{
						SetDictObject(ho_Image, (hv_Dict.TupleGetDictTuple(hv_Pro)).TupleGetDictTuple(hv_Matches),
							"image");
					}
					if (0 != (int(hv_Reg == 1)))
					{
						SetDictObject(ho_deReg, (hv_Dict.TupleGetDictTuple(hv_Pro)).TupleGetDictTuple(hv_Matches),
							"region");
					}

				}
			}
		}
		//产品维度
		//*************************************************************************
		//产品总数
		hv_AllPro = 0;
		//NG产品数量
		hv_NGPro = 0;
		GetDictParam(hv_DictData, "keys", HTuple(), &hv_GenParamValue3);
		{
			HTuple end_val89 = (hv_GenParamValue3.TupleLength()) - 1;
			HTuple step_val89 = 1;
			for (hv_Index4 = 0; hv_Index4.Continue(end_val89, step_val89); hv_Index4 += step_val89)
			{
				hv_AllPro += 1;
				GetDictParam(hv_DictData.TupleGetDictTuple(HTuple(hv_GenParamValue3[hv_Index4])),
					"keys", HTuple(), &hv_GenParamValue4);
				if (0 != (int((hv_GenParamValue4.TupleLength()) > 0)))
				{
					hv_NGPro += 1;
				}
			}
		}
		//**************************************************************************
		//结果字符串
		CreateDict(&hv_ff);
		//窗体高度

		hv_fontsizes = HTuple::TupleGenSequence(10, 15, 1);
		hv_pix = hv_fontsizes + 3;
		hv_d = hv_fontsizes.TupleFind(hv_FontSize);
		hv_h = HTuple(hv_pix[hv_d]);

		if (0 != (int(hv_WindowH > ((hv_h * 10) + 24))))
		{
			//行数
			hv_a = (hv_WindowH - ((hv_h * 8) + 24)) / hv_h;
			TupleGenConst(hv_a + 10, "", &hv_Newtuple);
		}

		TupleLength(hv_Ts, &hv_Length2);
		hv_T = HTuple(hv_Ts[hv_Length2 - 1]);
		TupleSum(hv_Ts, &hv_Sum);
		hv_ave = hv_Sum / (hv_Length2.TupleReal());
		TupleMax(hv_Ts, &hv_Max);
		TupleFind(hv_Ts, hv_Max, &hv_Indices);
		if (0 != (int(hv_TimeFormat == HTuple("s"))))
		{
			hv_d0 = hv_T.TupleString(".3f");
			hv_d1 = hv_ave.TupleString(".3f");
			hv_d2 = hv_Max.TupleString(".3f");
			hv_h = "s";
		}
		if (0 != (int(hv_TimeFormat == HTuple("ms"))))
		{
			hv_d0 = (hv_T * 1000).TupleString(".1f");
			hv_d1 = (hv_ave * 1000).TupleString(".1f");
			hv_d2 = (hv_Max * 1000).TupleString(".1f");
			hv_h = "ms";
		}
		if (0 != (int(hv_TimeFormat == HTuple("auto"))))
		{
			if (0 != (int(hv_T < 1)))
			{
				hv_d0 = (hv_T * 1000).TupleString(".1f");
				hv_d1 = (hv_ave * 1000).TupleString(".1f");
				hv_d2 = (hv_Max * 1000).TupleString(".1f");
				hv_h = "ms";
			}
			else
			{
				hv_d0 = hv_T.TupleString(".3f");
				hv_d1 = hv_ave.TupleString(".3f");
				hv_d2 = hv_Max.TupleString(".3f");
				hv_h = "s";
			}
		}
		hv_tt0 = (hv_d0 + " ") + hv_h;
		hv_tt1 = (hv_d2 + " ") + hv_h;
		hv_Ttx = ((((((((//'CT    :    当前   '
			"CT    :    \265\261\307\260   " + (hv_tt0.TupleString("-10"))) +//'       平均   '
			"       \306\275\276\371   ") + hv_d1) + " ") + hv_h) +//'\n           最大   '
			"\n           \327\356\264\363   ") + (hv_tt1.TupleString("-10"))) +//'       序号   '
			"       \320\362\272\305   ") + hv_Indices;
		hv_ttx[0] = ((((//'CT    :    当前   '
			"CT    :    当前   " + (hv_tt0.TupleString("-10"))) +//'       平均   '
			"       平均    ") + hv_d1) + " ") + hv_h;
		hv_ttx[1] = ((//'           最大   '
			"           最大   " + (hv_tt1.TupleString("-10"))) +//'       序号   '
			"       v  ") + hv_Indices;

		TupleSum(hv_SCIANum, &hv_Sum1);
		TupleSum(hv_SCINNum, &hv_Sum2);

		hv_tx0 = "";
		TupleLength(hv_SCINam, &hv_Length);
		//列数
		hv_f = hv_Length / (hv_a.TupleReal());
		TupleCeil(hv_f, &hv_Ceil);
		TupleInt(hv_Ceil, &hv_Ceil);
		{
			HTuple end_val158 = hv_Ceil;
			HTuple step_val158 = 1;
			for (hv_Index = 1; hv_Index.Continue(end_val158, step_val158); hv_Index += step_val158)
			{
				SetDictTuple(hv_ff, hv_Index + "", hv_Newtuple);
			}
		}


		{
			HTuple end_val163 = hv_Length;
			HTuple step_val163 = 1;
			for (hv_Index1 = 1; hv_Index1.Continue(end_val163, step_val163); hv_Index1 += step_val163)
			{
				TupleLength(hv_tx0, &hv_Length1);
				hv_k = "";
				if (0 != (int(hv_Length1 > 0)))
				{
					hv_k = "\n";
				}
				TupleSplit(HTuple(hv_SCINam[hv_Index1 - 1]), "_", &hv_Substrings);
				TupleNumber(hv_Substrings, &hv_Number);
				if (0 != (int(HTuple(hv_Number[0]) < 10)))
				{
					hv_txt0 = (HTuple(hv_Number[0]).TupleString("3")).TupleString("-5");
				}
				else if (0 != (int(HTuple(hv_Number[0]) < 100)))
				{
					hv_txt0 = (HTuple(hv_Number[0]).TupleString("4")).TupleString("-5");
				}
				else if (0 != (int(HTuple(hv_Number[0]) < 1000)))
				{
					hv_txt0 = (HTuple(hv_Number[0]).TupleString("4")).TupleString("-5");
				}
				if (0 != (int(HTuple(hv_Number[1]) < 10)))
				{
					hv_txt1 = (HTuple(hv_Number[1]).TupleString("3")).TupleString("-5");
				}
				else if (0 != (int(HTuple(hv_Number[1]) < 100)))
				{
					hv_txt1 = (HTuple(hv_Number[1]).TupleString("4")).TupleString("-5");
				}
				else if (0 != (int(HTuple(hv_Number[1]) < 1000)))
				{
					hv_txt1 = (HTuple(hv_Number[1]).TupleString("4")).TupleString("-5");
				}
				if (0 != (int(HTuple(hv_Number[2]) < 10)))
				{
					hv_txt2 = (HTuple(hv_Number[2]).TupleString("3")).TupleString("-5");
				}
				else if (0 != (int(HTuple(hv_Number[2]) < 100)))
				{
					hv_txt2 = (HTuple(hv_Number[2]).TupleString("4")).TupleString("-5");
				}
				else if (0 != (int(HTuple(hv_Number[2]) < 1000)))
				{
					hv_txt2 = (HTuple(hv_Number[2]).TupleString("4")).TupleString("-5");
				}
				if (0 != (int(HTuple(hv_SCINNum[hv_Index1 - 1]) < 10)))
				{
					hv_txt3 = (HTuple(hv_SCINNum[hv_Index1 - 1]).TupleString("3")).TupleString("-5");
				}
				else if (0 != (int(HTuple(hv_SCINNum[hv_Index1 - 1]) < 100)))
				{
					hv_txt3 = (HTuple(hv_SCINNum[hv_Index1 - 1]).TupleString("4")).TupleString("-5");
				}
				else if (0 != (int(HTuple(hv_SCINNum[hv_Index1 - 1]) < 1000)))
				{
					hv_txt3 = (HTuple(hv_SCINNum[hv_Index1 - 1]).TupleString("4")).TupleString("-5");
				}
				else if (0 != (int(HTuple(hv_SCINNum[hv_Index1 - 1]) < 10000)))
				{
					hv_txt3 = (HTuple(hv_SCINNum[hv_Index1 - 1]).TupleString("5")).TupleString("-5");
				}
				else if (0 != (int(HTuple(hv_SCINNum[hv_Index1 - 1]) < 100000)))
				{
					hv_txt3 = (HTuple(hv_SCINNum[hv_Index1 - 1]).TupleString("5")).TupleString("-5");
				}
				if (0 != (int(HTuple(hv_SCIANum[hv_Index1 - 1]) < 10)))
				{
					hv_txt4 = (HTuple(hv_SCIANum[hv_Index1 - 1]).TupleString("3")).TupleString("-5");
				}
				else if (0 != (int(HTuple(hv_SCIANum[hv_Index1 - 1]) < 100)))
				{
					hv_txt4 = (HTuple(hv_SCIANum[hv_Index1 - 1]).TupleString("4")).TupleString("-5");
				}
				else if (0 != (int(HTuple(hv_SCIANum[hv_Index1 - 1]) < 1000)))
				{
					hv_txt4 = (HTuple(hv_SCIANum[hv_Index1 - 1]).TupleString("4")).TupleString("-5");
				}
				else if (0 != (int(HTuple(hv_SCIANum[hv_Index1 - 1]) < 10000)))
				{
					hv_txt4 = (HTuple(hv_SCIANum[hv_Index1 - 1]).TupleString("5")).TupleString("-5");
				}
				else if (0 != (int(HTuple(hv_SCIANum[hv_Index1 - 1]) < 100000)))
				{
					hv_txt4 = (HTuple(hv_SCIANum[hv_Index1 - 1]).TupleString("5")).TupleString("-5");
				}
				if (0 != (int(((HTuple(hv_SCINNum[hv_Index1 - 1]) / (HTuple(hv_SCIANum[hv_Index1 - 1]).TupleReal())) * 100) < 10)))
				{
					hv_txt5 = ((((HTuple(hv_SCINNum[hv_Index1 - 1]) / (HTuple(hv_SCIANum[hv_Index1 - 1]).TupleReal())) * 100).TupleString(".2f")).TupleString("6")).TupleString("-6");
				}
				else if (0 != (int(((HTuple(hv_SCINNum[hv_Index1 - 1]) / (HTuple(hv_SCIANum[hv_Index1 - 1]).TupleReal())) * 100) < 100)))
				{
					hv_txt5 = ((((HTuple(hv_SCINNum[hv_Index1 - 1]) / (HTuple(hv_SCIANum[hv_Index1 - 1]).TupleReal())) * 100).TupleString(".2f")).TupleString("6")).TupleString("-6");
				}
				else if (0 != (int(((HTuple(hv_SCINNum[hv_Index1 - 1]) / (HTuple(hv_SCIANum[hv_Index1 - 1]).TupleReal())) * 100) < 1000)))
				{
					hv_txt5 = ((((HTuple(hv_SCINNum[hv_Index1 - 1]) / (HTuple(hv_SCIANum[hv_Index1 - 1]).TupleReal())) * 100).TupleString(".2f")).TupleString("6")).TupleString("-6");
				}
				//图像维度
				if (0 != (int(hv_Sum2 < 10)))
				{
					hv_txt6 = (hv_Sum2.TupleString("3")).TupleString("-5");
				}
				else if (0 != (int(hv_Sum2 < 100)))
				{
					hv_txt6 = (hv_Sum2.TupleString("4")).TupleString("-5");
				}
				else if (0 != (int(hv_Sum2 < 1000)))
				{
					hv_txt6 = (hv_Sum2.TupleString("4")).TupleString("-5");
				}
				else if (0 != (int(hv_Sum2 < 10000)))
				{
					hv_txt6 = (hv_Sum2.TupleString("5")).TupleString("-5");
				}
				else if (0 != (int(hv_Sum2 < 100000)))
				{
					hv_txt6 = (hv_Sum2.TupleString("5")).TupleString("-5");
				}
				if (0 != (int(hv_Sum1 < 10)))
				{
					hv_txt7 = (hv_Sum1.TupleString("3")).TupleString("-5");
				}
				else if (0 != (int(hv_Sum1 < 100)))
				{
					hv_txt7 = (hv_Sum1.TupleString("4")).TupleString("-5");
				}
				else if (0 != (int(hv_Sum1 < 1000)))
				{
					hv_txt7 = (hv_Sum1.TupleString("4")).TupleString("-5");
				}
				else if (0 != (int(hv_Sum1 < 10000)))
				{
					hv_txt7 = (hv_Sum1.TupleString("5")).TupleString("-5");
				}
				else if (0 != (int(hv_Sum1 < 100000)))
				{
					hv_txt7 = (hv_Sum1.TupleString("5")).TupleString("-5");
				}
				if (0 != (int(((hv_Sum2 / (hv_Sum1.TupleReal())) * 100) < 10)))
				{
					hv_txt8 = ((((hv_Sum2 / (hv_Sum1.TupleReal())) * 100).TupleString(".2f")).TupleString("6")).TupleString("-6");
				}
				else if (0 != (int(((hv_Sum2 / (hv_Sum1.TupleReal())) * 100) < 100)))
				{
					hv_txt8 = ((((hv_Sum2 / (hv_Sum1.TupleReal())) * 100).TupleString(".2f")).TupleString("6")).TupleString("-6");
				}
				else if (0 != (int(((hv_Sum2 / (hv_Sum1.TupleReal())) * 100) < 1000)))
				{
					hv_txt8 = ((((hv_Sum2 / (hv_Sum1.TupleReal())) * 100).TupleString(".2f")).TupleString("6")).TupleString("-6");
				}
				hv_tx1 = ((((hv_txt6 + " / ") + hv_txt7) + " = ") + hv_txt8) + " %";
				//产品维度
				if (0 != (int(hv_NGPro < 10)))
				{
					hv_txt9 = (hv_NGPro.TupleString("3")).TupleString("-5");
				}
				else if (0 != (int(hv_NGPro < 100)))
				{
					hv_txt9 = (hv_NGPro.TupleString("4")).TupleString("-5");
				}
				else if (0 != (int(hv_NGPro < 1000)))
				{
					hv_txt9 = (hv_NGPro.TupleString("4")).TupleString("-5");
				}
				else if (0 != (int(hv_NGPro < 10000)))
				{
					hv_txt9 = (hv_NGPro.TupleString("5")).TupleString("-5");
				}
				else if (0 != (int(hv_NGPro < 100000)))
				{
					hv_txt9 = (hv_NGPro.TupleString("5")).TupleString("-5");
				}
				if (0 != (int(hv_AllPro < 10)))
				{
					hv_txt10 = (hv_AllPro.TupleString("3")).TupleString("-5");
				}
				else if (0 != (int(hv_AllPro < 100)))
				{
					hv_txt10 = (hv_AllPro.TupleString("4")).TupleString("-5");
				}
				else if (0 != (int(hv_AllPro < 1000)))
				{
					hv_txt10 = (hv_AllPro.TupleString("4")).TupleString("-5");
				}
				else if (0 != (int(hv_AllPro < 10000)))
				{
					hv_txt10 = (hv_AllPro.TupleString("5")).TupleString("-5");
				}
				else if (0 != (int(hv_AllPro < 100000)))
				{
					hv_txt10 = (hv_AllPro.TupleString("5")).TupleString("-5");
				}
				if (0 != (int(((hv_NGPro / (hv_AllPro.TupleReal())) * 100) < 10)))
				{
					hv_txt11 = ((((hv_NGPro / (hv_AllPro.TupleReal())) * 100).TupleString(".2f")).TupleString("6")).TupleString("-6");
				}
				else if (0 != (int(((hv_NGPro / (hv_AllPro.TupleReal())) * 100) < 100)))
				{
					hv_txt11 = ((((hv_NGPro / (hv_AllPro.TupleReal())) * 100).TupleString(".2f")).TupleString("6")).TupleString("-6");
				}
				else if (0 != (int(((hv_NGPro / (hv_AllPro.TupleReal())) * 100) < 1000)))
				{
					hv_txt11 = ((((hv_NGPro / (hv_AllPro.TupleReal())) * 100).TupleString(".2f")).TupleString("6")).TupleString("-6");
				}
				hv_tx2 = ((((hv_txt9 + " / ") + hv_txt10) + " = ") + hv_txt11) + " %";

				hv_tx0 = (((((((((((((hv_tx0 + hv_k) + "") + hv_txt0) + " _ ") + hv_txt1) + " _ ") + hv_txt2) + "   :   ") + hv_txt3) + " / ") + hv_txt4) + " = ") + hv_txt5) + " %";
				hv_g = hv_Index1 - 1;
				hv_j = hv_Index1 / (hv_a.TupleReal());
				TupleCeil(hv_j, &hv_j);
				TupleInt(hv_j, &hv_j);
				hv_j += HTuple("");
				hv_k = (hv_g%hv_a) + 9;
				SetDictTupleAt(hv_ff, hv_j, hv_k, ((((((((((hv_txt0 + " _ ") + hv_txt1) + " _ ") + hv_txt2) + "   :   ") + hv_txt3) + " / ") + hv_txt4) + " = ") + hv_txt5) + " %");
			}
		}
		if (0 != hv_Ceil)
		{
			SetDictTupleAt(hv_ff, "1", 0, //'当前图像路径：'
				"当前图像路径：");
			SetDictTupleAt(hv_ff, "1", 1, hv_path);
			SetDictTupleAt(hv_ff, "1", 2, HTuple(hv_ttx[0]));
			SetDictTupleAt(hv_ff, "1", 3, HTuple(hv_ttx[1]));
			SetDictTupleAt(hv_ff, "1", 4, "");
			SetDictTupleAt(hv_ff, "1", 5, //'  产 品 缺 陷 统 计     :   '
				"  产 品 缺 陷 统 计     :   " + hv_tx2);
			SetDictTupleAt(hv_ff, "1", 6, //'  图 像 缺 陷 统 计     :   '
				"  图 像 缺 陷 统 计     :   " + hv_tx1);
			SetDictTupleAt(hv_ff, "1", 7, "");
			SetDictTupleAt(hv_ff, "1", 8, //'工 位 - 相 机 - 图 像   :   检 出 / 总 数 = 检 出 率'
				"工 位 - 相 机 - 图 像   :   检 出 / 总 数 = 检 出 率");
			{
				HTuple end_val303 = hv_Ceil;
				HTuple step_val303 = 1;
				for (hv_Index2 = 1; hv_Index2.Continue(end_val303, step_val303); hv_Index2 += step_val303)
				{
					SetDictTupleAt(hv_ff, hv_Index2 + "", 8, //'工 位 - 相 机 - 图 像   :   检 出 / 总 数 = 检 出 率'
						"工 位 - 相 机 - 图 像   :   检 出 / 总 数 = 检 出 率");
				}
			}
			hv_gg = hv_Newtuple;
			GetDictParam(hv_ff, "keys", HTuple(), &hv_GenParamValue5);
			{
				HTuple end_val308 = hv_GenParamValue5.TupleLength();
				HTuple step_val308 = 1;
				for (hv_Index3 = 1; hv_Index3.Continue(end_val308, step_val308); hv_Index3 += step_val308)
				{
					TupleGenConst(hv_a + 10, "", &hv_s);
					if (0 != (int(hv_Index3 > 1)))
					{
						TupleGenConst(hv_a + 10, "        ", &hv_s);
					}
					hv_gg = (hv_gg + hv_s) + (hv_ff.TupleGetDictTuple(HTuple(hv_GenParamValue5[hv_Index3 - 1])));
				}
			}
			hv_cc = "";
			{
				HTuple end_val316 = (hv_gg.TupleLength()) - 1;
				HTuple step_val316 = 1;
				for (hv_Index5 = 0; hv_Index5.Continue(end_val316, step_val316); hv_Index5 += step_val316)
				{
					hv_s = "";
					if (0 != (int(hv_Index5 >= 0)))
					{
						hv_s = "\n";
					}
					hv_cc = (hv_cc + HTuple(hv_gg[hv_Index5])) + hv_s;
				}
			}
		}
		(*hv_text) = hv_cc;
		if (false)
		{
			if (0 != (HTuple(int(hv_Summary == 1)).TupleNot()))
			{
				(*hv_text) = (((((((((((//'当前图像路径：\n'
					"当前图像路径：\n" + hv_path) + "\n") + hv_Ttx) + "\n\n") +//'  产 品 缺 陷 统 计     :   '
					"  产 品 缺 陷 统 计     :   ") + hv_tx2) + "\n") +//'  图 像 缺 陷 统 计     :   '
					"  图 像 缺 陷 统 计     :   ") + hv_tx1) + "\n\n") +//'工 位 - 相 机 - 图 像   :   检 出 / 总 数 = 检 出 率'
					"工 位 - 相 机 - 图 像   :   检 出 / 总 数 = 检 出 率") + hv_tx0;
			}
			else
			{
				(*hv_text) = ((((((//'当前图像路径：\n'
					"当前图像路径：\n" + hv_path) + "\n") + hv_Ttx) + "\n\n") +//'检出 / 总数 = 检出率'
					"检出 / 总数 = 检出率") + "\n") + hv_tx1;
			}
		}
		return;
	}
	// catch (Exception) 
	catch (HException &HDevExpDefaultException)
	{
		showErrmess("Display_Text err");

	}
}

//筛选图像
void WGqtDemo::Filter_Test_Images(HTuple hv_SCINum, HTuple hv_path, HTuple hv_so, HTuple loc, HTuple *hv_ProNum,
	HTuple *hv_StaNum, HTuple *hv_CamNum, HTuple *hv_ImageNum, HTuple *hv_Result)
{

	// Local iconic variables

	// Local control variables
	HTuple  hv_a0, hv_a1, hv_Index, hv_Index10, hv_SN;
	HTuple  hv_CN, hv_IN, hv_INs, hv_Index2, hv_s, hv_regexp;
	HTuple  hv_SCI, hv_Exception;

	try
	{
		//****************
		hv_a0 = HTuple();
		hv_a1 = HTuple();
		(*hv_Result) = HTuple();
		//本地测试
		{
			HTuple end_val6 = (hv_SCINum.TupleLength()) - 1;
			HTuple step_val6 = 1;
			for (hv_Index = 0; hv_Index.Continue(end_val6, step_val6); hv_Index += step_val6)
			{
				if (0 != (int((((HTuple(hv_SCINum[hv_Index]).TupleSplit("+")).TupleRegexpMatch("[^\\d*]")).TupleFind("")) >= 0)))
				{
					hv_a0 = HTuple((HTuple(hv_SCINum[hv_Index]).TupleSplit("+"))[((HTuple(hv_SCINum[hv_Index]).TupleSplit("+")).TupleRegexpMatch("[^\\d*]")).TupleFind("")]);
				}
				if (0 != (int((((HTuple(hv_SCINum[hv_Index]).TupleSplit("+")).TupleRegexpMatch("-")).TupleFind("-")) >= 0)))
				{
					{
						HTuple end_val11 = ((((HTuple(hv_SCINum[hv_Index]).TupleSplit("+")).TupleRegexpMatch("-")).TupleFind("-")).TupleLength()) - 1;
						HTuple step_val11 = 1;
						for (hv_Index10 = 0; hv_Index10.Continue(end_val11, step_val11); hv_Index10 += step_val11)
						{
							hv_a1 = hv_a1.TupleConcat(HTuple::TupleGenSequence(HTuple(((HTuple((HTuple(hv_SCINum[hv_Index]).TupleSplit("+"))[((HTuple(hv_SCINum[hv_Index]).TupleSplit("+")).TupleRegexpMatch("-")).TupleFind("-")]).TupleSplit("-")).TupleNumber())[hv_Index10 * 2]), HTuple(((HTuple((HTuple(hv_SCINum[hv_Index]).TupleSplit("+"))[((HTuple(hv_SCINum[hv_Index]).TupleSplit("+")).TupleRegexpMatch("-")).TupleFind("-")]).TupleSplit("-")).TupleNumber())[(hv_Index10 * 2) + 1]), 1));
						}
					}
				}

				//工位编号
				hv_SN = HTuple(hv_SCINum[hv_Index]).TupleRegexpMatch("^\\d*");
				//相机编号
				hv_CN = HTuple(hv_SCINum[hv_Index]).TupleRegexpMatch("\\d*_(\\d*)");
				//图像编号
				hv_IN = (((hv_a0.TupleConcat(hv_a1)).TupleNumber()).TupleSort()).TupleUniq();

				if (0 != (int((hv_SN.TupleFind("0")) >= 0)))
				{
					hv_SN = "\\d*";
				}
				if (0 != (int((hv_CN.TupleFind("0")) >= 0)))
				{
					hv_CN = "\\d*";
				}
				if (0 != (int((hv_IN.TupleFind(0)) >= 0)))
				{
					hv_INs = "\\d*";
				}
				else if (0 != (int((hv_IN.TupleFind(0)) < 0)))
				{
					hv_INs = "";
					{
						HTuple end_val33 = (hv_IN.TupleLength()) - 1;
						HTuple step_val33 = 1;
						for (hv_Index2 = 0; hv_Index2.Continue(end_val33, step_val33); hv_Index2 += step_val33)
						{
							hv_s = "|";
							if (0 != (int(hv_Index2 == ((hv_IN.TupleLength()) - 1))))
							{
								hv_s = "";
							}
							hv_INs = (hv_INs + HTuple(hv_IN[hv_Index2])) + hv_s;
						}
					}
				}

				if (0 != (int(hv_so == 1)))
				{
					hv_regexp = (((((hv_SN + "_") + hv_CN) + "_") + "(") + hv_INs) + ")(?=\\.)";
					(*hv_Result) = (*hv_Result).TupleConcat(hv_path.TupleRegexpSelect(hv_regexp));
				}
				else if (0 != (int(hv_so != 1)))
				{
					hv_regexp = (((((hv_SN + "_") + hv_CN) + "_") + "(") + hv_INs) + ")(?=\\.)";
					(*hv_Result) = hv_path.TupleRegexpTest(hv_regexp);
					if (0 != (*hv_Result))
					{
						if (loc == 1)
						{
							hv_SCI = (hv_path.TupleRegexpMatch("([\\d]*)\\\\outer\\\\ORIG\\\\([\\d]*)_([\\d]*)_([\\d]*)(?=\\.)")).TupleNumber();

						}
						else
						{
							hv_SCI = (hv_path.TupleRegexpMatch("([\\d]*)\\\\inner\\\\ORIG\\\\([\\d]*)_([\\d]*)_([\\d]*)(?=\\.)")).TupleNumber();

						}
						(*hv_ProNum) = ((const HTuple&)hv_SCI)[0];
						(*hv_StaNum) = ((const HTuple&)hv_SCI)[1];
						(*hv_CamNum) = ((const HTuple&)hv_SCI)[2];
						(*hv_ImageNum) = ((const HTuple&)hv_SCI)[3];
						return;
					}
				}
			}
		}

		return;

		//****************

	}
	// catch (Exception) 
	catch (HException &HDevExpDefaultException)
	{
		HDevExpDefaultException.ToHTuple(&hv_Exception);
	}
}

// halcon显示函数
void WGqtDemo::disp_message(HTuple hv_WindowHandle, HTuple hv_String, HTuple hv_CoordSystem,
	HTuple hv_Row, HTuple hv_Column, HTuple hv_Color, HTuple hv_Box)
{

	// Local iconic variables

	// Local control variables
	HTuple  hv_GenParamName, hv_GenParamValue;

	//This procedure displays text in a graphics window.
	//
	//Input parameters:
	//WindowHandle: The WindowHandle of the graphics window, where
	//   the message should be displayed
	//String: A tuple of strings containing the text message to be displayed
	//CoordSystem: If set to 'window', the text position is given
	//   with respect to the window coordinate system.
	//   If set to 'image', image coordinates are used.
	//   (This may be useful in zoomed images.)
	//Row: The row coordinate of the desired text position
	//   A tuple of values is allowed to display text at different
	//   positions.
	//Column: The column coordinate of the desired text position
	//   A tuple of values is allowed to display text at different
	//   positions.
	//Color: defines the color of the text as string.
	//   If set to [], '' or 'auto' the currently set color is used.
	//   If a tuple of strings is passed, the colors are used cyclically...
	//   - if |Row| == |Column| == 1: for each new textline
	//   = else for each text position.
	//Box: If Box[0] is set to 'true', the text is written within an orange box.
	//     If set to' false', no box is displayed.
	//     If set to a color string (e.g. 'white', '#FF00CC', etc.),
	//       the text is written in a box of that color.
	//     An optional second value for Box (Box[1]) controls if a shadow is displayed:
	//       'true' -> display a shadow in a default color
	//       'false' -> display no shadow
	//       otherwise -> use given string as color string for the shadow color
	//
	//It is possible to display multiple text strings in a single call.
	//In this case, some restrictions apply:
	//- Multiple text positions can be defined by specifying a tuple
	//  with multiple Row and/or Column coordinates, i.e.:
	//  - |Row| == n, |Column| == n
	//  - |Row| == n, |Column| == 1
	//  - |Row| == 1, |Column| == n
	//- If |Row| == |Column| == 1,
	//  each element of String is display in a new textline.
	//- If multiple positions or specified, the number of Strings
	//  must match the number of positions, i.e.:
	//  - Either |String| == n (each string is displayed at the
	//                          corresponding position),
	//  - or     |String| == 1 (The string is displayed n times).
	//
	//
	//Convert the parameters for disp_text.
	if (0 != (HTuple(hv_Row == HTuple()).TupleOr(hv_Column == HTuple())))
	{
		return;
	}
	if (0 != (hv_Row == -1))
	{
		hv_Row = 12;
	}
	if (0 != (hv_Column == -1))
	{
		hv_Column = 12;
	}
	//
	//Convert the parameter Box to generic parameters.
	hv_GenParamName = HTuple();
	hv_GenParamValue = HTuple();
	if (0 != ((hv_Box.TupleLength()) > 0))
	{
		if (0 != (HTuple(hv_Box[0]) == HTuple("false")))
		{
			//Display no box
			hv_GenParamName = hv_GenParamName.TupleConcat("box");
			hv_GenParamValue = hv_GenParamValue.TupleConcat("false");
		}
		else if (0 != (HTuple(hv_Box[0]) != HTuple("true")))
		{
			//Set a color other than the default.
			hv_GenParamName = hv_GenParamName.TupleConcat("box_color");
			hv_GenParamValue = hv_GenParamValue.TupleConcat(HTuple(hv_Box[0]));
		}
	}
	if (0 != ((hv_Box.TupleLength()) > 1))
	{
		if (0 != (HTuple(hv_Box[1]) == HTuple("false")))
		{
			//Display no shadow.
			hv_GenParamName = hv_GenParamName.TupleConcat("shadow");
			hv_GenParamValue = hv_GenParamValue.TupleConcat("false");
		}
		else if (0 != (HTuple(hv_Box[1]) != HTuple("true")))
		{
			//Set a shadow color other than the default.
			hv_GenParamName = hv_GenParamName.TupleConcat("shadow_color");
			hv_GenParamValue = hv_GenParamValue.TupleConcat(HTuple(hv_Box[1]));
		}
	}
	//Restore default CoordSystem behavior.
	if (0 != (hv_CoordSystem != HTuple("window")))
	{
		hv_CoordSystem = "image";
	}
	//
	if (0 != (hv_Color == HTuple("")))
	{
		//disp_text does not accept an empty string for Color.
		hv_Color = HTuple();
	}
	//
	DispText(hv_WindowHandle, hv_String, hv_CoordSystem, hv_Row, hv_Column, hv_Color,
		hv_GenParamName, hv_GenParamValue);

	return;
}


#pragma endregion

