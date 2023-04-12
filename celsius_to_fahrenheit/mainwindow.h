#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
    {
        Q_OBJECT

    public:
        MainWindow(QWidget *parent = nullptr);
        ~MainWindow();

    private slots:
        void on_cel_to_fah_pushButton_clicked();

        void on_Fah_to_cel_pushButton_clicked();

    private:
        Ui::MainWindow *ui;
    };
#endif // MAINWINDOW_H
