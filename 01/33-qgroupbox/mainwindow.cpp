#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,600);
    groupBox = new QGroupBox(tr("QGroupBox 示例"),this);
    groupBox->setGeometry(300,100,300,200);

    vBoxLayout = new QVBoxLayout();
    QList <QString> list;
    list << "选项一" << "选项二" << "选项三";
    for(int i = 0;i < 3;i++)
    {
        radioButton[i] = new QRadioButton();
        radioButton[i]->setText(list[i]);
        vBoxLayout->addWidget(radioButton[i]);
    }

    //添加一个伸缩量
    vBoxLayout->addStretch(1);
    groupBox->setLayout(vBoxLayout);
}

MainWindow::~MainWindow()
{
}

