/****************************************************************************
** Meta object code from reading C++ file 'DebuggerCore.h'
**
** Created: Sat Sep 15 17:41:13 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../win32/DebuggerCore.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DebuggerCore.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DebuggerCore[] = {

 // content:
       6,       // revision
       0,       // classname
       2,   14, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
      24,   13,
      54,   31,

       0        // eod
};

static const char qt_meta_stringdata_DebuggerCore[] = {
    "DebuggerCore\0Evan Teran\0author\0"
    "http://www.codef00.com\0url\0"
};

void DebuggerCore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DebuggerCore::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DebuggerCore::staticMetaObject = {
    { &DebuggerCoreBase::staticMetaObject, qt_meta_stringdata_DebuggerCore,
      qt_meta_data_DebuggerCore, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DebuggerCore::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DebuggerCore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DebuggerCore::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DebuggerCore))
        return static_cast<void*>(const_cast< DebuggerCore*>(this));
    if (!strcmp(_clname, "EDB.DebuggerCoreInterface/1.0"))
        return static_cast< DebuggerCoreInterface*>(const_cast< DebuggerCore*>(this));
    return DebuggerCoreBase::qt_metacast(_clname);
}

int DebuggerCore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DebuggerCoreBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
