/****************************************************************************
** Meta object code from reading C++ file 'updatescheduleviewmodal.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../RWStation/modals/updatescheduleviewmodal.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'updatescheduleviewmodal.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSUpdateScheduleViewModalENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSUpdateScheduleViewModalENDCLASS = QtMocHelpers::stringData(
    "UpdateScheduleViewModal",
    "on_saveChangesButton_clicked",
    "",
    "on_routeNameComboBox_currentIndexChanged",
    "index",
    "on_trainNameComboBox_currentIndexChanged"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSUpdateScheduleViewModalENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[24];
    char stringdata1[29];
    char stringdata2[1];
    char stringdata3[41];
    char stringdata4[6];
    char stringdata5[41];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSUpdateScheduleViewModalENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSUpdateScheduleViewModalENDCLASS_t qt_meta_stringdata_CLASSUpdateScheduleViewModalENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "UpdateScheduleViewModal"
        QT_MOC_LITERAL(24, 28),  // "on_saveChangesButton_clicked"
        QT_MOC_LITERAL(53, 0),  // ""
        QT_MOC_LITERAL(54, 40),  // "on_routeNameComboBox_currentI..."
        QT_MOC_LITERAL(95, 5),  // "index"
        QT_MOC_LITERAL(101, 40)   // "on_trainNameComboBox_currentI..."
    },
    "UpdateScheduleViewModal",
    "on_saveChangesButton_clicked",
    "",
    "on_routeNameComboBox_currentIndexChanged",
    "index",
    "on_trainNameComboBox_currentIndexChanged"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSUpdateScheduleViewModalENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x08,    1 /* Private */,
       3,    1,   33,    2, 0x08,    2 /* Private */,
       5,    1,   36,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject UpdateScheduleViewModal::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSUpdateScheduleViewModalENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSUpdateScheduleViewModalENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSUpdateScheduleViewModalENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UpdateScheduleViewModal, std::true_type>,
        // method 'on_saveChangesButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_routeNameComboBox_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_trainNameComboBox_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void UpdateScheduleViewModal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UpdateScheduleViewModal *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_saveChangesButton_clicked(); break;
        case 1: _t->on_routeNameComboBox_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_trainNameComboBox_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *UpdateScheduleViewModal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UpdateScheduleViewModal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSUpdateScheduleViewModalENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int UpdateScheduleViewModal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
