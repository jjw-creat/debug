/****************************************************************************
** Meta object code from reading C++ file 'logdebug.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../source/logdebug/logdebug.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logdebug.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LogDebug_t {
    QByteArrayData data[21];
    char stringdata0[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogDebug_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogDebug_t qt_meta_stringdata_LogDebug = {
    {
QT_MOC_LITERAL(0, 0, 8), // "LogDebug"
QT_MOC_LITERAL(1, 9, 6), // "closed"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 15), // "setconnectState"
QT_MOC_LITERAL(4, 33, 5), // "state"
QT_MOC_LITERAL(5, 39, 12), // "setservoType"
QT_MOC_LITERAL(6, 52, 4), // "type"
QT_MOC_LITERAL(7, 57, 13), // "setservoTable"
QT_MOC_LITERAL(8, 71, 12), // "ServoInfoMap"
QT_MOC_LITERAL(9, 84, 4), // "info"
QT_MOC_LITERAL(10, 89, 14), // "setSendInsSlot"
QT_MOC_LITERAL(11, 104, 3), // "ins"
QT_MOC_LITERAL(12, 108, 21), // "vector<unsigned char>"
QT_MOC_LITERAL(13, 130, 10), // "setSendMsg"
QT_MOC_LITERAL(14, 141, 3), // "msg"
QT_MOC_LITERAL(15, 145, 15), // "setReplyInsSlot"
QT_MOC_LITERAL(16, 161, 11), // "setReplyMsg"
QT_MOC_LITERAL(17, 173, 14), // "setSendCmdSlot"
QT_MOC_LITERAL(18, 188, 3), // "cmd"
QT_MOC_LITERAL(19, 192, 15), // "setReplyCmdSlot"
QT_MOC_LITERAL(20, 208, 15) // "clearButtonSlot"

    },
    "LogDebug\0closed\0\0setconnectState\0state\0"
    "setservoType\0type\0setservoTable\0"
    "ServoInfoMap\0info\0setSendInsSlot\0ins\0"
    "vector<unsigned char>\0setSendMsg\0msg\0"
    "setReplyInsSlot\0setReplyMsg\0setSendCmdSlot\0"
    "cmd\0setReplyCmdSlot\0clearButtonSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogDebug[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   90,    2, 0x0a /* Public */,
       5,    1,   93,    2, 0x0a /* Public */,
       7,    2,   96,    2, 0x0a /* Public */,
      10,    1,  101,    2, 0x0a /* Public */,
      10,    1,  104,    2, 0x0a /* Public */,
      10,    1,  107,    2, 0x0a /* Public */,
      13,    1,  110,    2, 0x0a /* Public */,
      15,    1,  113,    2, 0x0a /* Public */,
      15,    1,  116,    2, 0x0a /* Public */,
      15,    1,  119,    2, 0x0a /* Public */,
      16,    1,  122,    2, 0x0a /* Public */,
      17,    1,  125,    2, 0x0a /* Public */,
      19,    1,  128,    2, 0x0a /* Public */,
      20,    0,  131,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::UChar,    6,
    QMetaType::Void, QMetaType::UChar, 0x80000000 | 8,    6,    9,
    QMetaType::Void, QMetaType::QByteArray,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, 0x80000000 | 12,   11,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QByteArray,   11,
    QMetaType::Void, 0x80000000 | 12,   11,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,

       0        // eod
};

void LogDebug::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogDebug *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closed(); break;
        case 1: _t->setconnectState((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setservoType((*reinterpret_cast< uchar(*)>(_a[1]))); break;
        case 3: _t->setservoTable((*reinterpret_cast< uchar(*)>(_a[1])),(*reinterpret_cast< ServoInfoMap(*)>(_a[2]))); break;
        case 4: _t->setSendInsSlot((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 5: _t->setSendInsSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setSendInsSlot((*reinterpret_cast< vector<unsigned char>(*)>(_a[1]))); break;
        case 7: _t->setSendMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->setReplyInsSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->setReplyInsSlot((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 10: _t->setReplyInsSlot((*reinterpret_cast< vector<unsigned char>(*)>(_a[1]))); break;
        case 11: _t->setReplyMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->setSendCmdSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->setReplyCmdSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->clearButtonSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LogDebug::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogDebug::closed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LogDebug::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_meta_stringdata_LogDebug.data,
    qt_meta_data_LogDebug,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LogDebug::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogDebug::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogDebug.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int LogDebug::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void LogDebug::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
