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
    int generate_script(std::string, std::string, std::string, std::string);
    void bad_file();
    void w_script_header(std::ofstream&, std::string, std::string, std::string);

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    void on_lineEdit_2_textEdited(const QString &arg1);

    void on_lineEdit_3_textEdited(const QString &arg1);

    void on_comboBox_currentIndexChanged(int index);

    void on_comboBox_4_currentIndexChanged(int index);

    void on_comboBox_2_currentIndexChanged(int index);

    void on_comboBox_3_currentIndexChanged(int index);

    void on_plainTextEdit_textChanged();

    void on_pushButton_clicked();

    void on_progressBar_valueChanged(int value);

private:
    Ui::UI *ui;
};
#endif // UI_H
