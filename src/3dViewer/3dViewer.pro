QT       += core gui opengl
QT += core gui opengl openglwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    model_3d.c \
    point_3d.c \
    poligon.c \
    string_func.c \
    main.cpp \
    mainwindow.cpp \
    glviewer.cpp
HEADERS += \
    model_3d.h \
    point_3d.h \
    poligon.h \
    string_func.h \
    glviewer.h \
    mainwindow.h
FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
