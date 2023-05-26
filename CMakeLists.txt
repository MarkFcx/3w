cmake_minimum_required(VERSION 3.10)

project(YourProjectName)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Widgets Charts PrintSupport REQUIRED)

include_directories(
    ...
    widgets
)

add_executable(YourProjectName
    main.cpp
    mainwindow.h
    mainwindow.cpp
    personalpage.h
    personalpage.cpp
    measurementpage.h
    measurementpage.cpp

    widgets/ChannelMeasurement.cpp
    widgets/ChannelMeasurement.h
    widgets/ChannelRouting.cpp
    widgets/ChannelRouting.h
    widgets/LoudnessGain.cpp
    widgets/LoudnessGain.h
    widgets/LoudspeakerFrequencyResponse.cpp
    widgets/LoudspeakerFrequencyResponse.h
    widgets/qcustomplot.cpp
    widgets/qcustomplot.h

    widgets/FrequencyDivisionConfiguration.cpp
    widgets/FrequencyDivisionConfiguration.h
    widgets/FrequencyResponseOfSoundField.cpp
    widgets/FrequencyResponseOfSoundField.h
    widgets/AutomaticSoundFieldEqualization.cpp
    widgets/AutomaticSoundFieldEqualization.h
    widgets/ManualTuning.cpp
    widgets/ManualTuning.h
    
    icons.qrc
)

target_link_libraries(YourProjectName Qt5::Widgets Qt5::Charts Qt5::PrintSupport)
