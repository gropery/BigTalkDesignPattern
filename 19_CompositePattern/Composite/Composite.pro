TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        component.cpp \
        composite.cpp \
        leaf.cpp \
        main.cpp

HEADERS += \
    component.h \
    composite.h \
    leaf.h
