#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    {
        ui->setupUi(this);
    }

MainWindow::~MainWindow()
    {
        delete ui;
    }


void MainWindow::on_cel_to_fah_pushButton_clicked()
{
        QString strCelsius = ui->input_lineEdit->text();
         double Celsius = strCelsius.toDouble();
        double fahrenheit = ( Celsius*1.8 +32);
         ui->output_lineEdit->setText(QString::number(fahrenheit));

}


void MainWindow::on_Fah_to_cel_pushButton_clicked()
{
        QString strFahrenhiet = ui->input_lineEdit->text();
         double Fahrenheit = strFahrenhiet.toDouble();
        double celsius = ( Fahrenheit -32)/(1.8);
         ui->output_lineEdit->setText(QString::number(celsius));
}

