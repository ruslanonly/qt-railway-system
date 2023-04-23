
#include "mainwindow.h"
#include "dialogs/logindialog.h"
#include "ui_logindialog.h"

#include <QApplication>
#include <QFile>

#include "database/databaseManager.h"
#include "database/databaseConfiguration.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyleSheet(
    "QLabel { font: 500 9pt Arial; }"
    "QLineEdit {border: 1.5px solid #DCDCDD; padding: 5px; border-radius: 5px; font-weight: 500; font-size: 9pt;}"
    "QLineEdit:hover {border-color: #C5C3C6}"
    "QLineEdit:focus {border-color: #0466C8;}"
    "QPushButton {background-color: rgba(4, 102, 200, 1); padding: 10px; color: #fff; font-weight: 700; font-size: 10pt; border-radius: 3px;}"
    "QPushButton:hover {background-color: rgba(4, 102, 200, 0.9);}"
    );

    DatabaseConfiguration dbConfig("QPSQL", "localhost", 5436, "railway", "rw_user", "rw_pwd");
    DatabaseManager dbManager(dbConfig);

    LoginDialog* loginDialog = new LoginDialog(&dbManager);
    loginDialog->show();

    MainWindow mainWindow(&dbManager);
    return a.exec();
}
