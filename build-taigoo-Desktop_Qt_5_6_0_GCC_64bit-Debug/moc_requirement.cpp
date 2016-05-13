/****************************************************************************
** Meta object code from reading C++ file 'requirement.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../taigoo/requirement.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'requirement.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Requirement_t {
    QByteArrayData data[11];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Requirement_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Requirement_t qt_meta_stringdata_Requirement = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Requirement"
QT_MOC_LITERAL(1, 12, 13), // "keyPressEvent"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 10), // "QKeyEvent*"
QT_MOC_LITERAL(4, 38, 1), // "k"
QT_MOC_LITERAL(5, 40, 11), // "setSpectral"
QT_MOC_LITERAL(6, 52, 11), // "count_score"
QT_MOC_LITERAL(7, 64, 7), // "starter"
QT_MOC_LITERAL(8, 72, 6), // "timing"
QT_MOC_LITERAL(9, 79, 7), // "deleted"
QT_MOC_LITERAL(10, 87, 11) // "show_result"

    },
    "Requirement\0keyPressEvent\0\0QKeyEvent*\0"
    "k\0setSpectral\0count_score\0starter\0"
    "timing\0deleted\0show_result"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Requirement[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    1,   53,    2, 0x0a /* Public */,
       7,    0,   56,    2, 0x0a /* Public */,
       8,    0,   57,    2, 0x0a /* Public */,
       9,    0,   58,    2, 0x0a /* Public */,
      10,    0,   59,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Requirement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Requirement *_t = static_cast<Requirement *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 1: _t->setSpectral(); break;
        case 2: _t->count_score((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->starter(); break;
        case 4: _t->timing(); break;
        case 5: _t->deleted(); break;
        case 6: _t->show_result(); break;
        default: ;
        }
    }
}

const QMetaObject Requirement::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Requirement.data,
      qt_meta_data_Requirement,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Requirement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Requirement::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Requirement.stringdata0))
        return static_cast<void*>(const_cast< Requirement*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Requirement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
