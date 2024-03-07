#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,600);

    QPixmap pixmap(":/images/openedv.png");
    labelImage = new QLabel(this);

    labelImage->setGeometry(180,150,452,132);
    //设置图像
    labelImage->setPixmap(pixmap);
    //允许缩放填充
    labelImage->setScaledContents(true);

    labelString = new QLabel(this);
    labelString->setText("标签演示文本");
    labelString->setGeometry(300,300,100,20);
}

MainWindow::~MainWindow()
{
}

