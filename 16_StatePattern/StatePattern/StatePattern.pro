TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        concretestate.cpp \
        main.cpp \
        state.cpp \
        work.cpp

HEADERS += \
    concretestate.h \
    state.h \
    work.h
