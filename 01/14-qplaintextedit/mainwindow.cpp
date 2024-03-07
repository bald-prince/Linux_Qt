#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //设置当前程序工作目录为可执行程序的工作目录
    QDir::setCurrent(QCoreApplication::applicationDirPath());
    this->setGeometry(0,0,1024,600);

    plainTextEdit = new QPlainTextEdit(this);
    plainTextEdit->setGeometry(0,50,800,430);

    radioButton = new QRadioButton(this);
    radioButton->setGeometry(650,20,100,20);
    radioButton->setText("只读模式");

    QFile file("moc_mainwindow.cpp");

    file.open(QFile::ReadOnly | QFile::Text);

    QTextStream in(&file);

    plainTextEdit->insertPlainText(in.readAll());

    connect(radioButton,SIGNAL(clicked()),this,SLOT(radioButtonClicked()));
}

MainWindow::~MainWindow()
{
}

void MainWindow::radioButtonClicked()
{
    if(radioButton->isChecked())
    {
        plainTextEdit->setReadOnly(true);
    }
    else
    {
        plainTextEdit->setReadOnly(false);
    }
}

