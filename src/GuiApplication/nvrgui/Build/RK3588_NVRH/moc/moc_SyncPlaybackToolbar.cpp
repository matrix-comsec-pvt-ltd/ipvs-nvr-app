/****************************************************************************
** Meta object code from reading C++ file 'SyncPlaybackToolbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Controls/SyncPlayback/SyncPlaybackToolbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SyncPlaybackToolbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SyncPlaybackToolbar_t {
    QByteArrayData data[18];
    char stringdata0[300];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SyncPlaybackToolbar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SyncPlaybackToolbar_t qt_meta_stringdata_SyncPlaybackToolbar = {
    {
QT_MOC_LITERAL(0, 0, 19), // "SyncPlaybackToolbar"
QT_MOC_LITERAL(1, 20, 22), // "sigFocusToOtherElement"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 17), // "isPrevoiusElement"
QT_MOC_LITERAL(4, 62, 23), // "sigUpdateCurrentElement"
QT_MOC_LITERAL(5, 86, 5), // "index"
QT_MOC_LITERAL(6, 92, 23), // "sigToolbarButtonClicked"
QT_MOC_LITERAL(7, 116, 28), // "SYNCPB_TOOLBAR_BUTTON_TYPE_e"
QT_MOC_LITERAL(8, 145, 12), // "STATE_TYPE_e"
QT_MOC_LITERAL(9, 158, 5), // "state"
QT_MOC_LITERAL(10, 164, 15), // "sigChangeLayout"
QT_MOC_LITERAL(11, 180, 13), // "LAYOUT_TYPE_e"
QT_MOC_LITERAL(12, 194, 11), // "iLayoutType"
QT_MOC_LITERAL(13, 206, 17), // "slotButtonClicked"
QT_MOC_LITERAL(14, 224, 24), // "slotUpdateCurrentElement"
QT_MOC_LITERAL(15, 249, 19), // "slotShowHideTooltip"
QT_MOC_LITERAL(16, 269, 13), // "toShowTooltip"
QT_MOC_LITERAL(17, 283, 16) // "slotChangeLayout"

    },
    "SyncPlaybackToolbar\0sigFocusToOtherElement\0"
    "\0isPrevoiusElement\0sigUpdateCurrentElement\0"
    "index\0sigToolbarButtonClicked\0"
    "SYNCPB_TOOLBAR_BUTTON_TYPE_e\0STATE_TYPE_e\0"
    "state\0sigChangeLayout\0LAYOUT_TYPE_e\0"
    "iLayoutType\0slotButtonClicked\0"
    "slotUpdateCurrentElement\0slotShowHideTooltip\0"
    "toShowTooltip\0slotChangeLayout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SyncPlaybackToolbar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       6,    2,   60,    2, 0x06 /* Public */,
      10,    1,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    2,   68,    2, 0x0a /* Public */,
      14,    1,   73,    2, 0x0a /* Public */,
      15,    2,   76,    2, 0x0a /* Public */,
      17,    1,   81,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 8,    5,    9,
    QMetaType::Void, 0x80000000 | 11,   12,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 8,    5,    9,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    5,   16,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void SyncPlaybackToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SyncPlaybackToolbar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sigFocusToOtherElement((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->sigUpdateCurrentElement((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sigToolbarButtonClicked((*reinterpret_cast< SYNCPB_TOOLBAR_BUTTON_TYPE_e(*)>(_a[1])),(*reinterpret_cast< STATE_TYPE_e(*)>(_a[2]))); break;
        case 3: _t->sigChangeLayout((*reinterpret_cast< LAYOUT_TYPE_e(*)>(_a[1]))); break;
        case 4: _t->slotButtonClicked((*reinterpret_cast< SYNCPB_TOOLBAR_BUTTON_TYPE_e(*)>(_a[1])),(*reinterpret_cast< STATE_TYPE_e(*)>(_a[2]))); break;
        case 5: _t->slotUpdateCurrentElement((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slotShowHideTooltip((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->slotChangeLayout((*reinterpret_cast< LAYOUT_TYPE_e(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SyncPlaybackToolbar::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SyncPlaybackToolbar::sigFocusToOtherElement)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SyncPlaybackToolbar::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SyncPlaybackToolbar::sigUpdateCurrentElement)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SyncPlaybackToolbar::*)(SYNCPB_TOOLBAR_BUTTON_TYPE_e , STATE_TYPE_e );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SyncPlaybackToolbar::sigToolbarButtonClicked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SyncPlaybackToolbar::*)(LAYOUT_TYPE_e );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SyncPlaybackToolbar::sigChangeLayout)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SyncPlaybackToolbar::staticMetaObject = { {
    QMetaObject::SuperData::link<KeyBoard::staticMetaObject>(),
    qt_meta_stringdata_SyncPlaybackToolbar.data,
    qt_meta_data_SyncPlaybackToolbar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SyncPlaybackToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SyncPlaybackToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SyncPlaybackToolbar.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "NavigationControl"))
        return static_cast< NavigationControl*>(this);
    return KeyBoard::qt_metacast(_clname);
}

int SyncPlaybackToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KeyBoard::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void SyncPlaybackToolbar::sigFocusToOtherElement(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SyncPlaybackToolbar::sigUpdateCurrentElement(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SyncPlaybackToolbar::sigToolbarButtonClicked(SYNCPB_TOOLBAR_BUTTON_TYPE_e _t1, STATE_TYPE_e _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SyncPlaybackToolbar::sigChangeLayout(LAYOUT_TYPE_e _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
