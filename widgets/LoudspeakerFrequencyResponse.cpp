#include "LoudspeakerFrequencyResponse.h"
#include "ui/ui_loudspeakerfrequencyresponse.h"

QT_CHARTS_USE_NAMESPACE

LoudspeakerFrequencyResponse::LoudspeakerFrequencyResponse(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoudspeakerFrequencyResponse)
{
    ui->setupUi(this);

    // 创建曲线图
    QChart *chart = createChart();

    // 创建图表视图并设置图表
    chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // 将图表视图添加到 ui->frame_3 中
    QHBoxLayout *layout = new QHBoxLayout(ui->frame_3);
    layout->addWidget(chartView);
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
    axisX->setRange(0, 20000);
    axisX->setLabelFormat("%d");
    axisX->setGridLineVisible(true);
    axisX->setTickCount(10);
    axisX->setMinorTickCount(5);

    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(30, -150);
    axisY->setLabelFormat("%d");
    axisY->setGridLineVisible(true);
    axisY->setTickCount(100);
    axisY->setMinorTickCount(50);

    chart->addAxis(axisX, Qt::AlignTop);
    chart->addAxis(axisY, Qt::AlignLeft);

    series->attachAxis(axisX);
    series->attachAxis(axisY);


    return chart;
}

