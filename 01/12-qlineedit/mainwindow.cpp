#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,600);
    //实例化对象
    lineEdit_userId = new QLineEdit(this);
    lineEdit_password = new QLineEdit(this);
    btnLogIn = new QPushButton(this);
    btnAbort = new QPushButton(this);
    label = new QLabel(this);

    //设置大小及位置
    lineEdit_userId->setGeometry(280,200,200,20);
    lineEdit_password->setGeometry(280,240,200,20);
    btnLogIn->setGeometry(280,300,50,20);
    btnAbort->setGeometry(350,300,50,20);
    label->setGeometry(500,200,400,20);

    btnLogIn->setText("登录");
    btnAbort->setText("退出");

    label->setText("您输入的内容是: ");

    connect(btnLogIn,SIGNAL(clicked()),this,SLOT(pushButtonClicked()));
    connect(btnAbort,SIGNAL(clicked()),this,SLOT(close()));
}

MainWindow::~MainWindow()
{
}

void MainWindow::pushButtonClicked()
{
    QString str;

    str = "您输入的内容是：";
    str += lineEdit_userId->text();
    str += lineEdit_password->text();

    label->setText(str);
    lineEdit_userId->clear();
    lineEdit_password->clear();
}

