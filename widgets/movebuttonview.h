#ifndef MOVEBUTTONVIEW_H
#define MOVEBUTTONVIEW_H

#include <QFrame>
#include <QPushButton>
#include <QMouseEvent>

class MoveButtonView : public QFrame
{
    Q_OBJECT
public:
    explicit MoveButtonView(QWidget* parent = nullptr);
    void setButtonPos(int index, const QPoint& point);

private slots:
    void internalButtonPressed();

signals:
    void externalButtonReleased(int index, const QPoint& position);

protected:
    void createButtons(int buttonNum);

    void mouseMoveEvent(QMouseEvent* event) override;

    QPoint mapCoordinates(const QPoint& point);
    QPoint reverseMapCoordinates(const QPoint& point);


private:
    QVector<QPushButton*> buttons;
    bool dragging;
    QString dragIndex;
};

#endif // MOVEBUTTONVIEW_H
