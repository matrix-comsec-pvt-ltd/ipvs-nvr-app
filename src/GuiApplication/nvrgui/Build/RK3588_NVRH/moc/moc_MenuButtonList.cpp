/****************************************************************************
** Meta object code from reading C++ file 'MenuButtonList.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Controls/MenuButtonList.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MenuButtonList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MenuButtonList_t {
    QByteArrayData data[7];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MenuButtonList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MenuButtonList_t qt_meta_stringdata_MenuButtonList = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MenuButtonList"
QT_MOC_LITERAL(1, 15, 15), // "sigMenuSelected"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 10), // "menuString"
QT_MOC_LITERAL(4, 43, 5), // "index"
QT_MOC_LITERAL(5, 49, 21), // "slotMenuButtonClicked"
QT_MOC_LITERAL(6, 71, 24) // "slotUpdateCurrentElement"

    },
    "MenuButtonList\0sigMenuSelected\0\0"
    "menuString\0index\0slotMenuButtonClicked\0"
    "slotUpdateCurrentElement"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MenuButtonList[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   34,    2, 0x0a /* Public */,
       6,    1,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UChar,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void MenuButtonList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MenuButtonList *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sigMenuSelected((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 1: _t->slotMenuButtonClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slotUpdateCurrentElement((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MenuButtonList::*)(QString , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MenuButtonList::sigMenuSelected)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MenuButtonList::staticMetaObject = { {
    QMetaObject::SuperData::link<KeyBoard::staticMetaObject>(),
    qt_meta_stringdata_MenuButtonList.data,
    qt_meta_data_MenuButtonList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MenuButtonList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MenuButtonList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MenuButtonList.stringdata0))
        return static_cast<void*>(this);
    return KeyBoard::qt_metacast(_clname);
}

int MenuButtonList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KeyBoard::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void MenuButtonList::sigMenuSelected(QString _t1, quint8 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
