DeviceInfoTable/********************************************************************************
** Form generated from reading UI file 'interfacexNmAPv.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef INTERFACEXNMAPV_H
#define INTERFACEXNMAPV_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *InfoTabs;
    QWidget *tab;
    QTableWidget *DeviceInfoTable;
    QTextBrowser *MemoryINFO;
    QWidget *tab_2;
    QTextBrowser *ReadmeINFO;
    QPushButton *GenerateFile;
    QProgressBar *progressBar;
    QComboBox *DeviceSelector;
    QGroupBox *groupBox;
    QComboBox *TrigCondition;
    QLabel *label;
    QComboBox *FaultType;
    QLabel *label_2;
    QLineEdit *FaultLocation;
    QLineEdit *FaultValue;
    QLineEdit *FaultDuration;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QGroupBox *groupBox_2;
    QPlainTextEdit *CustomCodeInj;
    QComboBox *InjectionType;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(943, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        InfoTabs = new QTabWidget(centralwidget);
        InfoTabs->setObjectName(QStringLiteral("InfoTabs"));
        InfoTabs->setGeometry(QRect(420, 0, 521, 561));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        DeviceInfoTable = new QTableWidget(tab);
        if (DeviceInfoTable->columnCount() < 5)
            DeviceInfoTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        DeviceInfoTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        DeviceInfoTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        DeviceInfoTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        DeviceInfoTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        DeviceInfoTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (DeviceInfoTable->rowCount() < 7)
            DeviceInfoTable->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        DeviceInfoTable->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        DeviceInfoTable->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        DeviceInfoTable->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        DeviceInfoTable->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        DeviceInfoTable->setVerticalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        DeviceInfoTable->setVerticalHeaderItem(5, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        DeviceInfoTable->setVerticalHeaderItem(6, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        DeviceInfoTable->setItem(0, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        DeviceInfoTable->setItem(0, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        DeviceInfoTablet->setItem(0, 2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        DeviceInfoTable->setItem(0, 3, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        DeviceInfoTable->setItem(0, 4, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        DeviceInfoTablet->setItem(1, 0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        DeviceInfoTable->setItem(1, 1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        DeviceInfoTable->setItem(1, 2, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        DeviceInfoTable->setItem(1, 3, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        DeviceInfoTable->setItem(1, 4, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        DeviceInfoTable->setItem(2, 0, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        DeviceInfoTablet->setItem(2, 1, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        DeviceInfoTable->setItem(2, 2, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        DeviceInfoTablet->setItem(2, 3, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        DeviceInfoTable->setItem(2, 4, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        DeviceInfoTable->setItem(3, 0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        DeviceInfoTable->setItem(3, 1, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        DeviceInfoTable->setItem(3, 2, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        DeviceInfoTable->setItem(3, 3, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        DeviceInfoTable->setItem(3, 4, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        DeviceInfoTable->setItem(4, 0, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        DeviceInfoTable->setItem(4, 1, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        DeviceInfoTable->setItem(4, 2, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        DeviceInfoTable->setItem(4, 3, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        DeviceInfoTable->setItem(4, 4, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        DeviceInfoTable->setItem(5, 0, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        DeviceInfoTable->setItem(5, 1, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        DeviceInfoTable->setItem(5, 2, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        DeviceInfoTable->setItem(5, 3, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        DeviceInfoTable->setItem(5, 4, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        DeviceInfoTable->setItem(6, 0, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        DeviceInfoTable->setItem(6, 1, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        DeviceInfoTable->setItem(6, 2, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        DeviceInfoTable->setItem(6, 3, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget->setItem(6, 4, __qtablewidgetitem46);
        DeviceInfoTable->setObjectName(QStringLiteral("DeviceInfoTable"));
        DeviceInfoTable->setGeometry(QRect(10, 0, 511, 231));
        DeviceInfoTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        DeviceInfoTable->horizontalHeader()->setVisible(true);
        DeviceInfoTable->horizontalHeader()->setCascadingSectionResizes(false);
        DeviceInfoTable->horizontalHeader()->setMinimumSectionSize(5);
        DeviceInfoTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        DeviceInfoTable->horizontalHeader()->setStretchLastSection(false);
        DeviceInfoTable->verticalHeader()->setVisible(false);
        DeviceInfoTable->verticalHeader()->setStretchLastSection(false);
        MemoryINFO = new QTextBrowser(tab);
        MemoryINFO->setObjectName(QStringLiteral("MemoryINFO"));
        MemoryINFO->setGeometry(QRect(10, 230, 501, 171));
        InfoTabs->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        ReadmeINFO = new QTextBrowser(tab_2);
        ReadmeINFO->setObjectName(QStringLiteral("ReadmeINFO"));
        ReadmeINFO->setGeometry(QRect(0, 0, 521, 531));
        InfoTabs->addTab(tab_2, QString());
        GenerateFile = new QPushButton(centralwidget);
        GenerateFile->setObjectName(QStringLiteral("GenerateFile"));
        GenerateFile->setGeometry(QRect(0, 500, 411, 32));
        GenerateFile->setToolTipDuration(-12);
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(10, 532, 391, 21));
        progressBar->setValue(24);
        DeviceSelector = new QComboBox(centralwidget);
        DeviceSelector->addItem(QString());
        DeviceSelector->addItem(QString());
        DeviceSelector->addItem(QString());
        DeviceSelector->setObjectName(QStringLiteral("DeviceSelector"));
        DeviceSelector->setGeometry(QRect(0, 0, 131, 26));
        DeviceSelector->setBaseSize(QSize(0, 0));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 30, 391, 231));
        TrigCondition = new QComboBox(groupBox);
        TrigCondition->addItem(QString());
        TrigCondition->addItem(QString());
        TrigCondition->addItem(QString());
        TrigCondition->setObjectName(QStringLiteral("TrigCondition"));
        TrigCondition->setGeometry(QRect(0, 50, 121, 26));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 30, 131, 16));
        FaultType = new QComboBox(groupBox);
        FaultType->addItem(QString());
        FaultType->addItem(QString());
        FaultType->addItem(QString());
        FaultType->setObjectName(QStringLiteral("FaultType"));
        FaultType->setGeometry(QRect(140, 50, 151, 26));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 30, 81, 16));
        FaultLocation = new QLineEdit(groupBox);
        FaultLocation->setObjectName(QStringLiteral("FaultLocation"));
        FaultLocation->setGeometry(QRect(40, 120, 113, 21));
        FaultValue = new QLineEdit(groupBox);
        FaultValue->setObjectName(QStringLiteral("FaultValue"));
        FaultValue->setGeometry(QRect(250, 120, 113, 21));
        FaultDuration = new QLineEdit(groupBox);
        FaultDuration->setObjectName(QStringLiteral("FaultDuration"));
        FaultDuration->setGeometry(QRect(140, 190, 113, 21));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 100, 91, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(270, 100, 71, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(150, 170, 91, 16));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 120, 21, 16));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(230, 120, 21, 16));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 270, 391, 221));
        CustomCodeInj = new QPlainTextEdit(groupBox_2);
        CustomCodeInj->setObjectName(QStringLiteral("CustomCodeInj"));
        CustomCodeInj->setGeometry(QRect(0, 20, 391, 201));
        InjectionType = new QComboBox(centralwidget);
        InjectionType->addItem(QString());
        InjectionType->addItem(QString());
        InjectionType->setObjectName(QStringLiteral("InjectionType"));
        InjectionType->setGeometry(QRect(150, 0, 121, 26));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 943, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        InfoTabs->setCurrentIndex(0);
        DeviceSelector->setCurrentIndex(0);
        FaultType->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Injection GUI", nullptr));
        QTableWidgetItem *___qtablewidgetitem = DeviceInfoTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Address Minimum", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = DeviceInfoTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Address Maximum", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = DeviceInfoTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Region", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = DeviceInfoTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = DeviceInfoTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "XN", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = DeviceInfoTable->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", ".", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = DeviceInfoTable->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", ".", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = DeviceInfoTable->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", ".", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = DeviceInfoTable->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", ".", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = DeviceInfoTable->verticalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", ".", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = DeviceInfoTable->verticalHeaderItem(5);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", ".", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = DeviceInfoTable->verticalHeaderItem(6);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", ".", nullptr));

        const bool __sortingEnabled = DeviceInfoTable->isSortingEnabled();
        DeviceInfoTable->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem12 = DeviceInfoTable->item(0, 0);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "0x00000000", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = DeviceInfoTable->item(0, 1);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "0x1FFFFFFF", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = DeviceInfoTable->item(0, 2);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "Code", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = DeviceInfoTable->item(0, 3);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "Normal", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = DeviceInfoTable->item(0, 4);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "-", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = DeviceInfoTable->item(1, 0);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "0x20000000", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = DeviceInfoTable->item(1, 1);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "0x3FFFFFFF", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = DeviceInfoTable->item(1, 2);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "SRAM", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = DeviceInfoTable->item(1, 3);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "Normal", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = DeviceInfoTable->item(1, 4);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "-", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = DeviceInfoTable->item(2, 0);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "0x40000000", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = DeviceInfoTable->item(2, 1);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "0x5FFFFFFF", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = DeviceInfoTable->item(2, 2);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "Peripheral", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = DeviceInfoTable->item(2, 3);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "Device", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = DeviceInfoTable->item(2, 4);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", "XN", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = DeviceInfoTable->item(3, 0);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow", "0x60000000", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = DeviceInfoTable->item(3, 1);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow", "0x9FFFFFFF", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = DeviceInfoTable->item(3, 2);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindow", "Ext. RAM", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = DeviceInfoTable->item(3, 3);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWindow", "Normal", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = DeviceInfoTable->item(3, 4);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWindow", "-", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = DeviceInfoTable->item(4, 0);
        ___qtablewidgetitem32->setText(QApplication::translate("MainWindow", "0xA0000000", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = DeviceInfoTable->item(4, 1);
        ___qtablewidgetitem33->setText(QApplication::translate("MainWindow", "0xDFFFFFFF", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = DeviceInfoTable->item(4, 2);
        ___qtablewidgetitem34->setText(QApplication::translate("MainWindow", "Ext. Device", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = DeviceInfoTable->item(4, 3);
        ___qtablewidgetitem35->setText(QApplication::translate("MainWindow", "Device", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = DeviceInfoTable->item(4, 4);
        ___qtablewidgetitem36->setText(QApplication::translate("MainWindow", "XN", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = DeviceInfoTable->item(5, 0);
        ___qtablewidgetitem37->setText(QApplication::translate("MainWindow", "0xED000000", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = DeviceInfoTable->item(5, 1);
        ___qtablewidgetitem38->setText(QApplication::translate("MainWindow", "0xED0FFFFF", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = DeviceInfoTable->item(5, 2);
        ___qtablewidgetitem39->setText(QApplication::translate("MainWindow", "Priv. Periph. Bus", nullptr));
        QTableWidgetItem *___qtablewidgetitem40 = DeviceInfoTable->item(5, 3);
        ___qtablewidgetitem40->setText(QApplication::translate("MainWindow", "Str. Ordered", nullptr));
        QTableWidgetItem *___qtablewidgetitem41 = DeviceInfoTable->item(5, 4);
        ___qtablewidgetitem41->setText(QApplication::translate("MainWindow", "XN", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = DeviceInfoTable->item(6, 0);
        ___qtablewidgetitem42->setText(QApplication::translate("MainWindow", "0xED100000", nullptr));
        QTableWidgetItem *___qtablewidgetitem43 = DeviceInfoTable->item(6, 1);
        ___qtablewidgetitem43->setText(QApplication::translate("MainWindow", "0xFFFFFFFF", nullptr));
        QTableWidgetItem *___qtablewidgetitem44 = DeviceInfoTable->item(6, 2);
        ___qtablewidgetitem44->setText(QApplication::translate("MainWindow", "Mem. Mapped Periph.", nullptr));
        QTableWidgetItem *___qtablewidgetitem45 = DeviceInfoTable->item(6, 3);
        ___qtablewidgetitem45->setText(QApplication::translate("MainWindow", "Device", nullptr));
        QTableWidgetItem *___qtablewidgetitem46 = DeviceInfoTable->item(6, 4);
        ___qtablewidgetitem46->setText(QApplication::translate("MainWindow", "XN", nullptr));
        DeviceInfoTable->setSortingEnabled(__sortingEnabled);

        MemoryINFO->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">Memory Types:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">    Normal - Processor can re-order transactions for efficiency</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">    Devic"
                        "e - Processor preserves transaction order relative to other device or </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">                   strongly ordered transactions</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">    Strongly Ordered - Processor preserves transaction order relative to all </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">                                     transactions</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.App"
                        "leSystemUIFont'; font-size:13pt;\">XN:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">    Execute Never</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">    Processor prevents instruction accesses. Any attempt to fetch an instruction </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">    from an XN region causes a memory fault exception. </span></p></body></html>", nullptr));
        InfoTabs->setTabText(InfoTabs->indexOf(tab), QApplication::translate("MainWindow", "Register Ranges", nullptr));
        ReadmeINFO->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">*Insert Instructions for use after completion here*</span></p></body></html>", nullptr));
        InfoTabs->setTabText(InfoTabs->indexOf(tab_2), QApplication::translate("MainWindow", "README", nullptr));
        GenerateFile->setText(QApplication::translate("MainWindow", "Generate Campaign File", nullptr));
        DeviceSelector->setItemText(0, QApplication::translate("MainWindow", "STM32F4 Disc.", nullptr));
        DeviceSelector->setItemText(1, QApplication::translate("MainWindow", "STM32F4 Dev.", nullptr));
        DeviceSelector->setItemText(2, QApplication::translate("MainWindow", "FPGA", nullptr));

        DeviceSelector->setCurrentText(QApplication::translate("MainWindow", "STM32F4 Disc.", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Campaign Design", nullptr));
        TrigCondition->setItemText(0, QApplication::translate("MainWindow", "Time Trigger", nullptr));
        TrigCondition->setItemText(1, QApplication::translate("MainWindow", "Breakpoint", nullptr));
        TrigCondition->setItemText(2, QApplication::translate("MainWindow", "Watchpoint", nullptr));

        label->setText(QApplication::translate("MainWindow", "Triggering Condition", nullptr));
        FaultType->setItemText(0, QApplication::translate("MainWindow", "Bit Flip", nullptr));
        FaultType->setItemText(1, QApplication::translate("MainWindow", "Stuck at", nullptr));
        FaultType->setItemText(2, QApplication::translate("MainWindow", "Pointer Redirection", nullptr));

        label_2->setText(QApplication::translate("MainWindow", "Fault Type", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Fault Location", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Fault Value", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Fault Duration", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "0x", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "0x", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Custom Code Injection", nullptr));
        InjectionType->setItemText(0, QApplication::translate("MainWindow", "Fault Design", nullptr));
        InjectionType->setItemText(1, QApplication::translate("MainWindow", "Custom Code", nullptr));

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // INTERFACEXNMAPV_H
