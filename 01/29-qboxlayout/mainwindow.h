#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QList>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QPushButton *pushButton[6];
    QWidget *hWidget;
    QWidget *vWidget;

    QHBoxLayout *hLayout;
    QVBoxLayout *vLayout;

};
#endif // MAINWINDOW_H
