/****************************************************************************
** Meta object code from reading C++ file 'InputFeaturesDisplay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/InputFeaturesDisplay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InputFeaturesDisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InputFeaturesDisplay_t {
    QByteArrayData data[8];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InputFeaturesDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InputFeaturesDisplay_t qt_meta_stringdata_InputFeaturesDisplay = {
    {
QT_MOC_LITERAL(0, 0, 20), // "InputFeaturesDisplay"
QT_MOC_LITERAL(1, 21, 5), // "ended"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "imageAvailable"
QT_MOC_LITERAL(4, 43, 7), // "cv::Mat"
QT_MOC_LITERAL(5, 51, 5), // "image"
QT_MOC_LITERAL(6, 57, 16), // "DetectedFeatures"
QT_MOC_LITERAL(7, 74, 8) // "features"

    },
    "InputFeaturesDisplay\0ended\0\0imageAvailable\0"
    "cv::Mat\0image\0DetectedFeatures\0features"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InputFeaturesDisplay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6,    5,    7,

       0        // eod
};

void InputFeaturesDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InputFeaturesDisplay *_t = static_cast<InputFeaturesDisplay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ended(); break;
        case 1: _t->imageAvailable((*reinterpret_cast< const cv::Mat(*)>(_a[1])),(*reinterpret_cast< const DetectedFeatures(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (InputFeaturesDisplay::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputFeaturesDisplay::ended)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject InputFeaturesDisplay::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_InputFeaturesDisplay.data,
      qt_meta_data_InputFeaturesDisplay,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *InputFeaturesDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InputFeaturesDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InputFeaturesDisplay.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int InputFeaturesDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void InputFeaturesDisplay::ended()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
