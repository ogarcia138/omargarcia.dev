/****************************************************************************
** Meta object code from reading C++ file 'piqsl_ui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../aqsis/tools/piqsl/piqsl_ui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'piqsl_ui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Aqsis__PiqslMainWindow_t {
    QByteArrayData data[8];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Aqsis__PiqslMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Aqsis__PiqslMainWindow_t qt_meta_stringdata_Aqsis__PiqslMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Aqsis::PiqslMainWindow"
QT_MOC_LITERAL(1, 23, 9), // "addImages"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 11), // "removeImage"
QT_MOC_LITERAL(4, 46, 11), // "openLibrary"
QT_MOC_LITERAL(5, 58, 11), // "saveLibrary"
QT_MOC_LITERAL(6, 70, 13), // "saveLibraryAs"
QT_MOC_LITERAL(7, 84, 11) // "aboutDialog"

    },
    "Aqsis::PiqslMainWindow\0addImages\0\0"
    "removeImage\0openLibrary\0saveLibrary\0"
    "saveLibraryAs\0aboutDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Aqsis__PiqslMainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Aqsis::PiqslMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PiqslMainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addImages(); break;
        case 1: _t->removeImage(); break;
        case 2: _t->openLibrary(); break;
        case 3: _t->saveLibrary(); break;
        case 4: _t->saveLibraryAs(); break;
        case 5: _t->aboutDialog(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Aqsis::PiqslMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Aqsis__PiqslMainWindow.data,
    qt_meta_data_Aqsis__PiqslMainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Aqsis::PiqslMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Aqsis::PiqslMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Aqsis__PiqslMainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Aqsis::PiqslMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
struct qt_meta_stringdata_Aqsis__PiqslImageView_t {
    QByteArrayData data[13];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Aqsis__PiqslImageView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Aqsis__PiqslImageView_t qt_meta_stringdata_Aqsis__PiqslImageView = {
    {
QT_MOC_LITERAL(0, 0, 21), // "Aqsis::PiqslImageView"
QT_MOC_LITERAL(1, 22, 19), // "changeSelectedImage"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 14), // "QItemSelection"
QT_MOC_LITERAL(4, 58, 8), // "selected"
QT_MOC_LITERAL(5, 67, 10), // "deselected"
QT_MOC_LITERAL(6, 78, 11), // "centerImage"
QT_MOC_LITERAL(7, 90, 12), // "imageUpdated"
QT_MOC_LITERAL(8, 103, 1), // "x"
QT_MOC_LITERAL(9, 105, 1), // "y"
QT_MOC_LITERAL(10, 107, 1), // "w"
QT_MOC_LITERAL(11, 109, 1), // "h"
QT_MOC_LITERAL(12, 111, 12) // "imageResized"

    },
    "Aqsis::PiqslImageView\0changeSelectedImage\0"
    "\0QItemSelection\0selected\0deselected\0"
    "centerImage\0imageUpdated\0x\0y\0w\0h\0"
    "imageResized"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Aqsis__PiqslImageView[] = {

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
       1,    2,   34,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,
       7,    4,   40,    2, 0x08 /* Private */,
      12,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    8,    9,   10,   11,
    QMetaType::Void,

       0        // eod
};

void Aqsis::PiqslImageView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PiqslImageView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changeSelectedImage((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 1: _t->centerImage(); break;
        case 2: _t->imageUpdated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 3: _t->imageResized(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Aqsis::PiqslImageView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Aqsis__PiqslImageView.data,
    qt_meta_data_Aqsis__PiqslImageView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Aqsis::PiqslImageView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Aqsis::PiqslImageView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Aqsis__PiqslImageView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Aqsis::PiqslImageView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_Aqsis__PiqslListView_t {
    QByteArrayData data[7];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Aqsis__PiqslListView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Aqsis__PiqslListView_t qt_meta_stringdata_Aqsis__PiqslListView = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Aqsis::PiqslListView"
QT_MOC_LITERAL(1, 21, 12), // "rowsInserted"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 47, 6), // "parent"
QT_MOC_LITERAL(5, 54, 5), // "start"
QT_MOC_LITERAL(6, 60, 3) // "end"

    },
    "Aqsis::PiqslListView\0rowsInserted\0\0"
    "QModelIndex\0parent\0start\0end"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Aqsis__PiqslListView[] = {

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
       1,    3,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,

       0        // eod
};

void Aqsis::PiqslListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PiqslListView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->rowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Aqsis::PiqslListView::staticMetaObject = { {
    QMetaObject::SuperData::link<QListView::staticMetaObject>(),
    qt_meta_stringdata_Aqsis__PiqslListView.data,
    qt_meta_data_Aqsis__PiqslListView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Aqsis::PiqslListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Aqsis::PiqslListView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Aqsis__PiqslListView.stringdata0))
        return static_cast<void*>(this);
    return QListView::qt_metacast(_clname);
}

int Aqsis::PiqslListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Aqsis__ImageListDelegate_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Aqsis__ImageListDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Aqsis__ImageListDelegate_t qt_meta_stringdata_Aqsis__ImageListDelegate = {
    {
QT_MOC_LITERAL(0, 0, 24) // "Aqsis::ImageListDelegate"

    },
    "Aqsis::ImageListDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Aqsis__ImageListDelegate[] = {

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

void Aqsis::ImageListDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Aqsis::ImageListDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QStyledItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_Aqsis__ImageListDelegate.data,
    qt_meta_data_Aqsis__ImageListDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Aqsis::ImageListDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Aqsis::ImageListDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Aqsis__ImageListDelegate.stringdata0))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int Aqsis::ImageListDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
