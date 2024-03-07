#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QToolBar>
#include <QToolButton>
#include <QStyle>
#include <QApplication>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    //声明一个QToolButton
    QToolButton *qtoolButton;
    //声明一个QToolBar
    QToolBar *qtoolBar;
};
#endif // MAINWINDOW_H
