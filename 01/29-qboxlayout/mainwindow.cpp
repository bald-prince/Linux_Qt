#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,600);

    hWidget = new QWidget(this);
    hWidget->setGeometry(0,0,1024,100);

    vWidget = new QWidget(this);
    vWidget->setGeometry(0,100,1024,600);

    hLayout = new QHBoxLayout();
    vLayout = new QVBoxLayout();

    QList<QString>list;
    list << "one" << "two" << "three" << "four" << "five" << "six";

    for(int i = 0;i < 6;i++)
    {
        pushButton[i] = new QPushButton();
        pushButton[i]->setText(list[i]);
        if(i < 3)
            hLayout->addWidget(pushButton[i]);
        else
            vLayout->addWidget(pushButton[i]);

        hLayout->setSpacing(50);
        vLayout->setSpacing(20);

        hWidget->setLayout(hLayout);
        vWidget->setLayout(vLayout);
    }

}

MainWindow::~MainWindow()
{
}

