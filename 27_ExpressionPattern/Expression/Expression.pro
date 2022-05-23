TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        expression.cpp \
        main.cpp \
        terminalexpression.cpp

HEADERS += \
    PlayContext.h \
    expression.h \
    terminalexpression.h
