#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,600);

    //实例化对象
    combobox = new QComboBox(this);
    //设置位置及大小
    combobox->setGeometry(300,200,150,30);
    //添加项
    combobox->addItem("安徽(默认)");
    combobox->addItem("黑龙江");
    combobox->addItem("江苏");

    //信号与槽连接
    connect(combobox,SIGNAL(currentIndexChanged(int)),this,SLOT(comboBoxIndexChanged(int)));
}

MainWindow::~MainWindow()
{
}

void MainWindow::comboBoxIndexChanged(int index)
{
    qDebug() << "你选择的省份是：" << combobox->itemText(index);
}

