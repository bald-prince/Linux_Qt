#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setGeometry(0,0,1024,600);

    this->setWindowTitle("图像浏览器");

    graphicsView = new QGraphicsView(this);
    this->setCentralWidget(graphicsView);
    graphicsScene = new QGraphicsScene(this);
    graphicsView->setScene(graphicsScene);
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
                this,"打开文件","",
                tr("Files(*.png *.jpg *.bmp)")
                );
    QPixmap image(filename);
    if(image.isNull())
        return;
    image = image.scaled(graphicsView->width(),
                         graphicsView->height(),
                         Qt::KeepAspectRatio,
                         Qt::FastTransformation
                         );
    graphicsScene->clear();
    graphicsScene->addPixmap(image);
    ui->statusbar->showMessage("文件名：" + filename);
}

