#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,600);
    widget = new QWidget(this);

    this->setCentralWidget(widget);

    hBoxLayout = new QHBoxLayout();

    stackedWidget = new QStackedWidget();

    listWidget = new QListWidget();

    QList <QString> strListWidgetList;
    strListWidgetList << "窗口一" << "窗口二" << "窗口三";

    for(int i = 0;i < 3 ;i++)
    {
        listWidget->insertItem(i,strListWidgetList[i]);
    }

    QList <QString> strLabelList;
    strLabelList << "标签一" << "标签二" << "标签三";

    for(int i = 0;i < 3 ;i++)
    {
        label[i] = new QLabel();
        label[i]->setText(strListWidgetList[i]);
        //居中
        label[i]->setAlignment(Qt::AlignCenter);
        //添加页面
        stackedWidget->addWidget(label[i]);
    }

    //设置列表最大宽度
    listWidget->setMaximumWidth(100);
    //添加到水平布局
    hBoxLayout->addWidget(listWidget);
    hBoxLayout->addWidget(stackedWidget);

    //将widget设置成hboxlayout
    widget->setLayout(hBoxLayout);

    connect(listWidget,SIGNAL(currentRowChanged(int)),stackedWidget,SLOT(setCurrentIndex(int)));
}

MainWindow::~MainWindow()
{
}

