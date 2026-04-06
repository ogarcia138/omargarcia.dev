/****************************************************************************
** Meta object code from reading C++ file 'eqsl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../aqsis/tools/eqsl/eqsl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eqsl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EqslMainWindow_t {
    QByteArrayData data[12];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EqslMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EqslMainWindow_t qt_meta_stringdata_EqslMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 14), // "EqslMainWindow"
QT_MOC_LITERAL(1, 15, 13), // "sendNewStdout"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 3), // "str"
QT_MOC_LITERAL(4, 34, 11), // "aboutDialog"
QT_MOC_LITERAL(5, 46, 10), // "renderFile"
QT_MOC_LITERAL(6, 57, 13), // "compileShader"
QT_MOC_LITERAL(7, 71, 15), // "openFramebuffer"
QT_MOC_LITERAL(8, 87, 19), // "clearCommandHistory"
QT_MOC_LITERAL(9, 107, 19), // "clearConsoleHistory"
QT_MOC_LITERAL(10, 127, 20), // "displayCommandStdout"
QT_MOC_LITERAL(11, 148, 5) // "input"

    },
    "EqslMainWindow\0sendNewStdout\0\0str\0"
    "aboutDialog\0renderFile\0compileShader\0"
    "openFramebuffer\0clearCommandHistory\0"
    "clearConsoleHistory\0displayCommandStdout\0"
    "input"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EqslMainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   57,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    0,   60,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    1,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void EqslMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EqslMainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendNewStdout((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->aboutDialog(); break;
        case 2: _t->renderFile(); break;
        case 3: _t->compileShader(); break;
        case 4: _t->openFramebuffer(); break;
        case 5: _t->clearCommandHistory(); break;
        case 6: _t->clearConsoleHistory(); break;
        case 7: _t->displayCommandStdout((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EqslMainWindow::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EqslMainWindow::sendNewStdout)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EqslMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_EqslMainWindow.data,
    qt_meta_data_EqslMainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EqslMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EqslMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EqslMainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int EqslMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void EqslMainWindow::sendNewStdout(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
