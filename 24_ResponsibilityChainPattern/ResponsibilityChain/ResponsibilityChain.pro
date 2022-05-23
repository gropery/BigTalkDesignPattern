TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        concretehandler.cpp \
        main.cpp

HEADERS += \
    AbstractHandler.h \
    concretehandler.h
