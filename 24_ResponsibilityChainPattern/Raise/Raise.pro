TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        concretemanager.cpp \
        main.cpp \
        request.cpp

HEADERS += \
    Manager.h \
    concretemanager.h \
    request.h
