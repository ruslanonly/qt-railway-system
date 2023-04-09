
#include "mainwindow.h"

#include <QApplication>

#include "database/databaseManager.h"
#include "database/databaseConfiguration.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    DatabaseConfiguration dbConfig("QPSQL", "localhost", 5436, "railway", "rw_user", "rw_pwd");
    DatabaseManager dbManager(dbConfig);

    MainWindow mainWindow(&dbManager);
    mainWindow.show();
    return a.exec();
}
