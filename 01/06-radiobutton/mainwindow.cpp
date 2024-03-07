#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,600);
    this->setStyleSheet("QMainWindow {background-color:rgba(200,50,100,100%);}");

    //实例化对象
    radiobutton1 = new QRadioButton(this);
    radiobutton2 = new QRadioButton(this);

    //设置对象的大小及位置
    radiobutton1->setGeometry(300,200,100,50);
    radiobutton2->setGeometry(400,200,100,50);

    //设置两个对象显示的文本
    radiobutton1->setText("开关一");
    radiobutton2->setText("开关二");

    //设置初始状态，radiobutton1的checked为false，另一个为true
    radiobutton1->setChecked(false);
    radiobutton2->setChecked(true);


}

MainWindow::~MainWindow()
{
}

