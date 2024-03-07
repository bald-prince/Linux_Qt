#include "mainwindow.h"
#pragma execution_character_set("utf-8")
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,600);

    //设置主窗口背景颜色
    this->setStyleSheet("QMainWindow{background-color:rgba(100,100,100,100%);}");

    spinBox = new QSpinBox(this);
    spinBox->setGeometry(350,200,150,30);
    //设置范围
    spinBox->setRange(0,100);
    //设置步长
    spinBox->setSingleStep(10);
    //设置后缀
    spinBox->setSuffix("%不透明度");
    connect(spinBox,SIGNAL(valueChanged(int)),this,SLOT(spinBoxValueChanged(int)));
}

MainWindow::~MainWindow()
{
}

void MainWindow::spinBoxValueChanged(int value)
{
    double dobleopacity = (double)value/100;

    this->setWindowOpacity(dobleopacity);

}

