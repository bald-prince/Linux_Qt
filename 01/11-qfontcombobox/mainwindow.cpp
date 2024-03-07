#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,600);

    //实例化对象
    fontComboBox = new QFontComboBox(this);
    label = new QLabel(this);

    //设置位置及大小
    fontComboBox->setGeometry(280,200,200,30);
    label->setGeometry(280,250,300,50);

    //信号与槽连接
    connect(fontComboBox,SIGNAL(currentFontChanged(QFont)),this,SLOT(fontComboBoxFontChanged(QFont)));
    
    
}

MainWindow::~MainWindow()
{
}

void MainWindow::fontComboBoxFontChanged(QFont font)
{
    label->setFont(font);

    //定义一个字符串接受当前的字体
    QString str = "用此标签显示字体效果\n 设置的字体为： " +
            fontComboBox->itemText(fontComboBox->currentIndex());

    label->setText(str);
}

