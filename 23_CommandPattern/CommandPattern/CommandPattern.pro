TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        barbecuer.cpp \
        concretecommand.cpp \
        main.cpp \
        waiter.cpp

HEADERS += \
    AbstractCommand.h \
    barbecuer.h \
    concretecommand.h \
    waiter.h
