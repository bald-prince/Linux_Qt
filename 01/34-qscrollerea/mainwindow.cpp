#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,600);

    scrollArea = new QScrollArea(this);
    //设置滚动区域
    scrollArea->setGeometry(10,10,1000,580);

    label = new QLabel();
    QImage image(":/images/lantingxu.png");
    label->setPixmap(QPixmap::fromImage(image));

    scrollArea->setWidget(label);
}

MainWindow::~MainWindow()
{
}

