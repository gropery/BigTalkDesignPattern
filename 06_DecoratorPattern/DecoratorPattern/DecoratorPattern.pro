TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        ConcreteDecorator.cpp \
        finery.cpp \
        main.cpp \
        person.cpp

HEADERS += \
    ConcreteDecorator.h \
    finery.h \
    person.h
