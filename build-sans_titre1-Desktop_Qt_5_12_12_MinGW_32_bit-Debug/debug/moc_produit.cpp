/****************************************************************************
** Meta object code from reading C++ file 'produit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qt_project/produit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'produit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_produit_t {
    QByteArrayData data[9];
    char stringdata0[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_produit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_produit_t qt_meta_stringdata_produit = {
    {
QT_MOC_LITERAL(0, 0, 7), // "produit"
QT_MOC_LITERAL(1, 8, 28), // "on_commandLinkButton_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 34), // "on_pushButton_recherchprod_cl..."
QT_MOC_LITERAL(4, 73, 29), // "on_pushButton_modprod_clicked"
QT_MOC_LITERAL(5, 103, 31), // "on_pushButton_creatprod_clicked"
QT_MOC_LITERAL(6, 135, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(7, 159, 29), // "on_pushButton_supprod_clicked"
QT_MOC_LITERAL(8, 189, 30) // "on_commandLinkButton_2_clicked"

    },
    "produit\0on_commandLinkButton_clicked\0"
    "\0on_pushButton_recherchprod_clicked\0"
    "on_pushButton_modprod_clicked\0"
    "on_pushButton_creatprod_clicked\0"
    "on_pushButton_5_clicked\0"
    "on_pushButton_supprod_clicked\0"
    "on_commandLinkButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_produit[] = {

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
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void produit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<produit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_commandLinkButton_clicked(); break;
        case 1: _t->on_pushButton_recherchprod_clicked(); break;
        case 2: _t->on_pushButton_modprod_clicked(); break;
        case 3: _t->on_pushButton_creatprod_clicked(); break;
        case 4: _t->on_pushButton_5_clicked(); break;
        case 5: _t->on_pushButton_supprod_clicked(); break;
        case 6: _t->on_commandLinkButton_2_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject produit::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_produit.data,
    qt_meta_data_produit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *produit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *produit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_produit.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int produit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
