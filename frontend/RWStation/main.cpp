
#include "mainwindow.h"

#include <QApplication>

#include "database/databaseManager.h"
#include "database/databaseConfiguration.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    DatabaseManager databaseManager;

    MainWindow w(&databaseManager);
    w.show();
    return a.exec();
}
