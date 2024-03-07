#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,600);

    dial = new QDial(this);
    dial->setGeometry(400,200,200,200);

    //设置两个最大刻度的间距
    dial->setPageStep(10);
    //刻度可见
    dial->setNotchesVisible(true);
    //设置两个凹槽间的目标像素数
    dial->setNotchTarget(1.0);
    //设置dial的范围
    dial->setRange(0,100);
    //开启后可指向圆的任何角度
    dial->setWrapping(true);

    lable = new QLabel(this);
    lable->setGeometry(470,400,200,50);

    lable->setText("0km/h");

    connect(dial,SIGNAL(valueChanged(int)),this,SLOT(dialValueChanged(int)));
}

MainWindow::~MainWindow()
{
}

void MainWindow::dialValueChanged(int value)
{
    lable->setText(QString::number(value) + "km/h");
}

