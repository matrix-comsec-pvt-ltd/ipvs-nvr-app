/****************************************************************************
** Meta object code from reading C++ file 'ImageAppearenceSettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../ConfigPages/CameraSettings/ImageAppearenceSettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ImageAppearenceSettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ImageAppearenceSettings_t {
    QByteArrayData data[12];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImageAppearenceSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImageAppearenceSettings_t qt_meta_stringdata_ImageAppearenceSettings = {
    {
QT_MOC_LITERAL(0, 0, 23), // "ImageAppearenceSettings"
QT_MOC_LITERAL(1, 24, 22), // "slotCloseButtonClicked"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 11), // "indexInPage"
QT_MOC_LITERAL(4, 60, 16), // "slotValueChanged"
QT_MOC_LITERAL(5, 77, 12), // "changedValue"
QT_MOC_LITERAL(6, 90, 10), // "sliderMove"
QT_MOC_LITERAL(7, 101, 23), // "slotConfigButtonClicked"
QT_MOC_LITERAL(8, 125, 5), // "index"
QT_MOC_LITERAL(9, 131, 24), // "slotUpdateCurrentElement"
QT_MOC_LITERAL(10, 156, 19), // "slotTextValueAppend"
QT_MOC_LITERAL(11, 176, 3) // "str"

    },
    "ImageAppearenceSettings\0slotCloseButtonClicked\0"
    "\0indexInPage\0slotValueChanged\0"
    "changedValue\0sliderMove\0slotConfigButtonClicked\0"
    "index\0slotUpdateCurrentElement\0"
    "slotTextValueAppend\0str"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageAppearenceSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    3,   42,    2, 0x0a /* Public */,
       7,    1,   49,    2, 0x0a /* Public */,
       9,    1,   52,    2, 0x0a /* Public */,
      10,    2,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    5,    3,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   11,    8,

       0        // eod
};

void ImageAppearenceSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ImageAppearenceSettings *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotCloseButtonClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slotValueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->slotConfigButtonClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slotUpdateCurrentElement((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slotTextValueAppend((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ImageAppearenceSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<BackGround::staticMetaObject>(),
    qt_meta_stringdata_ImageAppearenceSettings.data,
    qt_meta_data_ImageAppearenceSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ImageAppearenceSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageAppearenceSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ImageAppearenceSettings.stringdata0))
        return static_cast<void*>(this);
    return BackGround::qt_metacast(_clname);
}

int ImageAppearenceSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BackGround::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
