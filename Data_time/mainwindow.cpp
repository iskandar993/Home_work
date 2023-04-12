#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <QDateTime>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    {
        ui->setupUi(this);

    }
void MainWindow::showTime()
    {
        QTime time = QTime::currentTime();
        QString time_text = time.toString("hh : mm : ss");
        ui->clock_label->setText(time_text);
    }


MainWindow::~MainWindow()
    {
        delete ui;
    }


void MainWindow::on_start_pushButton_clicked()
{
        ui->setupUi(this);
        QTimer *timer=new QTimer(this);
        connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
        timer->start();
}


void MainWindow::on_stop_pushButton_clicked()
{
        QTime time = QTime::currentTime();
        QString time_text = time.toString("hh : mm : ss");
        ui->clock_label->setText(time_text);


}

