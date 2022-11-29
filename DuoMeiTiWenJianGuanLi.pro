
UI_DIR=./
QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
SOURCES += \
        main.cpp \
    managePage.cpp \
    loginPage.cpp \
    mediaFliter.cpp \
    mediaFile.cpp

HEADERS += \
    managePage.h \
    mediaFile.h \
    mediaFliter.h \
    loginPage.h

FORMS += \
    managePage.ui \
    loginPage.ui

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    assets.qrc
