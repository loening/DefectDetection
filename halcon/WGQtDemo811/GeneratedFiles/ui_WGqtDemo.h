/********************************************************************************
** Form generated from reading UI file 'WGqtDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WGQTDEMO_H
#define UI_WGQTDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WGqtDemoClass
{
public:
    QWidget *centralWidget;
    QWidget *HWinHandle;
    QLabel *label_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pBt_Draw_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *ImageName;
    QPushButton *pBt_Draw_3;
    QPushButton *pBt_Draw;
    QGroupBox *groupBox_5;
    QTextEdit *textEdit_path;
    QComboBox *AlgorithmMode;
    QLabel *label_6;
    QLabel *label_5;
    QComboBox *ProductName;
    QGroupBox *groupBox_8;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *radioButton_OR;
    QRadioButton *radioButton_RU;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_OQC;
    QRadioButton *radioButton_Q1;
    QRadioButton *radioButton_PVD;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButton_A;
    QRadioButton *radioButton_B;
    QGroupBox *groupBox_7;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *radioButton_hostA;
    QRadioButton *radioButton_hostB;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_host1;
    QRadioButton *radioButton_host2;
    QRadioButton *radioButton_host3;
    QRadioButton *radioButton_host4;
    QRadioButton *radioButton_host5;
    QRadioButton *radioButton_host6;
    QRadioButton *radioButton_host7;
    QRadioButton *radioButton_host8;
    QRadioButton *radioButton_host9;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton_host10;
    QRadioButton *radioButton_host11;
    QRadioButton *radioButton_host12;
    QRadioButton *radioButton_host13;
    QRadioButton *radioButton_host14;
    QRadioButton *radioButton_host15;
    QRadioButton *radioButton_host16;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *Timetext;
    QLabel *label_4;
    QGroupBox *groupBox_6;
    QTextEdit *textEdit_err;
    QWidget *tab_2;
    QWidget *tab_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WGqtDemoClass)
    {
        if (WGqtDemoClass->objectName().isEmpty())
            WGqtDemoClass->setObjectName(QStringLiteral("WGqtDemoClass"));
        WGqtDemoClass->resize(1420, 1071);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        WGqtDemoClass->setFont(font);
        WGqtDemoClass->setLayoutDirection(Qt::LeftToRight);
        centralWidget = new QWidget(WGqtDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setFont(font);
        HWinHandle = new QWidget(centralWidget);
        HWinHandle->setObjectName(QStringLiteral("HWinHandle"));
        HWinHandle->setGeometry(QRect(9, 9, 1000, 1000));
        HWinHandle->setMinimumSize(QSize(1000, 1000));
        label_2 = new QLabel(HWinHandle);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(true);
        label_2->setGeometry(QRect(9, 9, 982, 982));
        label_2->setMinimumSize(QSize(982, 982));
        label_2->setFocusPolicy(Qt::NoFocus);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(1020, 10, 391, 1011));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        tabWidget->setFont(font1);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        pBt_Draw_2 = new QPushButton(tab);
        pBt_Draw_2->setObjectName(QStringLiteral("pBt_Draw_2"));
        pBt_Draw_2->setGeometry(QRect(200, 10, 171, 41));
        pBt_Draw_2->setFont(font1);
        pBt_Draw_2->setAutoFillBackground(false);
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(200, 60, 171, 32));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        ImageName = new QLineEdit(layoutWidget);
        ImageName->setObjectName(QStringLiteral("ImageName"));

        horizontalLayout_5->addWidget(ImageName);

        pBt_Draw_3 = new QPushButton(tab);
        pBt_Draw_3->setObjectName(QStringLiteral("pBt_Draw_3"));
        pBt_Draw_3->setGeometry(QRect(10, 60, 171, 31));
        pBt_Draw_3->setFont(font1);
        pBt_Draw_3->setAutoFillBackground(false);
        pBt_Draw = new QPushButton(tab);
        pBt_Draw->setObjectName(QStringLiteral("pBt_Draw"));
        pBt_Draw->setEnabled(true);
        pBt_Draw->setGeometry(QRect(10, 10, 171, 41));
        pBt_Draw->setFont(font1);
        pBt_Draw->setFocusPolicy(Qt::StrongFocus);
        groupBox_5 = new QGroupBox(tab);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(0, 100, 381, 111));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        groupBox_5->setFont(font2);
        textEdit_path = new QTextEdit(groupBox_5);
        textEdit_path->setObjectName(QStringLiteral("textEdit_path"));
        textEdit_path->setGeometry(QRect(10, 30, 361, 71));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setWeight(50);
        textEdit_path->setFont(font3);
        AlgorithmMode = new QComboBox(tab);
        AlgorithmMode->setObjectName(QStringLiteral("AlgorithmMode"));
        AlgorithmMode->setGeometry(QRect(170, 260, 201, 31));
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        AlgorithmMode->setFont(font4);
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 270, 101, 19));
        label_6->setFont(font2);
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 230, 101, 19));
        label_5->setFont(font2);
        ProductName = new QComboBox(tab);
        ProductName->setObjectName(QStringLiteral("ProductName"));
        ProductName->setGeometry(QRect(170, 220, 201, 31));
        ProductName->setFont(font4);
        groupBox_8 = new QGroupBox(tab);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(290, 310, 91, 121));
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setWeight(75);
        groupBox_8->setFont(font5);
        layoutWidget_5 = new QWidget(groupBox_8);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 30, 76, 54));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        radioButton_OR = new QRadioButton(layoutWidget_5);
        radioButton_OR->setObjectName(QStringLiteral("radioButton_OR"));
        QFont font6;
        font6.setFamily(QStringLiteral("Arial"));
        font6.setPointSize(10);
        font6.setBold(true);
        font6.setWeight(75);
        radioButton_OR->setFont(font6);

        verticalLayout_5->addWidget(radioButton_OR);

        radioButton_RU = new QRadioButton(layoutWidget_5);
        radioButton_RU->setObjectName(QStringLiteral("radioButton_RU"));
        radioButton_RU->setFont(font6);

        verticalLayout_5->addWidget(radioButton_RU);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 310, 81, 121));
        groupBox_2->setFont(font5);
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 30, 61, 83));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_OQC = new QRadioButton(layoutWidget1);
        radioButton_OQC->setObjectName(QStringLiteral("radioButton_OQC"));
        radioButton_OQC->setFont(font6);

        verticalLayout->addWidget(radioButton_OQC);

        radioButton_Q1 = new QRadioButton(layoutWidget1);
        radioButton_Q1->setObjectName(QStringLiteral("radioButton_Q1"));
        radioButton_Q1->setFont(font6);

        verticalLayout->addWidget(radioButton_Q1);

        radioButton_PVD = new QRadioButton(layoutWidget1);
        radioButton_PVD->setObjectName(QStringLiteral("radioButton_PVD"));
        radioButton_PVD->setFont(font6);

        verticalLayout->addWidget(radioButton_PVD);

        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(190, 310, 91, 121));
        groupBox_3->setFont(font5);
        layoutWidget_3 = new QWidget(groupBox_3);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 30, 61, 54));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        radioButton_A = new QRadioButton(layoutWidget_3);
        radioButton_A->setObjectName(QStringLiteral("radioButton_A"));
        radioButton_A->setFont(font6);

        verticalLayout_3->addWidget(radioButton_A);

        radioButton_B = new QRadioButton(layoutWidget_3);
        radioButton_B->setObjectName(QStringLiteral("radioButton_B"));
        radioButton_B->setFont(font6);

        verticalLayout_3->addWidget(radioButton_B);

        groupBox_7 = new QGroupBox(tab);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(90, 310, 91, 121));
        groupBox_7->setFont(font5);
        layoutWidget_4 = new QWidget(groupBox_7);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 30, 71, 54));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        radioButton_hostA = new QRadioButton(layoutWidget_4);
        radioButton_hostA->setObjectName(QStringLiteral("radioButton_hostA"));
        radioButton_hostA->setFont(font6);

        verticalLayout_4->addWidget(radioButton_hostA);

        radioButton_hostB = new QRadioButton(layoutWidget_4);
        radioButton_hostB->setObjectName(QStringLiteral("radioButton_hostB"));
        radioButton_hostB->setFont(font6);

        verticalLayout_4->addWidget(radioButton_hostB);

        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 440, 381, 101));
        groupBox_4->setFont(font5);
        layoutWidget2 = new QWidget(groupBox_4);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 30, 342, 60));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioButton_host1 = new QRadioButton(layoutWidget2);
        radioButton_host1->setObjectName(QStringLiteral("radioButton_host1"));
        radioButton_host1->setFont(font6);

        horizontalLayout->addWidget(radioButton_host1);

        radioButton_host2 = new QRadioButton(layoutWidget2);
        radioButton_host2->setObjectName(QStringLiteral("radioButton_host2"));
        radioButton_host2->setFont(font6);

        horizontalLayout->addWidget(radioButton_host2);

        radioButton_host3 = new QRadioButton(layoutWidget2);
        radioButton_host3->setObjectName(QStringLiteral("radioButton_host3"));
        radioButton_host3->setFont(font6);

        horizontalLayout->addWidget(radioButton_host3);

        radioButton_host4 = new QRadioButton(layoutWidget2);
        radioButton_host4->setObjectName(QStringLiteral("radioButton_host4"));
        radioButton_host4->setFont(font6);

        horizontalLayout->addWidget(radioButton_host4);

        radioButton_host5 = new QRadioButton(layoutWidget2);
        radioButton_host5->setObjectName(QStringLiteral("radioButton_host5"));
        radioButton_host5->setFont(font6);

        horizontalLayout->addWidget(radioButton_host5);

        radioButton_host6 = new QRadioButton(layoutWidget2);
        radioButton_host6->setObjectName(QStringLiteral("radioButton_host6"));
        radioButton_host6->setFont(font6);

        horizontalLayout->addWidget(radioButton_host6);

        radioButton_host7 = new QRadioButton(layoutWidget2);
        radioButton_host7->setObjectName(QStringLiteral("radioButton_host7"));
        radioButton_host7->setFont(font6);

        horizontalLayout->addWidget(radioButton_host7);

        radioButton_host8 = new QRadioButton(layoutWidget2);
        radioButton_host8->setObjectName(QStringLiteral("radioButton_host8"));
        radioButton_host8->setFont(font6);

        horizontalLayout->addWidget(radioButton_host8);


        horizontalLayout_2->addLayout(horizontalLayout);

        radioButton_host9 = new QRadioButton(layoutWidget2);
        radioButton_host9->setObjectName(QStringLiteral("radioButton_host9"));
        radioButton_host9->setFont(font6);

        horizontalLayout_2->addWidget(radioButton_host9);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        radioButton_host10 = new QRadioButton(layoutWidget2);
        radioButton_host10->setObjectName(QStringLiteral("radioButton_host10"));
        radioButton_host10->setFont(font6);

        horizontalLayout_3->addWidget(radioButton_host10);

        radioButton_host11 = new QRadioButton(layoutWidget2);
        radioButton_host11->setObjectName(QStringLiteral("radioButton_host11"));
        radioButton_host11->setFont(font6);

        horizontalLayout_3->addWidget(radioButton_host11);

        radioButton_host12 = new QRadioButton(layoutWidget2);
        radioButton_host12->setObjectName(QStringLiteral("radioButton_host12"));
        radioButton_host12->setFont(font6);

        horizontalLayout_3->addWidget(radioButton_host12);

        radioButton_host13 = new QRadioButton(layoutWidget2);
        radioButton_host13->setObjectName(QStringLiteral("radioButton_host13"));
        radioButton_host13->setFont(font6);

        horizontalLayout_3->addWidget(radioButton_host13);

        radioButton_host14 = new QRadioButton(layoutWidget2);
        radioButton_host14->setObjectName(QStringLiteral("radioButton_host14"));
        radioButton_host14->setFont(font6);

        horizontalLayout_3->addWidget(radioButton_host14);

        radioButton_host15 = new QRadioButton(layoutWidget2);
        radioButton_host15->setObjectName(QStringLiteral("radioButton_host15"));
        radioButton_host15->setFont(font6);

        horizontalLayout_3->addWidget(radioButton_host15);

        radioButton_host16 = new QRadioButton(layoutWidget2);
        radioButton_host16->setObjectName(QStringLiteral("radioButton_host16"));
        radioButton_host16->setFont(font6);

        horizontalLayout_3->addWidget(radioButton_host16);


        verticalLayout_2->addLayout(horizontalLayout_3);

        layoutWidget3 = new QWidget(tab);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(150, 550, 222, 32));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget3);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_4->addWidget(label);

        Timetext = new QLineEdit(layoutWidget3);
        Timetext->setObjectName(QStringLiteral("Timetext"));

        horizontalLayout_4->addWidget(Timetext);

        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        groupBox_6 = new QGroupBox(tab);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(0, 580, 381, 381));
        groupBox_6->setFont(font2);
        textEdit_err = new QTextEdit(groupBox_6);
        textEdit_err->setObjectName(QStringLiteral("textEdit_err"));
        textEdit_err->setGeometry(QRect(10, 30, 361, 341));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());
        WGqtDemoClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(WGqtDemoClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1420, 23));
        WGqtDemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WGqtDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        WGqtDemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(WGqtDemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        WGqtDemoClass->setStatusBar(statusBar);

        retranslateUi(WGqtDemoClass);

        tabWidget->setCurrentIndex(0);
        AlgorithmMode->setCurrentIndex(-1);
        ProductName->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(WGqtDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *WGqtDemoClass)
    {
        WGqtDemoClass->setWindowTitle(QApplication::translate("WGqtDemoClass", "JSZC\347\256\227\344\276\247\346\265\213\350\257\225\347\250\213\345\272\217", Q_NULLPTR));
        label_2->setText(QString());
        tabWidget->setStyleSheet(QApplication::translate("WGqtDemoClass", "0", Q_NULLPTR));
        pBt_Draw_2->setText(QApplication::translate("WGqtDemoClass", "\347\256\227\346\263\225\345\201\234\346\255\242", Q_NULLPTR));
        label_3->setText(QApplication::translate("WGqtDemoClass", "\345\233\276\345\203\217\345\220\215:", Q_NULLPTR));
        pBt_Draw_3->setText(QApplication::translate("WGqtDemoClass", "\351\200\211\346\213\251\347\233\256\345\275\225", Q_NULLPTR));
        pBt_Draw->setStyleSheet(QApplication::translate("WGqtDemoClass", "3", Q_NULLPTR));
        pBt_Draw->setText(QApplication::translate("WGqtDemoClass", "\347\256\227\346\263\225\350\277\220\350\241\214", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("WGqtDemoClass", "\346\265\213\350\257\225\350\267\257\345\276\204\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("WGqtDemoClass", "\347\256\227\346\263\225\346\250\241\345\274\217:", Q_NULLPTR));
        label_5->setText(QApplication::translate("WGqtDemoClass", "\344\272\247\345\223\201\345\236\213\345\217\267:", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("WGqtDemoClass", "\346\225\260\346\215\256\347\261\273\345\236\213", Q_NULLPTR));
        radioButton_OR->setText(QApplication::translate("WGqtDemoClass", "\345\245\227\345\233\276", Q_NULLPTR));
        radioButton_RU->setText(QApplication::translate("WGqtDemoClass", "\346\240\207\346\263\250\345\233\276", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("WGqtDemoClass", "\351\241\271\347\233\256\345\220\215", Q_NULLPTR));
        radioButton_OQC->setText(QApplication::translate("WGqtDemoClass", "OQC", Q_NULLPTR));
        radioButton_Q1->setText(QApplication::translate("WGqtDemoClass", "Q1", Q_NULLPTR));
        radioButton_PVD->setText(QApplication::translate("WGqtDemoClass", "PVD", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("WGqtDemoClass", "\344\272\247\345\223\201A/B\351\235\242", Q_NULLPTR));
        radioButton_A->setText(QApplication::translate("WGqtDemoClass", "A", Q_NULLPTR));
        radioButton_B->setText(QApplication::translate("WGqtDemoClass", "B", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("WGqtDemoClass", "\346\234\272\345\217\260A/B\351\235\242", Q_NULLPTR));
        radioButton_hostA->setText(QApplication::translate("WGqtDemoClass", "A", Q_NULLPTR));
        radioButton_hostB->setText(QApplication::translate("WGqtDemoClass", "B", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("WGqtDemoClass", "\346\234\272\345\217\260\345\217\267", Q_NULLPTR));
        radioButton_host1->setText(QApplication::translate("WGqtDemoClass", "1", Q_NULLPTR));
        radioButton_host2->setText(QApplication::translate("WGqtDemoClass", "2", Q_NULLPTR));
        radioButton_host3->setText(QApplication::translate("WGqtDemoClass", "3", Q_NULLPTR));
        radioButton_host4->setText(QApplication::translate("WGqtDemoClass", "4", Q_NULLPTR));
        radioButton_host5->setText(QApplication::translate("WGqtDemoClass", "5", Q_NULLPTR));
        radioButton_host6->setText(QApplication::translate("WGqtDemoClass", "6", Q_NULLPTR));
        radioButton_host7->setText(QApplication::translate("WGqtDemoClass", "7", Q_NULLPTR));
        radioButton_host8->setText(QApplication::translate("WGqtDemoClass", "8", Q_NULLPTR));
        radioButton_host9->setText(QApplication::translate("WGqtDemoClass", "9", Q_NULLPTR));
        radioButton_host10->setText(QApplication::translate("WGqtDemoClass", "10", Q_NULLPTR));
        radioButton_host11->setText(QApplication::translate("WGqtDemoClass", "11", Q_NULLPTR));
        radioButton_host12->setText(QApplication::translate("WGqtDemoClass", "12", Q_NULLPTR));
        radioButton_host13->setText(QApplication::translate("WGqtDemoClass", "13", Q_NULLPTR));
        radioButton_host14->setText(QApplication::translate("WGqtDemoClass", "14", Q_NULLPTR));
        radioButton_host15->setText(QApplication::translate("WGqtDemoClass", "15", Q_NULLPTR));
        radioButton_host16->setText(QApplication::translate("WGqtDemoClass", "16", Q_NULLPTR));
        label->setText(QApplication::translate("WGqtDemoClass", "\347\250\213\345\272\217\345\273\266\346\227\266:", Q_NULLPTR));
        label_4->setText(QApplication::translate("WGqtDemoClass", "MS", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("WGqtDemoClass", "\345\274\202\345\270\270\344\277\241\346\201\257:", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("WGqtDemoClass", "\344\270\273\346\234\272\351\235\242", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("WGqtDemoClass", "\347\256\227\346\263\225\351\205\215\347\275\256", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("WGqtDemoClass", "\346\250\241\345\236\213\351\205\215\347\275\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WGqtDemoClass: public Ui_WGqtDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WGQTDEMO_H
