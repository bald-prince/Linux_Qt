#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDateEdit>
#include <QDateTimeEdit>
#include <QTimeEdit>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QDateTimeEdit * dateTimeEdit;
    QDateEdit *dateEdit;
    QTimeEdit *timeEdit;
};
#endif // MAINWINDOW_H
