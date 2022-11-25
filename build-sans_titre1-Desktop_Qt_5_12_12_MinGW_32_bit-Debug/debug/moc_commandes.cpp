/****************************************************************************
** Meta object code from reading C++ file 'commandes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qt_project/commandes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'commandes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_commandes_t {
    QByteArrayData data[11];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_commandes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_commandes_t qt_meta_stringdata_commandes = {
    {
QT_MOC_LITERAL(0, 0, 9), // "commandes"
QT_MOC_LITERAL(1, 10, 28), // "on_commandLinkButton_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(4, 64, 33), // "on_pushButton_addcommande_cli..."
QT_MOC_LITERAL(5, 98, 33), // "on_pushButton_modcommande_cli..."
QT_MOC_LITERAL(6, 132, 33), // "on_pushButton_supcommande_cli..."
QT_MOC_LITERAL(7, 166, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(8, 190, 43), // "on_lineEdit_numclient_cursorP..."
QT_MOC_LITERAL(9, 234, 4), // "arg1"
QT_MOC_LITERAL(10, 239, 4) // "arg2"

    },
    "commandes\0on_commandLinkButton_clicked\0"
    "\0on_pushButton_4_clicked\0"
    "on_pushButton_addcommande_clicked\0"
    "on_pushButton_modcommande_clicked\0"
    "on_pushButton_supcommande_clicked\0"
    "on_pushButton_5_clicked\0"
    "on_lineEdit_numclient_cursorPositionChanged\0"
    "arg1\0arg2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_commandes[] = {

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
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    2,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,

       0        // eod
};

void commandes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<commandes *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_commandLinkButton_clicked(); break;
        case 1: _t->on_pushButton_4_clicked(); break;
        case 2: _t->on_pushButton_addcommande_clicked(); break;
        case 3: _t->on_pushButton_modcommande_clicked(); break;
        case 4: _t->on_pushButton_supcommande_clicked(); break;
        case 5: _t->on_pushButton_5_clicked(); break;
        //case 6: _t->on_lineEdit_numclient_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject commandes::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_commandes.data,
    qt_meta_data_commandes,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *commandes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *commandes::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_commandes.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int commandes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
