#-------------------------------------------------
#
# Project created by QtCreator 2016-04-12T20:54:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CompositeListWidgetExample
TEMPLATE = app


SOURCES += main.cpp\
        qmainwidget.cpp \
    thewidgetitem.cpp

HEADERS  += qmainwidget.h \
    thewidgetitem.h

FORMS    += qmainwidget.ui \
    thewidgetitem.ui
