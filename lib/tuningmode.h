
#ifndef TUNINGMODE_H
#define TUNINGMODE_H
using namespace std;
#include "WanosAutoTuning_global.h"
//#include "BiquadFilter.h"
#include "wanosFilterManager.h"
#include <string>
#include <vector>
class BiquadFilter;
class WANOSAUTOTUNING_EXPORT TuningMode
{
public:
    TuningMode();
    ~TuningMode();

    //"通道测量""通道路由"页面，扬声器名称
    void setName(const std::string& name);
    std::string getName();

    //"频响曲线"页面，给添加/删除某个扬声器的所有PEQ球
    void addPeqFiltersOfOneSpeaker(int speakerIndex, int peqBandNum);
    void deletePeqFiltersOfOneSpeaker(int speakerIndex);
    std::vector<BiquadFilter*>& getPeqFiltersOfOneSpeaker(int speakerIndex);

    //"频响曲线"页面，给某个扬声器添加/删除一个PEQ球
    void addPeqFilterOfOneSpeaker(int speakerIndex, int peqIndex);
    void deletePeqFilterOfOneSpeaker(int speakerIndex, int peqIndex);
    BiquadFilter* getPeqFilterOfOneSpeaker(int speakerIndex, int peqIndex);

    //"延时设置"界面，给某个扬声器设置延时
    void setDelayMsOfOneSpeaker(int speakerIndex, float delayMS);
    float getDelayMsOfOneSpeaker(int speakerIndex);

    //计算该模式下，某个扬声器的当前频率特性，得出"频率点---幅度"的关系式
    //void calculateFreqResponseOfOneSpeaker(int speakerIndex);

    //"频响曲线"页面，获取该模式下，某个扬声器的"频率点---幅度"的关系，画曲线用
    float getFreqAmplitudeOfOneSpeaker(int speakerIndex, float freq);  // 总线
    float getFreqAmplitudeOfOnePeq(int speakerIndex, int peqIndex,float freq);  // 单个线


    //库外不要调用
    void setMySelfIndex(int index);

private:
    std::string mName;
    std::vector<std::vector<BiquadFilter*>> mPeqFiltersOfAllSpeakers;
    std::vector<float> mDelaysMsOfAllSpeakers;
    wanosFilterManager::wanos_fm_params* mHandle;
    int mIndex; //标记自己是数组中第几个元素,通知android更新数据用
};

#endif // TUNINGMODE_H
