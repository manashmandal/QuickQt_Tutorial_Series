#-------------------------------------------------
#
# Project created by QtCreator 2016-04-11T21:31:44
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CompositeListWidget
TEMPLATE = app


SOURCES += main.cpp\
        compositewidget.cpp \
    thelistitem.cpp

HEADERS  += compositewidget.h \
    thelistitem.h

FORMS    += compositewidget.ui \
    thelistitem.ui
