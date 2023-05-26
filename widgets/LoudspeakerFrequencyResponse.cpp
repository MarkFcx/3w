#include "LoudspeakerFrequencyResponse.h"
#include "ui/ui_loudspeakerfrequencyresponse.h"
#include <cmath>
#include <iostream>

QT_CHARTS_USE_NAMESPACE

LoudspeakerFrequencyResponse::LoudspeakerFrequencyResponse(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoudspeakerFrequencyResponse)
{
    ui->setupUi(this);

    // 创建 QCustomPlot 对象
    QCustomPlot* customPlot = new QCustomPlot(this);

    // 设置绘图区背景色
    customPlot->setBackground(QBrush(QColor(255, 255, 255)));
    customPlot->xAxis->setRange(0, 100);
    customPlot->yAxis->setRange(-10, 10);

    int index = 0;
    QColor color(176, 224, 230);
    double peakX = 16.0;
    double peakY = 3.0;
    drawCurve(customPlot, index, color, peakX, peakY);

    index = 1;
    QColor color2(230, 174, 225);
    peakX = 66.0;
    peakY = 6.0;
    drawCurve(customPlot, index, color2, peakX, peakY);

    // int x_number = 100;
    // double peakX = 16.0;
    //  double peakY = 3;
    //  double curvature = 1.0 / (x_number * 10); 
    //  int numPoints = 100;

    // QVector<double> xData, yData;

    // for (int i = 0; i < numPoints; ++i)
    // {
    //     // double x = i;
    //     double x = i;
    //     std::cout << x << std::endl;
    //     // double x = peakX - 0.0 + i * 10.0 / (numPoints - 1);
    //     double distance = x - peakX;
    //     double y = peakY * exp(-curvature * distance * distance);
    //     xData.append(x);
    //     yData.append(y);
    // }

    // // 创建曲线图层
    // customPlot->addGraph();
    // customPlot->graph(0)->setData(xData, yData);
    // customPlot->graph(0)->setPen(QPen(QColor(30, 144, 255)));
    // customPlot->graph(0)->setBrush(QBrush(QColor(176, 224, 230)));

    // 设置 QCustomPlot 的布局和位置
    QVBoxLayout* layout = new QVBoxLayout(ui->frame_3);
    layout->addWidget(customPlot);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(0);

    // 显示绘图窗口
    customPlot->replot();
}

LoudspeakerFrequencyResponse::~LoudspeakerFrequencyResponse()
{
    delete ui;
}

QChart* LoudspeakerFrequencyResponse::createChart()
{
    // 创建光滑曲线图的数据
    QSplineSeries *series = new QSplineSeries();
    series->append(0, 0);
    series->append(2, 4);
    series->append(10, 0);
    // series->append(7, 4);
    // series->append(10, 5);

    QSplineSeries *series2 = new QSplineSeries();
    series2->append(0, 0);
    series2->append(5, 3);
    series2->append(10, 0);

    // 创建图表并将数据添加到图表中
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->addSeries(series2);

    // 设置图表的标题和坐标轴标签
    QValueAxis *axisX = new QValueAxis();
    axisX->setRange(0, 2000);
    axisX->setLabelFormat("%d");
    axisX->setGridLineVisible(true);
    axisX->setTickCount(10);
    // axisX->setMinorTickCount(5);

    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(-150, 30);
    axisY->setLabelFormat("%d");
    axisY->setGridLineVisible(true);
    axisY->setTickCount(10);
    // axisY->setMinorTickCount(5);

    chart->addAxis(axisX, Qt::AlignTop);
    chart->addAxis(axisY, Qt::AlignLeft);

    series->attachAxis(axisX);
    series->attachAxis(axisY);


    return chart;
}

void LoudspeakerFrequencyResponse::drawCurve(QCustomPlot* customPlot, int index, const QColor& color, double peakX, double peakY)
{
    int x_number = 100;
    double curvature = 1.0 / (x_number * 10);
    int numPoints = 100;

    QVector<double> xData, yData;

    for (int i = 0; i < numPoints; ++i)
    {
        double x = i;
        double distance = x - peakX;
        double y = peakY * exp(-curvature * distance * distance);
        xData.append(x);
        yData.append(y);
    }

    // 创建曲线图层
    customPlot->addGraph();
    customPlot->graph(index)->setData(xData, yData);
    customPlot->graph(index)->setPen(QPen(color));
    customPlot->graph(index)->setBrush(QBrush(color));
}