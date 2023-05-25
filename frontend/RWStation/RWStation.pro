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
    modals/addpassengermodal.cpp \
    modals/addroutemodal.cpp \
    modals/addschedulemodal.cpp \
    modals/addscheduleviewmodal.cpp \
    modals/addstationmodal.cpp \
    modals/addticketmodal.cpp \
    modals/addtrainmodal.cpp \
    modals/bookticketmodal.cpp \
    modals/getpassengeradditionalmodal.cpp \
    modals/getschedulerevenuemodal.cpp \
    modals/getscheduleticketsamount.cpp \
    modals/scheduleviewmodal.cpp \
    modals/updatepassengermodal.cpp \
    modals/updateroutemodal.cpp \
    modals/updateschedulemodal.cpp \
    modals/updatescheduleviewmodal.cpp \
    modals/updatestationmodal.cpp \
    modals/updateticketmodal.cpp \
    modals/updatetrainmodal.cpp \
    utils.cpp

HEADERS += \
    database/databaseConfiguration.h \
    database/databaseManager.h \
    database/querymodel.h \
    dialogs/logindialog.h \
    mainwindow.h \
    modals/addpassengermodal.h \
    modals/addroutemodal.h \
    modals/addschedulemodal.h \
    modals/addscheduleviewmodal.h \
    modals/addstationmodal.h \
    modals/addticketmodal.h \
    modals/addtrainmodal.h \
    modals/bookticketmodal.h \
    modals/getpassengeradditionalmodal.h \
    modals/getschedulerevenuemodal.h \
    modals/getscheduleticketsamount.h \
    modals/scheduleviewmodal.h \
    modals/updatepassengermodal.h \
    modals/updateroutemodal.h \
    modals/updateschedulemodal.h \
    modals/updatescheduleviewmodal.h \
    modals/updatestationmodal.h \
    modals/updateticketmodal.h \
    modals/updatetrainmodal.h \
    utils.h

FORMS += \
    dialogs/logindialog.ui \
    mainwindow.ui \
    modals/addpassengermodal.ui \
    modals/addroutemodal.ui \
    modals/addschedulemodal.ui \
    modals/addscheduleviewmodal.ui \
    modals/addstationmodal.ui \
    modals/addticketmodal.ui \
    modals/addtrainmodal.ui \
    modals/bookticketmodal.ui \
    modals/getpassengeradditionalmodal.ui \
    modals/getschedulerevenuemodal.ui \
    modals/getscheduleticketsamount.ui \
    modals/scheduleviewmodal.ui \
    modals/updatepassengermodal.ui \
    modals/updateroutemodal.ui \
    modals/updateschedulemodal.ui \
    modals/updatescheduleviewmodal.ui \
    modals/updatestationmodal.ui \
    modals/updateticketmodal.ui \
    modals/updatetrainmodal.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    images/refresh.png
