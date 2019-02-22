/****************************************************************************
** Meta object code from reading C++ file 'GLAnimationWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../GLAnimationWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GLAnimationWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GLAnimationWindow_t {
    QByteArrayData data[8];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GLAnimationWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GLAnimationWindow_t qt_meta_stringdata_GLAnimationWindow = {
    {
QT_MOC_LITERAL(0, 0, 17), // "GLAnimationWindow"
QT_MOC_LITERAL(1, 18, 9), // "paintedGL"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 13), // "initializedGL"
QT_MOC_LITERAL(4, 43, 21), // "QOpenGLShaderProgram*"
QT_MOC_LITERAL(5, 65, 7), // "resized"
QT_MOC_LITERAL(6, 73, 5), // "width"
QT_MOC_LITERAL(7, 79, 6) // "height"

    },
    "GLAnimationWindow\0paintedGL\0\0initializedGL\0"
    "QOpenGLShaderProgram*\0resized\0width\0"
    "height"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GLAnimationWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    1,   30,    2, 0x06 /* Public */,
       5,    2,   33,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,

       0        // eod
};

void GLAnimationWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GLAnimationWindow *_t = static_cast<GLAnimationWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->paintedGL(); break;
        case 1: _t->initializedGL((*reinterpret_cast< QOpenGLShaderProgram*(*)>(_a[1]))); break;
        case 2: _t->resized((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QOpenGLShaderProgram* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GLAnimationWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLAnimationWindow::paintedGL)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (GLAnimationWindow::*_t)(QOpenGLShaderProgram * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLAnimationWindow::initializedGL)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (GLAnimationWindow::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLAnimationWindow::resized)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject GLAnimationWindow::staticMetaObject = {
    { &QOpenGLWidget::staticMetaObject, qt_meta_stringdata_GLAnimationWindow.data,
      qt_meta_data_GLAnimationWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GLAnimationWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GLAnimationWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GLAnimationWindow.stringdata0))
        return static_cast<void*>(const_cast< GLAnimationWindow*>(this));
    if (!strcmp(_clname, "QOpenGLFunctions_4_5_Core"))
        return static_cast< QOpenGLFunctions_4_5_Core*>(const_cast< GLAnimationWindow*>(this));
    return QOpenGLWidget::qt_metacast(_clname);
}

int GLAnimationWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void GLAnimationWindow::paintedGL()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void GLAnimationWindow::initializedGL(QOpenGLShaderProgram * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GLAnimationWindow::resized(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
