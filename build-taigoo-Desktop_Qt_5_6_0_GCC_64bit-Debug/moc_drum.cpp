/****************************************************************************
** Meta object code from reading C++ file 'drum.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../taigoo/drum.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drum.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_drum_t {
    QByteArrayData data[9];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_drum_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_drum_t qt_meta_stringdata_drum = {
    {
QT_MOC_LITERAL(0, 0, 4), // "drum"
QT_MOC_LITERAL(1, 5, 12), // "destroy_drum"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 12), // "setStartTime"
QT_MOC_LITERAL(4, 32, 7), // "appearT"
QT_MOC_LITERAL(5, 40, 12), // "getStartTime"
QT_MOC_LITERAL(6, 53, 7), // "setDrum"
QT_MOC_LITERAL(7, 61, 7), // "getDrum"
QT_MOC_LITERAL(8, 69, 4) // "move"

    },
    "drum\0destroy_drum\0\0setStartTime\0appearT\0"
    "getStartTime\0setDrum\0getDrum\0move"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_drum[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   45,    2, 0x0a /* Public */,
       5,    0,   48,    2, 0x0a /* Public */,
       6,    0,   49,    2, 0x0a /* Public */,
       7,    0,   50,    2, 0x0a /* Public */,
       8,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void,

       0        // eod
};

void drum::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        drum *_t = static_cast<drum *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->destroy_drum(); break;
        case 1: _t->setStartTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: { int _r = _t->getStartTime();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: _t->setDrum(); break;
        case 4: { int _r = _t->getDrum();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: _t->move(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (drum::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&drum::destroy_drum)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject drum::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_drum.data,
      qt_meta_data_drum,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *drum::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *drum::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_drum.stringdata0))
        return static_cast<void*>(const_cast< drum*>(this));
    if (!strcmp(_clname, "QGraphicsPixmapItem"))
        return static_cast< QGraphicsPixmapItem*>(const_cast< drum*>(this));
    return QObject::qt_metacast(_clname);
}

int drum::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void drum::destroy_drum()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
