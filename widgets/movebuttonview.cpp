#include <QPushButton>
#include <QBrush>
#include <QColor>
#include <QMouseEvent>
#include <QPainter>
#include <QPen>
#include <QFont>
#include <QDebug>

#include "movebuttonview.h"

MoveButtonView::MoveButtonView(QWidget* parent) : QFrame(parent), dragging(false), dragIndex("-1")
{
    setFixedSize(parent->width() - 36, parent->height() - 36);
    setStyleSheet("background-color: transparent;");
    move(18, 18);
    createButtons(6);
}

void MoveButtonView::createButtons(int buttonNum)
{
    for (int index = 0; index < buttonNum; ++index) 
    {
        int buttonPos[2] = {width() / (buttonNum + 1) * (index + 1), height() / 2};
        QPushButton* button = new QPushButton(this);
        button->setText(QString::number(index));
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
        button->setFixedSize(18, 18);
        QString styleSheet = QString("QPushButton { background-color: rgb(%1, %2, %3); "
                             "border-radius: 9px; border: 2px solid #FFFFFF; color: #ffffff}").arg(buttonColor[0]).arg(buttonColor[1]).arg(buttonColor[2]);
        button->setStyleSheet(styleSheet);
        button->setFocusPolicy(Qt::NoFocus);
        button->move(buttonPos[0], buttonPos[1]- button->height());

        connect(button, &QPushButton::pressed, this, &MoveButtonView::internalButtonPressed);

        buttons.push_back(button);
    }
}

void MoveButtonView::setButtonPos(int index, const QPoint& point)
{
    if (index >= 0 && index < buttons.size()) {
        QPushButton* button = buttons[index];
        QPoint buttonPos = reverseMapCoordinates(point);
        buttonPos.setY(buttonPos.y() - button->height());
        button->move(buttonPos.x(), buttonPos.y());
        
        qDebug() << " setButtonPos: index: " << index << ": " << buttonPos;
        qDebug() << " Current button position: " << button->pos();
        qDebug() << " buttons.size(): " << buttons.size();
        qDebug() << " width()和height(): " << width() << ", " << height();
    }
}

void MoveButtonView::internalButtonPressed()
{
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    if (button) {
        dragging = true;
        dragIndex = button->text();
        button->setMouseTracking(true);

    }
}

void MoveButtonView::mouseMoveEvent(QMouseEvent* event)
{

    if (dragging) {

        for (QPushButton* button : buttons) {
            if (button->text() == dragIndex) {
                QPoint currentPos = {event->pos() - QPoint(button->width() / 2, button->height() / 2)}; 
                QPoint buttonPos = currentPos;
                buttonPos.setY(buttonPos.y() - button->height());
                button->move(buttonPos);

                QPoint mappedPos = mapCoordinates(currentPos); 

                emit externalButtonReleased(dragIndex.toInt(), mappedPos);
                break;
            }
        }
    }

    QFrame::mouseMoveEvent(event);
}

QPoint MoveButtonView::mapCoordinates(const QPoint& point)
{
    int mappedX = (point.x() * 20000) / width();
    int mappedY = (30 - (point.y() * 30) / (height() / 2));
    return QPoint(mappedX, mappedY);
}

QPoint MoveButtonView::reverseMapCoordinates(const QPoint& point)
{
    int x = (point.x() * width()) / 20000;
    int y = ((30 - point.y()) * (height() / 2)) / 30;
    return QPoint(x, y);
}
