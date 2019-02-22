/****************************************************************************
** Meta object code from reading C++ file 'Hodograph.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Hodograph.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Hodograph.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Hodograph_t {
    QByteArrayData data[10];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Hodograph_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Hodograph_t qt_meta_stringdata_Hodograph = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Hodograph"
QT_MOC_LITERAL(1, 10, 10), // "initialize"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 21), // "QOpenGLShaderProgram*"
QT_MOC_LITERAL(4, 44, 7), // "program"
QT_MOC_LITERAL(5, 52, 12), // "updateGraphs"
QT_MOC_LITERAL(6, 65, 5), // "index"
QT_MOC_LITERAL(7, 71, 3), // "pos"
QT_MOC_LITERAL(8, 75, 3), // "vel"
QT_MOC_LITERAL(9, 79, 3) // "acc"

    },
    "Hodograph\0initialize\0\0QOpenGLShaderProgram*\0"
    "program\0updateGraphs\0index\0pos\0vel\0"
    "acc"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Hodograph[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       5,    4,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double,    6,    7,    8,    9,

       0        // eod
};

void Hodograph::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Hodograph *_t = static_cast<Hodograph *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initialize((*reinterpret_cast< QOpenGLShaderProgram*(*)>(_a[1]))); break;
        case 1: _t->updateGraphs((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QOpenGLShaderProgram* >(); break;
            }
            break;
        }
    }
}

const QMetaObject Hodograph::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Hodograph.data,
      qt_meta_data_Hodograph,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Hodograph::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Hodograph::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Hodograph.stringdata0))
        return static_cast<void*>(const_cast< Hodograph*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Hodograph::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
