cmake_minimum_required(VERSION 3.10)

project(YourProjectName)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 COMPONENTS Gui Charts PrintSupport Sql Network REQUIRED)
# add_library(wanosFilterManager SHARED IMPORTED)
# set_target_properties(wanosFilterManager PROPERTIES IMPORTED_LOCATION ${CMAKE_CURRENT_SOURCE_DIR}/lib/libwanosFilterManager.dylib)
# add_library(libWanosAutoTuning SHARED IMPORTED)
# set_target_properties(libWanosAutoTuning PROPERTIES IMPORTED_LOCATION ${CMAKE_CURRENT_SOURCE_DIR}/lib/libWanosAutoTuning.1.dylib)

include_directories(
    ...
    widgets
    lib
)

link_directories(lib)

add_executable(YourProjectName
    main.cpp
    mainwindow.h
    mainwindow.cpp
    DatabaseManager.h
    DatabaseManager.cpp
    loginpage.h
    loginpage.cpp
    personalpage.h
    personalpage.cpp
    inputdialog.h
    inputdialog.cpp
    measurementpage.h
    measurementpage.cpp
    GlobalHelper.h
    GlobalHelper.cpp
    RenameDialog.h
    RenameDialog.cpp

    widgets/ChannelMeasurement.cpp
    widgets/ChannelMeasurement.h
    widgets/ChannelRouting.cpp
    widgets/ChannelRouting.h
    widgets/LoudnessGain.cpp
    widgets/LoudnessGain.h
    widgets/LoudnessGainSingleWidget.cpp
    widgets/LoudnessGainSingleWidget.h
    widgets/LoudspeakerFrequencyResponse.cpp
    widgets/LoudspeakerFrequencyResponse.h
    widgets/movebuttonview.cpp
    widgets/movebuttonview.h
    widgets/qcustomplot.cpp
    widgets/qcustomplot.h

    widgets/FrequencyDivisionConfiguration.cpp
    widgets/FrequencyDivisionConfiguration.h
    widgets/FrequencyResponseOfSoundField.cpp
    widgets/FrequencyResponseOfSoundField.h
    widgets/progress_frame.cpp
    widgets/progress_frame.h
    
    widgets/AutomaticSoundFieldEqualization.cpp
    widgets/AutomaticSoundFieldEqualization.h
    widgets/ManualTuning.cpp
    widgets/ManualTuning.h

    lib/speakerconfig.h
    lib/tuningmode.h
    lib/tuningpoint.h
    lib/WanosAutoTuning.h
    lib/WanosAutoTuning_global.h

    icons.qrc
)

target_link_libraries(YourProjectName Qt6::Gui Qt6::Charts Qt6::PrintSupport Qt6::Sql Qt6::Network libWanosAutoTuning.dylib libwanosFilterManager.dylib) 
# target_link_libraries(YourProjectName Qt5::Widgets Qt5::Charts Qt5::PrintSupport Qt5::Sql Qt5::Network wanosFilterManager libWanosAutoTuning)
