#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setGeometry(0,0,1024,600);

    this->setWindowTitle("文本浏览器");

    textBrowser = new QTextBrowser(this);
    this->setCentralWidget(textBrowser);

    openAction = new QAction("打开",this);
    ui->menubar->addAction(openAction);


    connect(openAction,SIGNAL(triggered()),this,SLOT(openActionTriggered()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openActionTriggered()
{
    QString filename = QFileDialog::getOpenFileName(
                this,tr("打开文件"),"",
                tr("Files(*.txt *.cpp *.h *.html *.htm)")
                );
    QFile myfile(filename);
    if(!myfile.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&myfile);

    QString mytext = in.readAll();

    if(filename.endsWith("html") || filename.endsWith("htm"))
    {
        textBrowser->setHtml(mytext);
    }
    else
    {
        textBrowser->setPlainText(mytext);
    }
    ui->statusbar->showMessage("文件名：" + filename);
}

