
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "database/querymodel.h"

#include "database/databaseManager.h"
#include "modals/addstationmodal.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(DatabaseManager* dbManager, QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void showWindow();

private slots:
    void on_ticketPageButton_clicked();

    void on_trainPageButton_clicked();

    void on_passengerPageButton_clicked();

    void on_routePageButton_clicked();

    void on_stationPageButton_clicked();

    void on_backPassengerButton_clicked();

    void on_backRouteButton_clicked();

    void on_backStationButton_clicked();

    void on_backTicketButton_clicked();

    void on_backTrainButton_clicked();

    void on_refreshPassengerButton_clicked();

    void on_refreshRouteButton_clicked();

    void on_refreshStationButton_clicked();

    void on_refreshTicketButton_clicked();

    void on_refreshTrainButton_clicked();

    void on_addStationButton_clicked();

private:
    void loadStationTable();
    void loadRouteTable();
    void loadTrainTable();
    void loadTicketTable();
    void loadPassengerTable();

    AddStationModal* addStationModal;

    DatabaseManager* dbManager;
    Ui::MainWindow *ui;
    QueryModel* queryModel;
};

#endif // MAINWINDOW_H
