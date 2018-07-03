QT += core
QT -= gui

TARGET = ConsoleProgram
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    libopener.cpp

HEADERS += \
    libinfo.h \
    libopener.h

LIBS += -ldl
