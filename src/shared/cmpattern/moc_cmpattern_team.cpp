/****************************************************************************
** Meta object code from reading C++ file 'cmpattern_team.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "cmpattern_team.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cmpattern_team.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CMPattern__Team_t {
    QByteArrayData data[8];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CMPattern__Team_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CMPattern__Team_t qt_meta_stringdata_CMPattern__Team = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CMPattern::Team"
QT_MOC_LITERAL(1, 16, 21), // "signalTeamNameChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 19), // "signalChangeOccured"
QT_MOC_LITERAL(4, 59, 8), // "VarType*"
QT_MOC_LITERAL(5, 68, 4), // "item"
QT_MOC_LITERAL(6, 73, 19), // "slotTeamNameChanged"
QT_MOC_LITERAL(7, 93, 17) // "slotChangeOccured"

    },
    "CMPattern::Team\0signalTeamNameChanged\0"
    "\0signalChangeOccured\0VarType*\0item\0"
    "slotTeamNameChanged\0slotChangeOccured"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CMPattern__Team[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    1,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   38,    2, 0x09 /* Protected */,
       7,    1,   39,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void CMPattern::Team::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Team *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalTeamNameChanged(); break;
        case 1: _t->signalChangeOccured((*reinterpret_cast< VarType*(*)>(_a[1]))); break;
        case 2: _t->slotTeamNameChanged(); break;
        case 3: _t->slotChangeOccured((*reinterpret_cast< VarType*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VarType* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VarType* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Team::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Team::signalTeamNameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Team::*)(VarType * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Team::signalChangeOccured)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CMPattern::Team::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CMPattern__Team.data,
    qt_meta_data_CMPattern__Team,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CMPattern::Team::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CMPattern::Team::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CMPattern__Team.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CMPattern::Team::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void CMPattern::Team::signalTeamNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CMPattern::Team::signalChangeOccured(VarType * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
