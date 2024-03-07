#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,600);
    maxSize = 51;
    maxX = 5000;
    maxY = 80;

    splineSeries = new QSplineSeries();
    chart = new QChart();
    chartView = new QChartView();
    axisX = new QValueAxis();
    axisY = new QValueAxis();
    timer = new QTimer(this);

    //legend 译图例类型,以绘图的颜色区分,本例设置为隐藏
    chart->legend()->hide();
    //chart 设置标题
    chart->setTitle("实时动态曲线示例");
    //添加一条曲线 splineSeries
    chart->addSeries(splineSeries);

    //设置显示格式
    axisY->setLabelFormat("%i");
    //y 轴标题
    axisY->setTitleText("温度/°C");
    //y 轴标题位置(设置坐标轴的方向)
    chart->addAxis(axisY, Qt::AlignLeft);
    //设置 y 轴范围
    axisY->setRange(0, maxY);
    //将 splineSeries 附加于 y 轴上
    splineSeries->attachAxis(axisY);

    //设置显示格式
    axisX->setLabelFormat("%i");
    //x 轴标题
    axisX->setTitleText("时间/ms");
    //x 轴标题位置(设置坐标轴的方向)
    chart->addAxis(axisX, Qt::AlignBottom);
    //设置 x 轴范围
    axisX->setRange(0, maxX);
    //将 splineSeries 附加于 x 轴上
    splineSeries->attachAxis(axisX);

    //将图表的内容设置在图表视图上
    chartView->setChart(chart);
    //设置抗锯齿
    chartView->setRenderHint(QPainter::Antialiasing);

    //设置为图表视图为中心部件
    setCentralWidget(chartView);

    //定时 200ms
    timer->start(200);
    // 信号槽连接
    connect(timer, SIGNAL(timeout()), this, SLOT(timerTimeout()));

    //设置随机种子,随机数初始化
    qsrand(time(NULL));
}

MainWindow::~MainWindow()
{
}

void MainWindow::receiveData(int value)
{
    //将数据添加到 data 中
    data.append(value);

    // 当储存数据的个数大于最大值时,把第一个数据删除
    while (data.size() > maxSize)
        //移除 data 中第一个数据
        data.removeFirst();

    //先清空
    splineSeries->clear();

    //计算 x 轴上的点与点之间显示的间距
    int xSpace = maxX / (maxSize - 1);

    // 添加点,xSpace * i 表示第 i 个点的 x 轴的位置
    for (int i = 0; i < data.size(); ++i)
        splineSeries->append(xSpace * i, data.at(i));

}

void MainWindow::timerTimeout()
{
    // 产生随机 0~maxY 之间的数据
    receiveData(qrand() % maxY );
}

