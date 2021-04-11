#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int bad_file();
int bad_option();
void w_script_header(ofstream &file);

void w_function_header(ofstream &file, int index);
void w_time_fault(ofstream &file, string sleep_time, string duration, string location, string reg_type, string value);
void bf_time_fault(ofstream &file, string sleep_time, string duration, string location, string reg_type, string value);

void w_break_fault(ofstream &file, string project_name, string program_source_file,
                string line_number, string duration, string location, string reg_type, string value);

void bf_break_fault(ofstream &file, string project_name, string program_source_file,
                string line_number, string duration, string location, string reg_type, string value);

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
                    string line_number, string duration, string location, string reg_type, string value);
