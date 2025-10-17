/****************************************************************************
** Meta object code from reading C++ file 'commandanalysis.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../source/insanalysis/commandanalysis.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'commandanalysis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CommandAnalysis_t {
    QByteArrayData data[55];
    char stringdata0[853];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CommandAnalysis_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CommandAnalysis_t qt_meta_stringdata_CommandAnalysis = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CommandAnalysis"
QT_MOC_LITERAL(1, 16, 21), // "servoPosChangedSignal"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 12), // "ServoInfoMap"
QT_MOC_LITERAL(4, 52, 4), // "info"
QT_MOC_LITERAL(5, 57, 22), // "servoInfoChangedSignal"
QT_MOC_LITERAL(6, 80, 4), // "type"
QT_MOC_LITERAL(7, 85, 23), // "ActionListChangedSignal"
QT_MOC_LITERAL(8, 109, 4), // "data"
QT_MOC_LITERAL(9, 114, 25), // "SequenceListChangedSignal"
QT_MOC_LITERAL(10, 140, 17), // "getSequenceSignal"
QT_MOC_LITERAL(11, 158, 8), // "sequName"
QT_MOC_LITERAL(12, 167, 7), // "contans"
QT_MOC_LITERAL(13, 175, 22), // "servoTypeChangedSignal"
QT_MOC_LITERAL(14, 198, 21), // "replyCmdChangedSignal"
QT_MOC_LITERAL(15, 220, 3), // "cmd"
QT_MOC_LITERAL(16, 224, 20), // "sendCmdChangedSignal"
QT_MOC_LITERAL(17, 245, 19), // "replyInsStateSignal"
QT_MOC_LITERAL(18, 265, 9), // "replydata"
QT_MOC_LITERAL(19, 275, 18), // "sendInsStateSignal"
QT_MOC_LITERAL(20, 294, 8), // "senddata"
QT_MOC_LITERAL(21, 303, 19), // "stateChangedSignals"
QT_MOC_LITERAL(22, 323, 3), // "str"
QT_MOC_LITERAL(23, 327, 17), // "sendControlSignal"
QT_MOC_LITERAL(24, 345, 5), // "rcvOK"
QT_MOC_LITERAL(25, 351, 14), // "rcvLengthError"
QT_MOC_LITERAL(26, 366, 13), // "rcvCheckError"
QT_MOC_LITERAL(27, 380, 25), // "getDownServoConditionSolt"
QT_MOC_LITERAL(28, 406, 20), // "getServoPositionSolt"
QT_MOC_LITERAL(29, 427, 22), // "enableDigitalServoSolt"
QT_MOC_LITERAL(30, 450, 23), // "disableDigitalServoSolt"
QT_MOC_LITERAL(31, 474, 19), // "enableSomeServoSolt"
QT_MOC_LITERAL(32, 494, 10), // "enableInfo"
QT_MOC_LITERAL(33, 505, 20), // "uploadActionNameSlot"
QT_MOC_LITERAL(34, 526, 22), // "uploadSequenceNameSlot"
QT_MOC_LITERAL(35, 549, 22), // "uploadSequenceFileSlot"
QT_MOC_LITERAL(36, 572, 8), // "fileName"
QT_MOC_LITERAL(37, 581, 22), // "downLoadMiniActionSlot"
QT_MOC_LITERAL(38, 604, 18), // "execMiniActionSlot"
QT_MOC_LITERAL(39, 623, 16), // "saveSequenceSlot"
QT_MOC_LITERAL(40, 640, 12), // "sequenceName"
QT_MOC_LITERAL(41, 653, 11), // "actionNames"
QT_MOC_LITERAL(42, 665, 16), // "execSequenceSlot"
QT_MOC_LITERAL(43, 682, 16), // "deleteActionSlot"
QT_MOC_LITERAL(44, 699, 18), // "deleteSequenceSlot"
QT_MOC_LITERAL(45, 718, 13), // "moveServoSolt"
QT_MOC_LITERAL(46, 732, 18), // "QVector<ServoInfo>"
QT_MOC_LITERAL(47, 751, 8), // "servoPos"
QT_MOC_LITERAL(48, 760, 16), // "renameActionSlot"
QT_MOC_LITERAL(49, 777, 7), // "oldName"
QT_MOC_LITERAL(50, 785, 7), // "newName"
QT_MOC_LITERAL(51, 793, 18), // "renameSequenceSlot"
QT_MOC_LITERAL(52, 812, 11), // "outTimeSlot"
QT_MOC_LITERAL(53, 824, 15), // "sendControlSlot"
QT_MOC_LITERAL(54, 840, 12) // "setParseData"

    },
    "CommandAnalysis\0servoPosChangedSignal\0"
    "\0ServoInfoMap\0info\0servoInfoChangedSignal\0"
    "type\0ActionListChangedSignal\0data\0"
    "SequenceListChangedSignal\0getSequenceSignal\0"
    "sequName\0contans\0servoTypeChangedSignal\0"
    "replyCmdChangedSignal\0cmd\0"
    "sendCmdChangedSignal\0replyInsStateSignal\0"
    "replydata\0sendInsStateSignal\0senddata\0"
    "stateChangedSignals\0str\0sendControlSignal\0"
    "rcvOK\0rcvLengthError\0rcvCheckError\0"
    "getDownServoConditionSolt\0"
    "getServoPositionSolt\0enableDigitalServoSolt\0"
    "disableDigitalServoSolt\0enableSomeServoSolt\0"
    "enableInfo\0uploadActionNameSlot\0"
    "uploadSequenceNameSlot\0uploadSequenceFileSlot\0"
    "fileName\0downLoadMiniActionSlot\0"
    "execMiniActionSlot\0saveSequenceSlot\0"
    "sequenceName\0actionNames\0execSequenceSlot\0"
    "deleteActionSlot\0deleteSequenceSlot\0"
    "moveServoSolt\0QVector<ServoInfo>\0"
    "servoPos\0renameActionSlot\0oldName\0"
    "newName\0renameSequenceSlot\0outTimeSlot\0"
    "sendControlSlot\0setParseData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CommandAnalysis[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  189,    2, 0x06 /* Public */,
       5,    2,  192,    2, 0x06 /* Public */,
       7,    1,  197,    2, 0x06 /* Public */,
       9,    1,  200,    2, 0x06 /* Public */,
      10,    2,  203,    2, 0x06 /* Public */,
      13,    1,  208,    2, 0x06 /* Public */,
      14,    1,  211,    2, 0x06 /* Public */,
      16,    1,  214,    2, 0x06 /* Public */,
      17,    1,  217,    2, 0x06 /* Public */,
      19,    1,  220,    2, 0x06 /* Public */,
      21,    1,  223,    2, 0x06 /* Public */,
      23,    0,  226,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      24,    1,  227,    2, 0x0a /* Public */,
      25,    1,  230,    2, 0x0a /* Public */,
      26,    1,  233,    2, 0x0a /* Public */,
      27,    0,  236,    2, 0x0a /* Public */,
      28,    0,  237,    2, 0x0a /* Public */,
      29,    0,  238,    2, 0x0a /* Public */,
      30,    0,  239,    2, 0x0a /* Public */,
      31,    1,  240,    2, 0x0a /* Public */,
      33,    0,  243,    2, 0x0a /* Public */,
      34,    0,  244,    2, 0x0a /* Public */,
      35,    1,  245,    2, 0x0a /* Public */,
      37,    1,  248,    2, 0x0a /* Public */,
      38,    1,  251,    2, 0x0a /* Public */,
      39,    2,  254,    2, 0x0a /* Public */,
      42,    1,  259,    2, 0x0a /* Public */,
      43,    1,  262,    2, 0x0a /* Public */,
      44,    1,  265,    2, 0x0a /* Public */,
      45,    1,  268,    2, 0x0a /* Public */,
      48,    2,  271,    2, 0x0a /* Public */,
      51,    2,  276,    2, 0x0a /* Public */,
      52,    0,  281,    2, 0x0a /* Public */,
      53,    0,  282,    2, 0x0a /* Public */,
      54,    1,  283,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::UChar, 0x80000000 | 3,    6,    4,
    QMetaType::Void, QMetaType::QStringList,    8,
    QMetaType::Void, QMetaType::QStringList,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,   11,   12,
    QMetaType::Void, QMetaType::UChar,    6,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QByteArray,   18,
    QMetaType::Void, QMetaType::QByteArray,   20,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    8,
    QMetaType::Void, QMetaType::QByteArray,    8,
    QMetaType::Void, QMetaType::QByteArray,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   32,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,   40,   41,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void, 0x80000000 | 46,   47,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   49,   50,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   49,   50,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    8,

       0        // eod
};

void CommandAnalysis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CommandAnalysis *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->servoPosChangedSignal((*reinterpret_cast< ServoInfoMap(*)>(_a[1]))); break;
        case 1: _t->servoInfoChangedSignal((*reinterpret_cast< uchar(*)>(_a[1])),(*reinterpret_cast< ServoInfoMap(*)>(_a[2]))); break;
        case 2: _t->ActionListChangedSignal((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->SequenceListChangedSignal((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 4: _t->getSequenceSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 5: _t->servoTypeChangedSignal((*reinterpret_cast< uchar(*)>(_a[1]))); break;
        case 6: _t->replyCmdChangedSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->sendCmdChangedSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->replyInsStateSignal((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 9: _t->sendInsStateSignal((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 10: _t->stateChangedSignals((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->sendControlSignal(); break;
        case 12: _t->rcvOK((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 13: _t->rcvLengthError((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 14: _t->rcvCheckError((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 15: _t->getDownServoConditionSolt(); break;
        case 16: _t->getServoPositionSolt(); break;
        case 17: _t->enableDigitalServoSolt(); break;
        case 18: _t->disableDigitalServoSolt(); break;
        case 19: _t->enableSomeServoSolt((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 20: _t->uploadActionNameSlot(); break;
        case 21: _t->uploadSequenceNameSlot(); break;
        case 22: _t->uploadSequenceFileSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: _t->downLoadMiniActionSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 24: _t->execMiniActionSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 25: _t->saveSequenceSlot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 26: _t->execSequenceSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 27: _t->deleteActionSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 28: _t->deleteSequenceSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 29: _t->moveServoSolt((*reinterpret_cast< QVector<ServoInfo>(*)>(_a[1]))); break;
        case 30: _t->renameActionSlot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 31: _t->renameSequenceSlot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 32: _t->outTimeSlot(); break;
        case 33: _t->sendControlSlot(); break;
        case 34: _t->setParseData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CommandAnalysis::*)(ServoInfoMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommandAnalysis::servoPosChangedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CommandAnalysis::*)(uchar , ServoInfoMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommandAnalysis::servoInfoChangedSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CommandAnalysis::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommandAnalysis::ActionListChangedSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CommandAnalysis::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommandAnalysis::SequenceListChangedSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CommandAnalysis::*)(QString , QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommandAnalysis::getSequenceSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CommandAnalysis::*)(uchar );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommandAnalysis::servoTypeChangedSignal)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (CommandAnalysis::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommandAnalysis::replyCmdChangedSignal)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (CommandAnalysis::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommandAnalysis::sendCmdChangedSignal)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (CommandAnalysis::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommandAnalysis::replyInsStateSignal)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (CommandAnalysis::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommandAnalysis::sendInsStateSignal)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (CommandAnalysis::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommandAnalysis::stateChangedSignals)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (CommandAnalysis::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommandAnalysis::sendControlSignal)) {
                *result = 11;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CommandAnalysis::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CommandAnalysis.data,
    qt_meta_data_CommandAnalysis,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CommandAnalysis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CommandAnalysis::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CommandAnalysis.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CommandAnalysis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 35;
    }
    return _id;
}

// SIGNAL 0
void CommandAnalysis::servoPosChangedSignal(ServoInfoMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CommandAnalysis::servoInfoChangedSignal(uchar _t1, ServoInfoMap _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CommandAnalysis::ActionListChangedSignal(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CommandAnalysis::SequenceListChangedSignal(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CommandAnalysis::getSequenceSignal(QString _t1, QStringList _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CommandAnalysis::servoTypeChangedSignal(uchar _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CommandAnalysis::replyCmdChangedSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CommandAnalysis::sendCmdChangedSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void CommandAnalysis::replyInsStateSignal(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void CommandAnalysis::sendInsStateSignal(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void CommandAnalysis::stateChangedSignals(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void CommandAnalysis::sendControlSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
