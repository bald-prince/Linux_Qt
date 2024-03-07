#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPlainTextEdit>
#include <QRadioButton>
#include <QDir>
#include <QTextStream>
#include <QCoreApplication>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    QPlainTextEdit *plainTextEdit;
    QRadioButton *radioButton;
private slots:
    void radioButtonClicked();
};
#endif // MAINWINDOW_H
