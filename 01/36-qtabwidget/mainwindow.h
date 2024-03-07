#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include <QHBoxLayout>
#include <QLabel>
#include <QWidget>
#include <QList>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    QWidget *widget;
    QTabWidget *tabWidget;
    QHBoxLayout *hBoxLayout;
    QLabel *label[3];
};
#endif // MAINWINDOW_H
