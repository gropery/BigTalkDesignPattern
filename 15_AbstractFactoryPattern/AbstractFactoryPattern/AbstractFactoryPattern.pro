TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        concretedepartment.cpp \
        concretefactory.cpp \
        concreteuser.cpp \
        department.cpp \
        idepartment.cpp \
        ifactory.cpp \
        iuser.cpp \
        main.cpp \
        user.cpp

HEADERS += \
    concretedepartment.h \
    concretefactory.h \
    concreteuser.h \
    department.h \
    idepartment.h \
    ifactory.h \
    iuser.h \
    user.h
