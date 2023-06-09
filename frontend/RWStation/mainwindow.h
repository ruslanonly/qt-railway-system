
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

#include "modals/addtrainmodal.h"
#include "modals/updatetrainmodal.h"

#include "modals/addschedulemodal.h"
#include "modals/updateschedulemodal.h"

#include "modals/addpassengermodal.h"
#include "modals/updatepassengermodal.h"

#include "modals/addticketmodal.h"
#include "modals/updateticketmodal.h"

#include "modals/bookticketmodal.h"

#include "modals/getschedulerevenuemodal.h"
#include "modals/getscheduleticketsamount.h"

#include "modals/getpassengeradditionalmodal.h"

#include "modals/scheduleviewmodal.h"

#include "modals/getroutestartsincitymodal.h"

#include "modals/getcorrelatedqueriesmodal.h"
#include "modals/getrouteallquerymodal.h"

#include "modals/cursorupdatescheduletrainmodal.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

enum TableViewVariant {
    station,
    route,
    train,
    ticket,
    passenger,
    schedule
};

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(DatabaseManager* dbManager, QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void logoutSignal();

public slots:
    void showWindow();

private slots:
    void on_ticketPageButton_clicked();
    void on_trainPageButton_clicked();
    void on_passengerPageButton_clicked();
    void on_routePageButton_clicked();
    void on_stationPageButton_clicked();
    void on_schedulePageButton_clicked();

    void on_backPassengerButton_clicked();
    void on_backRouteButton_clicked();
    void on_backStationButton_clicked();
    void on_backTicketButton_clicked();
    void on_backTrainButton_clicked();
    void on_backScheduleButton_clicked();

    void on_refreshPassengerButton_clicked();
    void on_refreshRouteButton_clicked();
    void on_refreshStationButton_clicked();
    void on_refreshTicketButton_clicked();
    void on_refreshTrainButton_clicked();
    void on_refreshScheduleButton_clicked();

    void on_addStationButton_clicked();
    void on_addRouteButton_clicked();
    void on_addTrainButton_clicked();
    void on_addScheduleButton_clicked();

    void on_stationsTableView_customContextMenuRequested(const QPoint &pos);
    void on_ticketsTableView_customContextMenuRequested(const QPoint &pos);
    void on_trainsTableView_customContextMenuRequested(const QPoint &pos);
    void on_passengersTableView_customContextMenuRequested(const QPoint &pos);
    void on_routesTableView_customContextMenuRequested(const QPoint &pos);
    void on_scheduleTableView_customContextMenuRequested(const QPoint &pos);
    void ModifyRequestedAction(int selectedID, TableViewVariant selectedTable);
    void DeleteRequestedAction(int selectedID, TableViewVariant selectedTable);

    void loadStationTable();
    void loadRouteTable();
    void loadTrainTable();
    void loadTicketTable();
    void loadPassengerTable();
    void loadScheduleTable();

    void on_addPassengerButton_clicked();

    void on_addTicketButton_clicked();

    void on_logoutButton_clicked();

    void on_bookTicketButton_clicked();

    void on_getScheduleRevenueButton_clicked();

    void on_getScheduleTicketsAmount_clicked();

    void on_miscPageButton_clicked();

    void on_backMiscPageButton_clicked();

    void on_passengerAdditionalButton_clicked();

    void on_scheduleViewButton_clicked();

    void on_routeGetThatStartsInTownButton_clicked();

    void on_correlatedQueriesButton_clicked();

    void on_routeScheduleStatusButton_clicked();

    void on_replaceScheduleTrainCursorButton_clicked();

private:
    void showCustomContextMenu(const QPoint &pos, QTableView *tableView, TableViewVariant tableVariant);

    AddStationModal* addStationModal;
    AddRouteModal* addRouteModal;
    AddTrainModal* addTrainModal;
    AddScheduleModal* addScheduleModal;
    AddPassengerModal* addPassengerModal;
    AddTicketModal* addTicketModal;

    BookTicketModal* bookTicketModal;

    UpdateStationModal* updateStationModal;
    UpdateRouteModal* updateRouteModal;
    UpdateTrainModal* updateTrainModal;
    UpdateScheduleModal* updateScheduleModal;
    UpdatePassengerModal* updatePassengerModal;
    UpdateTicketModal* updateTicketModal;

    GetScheduleRevenueModal* getScheduleRevenueModal;
    GetScheduleTicketsAmount* getScheduleTicketsAmount;
    GetPassengerAdditionalModal* getPassengerAdditionalModal;
    GetRouteStartsInCityModal* getRouteStartsInCityModal;

    GetRouteAllQueryModal* getRouteAllQueryModal;

    GetCorrelatedQueriesModal* getCorrelatedQueriesModal;

    CursorUpdateScheduleTrainModal* cursorUpdateScheduleTrainModal;

    ScheduleViewModal* scheduleViewModal;

    DatabaseManager* dbManager;
    Ui::MainWindow *ui;
    QueryModel* queryModel;
};

#endif // MAINWINDOW_H
