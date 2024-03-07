#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,600);

    hline = new QFrame(this);
    hline->setGeometry(QRect(200,100,400,40));
    hline->setFrameShape(QFrame::HLine);
    hline->setFrameShadow(QFrame::Sunken);

    vline = new QFrame(this);
    vline->setGeometry(QRect(300,100,40,200));
    vline->setFrameShape(QFrame::VLine);
    vline->setFrameShadow(QFrame::Sunken);
}

MainWindow::~MainWindow()
{
}

