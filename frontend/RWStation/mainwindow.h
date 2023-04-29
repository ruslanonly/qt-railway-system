
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableView>
#include <QSignalMapper>
#include "database/querymodel.h"

#include "database/databaseManager.h"

#include "modals/addstationmodal.h"
#include "modals/addroutemodal.h"

#include "modals/updatestationmodal.h"
#include "modals/updateroutemodal.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

enum TableViewVariant {
    station,
    route,
    train,
    ticket,
    passenger
};

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

    void on_stationsTableView_customContextMenuRequested(const QPoint &pos);
    void on_ticketsTableView_customContextMenuRequested(const QPoint &pos);
    void on_trainsTableView_customContextMenuRequested(const QPoint &pos);
    void on_passengersTableView_customContextMenuRequested(const QPoint &pos);
    void on_routesTableView_customContextMenuRequested(const QPoint &pos);
    void ModifyRequestedAction(int selectedID, TableViewVariant selectedTable);
    void DeleteRequestedAction(int selectedID, TableViewVariant selectedTable);

    void loadStationTable();
    void loadRouteTable();
    void loadTrainTable();
    void loadTicketTable();
    void loadPassengerTable();

    void on_addRouteButton_clicked();

private:
    void showCustomContextMenu(const QPoint &pos, QTableView *tableView, TableViewVariant tableVariant);

    AddStationModal* addStationModal;
    AddRouteModal* addRouteModal;
    UpdateStationModal* updateStationModal;
    UpdateRouteModal* updateRouteModal;

    DatabaseManager* dbManager;
    Ui::MainWindow *ui;
    QueryModel* queryModel;
};

#endif // MAINWINDOW_H
