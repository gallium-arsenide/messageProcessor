TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Processor.cpp \
        main.cpp

HEADERS += \
    Circle.h \
    Message.h \
    ProcessableMessage.h \
    Processor.h \
    Square.h
