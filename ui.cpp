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
    int append_mode = 0;
    int trigger_condition = 0;
    int bit_flip_or_overwrite = 0;

    for (int u = 0; u < (campaignData.size()); u--) {

        //Determine append mode
        if (u == (campaignData.size() - 1)) append_mode = 2;
        if (u == 0) write_type = 0;

        //Determine write/fault type
        if (campaignData[u][0] == "Overwrite") bit_flip_or_overwrite = 0;
        if (campaignData[u][0] == "Bit Flip") bit_flip_or_overwrite = 1;

        //Determine Trigger Condition
        if (campaignData[u][1] == "Time") trigger_condition = 0;
        if (campaignData[u][1] == "Break") trigger_condition = 1;


        generate_script(append_mode, (u + 1), /*File Name*/, trigger_condition, bit_flip_or_overwrite,
                        campaignData[u][2], campaignData[u][3], campaignData[u][4], campaignData[u][5],
                        campaignData[u][6], campaignData[u][7], campaignData[u][8], campaignData[u][9],);
    }
}

void UI::on_pushButton_2_clicked()
{
    getSelections();
    std::vector<std::string> temp;
    /* Rewrite to store in argument order */
    /* Non-applicale arguments should be initilize to empty strings */
    temp.push_back(trigger);
    temp.push_back(faulttype);
    temp.push_back(sleep_time);
    temp.push_back(project_name);
    temp.push_back(program_source_file);
    temp.push_back(line_number);
    temp.push_back(duration);
    temp.push_back(location);
    temp.push_back(datatype);
    temp.push_back(value);
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

{
    using namespace std;
int bad_file() {
    cout << "Couldn't open FI_script.ini!";
    return 2;
}

int bad_option() {
    cout << "Bad option! Review Documentation please!";
    return 2;
}

void w_script_header(ofstream &file) {
    file << "/* This file was generated using software written for\n"
         << "   VCU Night Vision under CAPSTONE team ECE 21-403. */\n\n";
    file << "#include <string.h>\n";
    file << "#include <stdio.h>\n";
}

void w_function_header(ofstream &file) {
    file << "FUNC void startFI(void) {\n\n";
    file << "//*************************************\n\n";
    file << "unsigned int duration;\n\n";

    file << "unsigned int register_as_read_i, v_int;\n";
    file << "register_as_read_i = 0;\n";

    file << "float register_as_read_f, v_float;\n";
    file << "register_as_read_f = 0.0;\n";

    file << "unsigned char register_as_read_c, v_char;\n";
    file << "register_as_read_c = 0x00;\n";

    file << "char execution_string[100];\n";
    file << "char buffer[100];\n";
    file << "char faulted_address[100];\n";

    file << "unsigned int flag;\n\n";


}

void w_time_fault(ofstream &file, string sleep_time, string duration, string location, string reg_type, string value) {
    file << "//*************************************\n\n";
    file << "duration = " << duration << ";\n";
    file << "exec(\"G\");\n";
    file << "_sleep_(" << sleep_time << ");\n\n";
    file << "while(duration > 0) {\n";
    file << "exec (\"E " << reg_type << " " << location << " = " << value << "\");\n";
    file << "duration--;\n";
    file << "\t}\n\n";
}

void bf_time_fault(ofstream &file, string sleep_time, string duration, string location, string reg_type, string value) {
    //Assign values to memory for read operation and string building, for type to be faulted (int,float,char) and a char pointer
    file << "//*************************************\n\n";
    file << "strcpy(faulted_address,\"" << location << "\");\n";

    file << "duration = " << duration << ";\n";
    if (reg_type == "INT") file << "v_int = " << value << ";\n";
    if (reg_type == "FLOAT") file << "v_float = " << value << ";\n";
    if (reg_type == "CHAR") file << "v_char = " << value << ";\n";

    file << "exec(\"G\");\n";
    file << "_sleep_(" << sleep_time << ");\n\n";

    //Read the register
    if (reg_type == "INT") file << "register_as_read_i = _RWORD(" << location << ");\n";
    if (reg_type == "FLOAT") file << "register_as_read_f = _RFLOAT(" << location << ");\n";
    if (reg_type == "CHAR") file << "register_as_read_c = _RBYTE(" << location << ");\n";

    //Create the "mask"
    if (reg_type == "INT") file << "register_as_read_i ^= v_int;\n";
    if (reg_type == "FLOAT") file << "register_as_read_f = (float) ( (int)v_float ^ (int)register_as_read_f );\n";
    if (reg_type == "CHAR") file << "register_as_read_c ^= v_char;\n";

    //Build the execution string from the read value
    if (reg_type == "INT") {
        //Write the first two groups of charaters to the execution_string
        file << "strcpy(execution_string, \"E INT \");\n";
        file << "strcat(execution_string, faulted_address);\n";
        file << "strcat(execution_string, \" = \");\n";
        //Convert register_as_read to a C string
        file << "sprintf(buffer, \"%d\", register_as_read_i);\n";
        //Write to the execution string
        file << "strcat(execution_string, buffer);\n";
    } else if (reg_type == "FLOAT") {
        //Write the first two groups of charaters to the execution_string
        file << "strcpy(execution_string, \"E FLOAT \");\n";
        file << "strcat(execution_string, faulted_address);\n";
        file << "strcat(execution_string, \" = \");\n";
        //Convert register_as_read to a C string
        file << "sprintf(buffer, \"%f\", register_as_read_f);\n";
        //Write to the execution string
        file << "strcat(execution_string, buffer);\n";
    } else if (reg_type == "CHAR") {
        //Write the first two groups of charaters to the execution_string
        file << "strcpy(execution_string, \"E CHAR \");\n";
        file << "strcat(execution_string, faulted_address);\n";
        file << "strcat(execution_string, \" = \");\n";
        //Convert register_as_read to a C string
        file << "sprintf(buffer, \"%c\", register_as_read_c);\n";
        //Write to the execution string
        file << "strcat(execution_string, buffer);\n";
    }

    file << "while(duration > 0) {\n";
    file << "exec (execution_string);\n";
    file << "duration--;\n";
    file << "\t}\n";
}

void w_break_fault(ofstream &file, string project_name, string program_source_file,
                string line_number, string duration, string location, string reg_type, string value) {
    file << "//*************************************\n\n";
    file << "duration = " << duration << ";\n";
    file << "flag = 1;\n";
    file << "exec(\"BS \\\\"  << project_name  << "\\" << program_source_file << "\\" << line_number << "\");\n";
    file << "exec(\"G\");\n";
    file << "while(flag) {\n";
    file << "\tif(_RBYTE(0xE00ED30) == 0x02) {\n";
    file << "\tflag = 0;\n";
    file << "\texec(\"BK *\");\n";
    file << "\texec(\"G\");\n";
    file << "\t\twhile(duration > 0) {\n";
    file << "\t\t\texec (\"E " << reg_type << " " << location << " = " << value << "\");\n";
    file << "\t\t\tduration--;\n";
    file << "\t\t}\n\t}\n}\n\n";
    return;
}

void bf_break_fault(ofstream &file, string project_name, string program_source_file,
                string line_number, string duration, string location, string reg_type, string value) {
    file << "//*************************************\n\n";
    //Declate memory for read operation and string building, for type to be faulted (int,float,char) and a char pointer
    file << "strcpy(faulted_address,\"" << location << "\");\n";
    file << "duration = " << duration << ";\n";
    file << "flag = 1;\n";

    file << "exec(\"BS \\\\"  << project_name  << "\\" << program_source_file << "\\" << line_number << "\");\n";
    file << "exec(\"G\");\n";
    file << "while(flag) {\n";
    file << "\tif(_RBYTE(0xE00ED30) == 0x02) {\n";
    file << "\tflag = 0;\n";
    file << "\texec(\"BK *\");\n";

    //Read the register
    if (reg_type == "INT") file << "register_as_read_i = _RWORD(" << location << ");\n";
    if (reg_type == "FLOAT") file << "register_as_read_f = _RFLOAT(" << location << ");\n";
    if (reg_type == "CHAR") file << "register_as_read_c = _RBYTE(" << location << ");\n";

    //Create the "mask"
    if (reg_type == "INT") file << "register_as_read_i ^= v_int;\n";
    if (reg_type == "FLOAT") file << "register_as_read_f = (float) ( (int)v_float ^ (int)register_as_read_f );\n";
    if (reg_type == "CHAR") file << "register_as_read_c ^= v_char;\n";

    //Build the execution string from the read value
    if (reg_type == "INT") {
        //Write the first two groups of charaters to the execution_string
        file << "strcpy(execution_string, \"E INT \");\n";
        file << "strcat(execution_string, faulted_address);\n";
        file << "strcat(execution_string, \" = \");\n";
        //Convert register_as_read to a C string
        file << "sprintf(buffer, \"%d\", register_as_read_i);\n";
        //Write to the execution string
        file << "strcat(execution_string, buffer);\n";
    } else if (reg_type == "FLOAT") {
        //Write the first two groups of charaters to the execution_string
        file << "strcpy(execution_string, \"E FLOAT \");\n";
        file << "strcat(execution_string, faulted_address);\n";
        file << "strcat(execution_string, \" = \");\n";
        //Convert register_as_read to a C string
        file << "sprintf(buffer, \"%f\", register_as_read_f);\n";
        //Write to the execution string
        file << "strcat(execution_string, buffer);\n";
    } else if (reg_type == "CHAR") {
        //Write the first two groups of charaters to the execution_string
        file << "strcpy(execution_string, \"E CHAR \");\n";
        file << "strcat(execution_string, faulted_address);\n";
        file << "strcat(execution_string, \" = \");\n";
        //Convert register_as_read to a C string
        file << "sprintf(buffer, \"%c\", register_as_read_c);\n";
        //Write to the execution string
        file << "strcat(execution_string, buffer);\n";
    }
    file << "\texec(\"G\");\n";
    file << "\t\twhile(duration > 0) {\n";
    file << "\t\t\texec (execution_string);\n";
    file << "\t\t\tduration--;\n";
    file << "\t\t}\n";
    file << "\t}\n}\n\n";
    return;
}

/* Head Function for script generation. Opens a file for writing and calls sub-functions to write the appropriate faults to a script*/

/*  Input                           Description                         */
/*  append_to_file                  0 = New file
                                    1 = append to file
                                    2 = Last injection to write to file

    file_name                       Name of the file to edit

    trigger_condition               0 = Time fault
                                    1 = Breakpoint fault
                                    2 = Watchpoint fault

    write_type                      0 = Overwrite
                                    1 = Bit Flip

    duration                        CPU cycles to fault the register for
    location                        Address of the register to fault
    reg_type                        Data type to fault
    value                           Data value of the fault             */

/*  Output                          Description                                         */
/*  0                               Executed normally
    1                               Unexpected option, may indicate undefined behaviour
    2                               Could not open file for writing                     */

int generate_script(int append_to_file, int index, string file_name, int trigger_condition, int write_type,
                    string sleep_time, string project_name, string program_source_file,
                    string line_number, string duration, string location, string reg_type, string value) {

  //Open a file for writing, Write file header for new files
  ofstream injection_script;

  if (append_to_file == 0) injection_script.open(file_name);
  else injection_script.open(file_name,ios::app);

  if (!injection_script.is_open()) return bad_file();

  if (append_to_file == 0 || (append_to_file == 2 && index == 1) ) {
      w_script_header(injection_script);
      w_function_header(injection_script);
  }

  //Check if overwrite or bit flip
  if (write_type == 0) {
      //Write either a time/break/watch point triggered fault
      if (trigger_condition == 0) {
          w_time_fault(injection_script,sleep_time,duration,location,reg_type,value);
      } else if (trigger_condition == 1) {
          w_break_fault(injection_script, project_name, program_source_file, line_number, duration, location, reg_type, value);
      } else if (trigger_condition == 2){
          return bad_option();
      } else {
          return bad_option();
      }
  } else {
      //Bit Flip either a time/break/watch point triggered fault
      if (trigger_condition == 0) {
          bf_time_fault(injection_script,sleep_time,duration,location,reg_type,value);
      } else if (trigger_condition == 1) {
          bf_break_fault(injection_script, project_name, program_source_file, line_number, duration, location, reg_type, value);
      } else if (trigger_condition == 2){
          return bad_option();
      } else {
          return bad_option();
      }
  }

  if (append_to_file == 2) {
      injection_script << "}\n\nstartFI();\n";
  }

  injection_script.close();

  return 0;
}
}
