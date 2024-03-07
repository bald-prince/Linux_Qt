#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,600);
    pushButton = new QPushButton("新建窗口",this);
    pushButton->setGeometry(0,30,100,30);

    mdiArea = new QMdiArea(this);
    mdiArea->setGeometry(100,30,900,500);

    connect(pushButton,SIGNAL(clicked()),this,SLOT(creat_newMdiSubWindow()));
}

MainWindow::~MainWindow()
{
}

void MainWindow::creat_newMdiSubWindow()
{
    newMdiSubWindow = new QMdiSubWindow();
    newMdiSubWindow->setWindowTitle("新建窗口");
    newMdiSubWindow->setAttribute(Qt::WA_DeleteOnClose);
    //添加子窗口
    mdiArea->addSubWindow(newMdiSubWindow);
    //显示窗口
    newMdiSubWindow->show();
    //自适应窗口
    newMdiSubWindow->sizePolicy();
    //以级联的方式排列窗口
    //mdiArea->cascadeSubWindows();
    //以平铺方式排列所有窗口
    mdiArea->tileSubWindows();

}

