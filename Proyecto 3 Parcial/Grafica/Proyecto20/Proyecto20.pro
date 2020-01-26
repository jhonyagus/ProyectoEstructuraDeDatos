QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Arbol.cpp \
    IngresoBloqueTeclas.cpp \
    ManejoArchivos.cpp \
    OperacionArbol.cpp \
    Palabra.cpp \
    TransformacionString.cpp \
    agregar.cpp \
    correcto.cpp \
    main.cpp \
    mainwindow.cpp \
    tie.cpp \
    tsi.cpp

HEADERS += \
    Arbol.h \
    IngresoBloqueTeclas.h \
    ManejoArchivos.h \
    OperacionArbol.h \
    Palabra.h \
    TransformacionString.h \
    agregar.h \
    correcto.h \
    mainwindow.h \
    tie.h \
    tsi.h

FORMS += \
    agregar.ui \
    correcto.ui \
    mainwindow.ui \
    tie.ui \
    tsi.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Dic.txt
