QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    database/databaseConfiguration.cpp \
    database/databaseManager.cpp \
    database/querymodel.cpp \
    dialogs/logindialog.cpp \
    main.cpp \
    mainwindow.cpp \
    modals/addroutemodal.cpp \
    modals/addstationmodal.cpp \
    modals/updateroutemodal.cpp \
    modals/updatestationmodal.cpp

HEADERS += \
    database/databaseConfiguration.h \
    database/databaseManager.h \
    database/querymodel.h \
    dialogs/logindialog.h \
    mainwindow.h \
    modals/addroutemodal.h \
    modals/addstationmodal.h \
    modals/updateroutemodal.h \
    modals/updatestationmodal.h

FORMS += \
    dialogs/logindialog.ui \
    mainwindow.ui \
    modals/addroutemodal.ui \
    modals/addstationmodal.ui \
    modals/updateroutemodal.ui \
    modals/updatestationmodal.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    images/refresh.png
