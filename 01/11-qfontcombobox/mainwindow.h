#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFontComboBox>
#include <QLabel>
#include <QDebug>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QFontComboBox *fontComboBox;
    //声明一个label对象，用于显示当前字体变化
    QLabel *label;
private slots:
    void fontComboBoxFontChanged(QFont);
};
#endif // MAINWINDOW_H
