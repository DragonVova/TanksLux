TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    field.cpp \
    bullet.cpp \
    usertank.cpp \
    enemytank.cpp \
    core.cpp

HEADERS += \
    field.h \
    helper.h \
    bullet.h \
    usertank.h \
    enemytank.h \
    core.h
