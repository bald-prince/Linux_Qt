#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0, 0, 800, 480);

    toolBox = new QToolBox(this);
    toolBox->setGeometry(300, 50, 200, 250);
    /* 设置 toolBox 的样式,此处设置为 30%不透明度的黑色 */
    toolBox->setStyleSheet("QToolBox {background-color:rgba(0, 0, 0,30%);}");

    for(int i = 0; i < 2; i++)
    {
        vBoxLayout[i] = new QVBoxLayout();
        groupBox[i] = new QGroupBox(this);

    }

    /* 字符串链表 */
    QList <QString>strList;
    strList<<"李白"<<"王照君"<<"李元芳"<<"程咬金"<<"钟馗"<<"上官婉儿";

    /* 字符串图标链表 */
    QList <QString>iconsList;
    iconsList<<":/icons/libai"<<":/icons/wangzhaojun"
            <<":/icons/liyuanfang"<<":/icons/chengyaojin"
           <<":/icons/zhongkui"<<":/icons/shangguanwaner";


    for(int i = 0; i < 6; i++)
    {
        toolButton[i] = new QToolButton();
        /* 设置 toolButton 图标 */
        toolButton[i]->setIcon(QIcon(iconsList[i]));
        /* 设置 toolButton 的文本 */
        toolButton[i]->setText(strList[i]);
        /* 设置 toolButton 的大小 */
        toolButton[i]->setFixedSize(150, 40);
        /* 设置 toolButton 的 setToolButtonStyle 的样式 */
        toolButton[i]->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        if( i < 3 )
        {
            /* 将 toolButton 添加到时垂直布局 */
            vBoxLayout[0]->addWidget(toolButton[i]);
            /* 添加一个伸缩量 1 */

            vBoxLayout[0]->addStretch(1);

        }
        else
        {
            vBoxLayout[1]->addWidget(toolButton[i]);
            vBoxLayout[1]->addStretch(1);

        }
    }
    /* 将垂直布局的内容添加到组框 groupBox */
    groupBox[0]->setLayout(vBoxLayout[0]);
    groupBox[1]->setLayout(vBoxLayout[1]);

    /* 将组框加入 QToolBox 里 */
    toolBox->addItem(groupBox[0],"我的好友");
    toolBox->addItem(groupBox[1],"黑名单");
}

MainWindow::~MainWindow()
{
}

