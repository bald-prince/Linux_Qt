#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QRadioButton>
#include <QGroupBox>
#include <QVBoxLayout>
#include <QList>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    QGroupBox *groupBox;
    QVBoxLayout *vBoxLayout;
    QRadioButton *radioButton[3];
};
#endif // MAINWINDOW_H
