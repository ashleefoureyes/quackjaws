#-------------------------------------------------
#
# Project created by QtCreator 2019-02-20T16:42:48
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = COMP3004
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    staffhomepage.cpp \
    animal.cpp \
    addanimal.cpp \
    viewanimals.cpp \
    client.cpp \
    addclient.cpp \
    viewclients.cpp \
    clienthomepage.cpp \
    animalstorage.cpp \
    cat.cpp \
    dog.cpp \
    bird.cpp \
    rabbit.cpp \
    lizard.cpp \
    databasestorage.cpp \
    clientstorage.cpp

HEADERS += \
        mainwindow.h \
    staffhomepage.h \
    animal.h \
    addanimal.h \
    viewanimals.h \
    client.h \
    addclient.h \
    viewclients.h \
    clienthomepage.h \
    animalstorage.h \
    cat.h \
    dog.h \
    bird.h \
    rabbit.h \
    lizard.h \
    databasestorage.h \
    clientstorage.h

FORMS += \
        mainwindow.ui \
    staffhomepage.ui \
    addanimal.ui \
    viewanimals.ui \
    addclient.ui \
    viewclients.ui \
    clienthomepage.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
