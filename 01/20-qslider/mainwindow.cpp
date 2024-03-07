#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,480);

    horizontalSlider = new QSlider(Qt::Horizontal,this);
    horizontalSlider->setGeometry(250,100,200,20);
    horizontalSlider->setRange(0,100);

    verticalSlider = new QSlider(Qt::Vertical,this);
    verticalSlider->setGeometry(200,50,20,200);
    verticalSlider->setRange(0,100);

    lable = new QLabel("滑动条值：0",this);
    lable->setGeometry(250,200,100,20);

    connect(horizontalSlider,SIGNAL(valueChanged(int)),this,SLOT(horizontalSliderValueChanged(int)));
    connect(verticalSlider,SIGNAL(valueChanged(int)),this,SLOT(verticalSliderValueChanged(int)));

}

MainWindow::~MainWindow()
{
}

void MainWindow::horizontalSliderValueChanged(int val)
{
    //水平滑动条变化，改变垂直滑动条的值
   verticalSlider->setSliderPosition(val);

   QString str = "滑动条值：" + QString::number(val);

   lable->setText(str);

}

void MainWindow::verticalSliderValueChanged(int val)
{
    horizontalSlider->setSliderPosition(val);
}

