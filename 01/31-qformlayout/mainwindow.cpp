#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,600);

    fwidget = new QWidget(this);
    fwidget->setGeometry(250,100,300,200);

    userLineEdit = new QLineEdit();
    passwordLineEdit = new QLineEdit();

    formLayout = new QFormLayout();

    formLayout->addRow("用户名：",userLineEdit);
    formLayout->addRow("密码：",passwordLineEdit);

    //设置水平垂直间距
    formLayout->setSpacing(10);

    //设置布局外框的高度
    formLayout->setMargin(20);

    fwidget->setLayout(formLayout);
}

MainWindow::~MainWindow()
{
}

