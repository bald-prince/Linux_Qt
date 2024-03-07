#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //设置窗口尺寸
    this->resize(1024,600);

    //实例化toolbar
    qtoolBar = new QToolBar(this);
    //设置toolbar的位置
    qtoolBar->setGeometry(0,0,800,100);
    //实例化QStyle类对象，用于设置风格，调用系统类自带的图标
    QStyle *style = QApplication::style();
    //使用Qt自带的标准图标
    QIcon icon = style->standardIcon(QStyle::SP_TitleBarContextHelpButton);

    //实例化QToolbar
    qtoolButton = new QToolButton();

    //设置图标
    qtoolButton->setIcon(icon);
    //设置要显示的文本
    qtoolButton->setText("帮助");
    //调用setToolButtonStyle方法，设置toolButton的样式，设置为文本置于图标下方
    qtoolButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    //将toolButton添加到ToolBar里
    qtoolBar->addWidget(qtoolButton);

}

MainWindow::~MainWindow()
{
}

