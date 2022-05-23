TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        aggregate.cpp \
        concreteaggregate.cpp \
        concreteiterator.cpp \
        concreteiteratordesc.cpp \
        iterator.cpp \
        main.cpp

HEADERS += \
    aggregate.h \
    concreteaggregate.h \
    concreteiterator.h \
    concreteiteratordesc.h \
    iterator.h
