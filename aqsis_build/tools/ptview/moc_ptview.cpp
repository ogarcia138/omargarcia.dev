/****************************************************************************
** Meta object code from reading C++ file 'ptview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../aqsis/tools/ptview/ptview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ptview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Aqsis__PointArrayModel_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Aqsis__PointArrayModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Aqsis__PointArrayModel_t qt_meta_stringdata_Aqsis__PointArrayModel = {
    {
QT_MOC_LITERAL(0, 0, 22) // "Aqsis::PointArrayModel"

    },
    "Aqsis::PointArrayModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Aqsis__PointArrayModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Aqsis::PointArrayModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Aqsis::PointArrayModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Aqsis__PointArrayModel.data,
    qt_meta_data_Aqsis__PointArrayModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Aqsis::PointArrayModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Aqsis::PointArrayModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Aqsis__PointArrayModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Aqsis::PointArrayModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Aqsis__PointView_t {
    QByteArrayData data[12];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Aqsis__PointView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Aqsis__PointView_t qt_meta_stringdata_Aqsis__PointView = {
    {
QT_MOC_LITERAL(0, 0, 16), // "Aqsis::PointView"
QT_MOC_LITERAL(1, 17, 20), // "colorChannelsChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 8), // "channels"
QT_MOC_LITERAL(4, 48, 13), // "setBackground"
QT_MOC_LITERAL(5, 62, 3), // "col"
QT_MOC_LITERAL(6, 66, 10), // "setVisMode"
QT_MOC_LITERAL(7, 77, 7), // "VisMode"
QT_MOC_LITERAL(8, 85, 4), // "mode"
QT_MOC_LITERAL(9, 90, 15), // "setColorChannel"
QT_MOC_LITERAL(10, 106, 7), // "channel"
QT_MOC_LITERAL(11, 114, 14) // "toggleDrawAxes"

    },
    "Aqsis::PointView\0colorChannelsChanged\0"
    "\0channels\0setBackground\0col\0setVisMode\0"
    "VisMode\0mode\0setColorChannel\0channel\0"
    "toggleDrawAxes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Aqsis__PointView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   42,    2, 0x0a /* Public */,
       6,    1,   45,    2, 0x0a /* Public */,
       9,    1,   48,    2, 0x0a /* Public */,
      11,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,

       0        // eod
};

void Aqsis::PointView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PointView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->colorChannelsChanged((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: _t->setBackground((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 2: _t->setVisMode((*reinterpret_cast< VisMode(*)>(_a[1]))); break;
        case 3: _t->setColorChannel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->toggleDrawAxes(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PointView::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PointView::colorChannelsChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Aqsis::PointView::staticMetaObject = { {
    QMetaObject::SuperData::link<QGLWidget::staticMetaObject>(),
    qt_meta_stringdata_Aqsis__PointView.data,
    qt_meta_data_Aqsis__PointView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Aqsis::PointView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Aqsis::PointView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Aqsis__PointView.stringdata0))
        return static_cast<void*>(this);
    return QGLWidget::qt_metacast(_clname);
}

int Aqsis::PointView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Aqsis::PointView::colorChannelsChanged(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_Aqsis__PointViewerMainWindow_t {
    QByteArrayData data[11];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Aqsis__PointViewerMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Aqsis__PointViewerMainWindow_t qt_meta_stringdata_Aqsis__PointViewerMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Aqsis::PointViewerMainWindow"
QT_MOC_LITERAL(1, 29, 9), // "openFiles"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 10), // "helpDialog"
QT_MOC_LITERAL(4, 51, 11), // "aboutDialog"
QT_MOC_LITERAL(5, 63, 13), // "setBackground"
QT_MOC_LITERAL(6, 77, 4), // "name"
QT_MOC_LITERAL(7, 82, 16), // "chooseBackground"
QT_MOC_LITERAL(8, 99, 13), // "toggleVisMode"
QT_MOC_LITERAL(9, 113, 16), // "setColorChannels"
QT_MOC_LITERAL(10, 130, 8) // "channels"

    },
    "Aqsis::PointViewerMainWindow\0openFiles\0"
    "\0helpDialog\0aboutDialog\0setBackground\0"
    "name\0chooseBackground\0toggleVisMode\0"
    "setColorChannels\0channels"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Aqsis__PointViewerMainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    1,   52,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    1,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   10,

       0        // eod
};

void Aqsis::PointViewerMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PointViewerMainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->openFiles(); break;
        case 1: _t->helpDialog(); break;
        case 2: _t->aboutDialog(); break;
        case 3: _t->setBackground((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->chooseBackground(); break;
        case 5: _t->toggleVisMode(); break;
        case 6: _t->setColorChannels((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Aqsis::PointViewerMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Aqsis__PointViewerMainWindow.data,
    qt_meta_data_Aqsis__PointViewerMainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Aqsis::PointViewerMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Aqsis::PointViewerMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Aqsis__PointViewerMainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Aqsis::PointViewerMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
