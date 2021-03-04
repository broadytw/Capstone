#include "ui.h"
#include "ui_ui.h"
#include <QFile>
#include <QTextStream>

std::string reg_type = "INT";
std::string location;
std::string value;
std::string duration;
int deviceselector;
int injectiontype;
int trigger;
int faulttype;

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
    location = (ui->lineEdit->text()).toUtf8().constData();
}

void UI::on_lineEdit_2_textEdited(const QString &arg1){
    value = (ui->lineEdit_2->text()).toUtf8().constData();
}

void UI::on_lineEdit_3_textEdited(const QString &arg1){
    duration = (ui->lineEdit_3->text()).toUtf8().constData();
}

void UI::on_comboBox_currentIndexChanged(int index){
    deviceselector = ui->comboBox->currentIndex();
    //0 = STM32F4 Disc
}

void UI::on_comboBox_4_currentIndexChanged(int index){
    injectiontype = ui->comboBox_4->currentIndex();
    //0 = Fault Injection
    //1 = Cyberattack injection
}

void UI::on_comboBox_2_currentIndexChanged(int index){
    trigger = ui->comboBox_2->currentIndex();
    //0 = Time trigger
    //1 = Breakpoint
    //2 = Watchpoint
}

void UI::on_comboBox_3_currentIndexChanged(int index){
    faulttype = ui->comboBox_3->currentIndex();
    //0 = bit flip
    //1 = stuck at
    //2 = pointer redirection
}

void UI::on_plainTextEdit_textChanged(){
    //string customcode = ui->plainTextEdit->toPlainText();
    //future spot for custom code injectioon
}

void UI::on_pushButton_clicked(){
    //output file when triggered

    generate_script(duration,location,reg_type,value);
}

void UI::on_progressBar_valueChanged(int value){
    //update once write out is complete
}

void UI::w_script_header(std::ofstream& file, std::string location, std::string value, std::string duration){
    file << "/* This file was generated using software written for\n"
            << "   VCU Night Vision under CAPSTONE team ECE 21-403.\n "
            << "  This script was generated to fault memory address " << location
            << "\n   for " << duration << " clock cycles */\n\n";
};

int UI::generate_script(std::string duration, std::string location, std::string reg_type, std::string value){
    //Prep a file for writing
      std::ofstream injection_script;
      injection_script.open("FI_script.ini");
      if (!injection_script.is_open()) bad_file();
      w_script_header(injection_script,location,value,duration);

      //Begin writing out the time function fault script
      injection_script << "FUNC void startFI(void) {\n\n";
      injection_script << "unsigned int duration = " << duration
                        << ", value = " << value << ";\n";
      injection_script << "exec(\"G\");\n";
      injection_script << "_sleep_(15000);\n\n";
      injection_script << "while(duration > 0) {\n";
      injection_script << "exec (\"E" << reg_type
                        << " " << location << " = "
                        << value << "\");\n";
      injection_script << "duration--;\n";
      injection_script << "}";

      injection_script << "\n\nstartFI();";

      for(int i = 0; i <= 100; ++i)
      {
          ui->progressBar->setValue(i);
      }

      return 0;
};
