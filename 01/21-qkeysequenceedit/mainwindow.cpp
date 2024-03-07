#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,600);

    keySequenceEdit = new QKeySequenceEdit(this);

    keySequenceEdit->setGeometry(350,200,150,30);

    connect(keySequenceEdit,SIGNAL(keySequenceChanged(const QKeySequence &)),this,SLOT(keySequenceChanged(const QKeySequence &)));
}

MainWindow::~MainWindow()
{
}

void MainWindow::keySequenceChanged(const QKeySequence &keySequence)
{
    if(keySequence == QKeySequence(tr("Ctrl+Q")))
    {
        this->close();
    }
    else
    {
        qDebug() << keySequence.toString() ;
    }

}

