#-------------------------------------------------
#
# Project created by QtCreator 2016-08-12T09:38:48
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = enCode
TEMPLATE = app
#include ("./qrencode/qrencode.pri")
CONFIG += c++11
SOURCES += main.cpp\
        mainwindow.cpp \
    tcQrencode.cpp \
    qrencode/bitstream.c \
    qrencode/mask.c \
    qrencode/mmask.c \
    qrencode/mqrspec.c \
    qrencode/qrencode.c \
    qrencode/qrinput.c \
    qrencode/qrspec.c \
    qrencode/rscode.c \
    qrencode/split.c

HEADERS  += mainwindow.h \
    tcQrencode.h \
    qrencode/bitstream.h \
    qrencode/mask.h \
    qrencode/mmask.h \
    qrencode/mqrspec.h \
    qrencode/qrencode.h \
    qrencode/qrencode_inner.h \
    qrencode/qrinput.h \
    qrencode/qrspec.h \
    qrencode/rscode.h \
    qrencode/split.h

FORMS    += mainwindow.ui
