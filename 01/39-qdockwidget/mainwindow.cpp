#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,600);

    dockWidget = new QDockWidget("停靠窗口",this);

    textEdit = new QTextEdit(dockWidget);

    textEdit->setText("这是一个测试");

    dockWidget->setWidget(textEdit);

    this->addDockWidget(Qt::TopDockWidgetArea,dockWidget);
}

MainWindow::~MainWindow()
{
}

