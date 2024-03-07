#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,600);

    treeView = new QTreeView(this);
    //居中
    setCentralWidget(treeView);

    //构建model
    QStandardItemModel *sdimodel = new QStandardItemModel(treeView);
    sdimodel->setHorizontalHeaderLabels(QStringList()<<QStringLiteral("标题") << QStringLiteral("名称"));
    for(int i = 0;i < 5;i++)
    {
        //一级标题
        QList <QStandardItem*> items1;
        QStandardItem* item1 = new QStandardItem(QString::number(i));
        QStandardItem* item2 = new QStandardItem(QStringLiteral("一级标题"));
        //添加项一
        items1.append(item1);
        //添加项二
        items1.append(item2);
        //appendrow方法添加到model
        sdimodel->appendRow(items1);
        for(int j = 0;j < 5;j++)
        {
            //在1级标题后插入2级标题
            QList <QStandardItem*> items2;
            QStandardItem* item3 = new QStandardItem(QString::number(j));
            QStandardItem* item4 = new QStandardItem(QStringLiteral("二级标题"));
            //添加项一
            items2.append(item3);
            //添加项二
            items2.append(item4);
            //appendrow方法添加到model
            item1->appendRow(items2);

        }
    }

    //设置model给treeview
    treeView->setModel(sdimodel);
}

MainWindow::~MainWindow()
{
}

