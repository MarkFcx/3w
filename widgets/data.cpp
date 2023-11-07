#include "data.h"

LoudspeakerData::LoudspeakerData(const QString& name, float distance, float pitch, float yaw, float attitudePitch, float attitudeYaw)
    : name(name), distance(distance), pitch(pitch), yaw(yaw), attitudePitch(attitudePitch), attitudeYaw(attitudeYaw)
{
}

