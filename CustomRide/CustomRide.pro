QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets network

CONFIG += c++17 sdk_no_version_check

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += /usr/bin/curl
LIBS += -lcurl

SOURCES += \
    boxwindow.cpp \
    car.cpp \
    httprequest.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    boxwindow.h \
    car.h \
    httprequest.h \
    mainwindow.h

FORMS += \
    boxwindow.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
