#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QChartView>
#include <QSplineSeries>
#include <QScatterSeries>
#include <QDebug>
#include <QValueAxis>
#include <QTimer>
#include <QList>
#include <QChart>

QT_CHARTS_USE_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    //接收数据接口
   void receiveData(int);
   //数据最大个数
   int maxSize;
   //X轴最大值
   int maxX;
   //y轴最大值
   int maxY;
   //X轴
   QValueAxis *axisX;
   //Y轴
   QValueAxis *axisY;
   //容器
   QList <int> data;
   //QSplineSeries对象
   QSplineSeries *splineSeries;
   //QChart图表
   QChart *chart;
   //图表视图
   QChartView *chartView;
   //定时器
   QTimer *timer;

private slots:
   void timerTimeout();


};
#endif // MAINWINDOW_H
