#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,600);

    widget = new QWidget(this);
    //居中widget
    this->setCentralWidget(widget);
    vSpacer = new QSpacerItem(
                10,10,
                QSizePolicy::Minimum,
                QSizePolicy::Expanding
                );
    hSpacer = new QSpacerItem(
                10,10,
                QSizePolicy::Minimum,
                QSizePolicy::Expanding
                );
    vBoxLayout = new QVBoxLayout();
    hBoxLayout = new QHBoxLayout();
    mainLayout = new QHBoxLayout();

    //vboxlayout中加入垂直间隔
    vBoxLayout->addSpacerItem(vSpacer);

    QList <QString> list;
    list << "按钮1" << "按钮2" << "按钮3" << "按钮4" ;
    for(int i = 0;i < 4;i++)
    {
        pushButton[i] = new QPushButton();
        pushButton[i]->setText(list[i]);
        if(i == 0)
        {
            pushButton[i]->setFixedSize(100,100);
            //在vboxlayout中加入按钮1
            vBoxLayout->addWidget(pushButton[i]);
        }
        else
        {
            pushButton[i]->setFixedSize(60,60);
            //在hboxlayout中加入按钮2,3,4
            hBoxLayout->addWidget(pushButton[i]);
        }
    }

    //在hboxlayout中添加水平间隔
    hBoxLayout->addSpacerItem(hSpacer);
    //在主布局中添加垂直布局
    mainLayout->addLayout(vBoxLayout);
    //在主布局中添加水平布局
    mainLayout->addLayout(hBoxLayout);

    //设置部件间距
    mainLayout->setSpacing(50);
    //将主布局设置为widget布局
    widget->setLayout(mainLayout);


}

MainWindow::~MainWindow()
{
}

