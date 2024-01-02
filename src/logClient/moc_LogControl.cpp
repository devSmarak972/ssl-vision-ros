/****************************************************************************
** Meta object code from reading C++ file 'LogControl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "LogControl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LogControl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LogControl_t {
    QByteArrayData data[12];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogControl_t qt_meta_stringdata_LogControl = {
    {
QT_MOC_LITERAL(0, 0, 10), // "LogControl"
QT_MOC_LITERAL(1, 11, 12), // "update_speed"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11), // "log_forward"
QT_MOC_LITERAL(4, 37, 12), // "log_backward"
QT_MOC_LITERAL(5, 50, 8), // "log_play"
QT_MOC_LITERAL(6, 59, 9), // "log_pause"
QT_MOC_LITERAL(7, 69, 10), // "log_faster"
QT_MOC_LITERAL(8, 80, 10), // "log_slower"
QT_MOC_LITERAL(9, 91, 17), // "log_frame_forward"
QT_MOC_LITERAL(10, 109, 14), // "log_frame_back"
QT_MOC_LITERAL(11, 124, 10) // "goto_frame"

    },
    "LogControl\0update_speed\0\0log_forward\0"
    "log_backward\0log_play\0log_pause\0"
    "log_faster\0log_slower\0log_frame_forward\0"
    "log_frame_back\0goto_frame"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   67,    2, 0x0a /* Public */,
       4,    0,   68,    2, 0x0a /* Public */,
       5,    0,   69,    2, 0x0a /* Public */,
       6,    0,   70,    2, 0x0a /* Public */,
       7,    0,   71,    2, 0x0a /* Public */,
       8,    0,   72,    2, 0x0a /* Public */,
       9,    0,   73,    2, 0x0a /* Public */,
      10,    0,   74,    2, 0x0a /* Public */,
      11,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void LogControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update_speed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->log_forward(); break;
        case 2: _t->log_backward(); break;
        case 3: _t->log_play(); break;
        case 4: _t->log_pause(); break;
        case 5: _t->log_faster(); break;
        case 6: _t->log_slower(); break;
        case 7: _t->log_frame_forward(); break;
        case 8: _t->log_frame_back(); break;
        case 9: _t->goto_frame((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LogControl::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogControl::update_speed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LogControl::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_LogControl.data,
    qt_meta_data_LogControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LogControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogControl.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LogControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void LogControl::update_speed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
