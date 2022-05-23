TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        builder.cpp \
        concretebuilder.cpp \
        director.cpp \
        main.cpp \
        product.cpp

HEADERS += \
    builder.h \
    concretebuilder.h \
    director.h \
    product.h
