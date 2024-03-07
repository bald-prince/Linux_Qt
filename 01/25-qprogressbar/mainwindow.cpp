#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,600);

    progressBar = new QProgressBar(this);
    progressBar->setGeometry(300,200,200,60);

    progressBar->setStyleSheet(
                "QProgressBar{border:8px solid #FFFFFF;"
                "height:30;"
                "border-image:url(:/images/battery.png);"       //背景图片
                "text-align:center;"                            //文字居中
                "color:rgb(255,0,255);"
                "font:20px;"                                    //字体大小20px
                "border-radius:10px;}"
                "QProgressBar::chunk{"
                "border-radius:5px;"                            //斑马线圆角
                "border:1px solid black;"                       //黑边，默认无边
                "background-color:skyblue;"
                "width:10ps;margin:1px;}"                       //宽度和间距
                );
    //设置progressbar的范围值
    progressBar->setRange(0,100);

    value = 0;
    progressBar->setValue(value);
    progressBar->setFormat("充电中%p%");

    timer = new QTimer(this);
    timer->start(100);

    connect(timer,SIGNAL(timeout()),this,SLOT(timerTimeOut()));
}

MainWindow::~MainWindow()
{
}

void MainWindow::timerTimeOut()
{
    value++;
    progressBar->setValue(value);
    if(value > 100)
        value = 0;

}

