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
    "on_backPassengerButton_clicked",
    "on_backRouteButton_clicked",
    "on_backStationButton_clicked",
    "on_backTicketButton_clicked",
    "on_backTrainButton_clicked",
    "on_refreshPassengerButton_clicked",
    "on_refreshRouteButton_clicked",
    "on_refreshStationButton_clicked",
    "on_refreshTicketButton_clicked",
    "on_refreshTrainButton_clicked",
    "on_addStationButton_clicked",
    "on_stationsTableView_customContextMenuRequested",
    "pos",
    "on_ticketsTableView_customContextMenuRequested",
    "on_trainsTableView_customContextMenuRequested",
    "on_passengersTableView_customContextMenuRequested",
    "on_routesTableView_customContextMenuRequested",
    "ModifyRequestedAction",
    "selectedID",
    "TableViewVariant",
    "selectedTable",
    "DeleteRequestedAction",
    "loadStationTable",
    "loadRouteTable",
    "loadTrainTable",
    "loadTicketTable",
    "loadPassengerTable"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[70];
    char stringdata0[11];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[28];
    char stringdata4[27];
    char stringdata5[31];
    char stringdata6[27];
    char stringdata7[29];
    char stringdata8[31];
    char stringdata9[27];
    char stringdata10[29];
    char stringdata11[28];
    char stringdata12[27];
    char stringdata13[34];
    char stringdata14[30];
    char stringdata15[32];
    char stringdata16[31];
    char stringdata17[30];
    char stringdata18[28];
    char stringdata19[48];
    char stringdata20[4];
    char stringdata21[47];
    char stringdata22[46];
    char stringdata23[50];
    char stringdata24[46];
    char stringdata25[22];
    char stringdata26[11];
    char stringdata27[17];
    char stringdata28[14];
    char stringdata29[22];
    char stringdata30[17];
    char stringdata31[15];
    char stringdata32[15];
    char stringdata33[16];
    char stringdata34[19];
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
        QT_MOC_LITERAL(165, 30),  // "on_backPassengerButton_clicked"
        QT_MOC_LITERAL(196, 26),  // "on_backRouteButton_clicked"
        QT_MOC_LITERAL(223, 28),  // "on_backStationButton_clicked"
        QT_MOC_LITERAL(252, 27),  // "on_backTicketButton_clicked"
        QT_MOC_LITERAL(280, 26),  // "on_backTrainButton_clicked"
        QT_MOC_LITERAL(307, 33),  // "on_refreshPassengerButton_cli..."
        QT_MOC_LITERAL(341, 29),  // "on_refreshRouteButton_clicked"
        QT_MOC_LITERAL(371, 31),  // "on_refreshStationButton_clicked"
        QT_MOC_LITERAL(403, 30),  // "on_refreshTicketButton_clicked"
        QT_MOC_LITERAL(434, 29),  // "on_refreshTrainButton_clicked"
        QT_MOC_LITERAL(464, 27),  // "on_addStationButton_clicked"
        QT_MOC_LITERAL(492, 47),  // "on_stationsTableView_customCo..."
        QT_MOC_LITERAL(540, 3),  // "pos"
        QT_MOC_LITERAL(544, 46),  // "on_ticketsTableView_customCon..."
        QT_MOC_LITERAL(591, 45),  // "on_trainsTableView_customCont..."
        QT_MOC_LITERAL(637, 49),  // "on_passengersTableView_custom..."
        QT_MOC_LITERAL(687, 45),  // "on_routesTableView_customCont..."
        QT_MOC_LITERAL(733, 21),  // "ModifyRequestedAction"
        QT_MOC_LITERAL(755, 10),  // "selectedID"
        QT_MOC_LITERAL(766, 16),  // "TableViewVariant"
        QT_MOC_LITERAL(783, 13),  // "selectedTable"
        QT_MOC_LITERAL(797, 21),  // "DeleteRequestedAction"
        QT_MOC_LITERAL(819, 16),  // "loadStationTable"
        QT_MOC_LITERAL(836, 14),  // "loadRouteTable"
        QT_MOC_LITERAL(851, 14),  // "loadTrainTable"
        QT_MOC_LITERAL(866, 15),  // "loadTicketTable"
        QT_MOC_LITERAL(882, 18)   // "loadPassengerTable"
    },
    "MainWindow",
    "showWindow",
    "",
    "on_ticketPageButton_clicked",
    "on_trainPageButton_clicked",
    "on_passengerPageButton_clicked",
    "on_routePageButton_clicked",
    "on_stationPageButton_clicked",
    "on_backPassengerButton_clicked",
    "on_backRouteButton_clicked",
    "on_backStationButton_clicked",
    "on_backTicketButton_clicked",
    "on_backTrainButton_clicked",
    "on_refreshPassengerButton_clicked",
    "on_refreshRouteButton_clicked",
    "on_refreshStationButton_clicked",
    "on_refreshTicketButton_clicked",
    "on_refreshTrainButton_clicked",
    "on_addStationButton_clicked",
    "on_stationsTableView_customContextMenuRequested",
    "pos",
    "on_ticketsTableView_customContextMenuRequested",
    "on_trainsTableView_customContextMenuRequested",
    "on_passengersTableView_customContextMenuRequested",
    "on_routesTableView_customContextMenuRequested",
    "ModifyRequestedAction",
    "selectedID",
    "TableViewVariant",
    "selectedTable",
    "DeleteRequestedAction",
    "loadStationTable",
    "loadRouteTable",
    "loadTrainTable",
    "loadTicketTable",
    "loadPassengerTable"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  188,    2, 0x0a,    1 /* Public */,
       3,    0,  189,    2, 0x08,    2 /* Private */,
       4,    0,  190,    2, 0x08,    3 /* Private */,
       5,    0,  191,    2, 0x08,    4 /* Private */,
       6,    0,  192,    2, 0x08,    5 /* Private */,
       7,    0,  193,    2, 0x08,    6 /* Private */,
       8,    0,  194,    2, 0x08,    7 /* Private */,
       9,    0,  195,    2, 0x08,    8 /* Private */,
      10,    0,  196,    2, 0x08,    9 /* Private */,
      11,    0,  197,    2, 0x08,   10 /* Private */,
      12,    0,  198,    2, 0x08,   11 /* Private */,
      13,    0,  199,    2, 0x08,   12 /* Private */,
      14,    0,  200,    2, 0x08,   13 /* Private */,
      15,    0,  201,    2, 0x08,   14 /* Private */,
      16,    0,  202,    2, 0x08,   15 /* Private */,
      17,    0,  203,    2, 0x08,   16 /* Private */,
      18,    0,  204,    2, 0x08,   17 /* Private */,
      19,    1,  205,    2, 0x08,   18 /* Private */,
      21,    1,  208,    2, 0x08,   20 /* Private */,
      22,    1,  211,    2, 0x08,   22 /* Private */,
      23,    1,  214,    2, 0x08,   24 /* Private */,
      24,    1,  217,    2, 0x08,   26 /* Private */,
      25,    2,  220,    2, 0x08,   28 /* Private */,
      29,    2,  225,    2, 0x08,   31 /* Private */,
      30,    0,  230,    2, 0x08,   34 /* Private */,
      31,    0,  231,    2, 0x08,   35 /* Private */,
      32,    0,  232,    2, 0x08,   36 /* Private */,
      33,    0,  233,    2, 0x08,   37 /* Private */,
      34,    0,  234,    2, 0x08,   38 /* Private */,

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
    QMetaType::Void, QMetaType::QPoint,   20,
    QMetaType::Void, QMetaType::QPoint,   20,
    QMetaType::Void, QMetaType::QPoint,   20,
    QMetaType::Void, QMetaType::QPoint,   20,
    QMetaType::Void, QMetaType::QPoint,   20,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 27,   26,   28,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 27,   26,   28,
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
        // method 'on_addStationButton_clicked'
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
        case 6: _t->on_backPassengerButton_clicked(); break;
        case 7: _t->on_backRouteButton_clicked(); break;
        case 8: _t->on_backStationButton_clicked(); break;
        case 9: _t->on_backTicketButton_clicked(); break;
        case 10: _t->on_backTrainButton_clicked(); break;
        case 11: _t->on_refreshPassengerButton_clicked(); break;
        case 12: _t->on_refreshRouteButton_clicked(); break;
        case 13: _t->on_refreshStationButton_clicked(); break;
        case 14: _t->on_refreshTicketButton_clicked(); break;
        case 15: _t->on_refreshTrainButton_clicked(); break;
        case 16: _t->on_addStationButton_clicked(); break;
        case 17: _t->on_stationsTableView_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 18: _t->on_ticketsTableView_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 19: _t->on_trainsTableView_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 20: _t->on_passengersTableView_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 21: _t->on_routesTableView_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 22: _t->ModifyRequestedAction((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<TableViewVariant>>(_a[2]))); break;
        case 23: _t->DeleteRequestedAction((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<TableViewVariant>>(_a[2]))); break;
        case 24: _t->loadStationTable(); break;
        case 25: _t->loadRouteTable(); break;
        case 26: _t->loadTrainTable(); break;
        case 27: _t->loadTicketTable(); break;
        case 28: _t->loadPassengerTable(); break;
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
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 29;
    }
    return _id;
}
QT_WARNING_POP
