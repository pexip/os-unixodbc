/****************************************************************************
** Meta object code from reading C++ file 'CHelp.h'
**
** Created: Tue Sep 2 11:02:50 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CHelp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CHelp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_CHelp[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CHelp[] = {
    "CHelp\0\0slotToggleView()\0"
};

const QMetaObject CHelp::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CHelp,
      qt_meta_data_CHelp, 0 }
};

const QMetaObject *CHelp::metaObject() const
{
    return &staticMetaObject;
}

void *CHelp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CHelp))
	return static_cast<void*>(const_cast< CHelp*>(this));
    return QWidget::qt_metacast(_clname);
}

int CHelp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotToggleView(); break;
        }
        _id -= 1;
    }
    return _id;
}
