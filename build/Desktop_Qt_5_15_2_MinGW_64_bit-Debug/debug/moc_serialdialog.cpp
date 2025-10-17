/****************************************************************************
** Meta object code from reading C++ file 'serialdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../source/communicate/serialcom/serialdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serialdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SerialDialog_t {
    QByteArrayData data[20];
    char stringdata0[221];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialDialog_t qt_meta_stringdata_SerialDialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SerialDialog"
QT_MOC_LITERAL(1, 13, 11), // "zhComIsOpen"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 12), // "zhComIsClose"
QT_MOC_LITERAL(4, 39, 15), // "saveParamSignal"
QT_MOC_LITERAL(5, 55, 8), // "paramMap"
QT_MOC_LITERAL(6, 64, 16), // "comIsOpenChanged"
QT_MOC_LITERAL(7, 81, 10), // "hasReadMsg"
QT_MOC_LITERAL(8, 92, 10), // "hasSendIns"
QT_MOC_LITERAL(9, 103, 3), // "ins"
QT_MOC_LITERAL(10, 107, 11), // "hasReplyIns"
QT_MOC_LITERAL(11, 119, 6), // "closed"
QT_MOC_LITERAL(12, 126, 7), // "openCom"
QT_MOC_LITERAL(13, 134, 8), // "closeCom"
QT_MOC_LITERAL(14, 143, 7), // "hasOpen"
QT_MOC_LITERAL(15, 151, 8), // "hasClose"
QT_MOC_LITERAL(16, 160, 12), // "controlTools"
QT_MOC_LITERAL(17, 173, 11), // "readMessage"
QT_MOC_LITERAL(18, 185, 13), // "handleMessage"
QT_MOC_LITERAL(19, 199, 21) // "getInsFromReceiveData"

    },
    "SerialDialog\0zhComIsOpen\0\0zhComIsClose\0"
    "saveParamSignal\0paramMap\0comIsOpenChanged\0"
    "hasReadMsg\0hasSendIns\0ins\0hasReplyIns\0"
    "closed\0openCom\0closeCom\0hasOpen\0"
    "hasClose\0controlTools\0readMessage\0"
    "handleMessage\0getInsFromReceiveData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    0,   95,    2, 0x06 /* Public */,
       4,    1,   96,    2, 0x06 /* Public */,
       6,    0,   99,    2, 0x06 /* Public */,
       7,    0,  100,    2, 0x06 /* Public */,
       8,    1,  101,    2, 0x06 /* Public */,
      10,    1,  104,    2, 0x06 /* Public */,
      11,    0,  107,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,  108,    2, 0x08 /* Private */,
      13,    0,  109,    2, 0x08 /* Private */,
      14,    0,  110,    2, 0x08 /* Private */,
      15,    0,  111,    2, 0x08 /* Private */,
      16,    0,  112,    2, 0x08 /* Private */,
      17,    0,  113,    2, 0x08 /* Private */,
      18,    0,  114,    2, 0x08 /* Private */,
      19,    0,  115,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    9,
    QMetaType::Void, QMetaType::QByteArray,    9,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SerialDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SerialDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->zhComIsOpen(); break;
        case 1: _t->zhComIsClose(); break;
        case 2: _t->saveParamSignal((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 3: _t->comIsOpenChanged(); break;
        case 4: _t->hasReadMsg(); break;
        case 5: _t->hasSendIns((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 6: _t->hasReplyIns((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 7: _t->closed(); break;
        case 8: _t->openCom(); break;
        case 9: _t->closeCom(); break;
        case 10: _t->hasOpen(); break;
        case 11: _t->hasClose(); break;
        case 12: _t->controlTools(); break;
        case 13: _t->readMessage(); break;
        case 14: _t->handleMessage(); break;
        case 15: _t->getInsFromReceiveData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SerialDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialDialog::zhComIsOpen)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SerialDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialDialog::zhComIsClose)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SerialDialog::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialDialog::saveParamSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SerialDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialDialog::comIsOpenChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SerialDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialDialog::hasReadMsg)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SerialDialog::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialDialog::hasSendIns)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SerialDialog::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialDialog::hasReplyIns)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SerialDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialDialog::closed)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SerialDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_SerialDialog.data,
    qt_meta_data_SerialDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SerialDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SerialDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SerialDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void SerialDialog::zhComIsOpen()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SerialDialog::zhComIsClose()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SerialDialog::saveParamSignal(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SerialDialog::comIsOpenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SerialDialog::hasReadMsg()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SerialDialog::hasSendIns(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SerialDialog::hasReplyIns(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void SerialDialog::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
