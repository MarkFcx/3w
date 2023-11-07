
#ifndef TUNINGPOINT_H
#define TUNINGPOINT_H
using namespace std;
#include "WanosAutoTuning_global.h"
class WANOSAUTOTUNING_EXPORT TuningPoint
{
public:
    TuningPoint();
    ~TuningPoint();

    //"测量点"界面，设置每个点位的属性，默认4个点位
    void setDistance(float distance);
    float getDistance();
    void setAzimuth(float azimuth);
    float getAzimuth();
    void setElevation(float elevation);
    float getElevation();

    //"声场频响"页面，每个点位启动/停止调音
   // void startAutoTuning();
  //  void stopAutoTuning();

    //"声场频响"页面，显示某个点位的每个音箱进度
  /*  void setProgressOfOneSpeaker(float progress);
    float getProgressOfOneSpeaker();

    //"声场频响"页面，显示某个点位整体进度
    void setProgressTotal(float progress);
    float getProgressTotal();
*/
    //库外不要调用
    void setMySelfIndex(int index);
/*signals:
    void sigReceiveSweepFile();
    void sigStopReceiveSweepFile();*/
private:
    float mDistance;
    float mAzimuth;
    float mElevation;
    int mIndex; //标记自己是数组中第几个元素,通知android更新数据用
};

#endif // TUNINGPOINT_H
