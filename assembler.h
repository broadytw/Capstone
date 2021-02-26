#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void bad_file();

void w_script_header(ofstream& file, string location, string value, string duration);

int generate_script(string duration, string location, string reg_type, string value);
