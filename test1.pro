QT += core
QT -= gui

TARGET = test1
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += \
    finalproject/airplane.cpp \
    finalproject/date.cpp \
    finalproject/flight.cpp \
    finalproject/host.cpp \
    finalproject/human.cpp \
    finalproject/passenger.cpp \
    finalproject/pilot.cpp \
    finalproject/project.cpp \
    finalproject/ticket.cpp \
    finalproject/time.cpp

HEADERS += \
    finalproject/airplane.h \
    finalproject/date.h \
    finalproject/flight.h \
    finalproject/host.h \
    finalproject/human.h \
    finalproject/passenger.h \
    finalproject/pilot.h \
    finalproject/ticket.h \
    finalproject/time.h

