/****************************************************************************
** Meta object code from reading C++ file 'Scene.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Scene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Scene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Scene_t {
    QByteArrayData data[20];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scene_t qt_meta_stringdata_Scene = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Scene"
QT_MOC_LITERAL(1, 6, 13), // "dataRequested"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 4), // "draw"
QT_MOC_LITERAL(4, 26, 13), // "resizedWindow"
QT_MOC_LITERAL(5, 40, 5), // "width"
QT_MOC_LITERAL(6, 46, 6), // "height"
QT_MOC_LITERAL(7, 53, 12), // "rotateCircle"
QT_MOC_LITERAL(8, 66, 5), // "angle"
QT_MOC_LITERAL(9, 72, 13), // "updatePhysics"
QT_MOC_LITERAL(10, 86, 7), // "moveBob"
QT_MOC_LITERAL(11, 94, 4), // "posX"
QT_MOC_LITERAL(12, 99, 13), // "updateCircleR"
QT_MOC_LITERAL(13, 113, 6), // "radius"
QT_MOC_LITERAL(14, 120, 18), // "updateSpringLength"
QT_MOC_LITERAL(15, 139, 21), // "updateAngularVelocity"
QT_MOC_LITERAL(16, 161, 8), // "velocity"
QT_MOC_LITERAL(17, 170, 11), // "updateError"
QT_MOC_LITERAL(18, 182, 5), // "error"
QT_MOC_LITERAL(19, 188, 14) // "getPhysicsData"

    },
    "Scene\0dataRequested\0\0draw\0resizedWindow\0"
    "width\0height\0rotateCircle\0angle\0"
    "updatePhysics\0moveBob\0posX\0updateCircleR\0"
    "radius\0updateSpringLength\0"
    "updateAngularVelocity\0velocity\0"
    "updateError\0error\0getPhysicsData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scene[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   78,    2, 0x08 /* Private */,
       4,    2,   79,    2, 0x08 /* Private */,
       7,    1,   84,    2, 0x08 /* Private */,
       9,    0,   87,    2, 0x08 /* Private */,
      10,    1,   88,    2, 0x08 /* Private */,
      12,    1,   91,    2, 0x08 /* Private */,
      14,    1,   94,    2, 0x08 /* Private */,
      15,    1,   97,    2, 0x08 /* Private */,
      17,    1,  100,    2, 0x08 /* Private */,
      19,    0,  103,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   11,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   16,
    QMetaType::Void, QMetaType::Double,   18,
    QMetaType::Void,

       0        // eod
};

void Scene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Scene *_t = static_cast<Scene *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataRequested((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 1: _t->draw(); break;
        case 2: _t->resizedWindow((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->rotateCircle((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->updatePhysics(); break;
        case 5: _t->moveBob((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->updateCircleR((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->updateSpringLength((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->updateAngularVelocity((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->updateError((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->getPhysicsData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Scene::*_t)(int , double , double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scene::dataRequested)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Scene::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Scene.data,
      qt_meta_data_Scene,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Scene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scene::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Scene.stringdata0))
        return static_cast<void*>(const_cast< Scene*>(this));
    return QObject::qt_metacast(_clname);
}

int Scene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Scene::dataRequested(int _t1, double _t2, double _t3, double _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
