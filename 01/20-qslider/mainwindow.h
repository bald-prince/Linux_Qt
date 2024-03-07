#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSlider>
#include <QLabel>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QSlider *horizontalSlider;
    QSlider *verticalSlider;
    QLabel *lable;
private slots:
    void horizontalSliderValueChanged(int);
    void verticalSliderValueChanged(int);
};
#endif // MAINWINDOW_H
