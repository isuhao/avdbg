/****************************************************************************
** Meta object code from reading C++ file 'DialogOpcodes.h'
**
** Created: Sat Sep 15 17:41:31 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../DialogOpcodes.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogOpcodes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogOpcodes[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      36,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DialogOpcodes[] = {
    "DialogOpcodes\0\0on_btnFind_clicked()\0"
    "on_listWidget_itemDoubleClicked(QListWidgetItem*)\0"
};

void DialogOpcodes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DialogOpcodes *_t = static_cast<DialogOpcodes *>(_o);
        switch (_id) {
        case 0: _t->on_btnFind_clicked(); break;
        case 1: _t->on_listWidget_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DialogOpcodes::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DialogOpcodes::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogOpcodes,
      qt_meta_data_DialogOpcodes, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogOpcodes::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogOpcodes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogOpcodes::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogOpcodes))
        return static_cast<void*>(const_cast< DialogOpcodes*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogOpcodes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE