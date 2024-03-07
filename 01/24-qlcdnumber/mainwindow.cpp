#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,600);

    lcdNumber = new QLCDNumber(this);
    lcdNumber->setGeometry(300,200,200,50);
    //显示位数8位
    lcdNumber->setDigitCount(8);
    //设置样式
    lcdNumber->setSegmentStyle(QLCDNumber::Flat);
    //设置lcd显示当前系统时间
    QTime time = QTime::currentTime();

    lcdNumber->display(time.toString("hh:mm:ss"));
    timer = new QTimer(this);
    //1000ms发送一个timeout信号
    timer->start(1000);
    connect(timer,SIGNAL(timeout()),this,SLOT(timerTimeOut()));
}

MainWindow::~MainWindow()
{
}

void MainWindow::timerTimeOut()
{
    //定时器1000ms后，刷新lcd显示当前系统时间
    QTime time = QTime::currentTime();
    lcdNumber->display(time.toString("hh:mm:ss"));

}

