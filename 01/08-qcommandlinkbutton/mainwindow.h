#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCommandLinkButton>
#include <QUrl>
#include <QFile>
#include <QApplication>
#include <QDesktopServices>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    //声明一个对象
    QCommandLinkButton *commandLinkButton;
private slots:
    //声明槽函数
    void commandLinkButtonClicked();
};
#endif // MAINWINDOW_H
