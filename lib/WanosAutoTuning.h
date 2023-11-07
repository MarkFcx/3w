
#ifndef WanosAutoTuning_H
#define WanosAutoTuning_H
#include "WanosAutoTuning_global.h"
#include "speakerconfig.h"
#include "tuningpoint.h"
#include "tuningmode.h"
//#include "autoanalysis.h"
/*enum{
    SOUND_TEST,
    SOUND_SINE2S,
    SOUND_PINK,
    SOUND_SINE,
    SOUND_PULSE,
    SOUND_SWEEP
}SOUND_TYPE;
*/
using namespace std;
class WANOSAUTOTUNING_EXPORT WanosAutoTuning
{
public:
    WanosAutoTuning();
    //"新建项目"页面，声道布局选项
    void setSpeakerNum(int speakerNum);
    int getSpeakerNum();

    //"新建项目"页面，扬声器总数
    void setChannelLayoutID(int channelLayoutID);
    int getChannelLayoutID();

    //“响度增益”页面，总输出推子（Gain）
    void setTotalOutputGainDB(float gainDB);
    float getTotalOutputGainDB();

    //“响度增益”页面，总输入推子（Gain）
    void setTotalInputGainDB(float gainDB);
    float getTotalInputGainDB();

    //“响度增益”页面，总输入电平表（Loudness）
    void setTotalInputLoudness(float loudness);
    float getTotalInputLoudness();

    //"声场频响"点位校准完毕后，开始/停止分析
    void startAnalysis();
    void stopAnalysis();

    //"声场自动分析"页面，显示分析进度  等待算法实现
   // void setAnalysisProgress(float progress);
   // float getAnalysisProgress();

    //添加/删除一个扬声器配置，比如车里共有16个扬声器，那一共应该有16个SpeakerConfig
    void addSpeakerConfig(int index);
    void deleteSpeakerConfig(int index);
    SpeakerConfig* getSpeakerConfig(int index);

    //"通道路由"页面，添加/删除 一整行
    void addChannelOutputFlagsOfOneSpeaker(int speakerIndex, int channels);
    void deleteChannelOutputFlagsOfOneSpeaker(int speakerIndex);
    std::vector<int>& getChannelOutputFlagsOfOneSpeaker(int speakerIndex);

    //"通道路由"页面，增删改查 某个单元格
    void addChannelOutputFlagOfOneSpeaker(int speakerIndex, int channelIndex);
    void deleteChannelOutputFlagOfOneSpeaker(int speakerIndex, int channelIndex);
    void setChannelOutputFlagOfOneSpeaker(int speakerIndex, int channelIndex, int flag);
    int getChannelOutputFlagOfOneSpeaker(int speakerIndex, int channelIndex);

    //不管哪种模式，默认都是4个点位，这里先提供添加/删除点位的功能
    void addTuningPoint(int index);
    void deleteTuningPoint(int index);
    TuningPoint* getTuningPoint(int index);

    //"模式频响曲线"页面，添加/删除一个调音模式
    void addTuningMode(int index);
    void deleteTuningMode(int index);
    TuningMode* getTuningMode(int index);

    //所有的"Play"按钮和"测试"按钮，都使用这个播放功能，具体要播放什么声音，参考上面enum
    //播放"测试声源"对应的声音类型时，bypass有效；否则这个bypass无效，或者说可以随意设置
    int playSound(int soundType, int speakerID, int bypass);

    //读写本地配置文件，将这个类和配置文件互相转换
    int writeFile(char* outputFileName);
    int readFile(char* inputFileName);
private:
    void analyzeFIR();

  //  void closeSocket();


/*public slots:
    void onReceiveSweepFile();
    void onStopReceiveSweepFile();*/
private:
    int mSpeakerNum;
    int mChannelLayoutID;

    float mTotalOutputGainDB;
    float mTotalInputGainDB;
    float mTotalInputLoudness;

    float analysisProgress;

    std::vector<SpeakerConfig *> mSpeakerConfigs;
    std::vector<std::vector<int>> mChannelOutputFlags;
    std::vector<TuningPoint *> mTuningPoints;
    std::vector<TuningMode *> mTuningModes;
  //  AutoAnalysis *mAutoAnalysis = nullptr;
};


#endif // WanosAutoTuning_H
