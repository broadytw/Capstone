#include "ui.h"
#include "ui_ui.h"
#include <QFile>
#include <QTextStream>
#include <vector>
#include <iostream>
#include <fstream>
#include <string>


std::string reg_type;
std::string location;
std::string value;
std::string duration;
int deviceselector;
std::string datatype;
std::string trigger;
std::string faulttype;
std::vector<std::vector<std::string>> campaignData;
std::string sleep_time;
std::string project_name;
std::string program_source_file;
std::string line_number;
std::string BFpositions;
int i = 0;
int j = 0;
uint InjectionsLeft;
using namespace std;

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

void UI::getSelections(){
    faulttype = (ui->comboBox_3->currentText()).toLocal8Bit().constData();
    datatype = (ui->comboBox_5->currentText()).toLocal8Bit().constData();
    trigger = (ui->comboBox_2->currentText()).toLocal8Bit().constData();
    location = (ui->lineEdit->text()).toUtf8().constData();
    value = (ui->lineEdit_2->text()).toUtf8().constData();
    duration = (ui->lineEdit_3->text()).toUtf8().constData();
    deviceselector = ui->comboBox->currentIndex();
    sleep_time = (ui->lineEdit_4->text()).toUtf8().constData();
    line_number = (ui->lineEdit_4->text()).toUtf8().constData();
    BFpositions = (ui->lineEdit_7->text()).toUtf8().constData();
}

void UI::on_pushButton_2_clicked()
{
    getSelections();
    std::vector<std::string> temp;
    /* Rewrite to store in argument order */
    /* Non-applicale arguments should be initilize to empty strings */
    temp.push_back(trigger); //0
    temp.push_back(faulttype); //1
    temp.push_back(sleep_time); //2
    temp.push_back(line_number); //3
    temp.push_back(duration); //4
    temp.push_back(location); //5
    temp.push_back(datatype); //6
    temp.push_back(value); //7
    temp.push_back(BFpositions); //8
    campaignData.push_back(temp);
    ui->tableWidget_2->setItem(j,0, new QTableWidgetItem(QString::fromStdString(campaignData.at(j)[5])));
    ui->tableWidget_2->setItem(j,1, new QTableWidgetItem(QString::fromStdString(campaignData.at(j)[7])));
    ui->tableWidget_2->setItem(j,2, new QTableWidgetItem(QString::fromStdString(campaignData.at(j)[6])));
    ui->tableWidget_2->setItem(j,3, new QTableWidgetItem(QString::fromStdString(campaignData.at(j)[4])));
    ui->tableWidget_2->setItem(j,4, new QTableWidgetItem(QString::fromStdString(campaignData.at(j)[3])));
    ui->tableWidget_2->setItem(j,5, new QTableWidgetItem(QString::fromStdString(campaignData.at(j)[8])));
    ui->tableWidget_2->setItem(j,6, new QTableWidgetItem(QString::fromStdString(campaignData.at(j)[0])));
    ui->tableWidget_2->setItem(j,7, new QTableWidgetItem(QString::fromStdString(campaignData.at(j)[1])));
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_7->clear();
    j++;
}

void UI::on_pushButton_clicked(){
    //output file when triggered
    InjectionsLeft = campaignData.size();
    project_name = (ui->lineEdit_5->text()).toUtf8().constData();
    program_source_file = (ui->lineEdit_6->text()).toUtf8().constData();
    generate_script();
}

int UI::bad_file() {
    cout << "Couldn't open FI_script.ini!";
    return 2;
}

int UI::bad_option() {
    cout << "Bad option! Review Documentation please!";
    return 2;
}

void UI::w_script_header(ofstream &file) {
    file << "/* This file was generated using software written for\n"
         << "   VCU Night Vision under CAPSTONE team ECE 21-403. */\n\n";
    file << "#include <string.h>\n";
    file << "#include <stdio.h>\n";
}

void UI::w_function_header(ofstream &file) {
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

void UI::w_time_fault(ofstream &file, int i) {
    file << "//*************************************\n\n";
    file << "duration = " << campaignData[i][4] << ";\n";
    file << "exec(\"G\");\n";
    file << "_sleep_(" << campaignData[i][2] << ");\n\n";
    file << "while(duration > 0) {\n";
    file << "exec (\"E " << campaignData[i][6] << " " << campaignData[i][5] << " = " << campaignData[i][7] << "\");\n";
    file << "duration--;\n";
    file << "\t}\n\n";
}

void UI::bf_time_fault(ofstream &file, int i) {
    //Assign values to memory for read operation and string building, for type to be faulted (int,float,char) and a char pointer
    file << "//*************************************\n\n";
    file << "strcpy(faulted_address,\"" << campaignData[i][5] << "\");\n";

    file << "duration = " << campaignData[i][4] << ";\n";
    if (campaignData[i][6] == "INT") file << "v_int = " << campaignData[i][8] << ";\n";
    if (campaignData[i][6] == "FLOAT") file << "v_float = " << campaignData[i][8] << ";\n";
    if (campaignData[i][6] == "CHAR") file << "v_char = " << campaignData[i][8] << ";\n";

    file << "exec(\"G\");\n";
    file << "_sleep_(" << campaignData[i][2] << ");\n\n";

    //Read the register
    if (campaignData[i][6] == "INT") file << "register_as_read_i = _RWORD(" << campaignData[i][5] << ");\n";
    if (campaignData[i][6] == "FLOAT") file << "register_as_read_f = _RFLOAT(" << campaignData[i][5] << ");\n";
    if (campaignData[i][6] == "CHAR") file << "register_as_read_c = _RBYTE(" << campaignData[i][5] << ");\n";

    //Create the "mask"
    if (campaignData[i][6] == "INT") file << "register_as_read_i ^= v_int;\n";
    if (campaignData[i][6] == "FLOAT") file << "register_as_read_f = (float) ( (int)v_float ^ (int)register_as_read_f );\n";
    if (campaignData[i][6] == "CHAR") file << "register_as_read_c ^= v_char;\n";

    //Build the execution string from the read value
    if (campaignData[i][6] == "INT") {
        //Write the first two groups of charaters to the execution_string
        file << "strcpy(execution_string, \"E INT \");\n";
        file << "strcat(execution_string, faulted_address);\n";
        file << "strcat(execution_string, \" = \");\n";
        //Convert register_as_read to a C string
        file << "sprintf(buffer, \"%d\", register_as_read_i);\n";
        //Write to the execution string
        file << "strcat(execution_string, buffer);\n";
    } else if (campaignData[i][6] == "FLOAT") {
        //Write the first two groups of charaters to the execution_string
        file << "strcpy(execution_string, \"E FLOAT \");\n";
        file << "strcat(execution_string, faulted_address);\n";
        file << "strcat(execution_string, \" = \");\n";
        //Convert register_as_read to a C string
        file << "sprintf(buffer, \"%f\", register_as_read_f);\n";
        //Write to the execution string
        file << "strcat(execution_string, buffer);\n";
    } else if (campaignData[i][6] == "CHAR") {
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

void UI::w_break_fault(ofstream &file, int i) {
    file << "//*************************************\n\n";
    file << "duration = " << campaignData[i][4] << ";\n";
    file << "flag = 1;\n";
    file << "exec(\"BS \\\\"  << project_name  << "\\" << program_source_file << "\\" << campaignData[i][3] << "\");\n";
    file << "exec(\"G\");\n";
    file << "while(flag) {\n";
    file << "\tif(_RBYTE(0xE00ED30) == 0x02) {\n";
    file << "\tflag = 0;\n";
    file << "\texec(\"BK *\");\n";
    file << "\texec(\"G\");\n";
    file << "\t\twhile(duration > 0) {\n";
    file << "\t\t\texec (\"E " << campaignData[i][6] << " " << campaignData[i][5] << " = " << campaignData[i][7] << "\");\n";
    file << "\t\t\tduration--;\n";
    file << "\t\t}\n\t}\n}\n\n";
    return;
}

void UI::bf_break_fault(ofstream &file, int i) {
    file << "//*************************************\n\n";
    //Declate memory for read operation and string building, for type to be faulted (int,float,char) and a char pointer
    file << "strcpy(faulted_address,\"" << campaignData[i][5] << "\");\n";
    file << "duration = " << campaignData[i][4] << ";\n";
    file << "flag = 1;\n";

    file << "exec(\"BS \\\\"  << project_name  << "\\" << program_source_file << "\\" << campaignData[i][3] << "\");\n";
    file << "exec(\"G\");\n";
    file << "while(flag) {\n";
    file << "\tif(_RBYTE(0xE00ED30) == 0x02) {\n";
    file << "\tflag = 0;\n";
    file << "\texec(\"BK *\");\n";
    if (campaignData[i][6] == "INT") file << "v_int = " << campaignData[i][8] << ";\n";
    if (campaignData[i][6] == "FLOAT") file << "v_float = " << campaignData[i][8] << ";\n";
    if (campaignData[i][6] == "CHAR") file << "v_char = " << campaignData[i][8] << ";\n";

    //Read the register
    if (campaignData[i][6] == "INT") file << "register_as_read_i = _RWORD(" << campaignData[i][5] << ");\n";
    if (campaignData[i][6] == "FLOAT") file << "register_as_read_f = _RFLOAT(" << campaignData[i][5] << ");\n";
    if (campaignData[i][6] == "CHAR") file << "register_as_read_c = _RBYTE(" << campaignData[i][5] << ");\n";

    //Create the "mask"
    if (campaignData[i][6] == "INT") file << "register_as_read_i ^= v_int;\n";
    if (campaignData[i][6] == "FLOAT") file << "register_as_read_f = (float) ( (int)v_float ^ (int)register_as_read_f );\n";
    if (campaignData[i][6] == "CHAR") file << "register_as_read_c ^= v_char;\n";

    //Build the execution string from the read value
    if (campaignData[i][6] == "INT") {
        //Write the first two groups of charaters to the execution_string
        file << "strcpy(execution_string, \"E INT \");\n";
        file << "strcat(execution_string, faulted_address);\n";
        file << "strcat(execution_string, \" = \");\n";
        //Convert register_as_read to a C string
        file << "sprintf(buffer, \"%d\", register_as_read_i);\n";
        //Write to the execution string
        file << "strcat(execution_string, buffer);\n";
    } else if (campaignData[i][6] == "FLOAT") {
        //Write the first two groups of charaters to the execution_string
        file << "strcpy(execution_string, \"E FLOAT \");\n";
        file << "strcat(execution_string, faulted_address);\n";
        file << "strcat(execution_string, \" = \");\n";
        //Convert register_as_read to a C string
        file << "sprintf(buffer, \"%f\", register_as_read_f);\n";
        //Write to the execution string
        file << "strcat(execution_string, buffer);\n";
    } else if (campaignData[i][6] == "CHAR") {
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

/*  Return                          Description                                         */
/*  0                               Executed normally
    1                               Unexpected option, may indicate undefined behaviour
    2                               Could not open file for writing                     */

int UI::generate_script() {

    //Open a file for writing, Write file header for new files
    ofstream injection_script;
    injection_script.open("campaign.ini");
    if (!injection_script.is_open()){ return bad_file();}

    w_script_header(injection_script);
    w_function_header(injection_script);
    i = 0;
    while (InjectionsLeft > 0){
        //Check if overwrite or bit flip
        if (campaignData[i][1] == "Overwrite") {
            //Write either a time/break/watch point triggered fault
            if (campaignData[i][0] == "Time Trigger") {
                w_time_fault(injection_script,i);
            } else if (campaignData[i][0] == "Breakpoint") {
                w_break_fault(injection_script, i);
            } else if (campaignData[i][0] == "Watchpoint"){
                return bad_option();
            } else {
                return bad_option();
            }
        } else if (campaignData[i][1] == "Bit Flip"){
            //Bit Flip either a time/break/watch point triggered fault
            if (campaignData[i][0] == "Time Trigger") {
                bf_time_fault(injection_script, i);
            } else if (campaignData[i][0] == "Breakpoint") {
                bf_break_fault(injection_script, i);
            } else if (campaignData[i][0] == "Watchpoint"){
                return bad_option();
            } else {
                return bad_option();
            }
        }
        i++;
        InjectionsLeft--;
    }

    injection_script << "}\n\nstartFI();\n";
    injection_script.close();
    int k;
    for (k = 0; k<=100; k++){ui->progressBar->setValue(k);}

    return 0;
}
