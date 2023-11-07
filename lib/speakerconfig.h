
#ifndef SPEAKERCONFIG_H
#define SPEAKERCONFIG_H
#include "WanosAutoTuning_global.h"
#include <string>
#include <vector>
class BiquadFilter;
using namespace std;

class WANOSAUTOTUNING_EXPORT SpeakerConfig
{
public:
    SpeakerConfig();
    ~SpeakerConfig();

    //"通道测量"页面，每个属性的设置，共6个属性
    void setName(const string& name);
    string getName();
    //距离
    void setDistance(float distance);
    float getDistance();
   //水平角
    void setAzimuth(float azimuth);
    float getAzimuth();
    //俯仰角
    void setElevation(float elevation);
    float getElevation();
     //姿态水平角
    void setYaw(float yaw);
    float getYaw();
    //姿态俯仰角
    void setPitch(float pitch);
    float getPitch();
    //以后再用
    void setRoll(float roll);
    float getRoll();

    //"响度增益"页面，该扬声器的推子（Gain）
    void setGainDB(float gainDB);
    float getGainDB();

    //"响度增益"页面，该扬声器的电平表（Loudness）
    void setLoudnessDB(float loudnessDB);
    float getLoudnessDB();

    //"扬声器频响"页面，添加/删除该扬声器的一个PEQ球
    void addPeqFilter(int index);
    void deletePeqFilter(int index);
    BiquadFilter* getPeqFilter(int index);

    //"扬声器频响"页面，获取该扬声器的所有PEQ球
    std::vector<BiquadFilter*> getPeqFilters();

    //计算该扬声器的当前频率特性，得出"频率点---幅度"的关系式
    void calculateTotalFreqResponse();

    //"扬声器频响"页面，获取该扬声器的"频率点---幅度"的关系，画曲线用
    float getTotalFreqAmplitude(float freq);

    //"分频配置"页面，添加一整行分频设置
//    void addFreqDivOption(int index);
//    void deleteFreqDivOption(int index);
//    FreqDivOption* getFreqDivOption(int index);
    //库外不要调用
    void setMySelfIndex(int index);
private:
   // void setJsonData(const QString& key, const QString & value);
private:
    std::string mName;
    float mDistance;
    float mAzimuth;
    float mElevation;
    float mYaw;
    float mPitch;
    float mRoll;
    float mGainDB;
    float mLoudnessDB;

    std::vector<BiquadFilter*> mPeqFilters;
    int mIndex; //标记自己是数组中第几个元素,通知android更新数据用
//    vector<FreqDivOption*> freqDivOptions;
};

#endif // SPEAKERCONFIG_H
