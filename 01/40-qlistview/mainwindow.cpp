#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,600);

    listView = new QListView(this);

    setCentralWidget(listView);     //居中

    QStringList strList;
    strList << "高三（1）班" << "高三（2）班" << "高三（3）班";

    stringListModel = new QStringListModel(strList);

    //向表中插入一段数据
    listView->setModel(stringListModel);
    //设置为视图为图标模式
    listView->setViewMode(QListView::IconMode);
    //不可拖动
    listView->setDragEnabled(false);
}

MainWindow::~MainWindow()
{
}

