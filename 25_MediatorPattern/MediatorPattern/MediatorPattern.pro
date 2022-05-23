TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        concretecolleague.cpp \
        concretemediator.cpp \
        main.cpp

HEADERS += \
    Colleague.h \
    Mediator.h \
    concretecolleague.h \
    concretemediator.h
