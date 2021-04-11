#include "ui.h"
#include "ui_ui.h"
#include "assembler.h"
#include <QFile>
#include <QTextStream>
#include <vector>
#include <iostream>
#include <fstream>
#include <string>


std::string reg_type = "INT";
std::string location;
std::string value;
std::string duration;
int deviceselector;
std::string datatype;
std::string trigger;
std::string faulttype;
std::vector<std::vector<std::string>> campaignData;
int i = 0;

UI::UI(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UI)
{
    ui->setupUi(this);
}

UI::~UI()
{
    delete ui;
}


void UI::bad_file(){
    std::cout << "Couldn't open FI_script.ini!";
    exit(1);
};

void UI::on_lineEdit_textEdited(const QString &arg1){
    //location = (ui->lineEdit->text()).toUtf8().constData();
    location = arg1.toUtf8().constData();
}

void UI::on_lineEdit_2_textEdited(const QString &arg1){
    //value = (ui->lineEdit_2->text()).toUtf8().constData();
    value = arg1.toUtf8().constData();
}

void UI::on_lineEdit_3_textEdited(const QString &arg1){
    //duration = (ui->lineEdit_3->text()).toUtf8().constData();
    duration = arg1.toUtf8().constData();
}

void UI::on_comboBox_currentIndexChanged(int index){
    //deviceselector = ui->comboBox->currentIndex();
    deviceselector = index;
    //0 = STM32F4 Disc
}

void UI::getSelections(){
    faulttype = (ui->comboBox_3->currentText()).toLocal8Bit().constData();
    datatype = (ui->comboBox_5->currentText()).toLocal8Bit().constData();
    trigger = (ui->comboBox_2->currentText()).toLocal8Bit().constData();
}

void UI::on_plainTextEdit_textChanged(){
    //string customcode = ui->plainTextEdit->toPlainText();
    //future spot for custom code injectioon
}

void UI::on_pushButton_clicked(){
    //output file when triggered

    generate_script(duration,location,reg_type,value);
}

void UI::on_pushButton_2_clicked()
{
    getSelections();
    std::vector<std::string> temp;
    temp.push_back(location);
    temp.push_back(value);
    temp.push_back(datatype);
    temp.push_back(duration);
    temp.push_back(trigger);
    temp.push_back(faulttype);
    campaignData.push_back(temp);
    ui->tableWidget_2->setItem(i,0, new QTableWidgetItem(QString::fromStdString(campaignData.at(i)[0])));
    ui->tableWidget_2->setItem(i,1, new QTableWidgetItem(QString::fromStdString(campaignData.at(i)[1])));
    ui->tableWidget_2->setItem(i,2, new QTableWidgetItem(QString::fromStdString(campaignData.at(i)[2])));
    ui->tableWidget_2->setItem(i,3, new QTableWidgetItem(QString::fromStdString(campaignData.at(i)[3])));
    ui->tableWidget_2->setItem(i,4, new QTableWidgetItem(QString::fromStdString(campaignData.at(i)[4])));
    ui->tableWidget_2->setItem(i,5, new QTableWidgetItem(QString::fromStdString(campaignData.at(i)[5])));
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    i++;
}
