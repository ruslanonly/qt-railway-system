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
    "showWindow",
    "",
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
    "on_addTicketButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[90];
    char stringdata0[11];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[28];
    char stringdata4[27];
    char stringdata5[31];
    char stringdata6[27];
    char stringdata7[29];
    char stringdata8[30];
    char stringdata9[31];
    char stringdata10[27];
    char stringdata11[29];
    char stringdata12[28];
    char stringdata13[27];
    char stringdata14[30];
    char stringdata15[34];
    char stringdata16[30];
    char stringdata17[32];
    char stringdata18[31];
    char stringdata19[30];
    char stringdata20[33];
    char stringdata21[28];
    char stringdata22[26];
    char stringdata23[26];
    char stringdata24[29];
    char stringdata25[48];
    char stringdata26[4];
    char stringdata27[47];
    char stringdata28[46];
    char stringdata29[50];
    char stringdata30[46];
    char stringdata31[48];
    char stringdata32[22];
    char stringdata33[11];
    char stringdata34[17];
    char stringdata35[14];
    char stringdata36[22];
    char stringdata37[17];
    char stringdata38[15];
    char stringdata39[15];
    char stringdata40[16];
    char stringdata41[19];
    char stringdata42[18];
    char stringdata43[30];
    char stringdata44[27];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 10),  // "showWindow"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 27),  // "on_ticketPageButton_clicked"
        QT_MOC_LITERAL(51, 26),  // "on_trainPageButton_clicked"
        QT_MOC_LITERAL(78, 30),  // "on_passengerPageButton_clicked"
        QT_MOC_LITERAL(109, 26),  // "on_routePageButton_clicked"
        QT_MOC_LITERAL(136, 28),  // "on_stationPageButton_clicked"
        QT_MOC_LITERAL(165, 29),  // "on_schedulePageButton_clicked"
        QT_MOC_LITERAL(195, 30),  // "on_backPassengerButton_clicked"
        QT_MOC_LITERAL(226, 26),  // "on_backRouteButton_clicked"
        QT_MOC_LITERAL(253, 28),  // "on_backStationButton_clicked"
        QT_MOC_LITERAL(282, 27),  // "on_backTicketButton_clicked"
        QT_MOC_LITERAL(310, 26),  // "on_backTrainButton_clicked"
        QT_MOC_LITERAL(337, 29),  // "on_backScheduleButton_clicked"
        QT_MOC_LITERAL(367, 33),  // "on_refreshPassengerButton_cli..."
        QT_MOC_LITERAL(401, 29),  // "on_refreshRouteButton_clicked"
        QT_MOC_LITERAL(431, 31),  // "on_refreshStationButton_clicked"
        QT_MOC_LITERAL(463, 30),  // "on_refreshTicketButton_clicked"
        QT_MOC_LITERAL(494, 29),  // "on_refreshTrainButton_clicked"
        QT_MOC_LITERAL(524, 32),  // "on_refreshScheduleButton_clicked"
        QT_MOC_LITERAL(557, 27),  // "on_addStationButton_clicked"
        QT_MOC_LITERAL(585, 25),  // "on_addRouteButton_clicked"
        QT_MOC_LITERAL(611, 25),  // "on_addTrainButton_clicked"
        QT_MOC_LITERAL(637, 28),  // "on_addScheduleButton_clicked"
        QT_MOC_LITERAL(666, 47),  // "on_stationsTableView_customCo..."
        QT_MOC_LITERAL(714, 3),  // "pos"
        QT_MOC_LITERAL(718, 46),  // "on_ticketsTableView_customCon..."
        QT_MOC_LITERAL(765, 45),  // "on_trainsTableView_customCont..."
        QT_MOC_LITERAL(811, 49),  // "on_passengersTableView_custom..."
        QT_MOC_LITERAL(861, 45),  // "on_routesTableView_customCont..."
        QT_MOC_LITERAL(907, 47),  // "on_scheduleTableView_customCo..."
        QT_MOC_LITERAL(955, 21),  // "ModifyRequestedAction"
        QT_MOC_LITERAL(977, 10),  // "selectedID"
        QT_MOC_LITERAL(988, 16),  // "TableViewVariant"
        QT_MOC_LITERAL(1005, 13),  // "selectedTable"
        QT_MOC_LITERAL(1019, 21),  // "DeleteRequestedAction"
        QT_MOC_LITERAL(1041, 16),  // "loadStationTable"
        QT_MOC_LITERAL(1058, 14),  // "loadRouteTable"
        QT_MOC_LITERAL(1073, 14),  // "loadTrainTable"
        QT_MOC_LITERAL(1088, 15),  // "loadTicketTable"
        QT_MOC_LITERAL(1104, 18),  // "loadPassengerTable"
        QT_MOC_LITERAL(1123, 17),  // "loadScheduleTable"
        QT_MOC_LITERAL(1141, 29),  // "on_addPassengerButton_clicked"
        QT_MOC_LITERAL(1171, 26)   // "on_addTicketButton_clicked"
    },
    "MainWindow",
    "showWindow",
    "",
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
    "on_addTicketButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  248,    2, 0x0a,    1 /* Public */,
       3,    0,  249,    2, 0x08,    2 /* Private */,
       4,    0,  250,    2, 0x08,    3 /* Private */,
       5,    0,  251,    2, 0x08,    4 /* Private */,
       6,    0,  252,    2, 0x08,    5 /* Private */,
       7,    0,  253,    2, 0x08,    6 /* Private */,
       8,    0,  254,    2, 0x08,    7 /* Private */,
       9,    0,  255,    2, 0x08,    8 /* Private */,
      10,    0,  256,    2, 0x08,    9 /* Private */,
      11,    0,  257,    2, 0x08,   10 /* Private */,
      12,    0,  258,    2, 0x08,   11 /* Private */,
      13,    0,  259,    2, 0x08,   12 /* Private */,
      14,    0,  260,    2, 0x08,   13 /* Private */,
      15,    0,  261,    2, 0x08,   14 /* Private */,
      16,    0,  262,    2, 0x08,   15 /* Private */,
      17,    0,  263,    2, 0x08,   16 /* Private */,
      18,    0,  264,    2, 0x08,   17 /* Private */,
      19,    0,  265,    2, 0x08,   18 /* Private */,
      20,    0,  266,    2, 0x08,   19 /* Private */,
      21,    0,  267,    2, 0x08,   20 /* Private */,
      22,    0,  268,    2, 0x08,   21 /* Private */,
      23,    0,  269,    2, 0x08,   22 /* Private */,
      24,    0,  270,    2, 0x08,   23 /* Private */,
      25,    1,  271,    2, 0x08,   24 /* Private */,
      27,    1,  274,    2, 0x08,   26 /* Private */,
      28,    1,  277,    2, 0x08,   28 /* Private */,
      29,    1,  280,    2, 0x08,   30 /* Private */,
      30,    1,  283,    2, 0x08,   32 /* Private */,
      31,    1,  286,    2, 0x08,   34 /* Private */,
      32,    2,  289,    2, 0x08,   36 /* Private */,
      36,    2,  294,    2, 0x08,   39 /* Private */,
      37,    0,  299,    2, 0x08,   42 /* Private */,
      38,    0,  300,    2, 0x08,   43 /* Private */,
      39,    0,  301,    2, 0x08,   44 /* Private */,
      40,    0,  302,    2, 0x08,   45 /* Private */,
      41,    0,  303,    2, 0x08,   46 /* Private */,
      42,    0,  304,    2, 0x08,   47 /* Private */,
      43,    0,  305,    2, 0x08,   48 /* Private */,
      44,    0,  306,    2, 0x08,   49 /* Private */,

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
    QMetaType::Void, QMetaType::QPoint,   26,
    QMetaType::Void, QMetaType::QPoint,   26,
    QMetaType::Void, QMetaType::QPoint,   26,
    QMetaType::Void, QMetaType::QPoint,   26,
    QMetaType::Void, QMetaType::QPoint,   26,
    QMetaType::Void, QMetaType::QPoint,   26,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 34,   33,   35,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 34,   33,   35,
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
        case 0: _t->showWindow(); break;
        case 1: _t->on_ticketPageButton_clicked(); break;
        case 2: _t->on_trainPageButton_clicked(); break;
        case 3: _t->on_passengerPageButton_clicked(); break;
        case 4: _t->on_routePageButton_clicked(); break;
        case 5: _t->on_stationPageButton_clicked(); break;
        case 6: _t->on_schedulePageButton_clicked(); break;
        case 7: _t->on_backPassengerButton_clicked(); break;
        case 8: _t->on_backRouteButton_clicked(); break;
        case 9: _t->on_backStationButton_clicked(); break;
        case 10: _t->on_backTicketButton_clicked(); break;
        case 11: _t->on_backTrainButton_clicked(); break;
        case 12: _t->on_backScheduleButton_clicked(); break;
        case 13: _t->on_refreshPassengerButton_clicked(); break;
        case 14: _t->on_refreshRouteButton_clicked(); break;
        case 15: _t->on_refreshStationButton_clicked(); break;
        case 16: _t->on_refreshTicketButton_clicked(); break;
        case 17: _t->on_refreshTrainButton_clicked(); break;
        case 18: _t->on_refreshScheduleButton_clicked(); break;
        case 19: _t->on_addStationButton_clicked(); break;
        case 20: _t->on_addRouteButton_clicked(); break;
        case 21: _t->on_addTrainButton_clicked(); break;
        case 22: _t->on_addScheduleButton_clicked(); break;
        case 23: _t->on_stationsTableView_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 24: _t->on_ticketsTableView_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 25: _t->on_trainsTableView_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 26: _t->on_passengersTableView_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 27: _t->on_routesTableView_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 28: _t->on_scheduleTableView_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 29: _t->ModifyRequestedAction((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<TableViewVariant>>(_a[2]))); break;
        case 30: _t->DeleteRequestedAction((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<TableViewVariant>>(_a[2]))); break;
        case 31: _t->loadStationTable(); break;
        case 32: _t->loadRouteTable(); break;
        case 33: _t->loadTrainTable(); break;
        case 34: _t->loadTicketTable(); break;
        case 35: _t->loadPassengerTable(); break;
        case 36: _t->loadScheduleTable(); break;
        case 37: _t->on_addPassengerButton_clicked(); break;
        case 38: _t->on_addTicketButton_clicked(); break;
        default: ;
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
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 39)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 39;
    }
    return _id;
}
QT_WARNING_POP
