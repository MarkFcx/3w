#ifndef GLOBALHELPER_H
#define GLOBALHELPER_H

#include <QString>
#include <QtSql>

#include "widgets/data.h"

class GlobalHelper {
public:
    static GlobalHelper& getInstance();

    void setCurrentUsername(const QString& username);
    QString getCurrentUsername() const;
    int getCurrentUserID() const;
    int getProjectCount();

    void setCurrentProject(const QString& projectName);
    QString getCurrentProjectName() const;
    int getCurrentProjectID() const;
    void setSpeakerCount(const int count);
    void setSpeakerDescription(const QString &description);
    int getSpeakerCount() const;
    QString getSpeakerDescription() const;
    int getModeCount() const;

    // **************************************************************** 
    bool projectExists(const QString& projectName) const;

    void createLoudspeakers(const QString& projectName);
    void setLoudspeaker(const QString& loudspeakerName, double pitch, double yaw, double attitudePitch, double attitudeYaw);
    QVector<LoudspeakerData> getLoudspeakersByProject(const QString& projectName) const;

    bool getIsDevelopmentTesting() const;
    void setIsDevelopmentTesting(bool value);

private:
    bool isDevelopmentTesting = false;

    QString currentUsername;
    int currentUserID;
    int currentUserProjectCount;
    QString currentProjectName;
    int currentProjectID;
    int m_speakerCount = 0;
    QString m_speakerDescription = "7.1.2";
    int m_modeCount = 0;

    GlobalHelper();
    ~GlobalHelper();
    GlobalHelper(const GlobalHelper&) = delete;
    GlobalHelper& operator=(const GlobalHelper&) = delete;
};

#endif // GLOBALHELPER_H
