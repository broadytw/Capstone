#ifndef UI_H
#define UI_H

#include <QMainWindow>
#include <iostream>
#include <fstream>
#include <string>

QT_BEGIN_NAMESPACE
namespace Ui { class UI; }
QT_END_NAMESPACE

class UI : public QMainWindow
{
    Q_OBJECT

public:
    UI(QWidget *parent = nullptr);
    ~UI();
    int generate_script();
    int bad_file();
    int bad_option();
    void w_script_header(std::ofstream&);
    void w_function_header(std::ofstream&);
    void w_time_fault(std::ofstream&, int);
    void bf_time_fault(std::ofstream &, int);
    void w_break_fault(std::ofstream &, int);
    void bf_break_fault(std::ofstream &, int);


private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void getSelections();


private:
    Ui::UI *ui;
};
#endif // UI_H
