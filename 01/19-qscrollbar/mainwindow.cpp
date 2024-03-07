#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,600);
    horizontalScrollBar = new QScrollBar(Qt::Horizontal,this);
    horizontalScrollBar->setGeometry(0,570,1024,30);

    verticalScrollBar = new QScrollBar(Qt::Vertical,this);
    verticalScrollBar->setGeometry(994,0,30,600);

    lable = new QLabel(this);
    lable->setText("这是一个测试");

    lable->setGeometry(512,300,100,20);
}

MainWindow::~MainWindow()
{
}

