#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QRadioButton>
#include <QApplication>
#include <QFile>
#include <QString>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    //声明两个QRadioButton对象
    QRadioButton *radiobutton1;
    QRadioButton *radiobutton2;

};
#endif // MAINWINDOW_H
