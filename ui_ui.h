/********************************************************************************
** Form generated from reading UI file 'ui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_H
#define UI_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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

class Ui_UI
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *tableWidget;
    QTextBrowser *textBrowser_2;
    QWidget *tab_2;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QProgressBar *progressBar;
    QComboBox *comboBox;
    QGroupBox *groupBox;
    QComboBox *comboBox_2;
    QLabel *label;
    QComboBox *comboBox_3;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QGroupBox *groupBox_2;
    QPlainTextEdit *plainTextEdit;
    QComboBox *comboBox_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UI)
    {
        if (UI->objectName().isEmpty())
            UI->setObjectName(QStringLiteral("UI"));
        UI->resize(943, 600);
        centralwidget = new QWidget(UI);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(420, 0, 521, 561));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tableWidget = new QTableWidget(tab);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 7)
            tableWidget->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setItem(0, 4, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setItem(1, 3, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setItem(1, 4, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setItem(2, 2, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setItem(2, 3, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setItem(2, 4, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setItem(3, 1, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget->setItem(3, 2, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget->setItem(3, 3, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget->setItem(3, 4, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget->setItem(4, 0, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget->setItem(4, 1, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget->setItem(4, 2, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget->setItem(4, 3, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget->setItem(4, 4, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget->setItem(5, 0, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget->setItem(5, 1, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget->setItem(5, 2, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget->setItem(5, 3, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget->setItem(5, 4, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget->setItem(6, 0, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget->setItem(6, 1, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget->setItem(6, 2, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget->setItem(6, 3, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget->setItem(6, 4, __qtablewidgetitem46);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 0, 511, 231));
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget->horizontalHeader()->setVisible(true);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setMinimumSectionSize(5);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->horizontalHeader()->setStretchLastSection(false);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setStretchLastSection(false);
        textBrowser_2 = new QTextBrowser(tab);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(10, 230, 501, 291));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        textBrowser = new QTextBrowser(tab_2);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(0, 0, 521, 531));
        tabWidget->addTab(tab_2, QString());
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 500, 411, 32));
        pushButton->setToolTipDuration(-12);
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(10, 532, 391, 21));
        progressBar->setMaximum(100);
        progressBar->setValue(0);
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(0, 0, 131, 26));
        comboBox->setBaseSize(QSize(0, 0));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 30, 391, 231));
        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(0, 50, 121, 26));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 30, 131, 16));
        comboBox_3 = new QComboBox(groupBox);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(140, 50, 151, 26));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 30, 81, 16));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 120, 113, 21));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(250, 120, 113, 21));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(140, 190, 113, 21));
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
        plainTextEdit = new QPlainTextEdit(groupBox_2);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(0, 20, 391, 201));
        comboBox_4 = new QComboBox(centralwidget);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(150, 0, 121, 26));
        UI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UI);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 943, 22));
        UI->setMenuBar(menubar);
        statusbar = new QStatusBar(UI);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        UI->setStatusBar(statusbar);

        retranslateUi(UI);
        QObject::connect(comboBox, SIGNAL(currentIndexChanged(int)), tabWidget, SLOT(setCurrentIndex(int)));

        tabWidget->setCurrentIndex(0);
        comboBox->setCurrentIndex(0);
        comboBox_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(UI);
    } // setupUi

    void retranslateUi(QMainWindow *UI)
    {
        UI->setWindowTitle(QApplication::translate("UI", "UI", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("UI", "Address Minimum", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("UI", "Address Maximum", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("UI", "Region", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("UI", "Type", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("UI", "XN", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("UI", ".", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("UI", ".", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("UI", ".", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("UI", ".", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("UI", ".", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem10->setText(QApplication::translate("UI", ".", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem11->setText(QApplication::translate("UI", ".", Q_NULLPTR));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(0, 0);
        ___qtablewidgetitem12->setText(QApplication::translate("UI", "0x00000000", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(0, 1);
        ___qtablewidgetitem13->setText(QApplication::translate("UI", "0x1FFFFFFF", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(0, 2);
        ___qtablewidgetitem14->setText(QApplication::translate("UI", "Code", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(0, 3);
        ___qtablewidgetitem15->setText(QApplication::translate("UI", "Normal", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(0, 4);
        ___qtablewidgetitem16->setText(QApplication::translate("UI", "-", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(1, 0);
        ___qtablewidgetitem17->setText(QApplication::translate("UI", "0x20000000", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(1, 1);
        ___qtablewidgetitem18->setText(QApplication::translate("UI", "0x3FFFFFFF", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(1, 2);
        ___qtablewidgetitem19->setText(QApplication::translate("UI", "SRAM", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(1, 3);
        ___qtablewidgetitem20->setText(QApplication::translate("UI", "Normal", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(1, 4);
        ___qtablewidgetitem21->setText(QApplication::translate("UI", "-", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(2, 0);
        ___qtablewidgetitem22->setText(QApplication::translate("UI", "0x40000000", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->item(2, 1);
        ___qtablewidgetitem23->setText(QApplication::translate("UI", "0x5FFFFFFF", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->item(2, 2);
        ___qtablewidgetitem24->setText(QApplication::translate("UI", "Peripheral", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->item(2, 3);
        ___qtablewidgetitem25->setText(QApplication::translate("UI", "Device", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->item(2, 4);
        ___qtablewidgetitem26->setText(QApplication::translate("UI", "XN", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->item(3, 0);
        ___qtablewidgetitem27->setText(QApplication::translate("UI", "0x60000000", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->item(3, 1);
        ___qtablewidgetitem28->setText(QApplication::translate("UI", "0x9FFFFFFF", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->item(3, 2);
        ___qtablewidgetitem29->setText(QApplication::translate("UI", "Ext. RAM", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget->item(3, 3);
        ___qtablewidgetitem30->setText(QApplication::translate("UI", "Normal", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget->item(3, 4);
        ___qtablewidgetitem31->setText(QApplication::translate("UI", "-", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget->item(4, 0);
        ___qtablewidgetitem32->setText(QApplication::translate("UI", "0xA0000000", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget->item(4, 1);
        ___qtablewidgetitem33->setText(QApplication::translate("UI", "0xDFFFFFFF", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget->item(4, 2);
        ___qtablewidgetitem34->setText(QApplication::translate("UI", "Ext. Device", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget->item(4, 3);
        ___qtablewidgetitem35->setText(QApplication::translate("UI", "Device", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget->item(4, 4);
        ___qtablewidgetitem36->setText(QApplication::translate("UI", "XN", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget->item(5, 0);
        ___qtablewidgetitem37->setText(QApplication::translate("UI", "0xED000000", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget->item(5, 1);
        ___qtablewidgetitem38->setText(QApplication::translate("UI", "0xED0FFFFF", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget->item(5, 2);
        ___qtablewidgetitem39->setText(QApplication::translate("UI", "Priv. Periph. Bus", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget->item(5, 3);
        ___qtablewidgetitem40->setText(QApplication::translate("UI", "Str. Ordered", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget->item(5, 4);
        ___qtablewidgetitem41->setText(QApplication::translate("UI", "XN", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget->item(6, 0);
        ___qtablewidgetitem42->setText(QApplication::translate("UI", "0xED100000", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget->item(6, 1);
        ___qtablewidgetitem43->setText(QApplication::translate("UI", "0xFFFFFFFF", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget->item(6, 2);
        ___qtablewidgetitem44->setText(QApplication::translate("UI", "Mem. Mapped Periph.", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidget->item(6, 3);
        ___qtablewidgetitem45->setText(QApplication::translate("UI", "Device", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidget->item(6, 4);
        ___qtablewidgetitem46->setText(QApplication::translate("UI", "XN", Q_NULLPTR));
        tableWidget->setSortingEnabled(__sortingEnabled);

        textBrowser_2->setHtml(QApplication::translate("UI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
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
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">    from an XN region causes a memory fault exception. </span></p></body></html>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("UI", "Register Ranges", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("UI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">*Insert Instructions for use after completion here*</span></p></body></html>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("UI", "README", Q_NULLPTR));
        pushButton->setText(QApplication::translate("UI", "Generate Campaign File", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("UI", "STM32F4 Disc.", Q_NULLPTR)
         << QApplication::translate("UI", "STM32F4 Dev.", Q_NULLPTR)
         << QApplication::translate("UI", "FPGA", Q_NULLPTR)
        );
        comboBox->setCurrentText(QApplication::translate("UI", "STM32F4 Disc.", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("UI", "Campaign Design", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("UI", "Time Trigger", Q_NULLPTR)
         << QApplication::translate("UI", "Breakpoint", Q_NULLPTR)
         << QApplication::translate("UI", "Watchpoint", Q_NULLPTR)
        );
        label->setText(QApplication::translate("UI", "Triggering Condition", Q_NULLPTR));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("UI", "Bit Flip", Q_NULLPTR)
         << QApplication::translate("UI", "Stuck at", Q_NULLPTR)
         << QApplication::translate("UI", "Pointer Redirection", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("UI", "Fault Type", Q_NULLPTR));
        label_3->setText(QApplication::translate("UI", "Fault Location", Q_NULLPTR));
        label_4->setText(QApplication::translate("UI", "Fault Value", Q_NULLPTR));
        label_5->setText(QApplication::translate("UI", "Fault Duration", Q_NULLPTR));
        label_6->setText(QApplication::translate("UI", "0x", Q_NULLPTR));
        label_7->setText(QApplication::translate("UI", "0x", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("UI", "Custom Code Injection", Q_NULLPTR));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("UI", "Fault Design", Q_NULLPTR)
         << QApplication::translate("UI", "Custom Code", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class UI: public Ui_UI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_H
