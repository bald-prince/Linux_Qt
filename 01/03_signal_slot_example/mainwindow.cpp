#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //设置窗体的宽为1024,高为600
    this->resize(1024,600);

    //实例化pushButton
    pushButton = new QPushButton(this);

    //调用setText方法设定按钮的文本
    pushButton->setText("我是一个按钮");

    //信号与槽连接
    connect(pushButton,SIGNAL(clicked()),this,SLOT(changeButtonText()));
}

MainWindow::~MainWindow()
{
}

void MainWindow::changeButtonText()
{
    pushButton->setText("被点击了");
}

void MainWindow::pushButtonClicked()
{
    //使用emit发送信号
    emit pushButtonTextChanged();
}



