/****************************************************************************
** Meta object code from reading C++ file 'LayoutListButton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Controls/LayoutListButton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LayoutListButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LayoutListButton_t {
    QByteArrayData data[6];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LayoutListButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LayoutListButton_t qt_meta_stringdata_LayoutListButton = {
    {
QT_MOC_LITERAL(0, 0, 16), // "LayoutListButton"
QT_MOC_LITERAL(1, 17, 16), // "sigButtonClicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "index"
QT_MOC_LITERAL(4, 41, 23), // "sigUpdateCurrentElement"
QT_MOC_LITERAL(5, 65, 27) // "slotClickEffectTimerTimeout"

    },
    "LayoutListButton\0sigButtonClicked\0\0"
    "index\0sigUpdateCurrentElement\0"
    "slotClickEffectTimerTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LayoutListButton[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void LayoutListButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LayoutListButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sigButtonClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sigUpdateCurrentElement((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slotClickEffectTimerTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LayoutListButton::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LayoutListButton::sigButtonClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LayoutListButton::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LayoutListButton::sigUpdateCurrentElement)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LayoutListButton::staticMetaObject = { {
    QMetaObject::SuperData::link<KeyBoard::staticMetaObject>(),
    qt_meta_stringdata_LayoutListButton.data,
    qt_meta_data_LayoutListButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LayoutListButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LayoutListButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LayoutListButton.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "NavigationControl"))
        return static_cast< NavigationControl*>(this);
    return KeyBoard::qt_metacast(_clname);
}

int LayoutListButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void LayoutListButton::sigButtonClicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LayoutListButton::sigUpdateCurrentElement(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
