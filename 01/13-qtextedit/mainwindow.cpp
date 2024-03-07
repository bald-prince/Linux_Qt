#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,600);

    //实例化对象
    textEdit = new QTextEdit(this);
    pushButtonClearAll = new QPushButton(this);
    pushButtonSelectAll = new QPushButton(this);

    //设置大小及位置
    textEdit->setGeometry(0,0,1024,600);
    pushButtonClearAll->setGeometry(200,420,50,20);
    pushButtonSelectAll->setGeometry(500,420,50,20);

    //设置文本
    pushButtonClearAll->setText("清除");
    pushButtonSelectAll->setText("全选");

    //信号与槽连接
    connect(pushButtonClearAll,SIGNAL(clicked()),this,SLOT(pushButtonClearAllClicked()));
    connect(pushButtonSelectAll,SIGNAL(clicked()),this,SLOT(pushButtonSelectAllClicked()));
}

MainWindow::~MainWindow()
{
}

void MainWindow::pushButtonSelectAllClicked()
{
    //设置焦点为textedit
    textEdit->setFocus();
    //判断文本编辑框内容是否为空，不为空则全选
    if(!textEdit->toPlainText().isEmpty())
    {
        //全选
        textEdit->selectAll();
    }
}

void MainWindow::pushButtonClearAllClicked()
{
    textEdit->clear();
}

