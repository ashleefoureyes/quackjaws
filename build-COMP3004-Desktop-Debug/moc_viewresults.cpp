/****************************************************************************
** Meta object code from reading C++ file 'viewresults.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../deliverable4-code/viewresults.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewresults.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ViewResults_t {
    QByteArrayData data[11];
    char stringdata0[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ViewResults_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ViewResults_t qt_meta_stringdata_ViewResults = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ViewResults"
QT_MOC_LITERAL(1, 12, 34), // "on_listClientsDetailed_itemCl..."
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(4, 65, 4), // "item"
QT_MOC_LITERAL(5, 70, 34), // "on_listAnimalsDetailed_itemCl..."
QT_MOC_LITERAL(6, 105, 21), // "on_buttonNext_clicked"
QT_MOC_LITERAL(7, 127, 21), // "on_buttonBack_clicked"
QT_MOC_LITERAL(8, 149, 34), // "on_buttonDetailedMatchInfo_cl..."
QT_MOC_LITERAL(9, 184, 39), // "on_listOptimalMatches_current..."
QT_MOC_LITERAL(10, 224, 10) // "currentRow"

    },
    "ViewResults\0on_listClientsDetailed_itemClicked\0"
    "\0QListWidgetItem*\0item\0"
    "on_listAnimalsDetailed_itemClicked\0"
    "on_buttonNext_clicked\0on_buttonBack_clicked\0"
    "on_buttonDetailedMatchInfo_clicked\0"
    "on_listOptimalMatches_currentRowChanged\0"
    "currentRow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewResults[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       5,    1,   47,    2, 0x08 /* Private */,
       6,    0,   50,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    1,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void ViewResults::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ViewResults *_t = static_cast<ViewResults *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_listClientsDetailed_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->on_listAnimalsDetailed_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->on_buttonNext_clicked(); break;
        case 3: _t->on_buttonBack_clicked(); break;
        case 4: _t->on_buttonDetailedMatchInfo_clicked(); break;
        case 5: _t->on_listOptimalMatches_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ViewResults::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ViewResults.data,
      qt_meta_data_ViewResults,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ViewResults::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ViewResults::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ViewResults.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ViewResults::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
