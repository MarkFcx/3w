#include <cmath>
#include <iostream>

#include "LoudspeakerFrequencyResponse.h"
#include "movebuttonview.h"
#include "ui/ui_loudspeakerfrequencyresponse.h"

#include "../GlobalHelper.h"

LoudspeakerFrequencyResponse::LoudspeakerFrequencyResponse(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoudspeakerFrequencyResponse)
{
    ui->setupUi(this);
    addLineEditObjects();
    createSpeakerButtons(GlobalHelper::getInstance().getSpeakerCount());

    initializeGraph();

    enter();

    connect(moveButtonView, &MoveButtonView::externalButtonReleased, this, &LoudspeakerFrequencyResponse::handleButtonReleased);

}

LoudspeakerFrequencyResponse::~LoudspeakerFrequencyResponse()
{
    delete ui;
}

void LoudspeakerFrequencyResponse::initializeGraph()
{
    // 创建 QCustomPlot 对象
    customPlot = new QCustomPlot(this);

    // 设置绘图区背景色
    customPlot->setBackground(QBrush(QColor(255, 255, 255)));
    customPlot->xAxis->setRange(0, 20000);
    customPlot->yAxis->setRange(-30, 30);

    customPlot->xAxis->setTickLabels(false);
    customPlot->yAxis->setTickLabels(false);

    // customPlot->xAxis->setTicker(QSharedPointer<QCPAxisTickerFixed>(new QCPAxisTickerFixed));
    customPlot->xAxis->ticker()->setTickCount(1);
    customPlot->yAxis->ticker()->setTickCount(1);
}

void LoudspeakerFrequencyResponse::addLineEditObjects()
{
    for (int index = 0; index < 6; ++index) {
        QString pointXLineEditObjectName = QString("point_x_%1_line_edit").arg(index);
        QString pointYLineEditObjectName = QString("point_y_%1_line_edit").arg(index);

        QLineEdit* pointXLineEdit = findChild<QLineEdit*>(pointXLineEditObjectName);
        if (pointXLineEdit)
            point_x_line_edits.push_back(pointXLineEdit);

        QLineEdit* pointYLineEdit = findChild<QLineEdit*>(pointYLineEditObjectName);
        if (pointYLineEdit)
            point_y_line_edits.push_back(pointYLineEdit);
    }
}

void LoudspeakerFrequencyResponse::enter()
{
    this->show();

    QColor color(0, 0, 0);
    double peakX = 0.0;
    double peakY = 0.0;
    drawCurve(customPlot, 0, color, peakX, peakY);
    drawCurve(customPlot, 1, color, peakX, peakY);
    drawCurve(customPlot, 2, color, peakX, peakY);
    drawCurve(customPlot, 3, color, peakX, peakY);
    drawCurve(customPlot, 4, color, peakX, peakY);
    drawCurve(customPlot, 5, color, peakX, peakY);

    // 设置 QCustomPlot 的布局和位置
    QVBoxLayout* layout = new QVBoxLayout(ui->graph_frame);
    layout->addWidget(customPlot);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(0);

    // 显示绘图窗口
    customPlot->replot();

    moveButtonView = new MoveButtonView(ui->graph_frame);

}

void LoudspeakerFrequencyResponse::createSpeakerButtons(int count)
{
    buttonGroup = new QButtonGroup(this);

    for (int i = 0; i < count; i++)
    {
        createSpeakerButton(i);
    }

    // Add a vertical spacer in the layout
    QSpacerItem* verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);
    ui->right_frame->layout()->addItem(verticalSpacer);
}

void LoudspeakerFrequencyResponse::createSpeakerButton(int index)
{
    QPushButton* speakerButton = new QPushButton();
    speakerButton->setCheckable(true);
    if (index == 0) speakerButton->setChecked(true);

    speakerButton->setStyleSheet("QPushButton {"
                                 "width: 254px;"
                                 "height: 52px;"
                                 "background: #FFFFFF;"
                                 "border: 1px solid #FFFFFF;"
                                 "border-bottom: 0.5px solid #D8D8D8;"
                                 "}"
                                 "QPushButton:checked {"
                                 "background: #F7F7F7;"
                                 "border-bottom: 0.5px solid #D8D8D8;"
                                 "}");

    // Create the label for the speaker button
    QLabel* speakerLabel = new QLabel("Speaker: " + QString::number(index+1));
    speakerLabel->setStyleSheet("QLabel {"
                                "width: 70px;"
                                "height: 20px;"
                                "font-family: 'PingFang SC';"
                                "font-style: normal;"
                                "font-weight: 500;"
                                "font-size: 14px;"
                                "line-height: 20px;"
                                "background: #FFFFFF;"
                                "color: #565656;"
                                "}");

    // Create the bypass button
    QPushButton* bypassButton = new QPushButton("Bypass");
    bypassButton->setCheckable(true);
    bypassButton->setStyleSheet("QPushButton {"
                                "width: 72px;"
                                "height: 32px;"
                                "background: #FAFAFA;"
                                "border: 1px solid rgba(86, 86, 86, 0.2);"
                                "border-radius: 4px;"
                                "}"
                                "QPushButton:checked {"
                                "background: rgba(61, 61, 252, 0.1);"
                                "border: 1px solid rgba(61, 61, 252, 0.6);"
                                "color: #3D3DFC;"
                                "}");

    // Create the test button
    QPushButton* testButton = new QPushButton("Test");
    testButton->setCheckable(true);
    testButton->setStyleSheet("QPushButton {"
                              "width: 52px;"
                              "height: 32px;"
                              "background: #FAFAFA;"
                              "border: 1px solid rgba(86, 86, 86, 0.2);"
                              "border-radius: 4px;"
                              "}"
                              "QPushButton:checked {"
                              "background: rgba(61, 61, 252, 0.1);"
                              "border: 1px solid rgba(61, 61, 252, 0.6);"
                              "color: #3D3DFC;"
                              "}");

    // Create the layout for the speaker button
    QHBoxLayout* speakerLayout = new QHBoxLayout;
    speakerLayout->addWidget(speakerLabel);
    speakerLayout->addWidget(bypassButton);
    speakerLayout->addWidget(testButton);

    speakerButton->setLayout(speakerLayout);
    ui->right_frame->layout()->addWidget(speakerButton);

    std::vector<std::pair<double, double>> points;
    for (int i = 0; i < 6; ++i) {
        points.push_back(std::make_pair(0.0, 0.0));
    }
    speakerButtons.push_back({speakerButton, bypassButton->isChecked(), points});

    connect(speakerButton, &QPushButton::toggled, this, &LoudspeakerFrequencyResponse::handleSpeakerButtonChecked);
    connect(bypassButton, &QPushButton::clicked, this, &LoudspeakerFrequencyResponse::handleBypassButtonChecked);
    connect(testButton, &QPushButton::clicked, this, &LoudspeakerFrequencyResponse::handleTestButtonClicked);

    buttonGroup->addButton(speakerButton);
    buttonGroup->setExclusive(true);
}

void LoudspeakerFrequencyResponse::handleSpeakerButtonChecked(bool checked)
{
    // Find the index of the speaker button that triggered the signal
    speakerIndex = -1;
    for (int i = 0; i < speakerButtons.size(); i++)
    {
        if (sender() == speakerButtons[i].button)
        {
            speakerIndex = i;
            break;
        }
    }

    // Perform any necessary actions for the speaker button checked
    if (speakerIndex != -1)
    {
        QPushButton* speakerButton = speakerButtons[speakerIndex].button;
        std::vector<std::pair<double, double>>& peakPoints = speakerButtons[speakerIndex].peakPoints;

        customPlot->clearGraphs(); // Clear all previous curves

        for (int i = 0; i < peakPoints.size(); i++)
        {
            double peakX = peakPoints[i].first;
            double peakY = peakPoints[i].second;

            QPointF pos(peakX, peakY);
            handleButtonReleased(i, pos);
        }

        // Perform any other necessary actions for speaker button checked
    }
}

void LoudspeakerFrequencyResponse::handleBypassButtonChecked()
{
    // Find the index of the speaker button that triggered the signal
    int index = -1;
    for (int i = 0; i < speakerButtons.size(); i++)
    {
        if (sender() == speakerButtons[i].button)
        {
            index = i;
            break;
        }
    }

    // Update the bypass status in the speakerButtons vector
    if (index != -1)
    {
        // speakerButtons[index].button->setChecked(sender()->isChecked());
        // Perform any other necessary actions for bypass button clicked
    }
}

void LoudspeakerFrequencyResponse::handleTestButtonClicked()
{
    // Find the index of the speaker button that triggered the signal
    int index = -1;
    for (int i = 0; i < speakerButtons.size(); i++)
    {
        if (sender() == speakerButtons[i].button->layout()->itemAt(0)->widget())
        {
            index = i;
            break;
        }
    }

    // Perform any necessary actions for the test button clicked
    if (index != -1)
    {
        // Access the speaker button and its peak points using the index
        QPushButton* speakerButton = speakerButtons[index].button;
        std::vector<std::pair<double, double>>& peakPoints = speakerButtons[index].peakPoints;
        // Perform any other necessary actions for test button clicked
    }
}

void LoudspeakerFrequencyResponse::drawCurve(QCustomPlot* customPlot, int index, const QColor& color, double peakX, double peakY)
{
    int x_number = 20000;
    double curvature = 1.0 / (x_number * 1000);
    int numPoints = 20000;

    QVector<double> xData, yData;

    for (int i = 0; i < numPoints; ++i)
    {
        double x = i;
        double distance = x - peakX;
        double y = peakY * exp(-curvature * distance * distance);
        xData.append(x);
        yData.append(y);
    }

    customPlot->addGraph();
    customPlot->graph(index)->setData(xData, yData);
    customPlot->graph(index)->setPen(QPen(color));
    // customPlot->graph(index)->setBrush(QBrush(color));
    // 设置填充颜色为半透明色
    QColor translucentColor = color;
    translucentColor.setAlpha(128); // 设置透明度为 128 (0-255)
    customPlot->graph(index)->setBrush(QBrush(translucentColor));
}

void LoudspeakerFrequencyResponse::handleButtonReleased(int index, const QPointF& pos)
{
    // Get the peakX and peakY values from the button position
    double peakX = pos.x();
    double peakY = pos.y();

    int buttonColor[3];
    if (index == 0) {
        buttonColor[0] = 236;
        buttonColor[1] = 26;
        buttonColor[2] = 26;
    } else if (index == 1) {
        buttonColor[0] = 242;
        buttonColor[1] = 130;
        buttonColor[2] = 27;
    } else if (index == 2) {
        buttonColor[0] = 190;
        buttonColor[1] = 193;
        buttonColor[2] = 17;
    } else if (index == 3) {
        buttonColor[0] = 133;
        buttonColor[1] = 205;
        buttonColor[2] = 16;
    } else if (index == 4) {
        buttonColor[0] = 31;
        buttonColor[1] = 214;
        buttonColor[2] = 126;
    } else if (index == 5) {
        buttonColor[0] = 42;
        buttonColor[1] = 168;
        buttonColor[2] = 222;
    }

    // Draw the curve with the updated peakX and peakY values
    drawCurve(customPlot, index, QColor(buttonColor[0], buttonColor[1], buttonColor[2]), peakX, peakY);
    moveButtonView->setButtonPos(index, QPoint(peakX, peakY));

    // Update the plot
    customPlot->replot();

    if (speakerIndex != -1)
    {
        speakerButtons[speakerIndex].peakPoints[index] = std::make_pair(peakX, peakY);
        setLineEdit(index, point_x_line_edits[index], point_y_line_edits[index]);
    }
}

void LoudspeakerFrequencyResponse::setLineEdit(int index, QLineEdit* x_lineEdit, QLineEdit* y_lineEdit)
{
    std::pair<double, double>& peakPoint = speakerButtons[speakerIndex].peakPoints[index];
    x_lineEdit->setText(QString::number(peakPoint.first));
    y_lineEdit->setText(QString::number(peakPoint.second));
}

