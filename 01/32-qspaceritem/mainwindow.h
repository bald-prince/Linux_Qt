#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QSpacerItem>
#include <QBoxLayout>
#include <QWidget>
#include <QList>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    QPushButton *pushButton[4];
    //垂直间隔
    QSpacerItem *vSpacer;
    //水平间隔
    QSpacerItem *hSpacer;
    //用于存放布局
    QWidget *widget;
    //主布局对象
    QHBoxLayout *mainLayout;
    //垂直布局
    QVBoxLayout *vBoxLayout;
    //水平布局
    QHBoxLayout *hBoxLayout;

};
#endif // MAINWINDOW_H
