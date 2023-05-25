#ifndef PERSONALPAGE_H
#define PERSONALPAGE_H

#include <QWidget>

class MeasurementPage;

namespace Ui {
class PersonalPage;
}

class PersonalPage : public QWidget
{
    Q_OBJECT

public:
    explicit PersonalPage(QWidget *parent = nullptr);
    ~PersonalPage();

private:
    Ui::PersonalPage *ui;

private slots:
    void on_button2_clicked();

private:
    MeasurementPage* measurementPage;
};

#endif // PERSONALPAGE_H
