#-------------------------------------------------
#
# Project created by QtCreator 2020-10-03T11:46:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Shapes
TEMPLATE = app


SOURCES += main.cpp\
        shapes.cpp \
    abstractshape.cpp \
    shape1property.cpp \
    circle.cpp\
    canvas.cpp \
    square.cpp \
    shape2property.cpp \
    elipse.cpp \
    rectangle.cpp

HEADERS  += shapes.h \
    abstractshape.h \
    shape1property.h \
    circle.h\
    canvas.h \
    square.h \
    shape2property.h \
    elipse.h \
    rectangle.h

FORMS    += shapes.ui

OTHER_FILES += \
    Notes.txt
