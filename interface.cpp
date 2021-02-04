#include "interface.h"
#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>

using namespace std;
using namespace Ui;

void pushButton_clicked(){
  button = !button;
  //Output file
}

int main(){
  Ui_MainWindow ui;
  int location = ui->FaultLocation->text().toInt();
  int value = ui->FaultValue->text().toInt();
  int duration = ui->FaultDuration->text().toInt();

  int deviceselector = ui->DeviceSelector->currentIndex();
  int trigger = ui->TrigCondition->currentIndex();
  int faulttype = ui->FaultType->currentIndex();
  int injectiontype = ui->InjectionType->currentIndex();

  string customcode = ui->CustomCodeInj->toPlainText();
  string customcode = ui->CustomCodeInj->toPlainText();

  return 0;
}
