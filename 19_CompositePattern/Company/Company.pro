TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        company.cpp \
        concretecompany.cpp \
        concretedepartment.cpp \
        main.cpp

HEADERS += \
    company.h \
    concretecompany.h \
    concretedepartment.h
