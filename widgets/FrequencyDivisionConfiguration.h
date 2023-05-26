#ifndef FREQUENCYDIVISIONCONFIGURATION_H
#define FREQUENCYDIVISIONCONFIGURATION_H

#include <QWidget>

namespace Ui {
class FrequencyDivisionConfiguration;
}

class FrequencyDivisionConfiguration : public QWidget
{
    Q_OBJECT

public:
    explicit FrequencyDivisionConfiguration(QWidget *parent = nullptr);
    ~FrequencyDivisionConfiguration();

private:
    Ui::FrequencyDivisionConfiguration *ui;
};

#endif // FREQUENCYDIVISIONCONFIGURATION_H
