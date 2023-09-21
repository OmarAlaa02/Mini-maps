QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addcitypage.cpp \
    addedgepage.cpp \
    addgraphpage.cpp \
    deletegraphpage.cpp \
    displaygraphpage.cpp \
    editgraphpage.cpp \
    graph.cpp \
    main.cpp \
    mainwindow.cpp \
    removecitypage.cpp \
    removeedgepage.cpp \
    shortestpath.cpp

HEADERS += \
    addcitypage.h \
    addedgepage.h \
    addgraphpage.h \
    deletegraphpage.h \
    displaygraphpage.h \
    editgraphpage.h \
    graph.h \
    mainwindow.h \
    removecitypage.h \
    removeedgepage.h \
    shortestpath.h

FORMS += \
    addcitypage.ui \
    addedgepage.ui \
    addgraphpage.ui \
    deletegraphpage.ui \
    displaygraphpage.ui \
    editgraphpage.ui \
    mainwindow.ui \
    removecitypage.ui \
    removeedgepage.ui \
    shortestpath.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
