#-------------------------------------------------
#
# Project created by QtCreator 2018-07-03T19:42:00
#
#-------------------------------------------------

QT       -= gui

TARGET = FirstLib
TEMPLATE = lib

DEFINES += FIRSTLIB_LIBRARY

SOURCES += firstlib.cpp

HEADERS += firstlib.h\
        firstlib_global.h \
    ../ConsoleProgram/libinfo.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
