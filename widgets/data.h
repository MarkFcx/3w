#ifndef DATA_H
#define DATA_H

#include <QString>

struct LoudspeakerData
{
    QString name;
    double distance;
    double pitch;
    double yaw;
    double attitudePitch;
    double attitudeYaw;
    QList<int> columnCount;
    double volume;
    struct BallData
    {
        double x;
        double y;
        double q;
    };
    QList<BallData> balls;
    int crossoverRowCount;
    QList<QString> modeNames;
    double delay;
};


#endif // DATA_H
