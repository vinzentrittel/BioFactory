TEMPLATE = app
TARGET = OpenGLTest

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES = main.cpp

unix:LIBS = -lGLEW -lGL
