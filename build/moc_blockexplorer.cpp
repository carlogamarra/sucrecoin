/****************************************************************************
** Meta object code from reading C++ file 'blockexplorer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/blockexplorer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'blockexplorer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BlockExplorer_t {
    QByteArrayData data[7];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BlockExplorer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BlockExplorer_t qt_meta_stringdata_BlockExplorer = {
    {
QT_MOC_LITERAL(0, 0, 13), // "BlockExplorer"
QT_MOC_LITERAL(1, 14, 12), // "blockClicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 9), // "txClicked"
QT_MOC_LITERAL(4, 38, 14), // "updateExplorer"
QT_MOC_LITERAL(5, 53, 17), // "gotoBlockExplorer"
QT_MOC_LITERAL(6, 71, 4) // "TxID"

    },
    "BlockExplorer\0blockClicked\0\0txClicked\0"
    "updateExplorer\0gotoBlockExplorer\0TxID"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BlockExplorer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    1,   41,    2, 0x0a /* Public */,
       5,    1,   44,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x28 /* Private | MethodCloned */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

       0        // eod
};

void BlockExplorer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BlockExplorer *_t = static_cast<BlockExplorer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->blockClicked(); break;
        case 1: _t->txClicked(); break;
        case 2: _t->updateExplorer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->gotoBlockExplorer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->gotoBlockExplorer(); break;
        default: ;
        }
    }
}

const QMetaObject BlockExplorer::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BlockExplorer.data,
      qt_meta_data_BlockExplorer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BlockExplorer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BlockExplorer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BlockExplorer.stringdata0))
        return static_cast<void*>(const_cast< BlockExplorer*>(this));
    return QDialog::qt_metacast(_clname);
}

int BlockExplorer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
