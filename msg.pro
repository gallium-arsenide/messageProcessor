TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        ProcessorImpl.cpp \
        main.cpp

HEADERS += \
    Circle.h \
    Message.h \
    ProcessableMessage.h \
    Processor.h \
    ProcessorImpl.h \
    Square.h
