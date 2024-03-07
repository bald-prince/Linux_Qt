#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    //声明一个信号
    void pushButtonTextChanged();

public slots:
    //声明一个槽函数
    void changeButtonText();
    //声明按钮点击的槽函数
    void pushButtonClicked();
private:
    //声明一个对象pushButton
    QPushButton *pushButton;

};
#endif // MAINWINDOW_H
