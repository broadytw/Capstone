#include <iostream>
#include <fstream>
#include <string>

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

void w_function_header(ofstream &file, int index) {
    file << "FUNC void startFI" << index << "(void) {\n\n";
}

void w_time_fault(ofstream &file, string sleep_time, string duration, string location, string reg_type, string value) {
    file << "unsigned int duration = " << duration << ";\n";
    file << "exec(\"G\");\n";
    file << "_sleep_(" << sleep_time << ");\n\n";
    file << "while(duration > 0) {\n";
    file << "exec (\"E " << reg_type << " " << location << " = " << value << "\");\n";
    file << "duration--;\n";
    file << "\t}\n}\n\n";
}

void bf_time_fault(ofstream &file, string sleep_time, string duration, string location, string reg_type, string value) {
    //Declate memory for read operation and string building, for type to be faulted (int,float,char) and a char pointer
    if (reg_type == "INT") file << "unsigned int register_as_read = 0;\n";
    if (reg_type == "FLOAT") file << "float register_as_read = 0.0;\n";
    if (reg_type == "CHAR") file << "unsigned char register_as_read = \"0\";\n";
    file << "char *execution_string;\n";
    file << "char *buffer;\n";
    file << "char faulted_address[] = \"" << location << "\";\n";

    file << "unsigned int duration = " << duration << ";\n";
    file << "exec(\"G\");\n";
    file << "_sleep_(" << sleep_time << ");\n\n";

    //Read the register
    if (reg_type == "INT") file << "register_as_read = _RWORD(" << location << ");\n";
    if (reg_type == "FLOAT") file << "register_as_read = _RFLOAT(" << location << ");\n";
    if (reg_type == "CHAR") file << "register_as_read = _RBYTE(" << location << ");\n";

    //Build the execution string from the read value
    if (reg_type == "INT") {
        //Write the first two groups of charaters to the execution_string
        file << "execution_string = malloc(sizeof(char)) * 100);\n";
        file << "strcat(execution_string, \"E INT \");\n";
        file << "strcat(execution_string, faulted_address);\n";
        file << "strcat(execution_string, \" = \");\n";
        //Convert register_as_read to a C string
        file << "buffer = malloc(sizeof(char) * 100);\n";
        file << "sprintf(buffer, \"%d\", register_as_read);\n";
        //Write to the execution string
        file << "strcat(execution_string, buffer);\n";
        file << "free(buffer);\n";
    } else if (reg_type == "FLOAT") {
        NULL;
    } else if (reg_type == "CHAR") {
        NULL;
    }

    file << "while(duration > 0) {\n";
    file << "exec (execution_string);\n";
    file << "duration--;\n";
    file << "\t}\n";
    file << "free(execution_string);\n";
    file << "}\n";
}

void w_break_fault(ofstream &file, string project_name, string program_source_file,
                string line_number, string duration, string location, string reg_type, string value) {
    file << "unsigned int duration = " << duration << ";\n";
    file << "unsigned int flag = 1;\n";
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
    file << "\t\t}\n\t}\n}\n}\n\n";
    return;
}

void bf_break_fault(ofstream &file, string project_name, string program_source_file,
                string line_number, string duration, string location, string reg_type, string value) {
    //Declate memory for read operation and string building, for type to be faulted (int,float,char) and a char pointer
    if (reg_type == "INT") file << "unsigned int register_as_read = 0;\n";
    if (reg_type == "FLOAT") file << "float register_as_read = 0.0;\n";
    if (reg_type == "CHAR") file << "unsigned char register_as_read = \"0\";\n";
    file << "char *execution_string;\n";
    file << "char *buffer;\n";
    file << "char faulted_address[] = \"" << location << "\";\n";
    file << "unsigned int duration = " << duration << ";\n";
    file << "unsigned int flag = 1;\n";

    file << "exec(\"BS \\\\"  << project_name  << "\\" << program_source_file << "\\" << line_number << "\");\n";
    file << "exec(\"G\");\n";
    file << "while(flag) {\n";
    file << "\tif(_RBYTE(0xE00ED30) == 0x02) {\n";
    file << "\tflag = 0;\n";
    file << "\texec(\"BK *\");\n";

    //Read the register
    if (reg_type == "INT") file << "register_as_read = _RWORD(" << location << ");\n";
    if (reg_type == "FLOAT") file << "register_as_read = _RFLOAT(" << location << ");\n";
    if (reg_type == "CHAR") file << "register_as_read = _RBYTE(" << location << ");\n";

    //Build the execution string from the read value
    if (reg_type == "INT") {
        //Write the first two groups of charaters to the execution_string
        file << "execution_string = malloc(sizeof(char)) * 100);\n";
        file << "strcat(execution_string, \"E INT \");\n";
        file << "strcat(execution_string, faulted_address);\n";
        file << "strcat(execution_string, \" = \");\n";
        //Convert register_as_read to a C string
        file << "buffer = malloc(sizeof(char) * 100);\n";
        file << "sprintf(buffer, \"%d\", register_as_read);\n";
        //Write to the execution string
        file << "strcat(execution_string, buffer);\n";
        file << "free(buffer);\n";
    } else if (reg_type == "FLOAT") {
        NULL;
    } else if (reg_type == "CHAR") {
        NULL;
    }

    file << "\texec(\"G\");\n";
    file << "\t\twhile(duration > 0) {\n";
    file << "\t\t\texec (execution_string);\n";
    file << "\t\t\tduration--;\n";
    file << "\t\t}\n";
    file << "\tfree(execution_string);\n";
    file << "\t}\n}\n}\n\n";
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

  if (append_to_file == 0) w_script_header(injection_script);

  //Check if overwrite or bit flip
  if (write_type == 0) {
      //Write either a time/break/watch point triggered fault
      if (trigger_condition == 0) {
          w_function_header(injection_script,index);
          w_time_fault(injection_script,sleep_time,duration,location,reg_type,value);
      } else if (trigger_condition == 1) {
          w_function_header(injection_script,index);
          w_break_fault(injection_script, project_name, program_source_file, line_number, duration, location, reg_type, value);
      } else if (trigger_condition == 2){
          return bad_option();
      } else {
          return bad_option();
      }
  } else {
      //Bit Flip either a time/break/watch point triggered fault
      if (trigger_condition == 0) {
          w_function_header(injection_script,index);
          bf_time_fault(injection_script,sleep_time,duration,location,reg_type,value);
      } else if (trigger_condition == 1) {
          w_function_header(injection_script,index);
          bf_break_fault(injection_script, project_name, program_source_file, line_number, duration, location, reg_type, value);
      } else if (trigger_condition == 2){
          return bad_option();
      } else {
          return bad_option();
      }
  }

  if (append_to_file == 2) {
      for (int u = 0; u < index; u++) {
          injection_script << "startFI" << u + 1 << "();\n";
      }
  }

  injection_script.close();

  return 0;
}
