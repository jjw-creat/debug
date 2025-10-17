/****************************************************************************
** Meta object code from reading C++ file 'serverdebug.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../source/servodebug/serverdebug.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serverdebug.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ServerDebug_t {
    QByteArrayData data[30];
    char stringdata0[396];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ServerDebug_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ServerDebug_t qt_meta_stringdata_ServerDebug = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ServerDebug"
QT_MOC_LITERAL(1, 12, 18), // "requestInformation"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 20), // "enableAllInformation"
QT_MOC_LITERAL(4, 53, 23), // "disenableAllInformation"
QT_MOC_LITERAL(5, 77, 20), // "enableSomeInfomation"
QT_MOC_LITERAL(6, 98, 15), // "servoGotoSignal"
QT_MOC_LITERAL(7, 114, 18), // "QVector<ServoInfo>"
QT_MOC_LITERAL(8, 133, 4), // "info"
QT_MOC_LITERAL(9, 138, 14), // "zhSceneCreated"
QT_MOC_LITERAL(10, 153, 11), // "GraphScene*"
QT_MOC_LITERAL(11, 165, 1), // "p"
QT_MOC_LITERAL(12, 167, 6), // "closed"
QT_MOC_LITERAL(13, 174, 11), // "refreshSlot"
QT_MOC_LITERAL(14, 186, 9), // "ACInfoMap"
QT_MOC_LITERAL(15, 196, 16), // "setServoTypeSlot"
QT_MOC_LITERAL(16, 213, 4), // "type"
QT_MOC_LITERAL(17, 218, 9), // "servoGoto"
QT_MOC_LITERAL(18, 228, 4), // "time"
QT_MOC_LITERAL(19, 233, 12), // "saveFileSlot"
QT_MOC_LITERAL(20, 246, 9), // "abcsvName"
QT_MOC_LITERAL(21, 256, 9), // "abbinName"
QT_MOC_LITERAL(22, 266, 12), // "saveKeyPoint"
QT_MOC_LITERAL(23, 279, 10), // "abfileName"
QT_MOC_LITERAL(24, 290, 14), // "saveMiniAction"
QT_MOC_LITERAL(25, 305, 18), // "refreshInterpInfor"
QT_MOC_LITERAL(26, 324, 12), // "controlTools"
QT_MOC_LITERAL(27, 337, 17), // "requestButtonSlot"
QT_MOC_LITERAL(28, 355, 19), // "enableAllButtonSlot"
QT_MOC_LITERAL(29, 375, 20) // "enableSomeButtonSlot"

    },
    "ServerDebug\0requestInformation\0\0"
    "enableAllInformation\0disenableAllInformation\0"
    "enableSomeInfomation\0servoGotoSignal\0"
    "QVector<ServoInfo>\0info\0zhSceneCreated\0"
    "GraphScene*\0p\0closed\0refreshSlot\0"
    "ACInfoMap\0setServoTypeSlot\0type\0"
    "servoGoto\0time\0saveFileSlot\0abcsvName\0"
    "abbinName\0saveKeyPoint\0abfileName\0"
    "saveMiniAction\0refreshInterpInfor\0"
    "controlTools\0requestButtonSlot\0"
    "enableAllButtonSlot\0enableSomeButtonSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ServerDebug[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    0,  105,    2, 0x06 /* Public */,
       4,    0,  106,    2, 0x06 /* Public */,
       5,    0,  107,    2, 0x06 /* Public */,
       6,    1,  108,    2, 0x06 /* Public */,
       9,    1,  111,    2, 0x06 /* Public */,
      12,    0,  114,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,  115,    2, 0x0a /* Public */,
      15,    1,  118,    2, 0x0a /* Public */,
      17,    1,  121,    2, 0x0a /* Public */,
      19,    2,  124,    2, 0x0a /* Public */,
      22,    1,  129,    2, 0x0a /* Public */,
      24,    1,  132,    2, 0x0a /* Public */,
      25,    0,  135,    2, 0x08 /* Private */,
      26,    0,  136,    2, 0x08 /* Private */,
      27,    0,  137,    2, 0x08 /* Private */,
      28,    0,  138,    2, 0x08 /* Private */,
      29,    0,  139,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 14,    8,
    QMetaType::Void, QMetaType::UChar,   16,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   20,   21,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ServerDebug::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ServerDebug *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestInformation(); break;
        case 1: _t->enableAllInformation(); break;
        case 2: _t->disenableAllInformation(); break;
        case 3: _t->enableSomeInfomation(); break;
        case 4: _t->servoGotoSignal((*reinterpret_cast< QVector<ServoInfo>(*)>(_a[1]))); break;
        case 5: _t->zhSceneCreated((*reinterpret_cast< GraphScene*(*)>(_a[1]))); break;
        case 6: _t->closed(); break;
        case 7: _t->refreshSlot((*reinterpret_cast< ACInfoMap(*)>(_a[1]))); break;
        case 8: _t->setServoTypeSlot((*reinterpret_cast< uchar(*)>(_a[1]))); break;
        case 9: _t->servoGoto((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->saveFileSlot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 11: _t->saveKeyPoint((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->saveMiniAction((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->refreshInterpInfor(); break;
        case 14: _t->controlTools(); break;
        case 15: _t->requestButtonSlot(); break;
        case 16: _t->enableAllButtonSlot(); break;
        case 17: _t->enableSomeButtonSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ServerDebug::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerDebug::requestInformation)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ServerDebug::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerDebug::enableAllInformation)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ServerDebug::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerDebug::disenableAllInformation)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ServerDebug::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerDebug::enableSomeInfomation)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ServerDebug::*)(QVector<ServoInfo> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerDebug::servoGotoSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ServerDebug::*)(GraphScene * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerDebug::zhSceneCreated)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ServerDebug::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerDebug::closed)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ServerDebug::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_meta_stringdata_ServerDebug.data,
    qt_meta_data_ServerDebug,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ServerDebug::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServerDebug::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ServerDebug.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int ServerDebug::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void ServerDebug::requestInformation()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ServerDebug::enableAllInformation()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ServerDebug::disenableAllInformation()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ServerDebug::enableSomeInfomation()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ServerDebug::servoGotoSignal(QVector<ServoInfo> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ServerDebug::zhSceneCreated(GraphScene * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ServerDebug::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
