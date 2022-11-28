
UI_DIR=./
QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
SOURCES += \
        main.cpp \
    DuoMeiTiWenJianBuJian.cpp \
    KouLingYanZheng.cpp \
    DuoMeiTiWenJianShaiXuan.cpp \
    DuoMeiTiWenJian.cpp

HEADERS += \
    DuoMeiTiWenJianBuJian.h \
    DuoMeiTiWenJian.h \
    DuoMeiTiWenJianShaiXuan.h \
    KouLingYanZheng.h

FORMS += \
    DuoMeiTiWenJianBuJian.ui \
    KouLingYanZheng.ui

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    assets.qrc
