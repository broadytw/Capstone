#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void bad_file() {
    cout << "Couldn't open FI_script.ini!";
    exit(1);
}

void w_script_header(ofstream& file, string location, string value, string duration) {
    file << "/* This file was generated using software written for\n"
        << "   VCU Night Vision under CAPSTONE team ECE 21-403.\n "
        << "  This script was generated to fault memory address " << location
        << "\n   for " << duration << " clock cycles */\n\n";
}

int generate_script(string duration, string location, string reg_type, string value) {

  //Prep a file for writing
  ofstream injection_script;
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


  return 0;
}
