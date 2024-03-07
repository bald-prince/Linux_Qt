#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,600);
    this->setStyleSheet("QMainWindow {background-color:rgba(100,100,100,100%);}");

    //实例化对象
    checkbox = new QCheckBox(this);

    //设置位置及大小
    checkbox->setGeometry(350,200,250,50);

    //初始化三态复选框为Checked
    checkbox->setCheckState(Qt::Checked);

    //设置显示的文本
    checkbox->setText("初始化为Checked状态");

    //开启三态模式，必须开启，否则只有Checked和unchecked
    checkbox->setTristate();

    //连接信号与槽
    connect(checkbox,SIGNAL(stateChanged(int)),this,SLOT(checkBoxStateChanged(int)));
}

MainWindow::~MainWindow()
{
}

void MainWindow::checkBoxStateChanged(int state)
{
    switch(state)
    {
        case Qt::Checked:    //选中状态
            checkbox->setText("checked 状态");
        break;
        case Qt::Unchecked:    //未选中状态
            checkbox->setText("unchecked 状态");
        break;
        case Qt::PartiallyChecked:    //半选中状态
            checkbox->setText("PartiallyChecked 状态");
        break;
        default:
        break;
    }
}

