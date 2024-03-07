#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCheckBox>
#include <QApplication>
#include <QFile>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    //声明一个checkbar对象
    QCheckBox *checkbox;
private slots:
    //声明一个槽函数
    void checkBoxStateChanged(int);
};
#endif // MAINWINDOW_H
