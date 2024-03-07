#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QString>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    QLineEdit *lineEdit_userId;
    QLineEdit *lineEdit_password;
    QLabel *label;
    QPushButton *btnLogIn;
    QPushButton *btnAbort;

private slots:
    void pushButtonClicked();
};
#endif // MAINWINDOW_H
