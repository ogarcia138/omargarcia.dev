/****************************************************************************
** Meta object code from reading C++ file 'interactivecamera.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../aqsis/include/aqsis/util/interactivecamera.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interactivecamera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InteractiveCamera_t {
    QByteArrayData data[20];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InteractiveCamera_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InteractiveCamera_t qt_meta_stringdata_InteractiveCamera = {
    {
QT_MOC_LITERAL(0, 0, 17), // "InteractiveCamera"
QT_MOC_LITERAL(1, 18, 17), // "projectionChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 11), // "viewChanged"
QT_MOC_LITERAL(4, 49, 11), // "setViewport"
QT_MOC_LITERAL(5, 61, 4), // "rect"
QT_MOC_LITERAL(6, 66, 11), // "setClipNear"
QT_MOC_LITERAL(7, 78, 8), // "clipNear"
QT_MOC_LITERAL(8, 87, 10), // "setClipFar"
QT_MOC_LITERAL(9, 98, 7), // "clipFar"
QT_MOC_LITERAL(10, 106, 14), // "setFieldOfView"
QT_MOC_LITERAL(11, 121, 3), // "fov"
QT_MOC_LITERAL(12, 125, 9), // "setCenter"
QT_MOC_LITERAL(13, 135, 6), // "center"
QT_MOC_LITERAL(14, 142, 22), // "setEyeToCenterDistance"
QT_MOC_LITERAL(15, 165, 4), // "dist"
QT_MOC_LITERAL(16, 170, 9), // "mouseDrag"
QT_MOC_LITERAL(17, 180, 7), // "prevPos"
QT_MOC_LITERAL(18, 188, 7), // "currPos"
QT_MOC_LITERAL(19, 196, 4) // "zoom"

    },
    "InteractiveCamera\0projectionChanged\0"
    "\0viewChanged\0setViewport\0rect\0setClipNear\0"
    "clipNear\0setClipFar\0clipFar\0setFieldOfView\0"
    "fov\0setCenter\0center\0setEyeToCenterDistance\0"
    "dist\0mouseDrag\0prevPos\0currPos\0zoom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InteractiveCamera[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   66,    2, 0x0a /* Public */,
       6,    1,   69,    2, 0x0a /* Public */,
       8,    1,   72,    2, 0x0a /* Public */,
      10,    1,   75,    2, 0x0a /* Public */,
      12,    1,   78,    2, 0x0a /* Public */,
      14,    1,   81,    2, 0x0a /* Public */,
      16,    3,   84,    2, 0x0a /* Public */,
      16,    2,   91,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QRect,    5,
    QMetaType::Void, QMetaType::QReal,    7,
    QMetaType::Void, QMetaType::QReal,    9,
    QMetaType::Void, QMetaType::QReal,   11,
    QMetaType::Void, QMetaType::QVector3D,   13,
    QMetaType::Void, QMetaType::QReal,   15,
    QMetaType::Void, QMetaType::QPoint, QMetaType::QPoint, QMetaType::Bool,   17,   18,   19,
    QMetaType::Void, QMetaType::QPoint, QMetaType::QPoint,   17,   18,

       0        // eod
};

void InteractiveCamera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InteractiveCamera *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->projectionChanged(); break;
        case 1: _t->viewChanged(); break;
        case 2: _t->setViewport((*reinterpret_cast< QRect(*)>(_a[1]))); break;
        case 3: _t->setClipNear((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 4: _t->setClipFar((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->setFieldOfView((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 6: _t->setCenter((*reinterpret_cast< QVector3D(*)>(_a[1]))); break;
        case 7: _t->setEyeToCenterDistance((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 8: _t->mouseDrag((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 9: _t->mouseDrag((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InteractiveCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InteractiveCamera::projectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InteractiveCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InteractiveCamera::viewChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InteractiveCamera::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_InteractiveCamera.data,
    qt_meta_data_InteractiveCamera,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InteractiveCamera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InteractiveCamera::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InteractiveCamera.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int InteractiveCamera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void InteractiveCamera::projectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void InteractiveCamera::viewChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
