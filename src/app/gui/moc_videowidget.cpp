/****************************************************************************
** Meta object code from reading C++ file 'videowidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "videowidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videowidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VideoWidget_t {
    QByteArrayData data[9];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VideoWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VideoWidget_t qt_meta_stringdata_VideoWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "VideoWidget"
QT_MOC_LITERAL(1, 12, 17), // "processVideoStats"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 10), // "VideoStats"
QT_MOC_LITERAL(4, 42, 5), // "stats"
QT_MOC_LITERAL(5, 48, 8), // "toggleOn"
QT_MOC_LITERAL(6, 57, 3), // "val"
QT_MOC_LITERAL(7, 61, 12), // "toggleWindow"
QT_MOC_LITERAL(8, 74, 16) // "toggleFullScreen"

    },
    "VideoWidget\0processVideoStats\0\0"
    "VideoStats\0stats\0toggleOn\0val\0"
    "toggleWindow\0toggleFullScreen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VideoWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       5,    1,   37,    2, 0x0a /* Public */,
       7,    1,   40,    2, 0x0a /* Public */,
       8,    1,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void VideoWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VideoWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->processVideoStats((*reinterpret_cast< VideoStats(*)>(_a[1]))); break;
        case 1: _t->toggleOn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->toggleWindow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->toggleFullScreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VideoWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_VideoWidget.data,
    qt_meta_data_VideoWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VideoWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VideoWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_VideoWidget"))
        return static_cast< Ui_VideoWidget*>(this);
    return QWidget::qt_metacast(_clname);
}

int VideoWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
