/****************************************************************************
** Meta object code from reading C++ file 'viewanimals.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../deliverable4-code/viewanimals.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewanimals.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ViewAnimals_t {
    QByteArrayData data[9];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ViewAnimals_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ViewAnimals_t qt_meta_stringdata_ViewAnimals = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ViewAnimals"
QT_MOC_LITERAL(1, 12, 25), // "on_animalList_itemClicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 21), // "on_filterDogs_clicked"
QT_MOC_LITERAL(4, 61, 21), // "on_filterCats_clicked"
QT_MOC_LITERAL(5, 83, 22), // "on_filterBirds_clicked"
QT_MOC_LITERAL(6, 106, 24), // "on_filterLizards_clicked"
QT_MOC_LITERAL(7, 131, 24), // "on_filterRabbits_clicked"
QT_MOC_LITERAL(8, 156, 22) // "on_bEditAnimal_clicked"

    },
    "ViewAnimals\0on_animalList_itemClicked\0"
    "\0on_filterDogs_clicked\0on_filterCats_clicked\0"
    "on_filterBirds_clicked\0on_filterLizards_clicked\0"
    "on_filterRabbits_clicked\0"
    "on_bEditAnimal_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewAnimals[] = {

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

void ViewAnimals::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ViewAnimals *_t = static_cast<ViewAnimals *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_animalList_itemClicked(); break;
        case 1: _t->on_filterDogs_clicked(); break;
        case 2: _t->on_filterCats_clicked(); break;
        case 3: _t->on_filterBirds_clicked(); break;
        case 4: _t->on_filterLizards_clicked(); break;
        case 5: _t->on_filterRabbits_clicked(); break;
        case 6: _t->on_bEditAnimal_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ViewAnimals::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ViewAnimals.data,
      qt_meta_data_ViewAnimals,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ViewAnimals::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ViewAnimals::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ViewAnimals.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ViewAnimals::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
