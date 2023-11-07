#ifndef LOUDSPEAKERFREQUENCYRESPONSE_H
#define LOUDSPEAKERFREQUENCYRESPONSE_H

#include <QWidget>
#include <QVBoxLayout>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QBrush>
#include <QColor>
#include <QPen>
#include <QVector>
#include <QGraphicsEllipseItem>
#include <QGraphicsProxyWidget>
#include <QGraphicsTextItem>
#include <QFont>
#include <QChartView>
#include <qcustomplot.h>

class MoveButtonView;
namespace Ui {
class LoudspeakerFrequencyResponse;
}

class LoudspeakerFrequencyResponse : public QWidget
{
    Q_OBJECT

public:
    explicit LoudspeakerFrequencyResponse(QWidget *parent = nullptr);
    ~LoudspeakerFrequencyResponse();
    void enter();

private:
    struct SpeakerButtonData
        {
            QPushButton* button;
            bool bypass;
            std::vector<std::pair<double, double>> peakPoints;
        };

private:
    Ui::LoudspeakerFrequencyResponse *ui;
    QCustomPlot* customPlot;
    MoveButtonView* moveButtonView;
    std::vector<SpeakerButtonData> speakerButtons; 
    int speakerIndex; 
    QButtonGroup* buttonGroup;
    std::vector<QLineEdit*> point_x_line_edits;  // 存储 point_x_index_line_edit 的容器
    std::vector<QLineEdit*> point_y_line_edits;  // 存储 point_y_index_line_edit 的容器


    void initializeGraph();
    void addLineEditObjects();
    void drawCurve(QCustomPlot* customPlot, int index, const QColor& color, double peakX, double peakY);
    void createSpeakerButton(int index);
    void createSpeakerButtons(int count);
    void setLineEdit(int index, QLineEdit* x_lineEdit, QLineEdit* y_lineEdit);
    
private slots:
    void handleButtonReleased(int index, const QPointF& pos);
    void handleSpeakerButtonChecked(bool checked);
    void handleBypassButtonChecked();
    void handleTestButtonClicked();

};

#endif // LOUDSPEAKERFREQUENCYRESPONSE_H
