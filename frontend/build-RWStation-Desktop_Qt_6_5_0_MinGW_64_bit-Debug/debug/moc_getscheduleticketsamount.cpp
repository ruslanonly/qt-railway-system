/****************************************************************************
** Meta object code from reading C++ file 'getscheduleticketsamount.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../RWStation/modals/getscheduleticketsamount.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'getscheduleticketsamount.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSGetScheduleTicketsAmountENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSGetScheduleTicketsAmountENDCLASS = QtMocHelpers::stringData(
    "GetScheduleTicketsAmount",
    "on_updateTicketsTableViewButton_clicked",
    "",
    "on_percentageSpinBox_valueChanged",
    "arg1"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGetScheduleTicketsAmountENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[25];
    char stringdata1[40];
    char stringdata2[1];
    char stringdata3[34];
    char stringdata4[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGetScheduleTicketsAmountENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGetScheduleTicketsAmountENDCLASS_t qt_meta_stringdata_CLASSGetScheduleTicketsAmountENDCLASS = {
    {
        QT_MOC_LITERAL(0, 24),  // "GetScheduleTicketsAmount"
        QT_MOC_LITERAL(25, 39),  // "on_updateTicketsTableViewButt..."
        QT_MOC_LITERAL(65, 0),  // ""
        QT_MOC_LITERAL(66, 33),  // "on_percentageSpinBox_valueCha..."
        QT_MOC_LITERAL(100, 4)   // "arg1"
    },
    "GetScheduleTicketsAmount",
    "on_updateTicketsTableViewButton_clicked",
    "",
    "on_percentageSpinBox_valueChanged",
    "arg1"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGetScheduleTicketsAmountENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x08,    1 /* Private */,
       3,    1,   27,    2, 0x08,    2 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject GetScheduleTicketsAmount::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSGetScheduleTicketsAmountENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGetScheduleTicketsAmountENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGetScheduleTicketsAmountENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GetScheduleTicketsAmount, std::true_type>,
        // method 'on_updateTicketsTableViewButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_percentageSpinBox_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void GetScheduleTicketsAmount::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GetScheduleTicketsAmount *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_updateTicketsTableViewButton_clicked(); break;
        case 1: _t->on_percentageSpinBox_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *GetScheduleTicketsAmount::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetScheduleTicketsAmount::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGetScheduleTicketsAmountENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GetScheduleTicketsAmount::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
