#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    //声明一个QPushButton对象pushButton1
    QPushButton *pushButton1;
    //声明一个QPushButton对象pushButton1
    QPushButton *pushButton2;
private slots:
    //声明pushButton1的槽函数
    void pushButton1_Clicked();
    //声明pushButton2的槽函数
    void pushButton2_Clicked();

};
#endif // MAINWINDOW_H
