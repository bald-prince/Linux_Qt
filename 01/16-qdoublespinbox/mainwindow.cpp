#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,600);

    //实例化对象并设置大小及位置
    doubleSpinBox = new QDoubleSpinBox(this);
    doubleSpinBox->setGeometry( (this->width() - 300) / 2,(this->height() - 50 / 2),200,30);

    //设置前缀
    doubleSpinBox->setPrefix("窗口大小");

    //设置后缀
    doubleSpinBox->setSuffix("%");

    //设置范围
    doubleSpinBox->setRange(50.0,100.0);

    //设置初始值
    doubleSpinBox->setValue(100.00);

    //设置步长
    doubleSpinBox->setSingleStep(0.1);

    //信号于槽连接
    connect(doubleSpinBox,SIGNAL(valueChanged(double)),this,SLOT(doubleSpinBoxValueChanged(double)));
}

MainWindow::~MainWindow()
{
}

void MainWindow::doubleSpinBoxValueChanged(double value)
{
    //重新计算窗口的宽与高
    int w = 1024 * value / 100;
    int h = 600 * value / 100;

    //重新设置窗口的宽与高
    doubleSpinBox->setGeometry(0,0,w,h);

    //重新设置doublespinbox显示的位置
    doubleSpinBox->setGeometry((this->width() - 300)/2,(this->height() - 50 / 2 ),200,30);

}

