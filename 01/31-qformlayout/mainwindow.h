#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFormLayout>
#include <QLineEdit>
#include <QWidget>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    QWidget *fwidget;
    QLineEdit *userLineEdit;
    QLineEdit *passwordLineEdit;
    QFormLayout *formLayout;
};
#endif // MAINWINDOW_H
