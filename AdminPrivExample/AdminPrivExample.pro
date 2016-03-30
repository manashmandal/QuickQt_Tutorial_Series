#-------------------------------------------------
#
# Project created by QtCreator 2016-03-30T21:02:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AdminPrivExample
TEMPLATE = app


SOURCES += main.cpp\
        adminpriv.cpp

HEADERS  += adminpriv.h

FORMS    += adminpriv.ui


#Commenting the resource file
#load the rc file
win32 {
    RC_FILE = AdminPriv.rc
}
