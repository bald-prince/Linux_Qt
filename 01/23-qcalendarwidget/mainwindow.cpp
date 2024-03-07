#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,480);

    calendarWidget = new QCalendarWidget(this);
    calendarWidget->setGeometry(200,20,400,300);

    QFont font;
    //设置日历里字体大小像素为10
    font.setPixelSize(10);
    calendarWidget->setFont(font);

    pushButton = new QPushButton("回到当前日期",this);
    pushButton->setGeometry(200,350,100,30);
    label = new QLabel(this);
    label->setGeometry(400,350,400,30);
    QString str = "当前选择的日期：" + calendarWidget->selectedDate().toString();
    label->setText(str);

    connect(pushButton,SIGNAL(clicked()),this,SLOT(pushButtonClicked()));
    connect(calendarWidget,SIGNAL(selectionChanged()),this,SLOT(calendarWidgetSelectionChanged()));
}

MainWindow::~MainWindow()
{
}

void MainWindow::calendarWidgetSelectionChanged()
{
    QString str = "当前选择的日期：" + calendarWidget->selectedDate().toString();
    label->setText(str);
}

void MainWindow::pushButtonClicked()
{
    calendarWidget->setSelectedDate(QDate::currentDate());

}

