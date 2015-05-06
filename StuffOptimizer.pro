#-------------------------------------------------
#
# Project created by QtCreator 2015-05-06T19:11:59
#
#-------------------------------------------------

QT       += core gui

CONFIG += console c++11

OTHER_FILES += resources/items.json

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = StuffOptimizer
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h

FORMS    += widget.ui

RESOURCES += resources/icons.qrc
