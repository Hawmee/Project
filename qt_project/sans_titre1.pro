#-------------------------------------------------
#
# Project created by QtCreator 2022-10-17T15:50:38
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = sans_titre1
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
    chiffreaffaire.cpp \
    creerproduit.cpp \
        main.cpp \
        mainwindow.cpp \
    client.cpp \
    produit.cpp \
    commandes.cpp \
    facture.cpp \
    voirfacture.cpp

HEADERS += \
    chiffreaffaire.h \
    creerproduit.h \
        mainwindow.h \
    client.h \
    produit.h \
    commandes.h \
    facture.h \
    voirfacture.h

FORMS += \
    chiffreaffaire.ui \
    creerproduit.ui \
        mainwindow.ui \
    client.ui \
    produit.ui \
    commandes.ui \
    facture.ui \
    voirfacture.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc

DISTFILES += \
    img/771281.jpg
