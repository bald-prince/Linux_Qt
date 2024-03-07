#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,600);

    gwidget = new QWidget(this);
    this->setCentralWidget(gwidget);

    gridLayout = new QGridLayout(this);

    QList<QString>list;
    list << "按钮1" << "按钮2" << "按钮3" <<  "按钮4";
    for(int i = 0;i < 4;i++)
    {
        pushButton[i] =new QPushButton();
        pushButton[i]->setText(list[i]);

        pushButton[i]->setMinimumSize(100,30);

        //自动调整按钮大小
        pushButton[i]->setSizePolicy(
                    QSizePolicy::Expanding,
                    QSizePolicy::Expanding
                    );

        switch(i)
        {
            case 0 :
                gridLayout->addWidget(pushButton[i],0,0);
            break;
            case 1:
                gridLayout->addWidget(pushButton[i],0,1);
            break;
            case 2:
                gridLayout->addWidget(pushButton[i],1,0);
            break;
            case 3:
                gridLayout->addWidget(pushButton[i],1,1);
            break;
            default:
            break;
        }
        //设置第0行与第1行的比例系数
        gridLayout->setRowStretch(0,2);
        gridLayout->setRowStretch(1,3);

        //设置第0行与第1列的比例系数
        gridLayout->setColumnStretch(0,1);
        gridLayout->setColumnStretch(1,3);

        gwidget->setLayout(gridLayout);
    }
}

MainWindow::~MainWindow()
{
}

