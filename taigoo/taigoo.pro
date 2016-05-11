#-------------------------------------------------
#
# Project created by QtCreator 2016-04-30T22:20:24
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = taigoo
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    menu.cpp \
    music1.cpp \
    requirement.cpp \
    drum.cpp

HEADERS  += mainwindow.h \
    menu.h \
    music1.h \
    requirement.h \
    drum.h

FORMS    += mainwindow.ui \
    menu.ui \
    music1.ui \
    requirement.ui

RESOURCES += \
    resource.qrc
