#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,600);

    //实例化对象
    dialogbutton = new QDialogButtonBox(this);
    dialogbutton->setGeometry(300,200,200,30);

    //使用Qt的Cancel按钮
    dialogbutton->addButton(QDialogButtonBox::Cancel);

    //将英文cancel设置成中文取消
    dialogbutton->button(QDialogButtonBox::Cancel)->setText("取消");

    //设置位置及大小
    pushButton = new QPushButton(tr("自定义"));

    //将pushbutton添加到dialogbutton，并设定buttonrole为actionrole
    dialogbutton->addButton(pushButton,QDialogButtonBox::ActionRole);

    //信号与槽连接
    connect(dialogbutton,SIGNAL(clicked(QAbstractButton*)),this,SLOT(dialogButtonClicked(QAbstractButton*)));
}

MainWindow::~MainWindow()
{
}

void MainWindow::dialogButtonClicked(QAbstractButton *button)
{
    //判断点击的对象是不是cancel
    if(button == dialogbutton->button(QDialogButtonBox::Cancel))
    {
        qDebug() << "单击了取消键" <<endl;
    }
    else if(button == pushButton)
    {
        qDebug() << "单击了自定义键"<<endl;
    }
}

