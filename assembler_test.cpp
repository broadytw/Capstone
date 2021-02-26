#include <string>

using namespace std;

int main() {
  //Dummy variables for input
  string location = "0x2000336E", value = "11", duration = "10", reg_type = "INT";
  generate_script(duration,location,reg_type,value);
  return 0;
  }
