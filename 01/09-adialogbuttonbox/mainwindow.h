#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QPushButton>
#include <QDialogButtonBox>
#include <QDebug>


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    //声明一个Qdialogbuttonbox对象
    QDialogButtonBox *dialogbutton;

    //声明一个QPushbutton对象
    QPushButton *pushButton;
private slots:
    //声明槽函数
    void dialogButtonClicked(QAbstractButton *);
};
#endif // MAINWINDOW_H
