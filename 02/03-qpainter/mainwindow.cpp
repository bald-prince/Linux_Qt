#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,1024,600);
    setPalette(QPalette(Qt::gray));
    setAutoFillBackground(true);

    timer = new QTimer(this);

    angle = 0;

    timer->start(100);

    connect(timer,SIGNAL(timeout()),this,SLOT(timerTimeOut()));
}

MainWindow::~MainWindow()
{
}


void MainWindow::timerTimeOut()
{
    this->update();
}

void MainWindow::paintEvent(QPaintEvent *)
{
    //指向父对象，this指本窗口
    QPainter painter(this);
    //设置为抗锯齿，流畅转换
    painter.setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);
    //计算旋转角度
    if(angle++ == 360)
        angle = 0;

    //QPixmap类型对象
    QPixmap image;
    //加载
    image.load(":/image/cd.png");
    //QRectF,继承QRect，F代表精确到浮点类型
    QRectF rect(
                (this->width() - image.width()) / 2,
                (this->height() - image.height()) / 2,
                 image.width(),
                 image.height()
                );
    //默认参考点为左上角原点(0,0),因为旋转需要以图形的中心为参考点,
    //我们使用 translate 把参考点设置为 CD 图形的中心点坐标
    painter.translate(0 + rect.x() + rect.width() / 2,0 + rect.y() + rect.height() / 2);
    //旋转角度
    painter.rotate(angle);
    /* 现在参考点为 CD 图形的中心,我们需要把它设置回原点的位置,
    * 所以需要减去上面加上的数 */
    painter.translate(0 - (rect.x() + rect.width() / 2),0 - (rect.y() + rect.height() / 2));

    /* 画图,QPainter 提供了许多 drawX 的方法 */
    painter.drawImage(rect, image.toImage(), image.rect());

    /* 再画一个矩形 */
    painter.drawRect(rect.toRect());
}

