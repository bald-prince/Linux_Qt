#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,600);

    //实例化对象
    commandLinkButton = new QCommandLinkButton("打开/home目录","点击此调用系统的窗口打开/home目录",this);

    //设置大小及位置
    commandLinkButton->setGeometry(300,200,250,60);

    //信号与槽连接
    connect(commandLinkButton,SIGNAL(clicked()),this,SLOT(commandLinkButtonClicked()));

}

MainWindow::~MainWindow()
{
}

void MainWindow::commandLinkButtonClicked()
{
    QDesktopServices::openUrl(QUrl("file:////home/"));
}

