#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,600);

    widget = new QWidget(this);

    //居中
    this->setCentralWidget(widget);

    //多页面小部件
    tabWidget = new QTabWidget();

    //水平布局实例化
    hBoxLayout = new QHBoxLayout();
    QList <QString> strLabelList;
    strLabelList << "标签一" << "标签二" << "标签三";

    QList <QString> strTabList;
    strTabList << "页面一" << "页面二" << "页面三";

    QList <QString> iconList;
    iconList << ":/icons/icon1" << ":/icons/icon2" << ":/icons/icon3";

    for(int i = 0;i < 3;i++)
    {
        label[i] = new QLabel();
        label[i]->setText(strLabelList[i]);
        label[i]->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(label[i],QIcon(iconList[i]),strTabList[i]);
    }

    //是否添加关闭按钮
    tabWidget->setTabsClosable(true);

    hBoxLayout->addWidget(tabWidget);
    widget->setLayout(hBoxLayout);
}

MainWindow::~MainWindow()
{
}

