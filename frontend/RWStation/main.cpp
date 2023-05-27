
#include "mainwindow.h"
#include "dialogs/logindialog.h"
#include "ui_logindialog.h"

#include <QApplication>
#include <QFile>
#include <QObject>

#include "database/databaseManager.h"
#include "database/databaseConfiguration.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyleSheet(
    "QLabel { font: 500 9pt Arial; }"
    "QLineEdit, QDateTimeEdit, QComboBox, QSpinBox {border: 1.5px solid #DCDCDD; padding: 5px; border-radius: 5px; font-weight: 500; font-size: 9pt;}"
    "QLineEdit:hover, QDateTimeEdit:hover, QComboBox:hover, QSpinBox:hover {border-color: #C5C3C6}"
    "QLineEdit:focus, QDateTimeEdit:focus, QComboBox:focus, QSpinBox:focus {border-color: rgba(4, 102, 200, 1);}"
    "QPushButton {background-color: rgba(4, 102, 200, 1); padding: 5px 10px; color: #fff; font-weight: 700; font-size: 9pt; border-radius: 3px;}"
    "QPushButton:hover {background-color: rgba(4, 102, 200, 0.9);}"
    );

    DatabaseConfiguration dbConfig("QPSQL", "localhost", 5436, "railway", "rw_user", "rw_pwd");
    DatabaseManager dbManager(dbConfig);

    LoginDialog* loginDialog = new LoginDialog(&dbManager);
    loginDialog->show();

    MainWindow* mainWindow = new MainWindow(&dbManager);

    QObject::connect(
        loginDialog, &LoginDialog::loginedSignal,
        mainWindow, &MainWindow::showWindow);

    QObject::connect(
        mainWindow, &MainWindow::logoutSignal,
        loginDialog, &LoginDialog::mainWindowLogoutSlot);
    return a.exec();
}
