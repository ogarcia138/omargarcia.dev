/****************************************************************************
** Meta object code from reading C++ file 'displayserverimage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../aqsis/tools/piqsl/displayserverimage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'displayserverimage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Aqsis__CqDisplayServerImage_t {
    QByteArrayData data[3];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Aqsis__CqDisplayServerImage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Aqsis__CqDisplayServerImage_t qt_meta_stringdata_Aqsis__CqDisplayServerImage = {
    {
QT_MOC_LITERAL(0, 0, 27), // "Aqsis::CqDisplayServerImage"
QT_MOC_LITERAL(1, 28, 14), // "processMessage"
QT_MOC_LITERAL(2, 43, 0) // ""

    },
    "Aqsis::CqDisplayServerImage\0processMessage\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Aqsis__CqDisplayServerImage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Aqsis::CqDisplayServerImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CqDisplayServerImage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->processMessage(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Aqsis::CqDisplayServerImage::staticMetaObject = { {
    QMetaObject::SuperData::link<CqImage::staticMetaObject>(),
    qt_meta_stringdata_Aqsis__CqDisplayServerImage.data,
    qt_meta_data_Aqsis__CqDisplayServerImage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Aqsis::CqDisplayServerImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Aqsis::CqDisplayServerImage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Aqsis__CqDisplayServerImage.stringdata0))
        return static_cast<void*>(this);
    return CqImage::qt_metacast(_clname);
}

int Aqsis::CqDisplayServerImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CqImage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
