/****************************************************************************
** Meta object code from reading C++ file 'scheduleviewmodal.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../RWStation/modals/scheduleviewmodal.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scheduleviewmodal.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSScheduleViewModalENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSScheduleViewModalENDCLASS = QtMocHelpers::stringData(
    "ScheduleViewModal",
    "on_updateScheduleViewTableView_clicked",
    "",
    "ModifyRequestedAction",
    "selectedID",
    "DeleteRequestedAction",
    "on_scheduleViewTableView_customContextMenuRequested",
    "pos",
    "on_addNewButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSScheduleViewModalENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[18];
    char stringdata1[39];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[11];
    char stringdata5[22];
    char stringdata6[52];
    char stringdata7[4];
    char stringdata8[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSScheduleViewModalENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSScheduleViewModalENDCLASS_t qt_meta_stringdata_CLASSScheduleViewModalENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "ScheduleViewModal"
        QT_MOC_LITERAL(18, 38),  // "on_updateScheduleViewTableVie..."
        QT_MOC_LITERAL(57, 0),  // ""
        QT_MOC_LITERAL(58, 21),  // "ModifyRequestedAction"
        QT_MOC_LITERAL(80, 10),  // "selectedID"
        QT_MOC_LITERAL(91, 21),  // "DeleteRequestedAction"
        QT_MOC_LITERAL(113, 51),  // "on_scheduleViewTableView_cust..."
        QT_MOC_LITERAL(165, 3),  // "pos"
        QT_MOC_LITERAL(169, 23)   // "on_addNewButton_clicked"
    },
    "ScheduleViewModal",
    "on_updateScheduleViewTableView_clicked",
    "",
    "ModifyRequestedAction",
    "selectedID",
    "DeleteRequestedAction",
    "on_scheduleViewTableView_customContextMenuRequested",
    "pos",
    "on_addNewButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSScheduleViewModalENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    1,   45,    2, 0x08,    2 /* Private */,
       5,    1,   48,    2, 0x08,    4 /* Private */,
       6,    1,   51,    2, 0x08,    6 /* Private */,
       8,    0,   54,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QPoint,    7,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ScheduleViewModal::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSScheduleViewModalENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSScheduleViewModalENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSScheduleViewModalENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ScheduleViewModal, std::true_type>,
        // method 'on_updateScheduleViewTableView_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ModifyRequestedAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'DeleteRequestedAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_scheduleViewTableView_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_addNewButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ScheduleViewModal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScheduleViewModal *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_updateScheduleViewTableView_clicked(); break;
        case 1: _t->ModifyRequestedAction((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->DeleteRequestedAction((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_scheduleViewTableView_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 4: _t->on_addNewButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *ScheduleViewModal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScheduleViewModal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSScheduleViewModalENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ScheduleViewModal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
