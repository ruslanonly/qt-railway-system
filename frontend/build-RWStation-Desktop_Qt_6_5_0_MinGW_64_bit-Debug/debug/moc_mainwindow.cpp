/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../RWStation/mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "logoutSignal",
    "",
    "showWindow",
    "on_ticketPageButton_clicked",
    "on_trainPageButton_clicked",
    "on_passengerPageButton_clicked",
    "on_routePageButton_clicked",
    "on_stationPageButton_clicked",
    "on_schedulePageButton_clicked",
    "on_backPassengerButton_clicked",
    "on_backRouteButton_clicked",
    "on_backStationButton_clicked",
    "on_backTicketButton_clicked",
    "on_backTrainButton_clicked",
    "on_backScheduleButton_clicked",
    "on_refreshPassengerButton_clicked",
    "on_refreshRouteButton_clicked",
    "on_refreshStationButton_clicked",
    "on_refreshTicketButton_clicked",
    "on_refreshTrainButton_clicked",
    "on_refreshScheduleButton_clicked",
    "on_addStationButton_clicked",
    "on_addRouteButton_clicked",
    "on_addTrainButton_clicked",
    "on_addScheduleButton_clicked",
    "on_stationsTableView_customContextMenuRequested",
    "pos",
    "on_ticketsTableView_customContextMenuRequested",
    "on_trainsTableView_customContextMenuRequested",
    "on_passengersTableView_customContextMenuRequested",
    "on_routesTableView_customContextMenuRequested",
    "on_scheduleTableView_customContextMenuRequested",
    "ModifyRequestedAction",
    "selectedID",
    "TableViewVariant",
    "selectedTable",
    "DeleteRequestedAction",
    "loadStationTable",
    "loadRouteTable",
    "loadTrainTable",
    "loadTicketTable",
    "loadPassengerTable",
    "loadScheduleTable",
    "on_addPassengerButton_clicked",
    "on_addTicketButton_clicked",
    "on_logoutButton_clicked",
    "on_bookTicketButton_clicked",
    "on_getScheduleRevenueButton_clicked",
    "on_getScheduleTicketsAmount_clicked",
    "on_miscPageButton_clicked",
    "on_backMiscPageButton_clicked",
    "on_passengerAdditionalButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[106];
    char stringdata0[11];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[28];
    char stringdata5[27];
    char stringdata6[31];
    char stringdata7[27];
    char stringdata8[29];
    char stringdata9[30];
    char stringdata10[31];
    char stringdata11[27];
    char stringdata12[29];
    char stringdata13[28];
    char stringdata14[27];
    char stringdata15[30];
    char stringdata16[34];
    char stringdata17[30];
    char stringdata18[32];
    char stringdata19[31];
    char stringdata20[30];
    char stringdata21[33];
    char stringdata22[28];
    char stringdata23[26];
    char stringdata24[26];
    char stringdata25[29];
    char stringdata26[48];
    char stringdata27[4];
    char stringdata28[47];
    char stringdata29[46];
    char stringdata30[50];
    char stringdata31[46];
    char stringdata32[48];
    char stringdata33[22];
    char stringdata34[11];
    char stringdata35[17];
    char stringdata36[14];
    char stringdata37[22];
    char stringdata38[17];
    char stringdata39[15];
    char stringdata40[15];
    char stringdata41[16];
    char stringdata42[19];
    char stringdata43[18];
    char stringdata44[30];
    char stringdata45[27];
    char stringdata46[24];
    char stringdata47[28];
    char stringdata48[36];
    char stringdata49[36];
    char stringdata50[26];
    char stringdata51[30];
    char stringdata52[37];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 12),  // "logoutSignal"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 10),  // "showWindow"
        QT_MOC_LITERAL(36, 27),  // "on_ticketPageButton_clicked"
        QT_MOC_LITERAL(64, 26),  // "on_trainPageButton_clicked"
        QT_MOC_LITERAL(91, 30),  // "on_passengerPageButton_clicked"
        QT_MOC_LITERAL(122, 26),  // "on_routePageButton_clicked"
        QT_MOC_LITERAL(149, 28),  // "on_stationPageButton_clicked"
        QT_MOC_LITERAL(178, 29),  // "on_schedulePageButton_clicked"
        QT_MOC_LITERAL(208, 30),  // "on_backPassengerButton_clicked"
        QT_MOC_LITERAL(239, 26),  // "on_backRouteButton_clicked"
        QT_MOC_LITERAL(266, 28),  // "on_backStationButton_clicked"
        QT_MOC_LITERAL(295, 27),  // "on_backTicketButton_clicked"
        QT_MOC_LITERAL(323, 26),  // "on_backTrainButton_clicked"
        QT_MOC_LITERAL(350, 29),  // "on_backScheduleButton_clicked"
        QT_MOC_LITERAL(380, 33),  // "on_refreshPassengerButton_cli..."
        QT_MOC_LITERAL(414, 29),  // "on_refreshRouteButton_clicked"
        QT_MOC_LITERAL(444, 31),  // "on_refreshStationButton_clicked"
        QT_MOC_LITERAL(476, 30),  // "on_refreshTicketButton_clicked"
        QT_MOC_LITERAL(507, 29),  // "on_refreshTrainButton_clicked"
        QT_MOC_LITERAL(537, 32),  // "on_refreshScheduleButton_clicked"
        QT_MOC_LITERAL(570, 27),  // "on_addStationButton_clicked"
        QT_MOC_LITERAL(598, 25),  // "on_addRouteButton_clicked"
        QT_MOC_LITERAL(624, 25),  // "on_addTrainButton_clicked"
        QT_MOC_LITERAL(650, 28),  // "on_addScheduleButton_clicked"
        QT_MOC_LITERAL(679, 47),  // "on_stationsTableView_customCo..."
        QT_MOC_LITERAL(727, 3),  // "pos"
        QT_MOC_LITERAL(731, 46),  // "on_ticketsTableView_customCon..."
        QT_MOC_LITERAL(778, 45),  // "on_trainsTableView_customCont..."
        QT_MOC_LITERAL(824, 49),  // "on_passengersTableView_custom..."
        QT_MOC_LITERAL(874, 45),  // "on_routesTableView_customCont..."
        QT_MOC_LITERAL(920, 47),  // "on_scheduleTableView_customCo..."
        QT_MOC_LITERAL(968, 21),  // "ModifyRequestedAction"
        QT_MOC_LITERAL(990, 10),  // "selectedID"
        QT_MOC_LITERAL(1001, 16),  // "TableViewVariant"
        QT_MOC_LITERAL(1018, 13),  // "selectedTable"
        QT_MOC_LITERAL(1032, 21),  // "DeleteRequestedAction"
        QT_MOC_LITERAL(1054, 16),  // "loadStationTable"
        QT_MOC_LITERAL(1071, 14),  // "loadRouteTable"
        QT_MOC_LITERAL(1086, 14),  // "loadTrainTable"
        QT_MOC_LITERAL(1101, 15),  // "loadTicketTable"
        QT_MOC_LITERAL(1117, 18),  // "loadPassengerTable"
        QT_MOC_LITERAL(1136, 17),  // "loadScheduleTable"
        QT_MOC_LITERAL(1154, 29),  // "on_addPassengerButton_clicked"
        QT_MOC_LITERAL(1184, 26),  // "on_addTicketButton_clicked"
        QT_MOC_LITERAL(1211, 23),  // "on_logoutButton_clicked"
        QT_MOC_LITERAL(1235, 27),  // "on_bookTicketButton_clicked"
        QT_MOC_LITERAL(1263, 35),  // "on_getScheduleRevenueButton_c..."
        QT_MOC_LITERAL(1299, 35),  // "on_getScheduleTicketsAmount_c..."
        QT_MOC_LITERAL(1335, 25),  // "on_miscPageButton_clicked"
        QT_MOC_LITERAL(1361, 29),  // "on_backMiscPageButton_clicked"
        QT_MOC_LITERAL(1391, 36)   // "on_passengerAdditionalButton_..."
    },
    "MainWindow",
    "logoutSignal",
    "",
    "showWindow",
    "on_ticketPageButton_clicked",
    "on_trainPageButton_clicked",
    "on_passengerPageButton_clicked",
    "on_routePageButton_clicked",
    "on_stationPageButton_clicked",
    "on_schedulePageButton_clicked",
    "on_backPassengerButton_clicked",
    "on_backRouteButton_clicked",
    "on_backStationButton_clicked",
    "on_backTicketButton_clicked",
    "on_backTrainButton_clicked",
    "on_backScheduleButton_clicked",
    "on_refreshPassengerButton_clicked",
    "on_refreshRouteButton_clicked",
    "on_refreshStationButton_clicked",
    "on_refreshTicketButton_clicked",
    "on_refreshTrainButton_clicked",
    "on_refreshScheduleButton_clicked",
    "on_addStationButton_clicked",
    "on_addRouteButton_clicked",
    "on_addTrainButton_clicked",
    "on_addScheduleButton_clicked",
    "on_stationsTableView_customContextMenuRequested",
    "pos",
    "on_ticketsTableView_customContextMenuRequested",
    "on_trainsTableView_customContextMenuRequested",
    "on_passengersTableView_customContextMenuRequested",
    "on_routesTableView_customContextMenuRequested",
    "on_scheduleTableView_customContextMenuRequested",
    "ModifyRequestedAction",
    "selectedID",
    "TableViewVariant",
    "selectedTable",
    "DeleteRequestedAction",
    "loadStationTable",
    "loadRouteTable",
    "loadTrainTable",
    "loadTicketTable",
    "loadPassengerTable",
    "loadScheduleTable",
    "on_addPassengerButton_clicked",
    "on_addTicketButton_clicked",
    "on_logoutButton_clicked",
    "on_bookTicketButton_clicked",
    "on_getScheduleRevenueButton_clicked",
    "on_getScheduleTicketsAmount_clicked",
    "on_miscPageButton_clicked",
    "on_backMiscPageButton_clicked",
    "on_passengerAdditionalButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      47,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  296,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,  297,    2, 0x0a,    2 /* Public */,
       4,    0,  298,    2, 0x08,    3 /* Private */,
       5,    0,  299,    2, 0x08,    4 /* Private */,
       6,    0,  300,    2, 0x08,    5 /* Private */,
       7,    0,  301,    2, 0x08,    6 /* Private */,
       8,    0,  302,    2, 0x08,    7 /* Private */,
       9,    0,  303,    2, 0x08,    8 /* Private */,
      10,    0,  304,    2, 0x08,    9 /* Private */,
      11,    0,  305,    2, 0x08,   10 /* Private */,
      12,    0,  306,    2, 0x08,   11 /* Private */,
      13,    0,  307,    2, 0x08,   12 /* Private */,
      14,    0,  308,    2, 0x08,   13 /* Private */,
      15,    0,  309,    2, 0x08,   14 /* Private */,
      16,    0,  310,    2, 0x08,   15 /* Private */,
      17,    0,  311,    2, 0x08,   16 /* Private */,
      18,    0,  312,    2, 0x08,   17 /* Private */,
      19,    0,  313,    2, 0x08,   18 /* Private */,
      20,    0,  314,    2, 0x08,   19 /* Private */,
      21,    0,  315,    2, 0x08,   20 /* Private */,
      22,    0,  316,    2, 0x08,   21 /* Private */,
      23,    0,  317,    2, 0x08,   22 /* Private */,
      24,    0,  318,    2, 0x08,   23 /* Private */,
      25,    0,  319,    2, 0x08,   24 /* Private */,
      26,    1,  320,    2, 0x08,   25 /* Private */,
      28,    1,  323,    2, 0x08,   27 /* Private */,
      29,    1,  326,    2, 0x08,   29 /* Private */,
      30,    1,  329,    2, 0x08,   31 /* Private */,
      31,    1,  332,    2, 0x08,   33 /* Private */,
      32,    1,  335,    2, 0x08,   35 /* Private */,
      33,    2,  338,    2, 0x08,   37 /* Private */,
      37,    2,  343,    2, 0x08,   40 /* Private */,
      38,    0,  348,    2, 0x08,   43 /* Private */,
      39,    0,  349,    2, 0x08,   44 /* Private */,
      40,    0,  350,    2, 0x08,   45 /* Private */,
      41,    0,  351,    2, 0x08,   46 /* Private */,
      42,    0,  352,    2, 0x08,   47 /* Private */,
      43,    0,  353,    2, 0x08,   48 /* Private */,
      44,    0,  354,    2, 0x08,   49 /* Private */,
      45,    0,  355,    2, 0x08,   50 /* Private */,
      46,    0,  356,    2, 0x08,   51 /* Private */,
      47,    0,  357,    2, 0x08,   52 /* Private */,
      48,    0,  358,    2, 0x08,   53 /* Private */,
      49,    0,  359,    2, 0x08,   54 /* Private */,
      50,    0,  360,    2, 0x08,   55 /* Private */,
      51,    0,  361,    2, 0x08,   56 /* Private */,
      52,    0,  362,    2, 0x08,   57 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   27,
    QMetaType::Void, QMetaType::QPoint,   27,
    QMetaType::Void, QMetaType::QPoint,   27,
    QMetaType::Void, QMetaType::QPoint,   27,
    QMetaType::Void, QMetaType::QPoint,   27,
    QMetaType::Void, QMetaType::QPoint,   27,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 35,   34,   36,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 35,   34,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'logoutSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ticketPageButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_trainPageButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_passengerPageButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_routePageButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_stationPageButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_schedulePageButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_backPassengerButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_backRouteButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_backStationButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_backTicketButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_backTrainButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_backScheduleButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_refreshPassengerButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_refreshRouteButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_refreshStationButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_refreshTicketButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_refreshTrainButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_refreshScheduleButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addStationButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addRouteButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addTrainButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addScheduleButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_stationsTableView_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_ticketsTableView_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_trainsTableView_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_passengersTableView_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_routesTableView_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_scheduleTableView_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'ModifyRequestedAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<TableViewVariant, std::false_type>,
        // method 'DeleteRequestedAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<TableViewVariant, std::false_type>,
        // method 'loadStationTable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadRouteTable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadTrainTable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadTicketTable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadPassengerTable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadScheduleTable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addPassengerButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addTicketButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_logoutButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_bookTicketButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_getScheduleRevenueButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_getScheduleTicketsAmount_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_miscPageButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_backMiscPageButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_passengerAdditionalButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->logoutSignal(); break;
        case 1: _t->showWindow(); break;
        case 2: _t->on_ticketPageButton_clicked(); break;
        case 3: _t->on_trainPageButton_clicked(); break;
        case 4: _t->on_passengerPageButton_clicked(); break;
        case 5: _t->on_routePageButton_clicked(); break;
        case 6: _t->on_stationPageButton_clicked(); break;
        case 7: _t->on_schedulePageButton_clicked(); break;
        case 8: _t->on_backPassengerButton_clicked(); break;
        case 9: _t->on_backRouteButton_clicked(); break;
        case 10: _t->on_backStationButton_clicked(); break;
        case 11: _t->on_backTicketButton_clicked(); break;
        case 12: _t->on_backTrainButton_clicked(); break;
        case 13: _t->on_backScheduleButton_clicked(); break;
        case 14: _t->on_refreshPassengerButton_clicked(); break;
        case 15: _t->on_refreshRouteButton_clicked(); break;
        case 16: _t->on_refreshStationButton_clicked(); break;
        case 17: _t->on_refreshTicketButton_clicked(); break;
        case 18: _t->on_refreshTrainButton_clicked(); break;
        case 19: _t->on_refreshScheduleButton_clicked(); break;
        case 20: _t->on_addStationButton_clicked(); break;
        case 21: _t->on_addRouteButton_clicked(); break;
        case 22: _t->on_addTrainButton_clicked(); break;
        case 23: _t->on_addScheduleButton_clicked(); break;
        case 24: _t->on_stationsTableView_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 25: _t->on_ticketsTableView_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 26: _t->on_trainsTableView_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 27: _t->on_passengersTableView_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 28: _t->on_routesTableView_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 29: _t->on_scheduleTableView_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 30: _t->ModifyRequestedAction((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<TableViewVariant>>(_a[2]))); break;
        case 31: _t->DeleteRequestedAction((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<TableViewVariant>>(_a[2]))); break;
        case 32: _t->loadStationTable(); break;
        case 33: _t->loadRouteTable(); break;
        case 34: _t->loadTrainTable(); break;
        case 35: _t->loadTicketTable(); break;
        case 36: _t->loadPassengerTable(); break;
        case 37: _t->loadScheduleTable(); break;
        case 38: _t->on_addPassengerButton_clicked(); break;
        case 39: _t->on_addTicketButton_clicked(); break;
        case 40: _t->on_logoutButton_clicked(); break;
        case 41: _t->on_bookTicketButton_clicked(); break;
        case 42: _t->on_getScheduleRevenueButton_clicked(); break;
        case 43: _t->on_getScheduleTicketsAmount_clicked(); break;
        case 44: _t->on_miscPageButton_clicked(); break;
        case 45: _t->on_backMiscPageButton_clicked(); break;
        case 46: _t->on_passengerAdditionalButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::logoutSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 47)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 47;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::logoutSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
