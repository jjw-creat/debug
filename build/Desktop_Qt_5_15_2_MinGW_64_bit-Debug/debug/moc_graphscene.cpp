/****************************************************************************
** Meta object code from reading C++ file 'graphscene.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../source/servodebug/Graph/graphscene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphscene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GraphScene_t {
    QByteArrayData data[30];
    char stringdata0[383];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphScene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphScene_t qt_meta_stringdata_GraphScene = {
    {
QT_MOC_LITERAL(0, 0, 10), // "GraphScene"
QT_MOC_LITERAL(1, 11, 16), // "keyFrameSelected"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "index"
QT_MOC_LITERAL(4, 35, 12), // "keyFrameMove"
QT_MOC_LITERAL(5, 48, 4), // "time"
QT_MOC_LITERAL(6, 53, 7), // "newTime"
QT_MOC_LITERAL(7, 61, 14), // "keyFrameModify"
QT_MOC_LITERAL(8, 76, 5), // "servo"
QT_MOC_LITERAL(9, 82, 7), // "newData"
QT_MOC_LITERAL(10, 90, 14), // "keyFrameDelete"
QT_MOC_LITERAL(11, 105, 12), // "keyFrameGoto"
QT_MOC_LITERAL(12, 118, 12), // "keyFrameLoad"
QT_MOC_LITERAL(13, 131, 14), // "insertKeyFrame"
QT_MOC_LITERAL(14, 146, 18), // "act_insertKeyFrame"
QT_MOC_LITERAL(15, 165, 18), // "act_keyFrameDelete"
QT_MOC_LITERAL(16, 184, 19), // "act_keyFrameDelete2"
QT_MOC_LITERAL(17, 204, 16), // "act_keyFrameGoto"
QT_MOC_LITERAL(18, 221, 16), // "act_keyFrameLoad"
QT_MOC_LITERAL(19, 238, 19), // "cb_viewExtentChange"
QT_MOC_LITERAL(20, 258, 9), // "timeBegin"
QT_MOC_LITERAL(21, 268, 7), // "timeEnd"
QT_MOC_LITERAL(22, 276, 19), // "cb_keyFrameSelected"
QT_MOC_LITERAL(23, 296, 15), // "cb_keyFrameMove"
QT_MOC_LITERAL(24, 312, 17), // "cb_keyFrameModify"
QT_MOC_LITERAL(25, 330, 16), // "cb_setShowCursor"
QT_MOC_LITERAL(26, 347, 4), // "show"
QT_MOC_LITERAL(27, 352, 13), // "keyPressEvent"
QT_MOC_LITERAL(28, 366, 10), // "QKeyEvent*"
QT_MOC_LITERAL(29, 377, 5) // "event"

    },
    "GraphScene\0keyFrameSelected\0\0index\0"
    "keyFrameMove\0time\0newTime\0keyFrameModify\0"
    "servo\0newData\0keyFrameDelete\0keyFrameGoto\0"
    "keyFrameLoad\0insertKeyFrame\0"
    "act_insertKeyFrame\0act_keyFrameDelete\0"
    "act_keyFrameDelete2\0act_keyFrameGoto\0"
    "act_keyFrameLoad\0cb_viewExtentChange\0"
    "timeBegin\0timeEnd\0cb_keyFrameSelected\0"
    "cb_keyFrameMove\0cb_keyFrameModify\0"
    "cb_setShowCursor\0show\0keyPressEvent\0"
    "QKeyEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphScene[] = {

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
       1,    1,  104,    2, 0x06 /* Public */,
       4,    2,  107,    2, 0x06 /* Public */,
       7,    3,  112,    2, 0x06 /* Public */,
      10,    1,  119,    2, 0x06 /* Public */,
      11,    1,  122,    2, 0x06 /* Public */,
      12,    1,  125,    2, 0x06 /* Public */,
      13,    1,  128,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,  131,    2, 0x08 /* Private */,
      15,    0,  132,    2, 0x08 /* Private */,
      16,    0,  133,    2, 0x08 /* Private */,
      17,    0,  134,    2, 0x08 /* Private */,
      18,    0,  135,    2, 0x08 /* Private */,
      19,    2,  136,    2, 0x08 /* Private */,
      22,    1,  141,    2, 0x08 /* Private */,
      23,    2,  144,    2, 0x08 /* Private */,
      24,    3,  149,    2, 0x08 /* Private */,
      25,    1,  156,    2, 0x08 /* Private */,
      27,    1,  159,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    8,    5,    9,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   20,   21,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    8,    5,    9,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, 0x80000000 | 28,   29,

       0        // eod
};

void GraphScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GraphScene *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->keyFrameSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->keyFrameMove((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->keyFrameModify((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->keyFrameDelete((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->keyFrameGoto((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->keyFrameLoad((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->insertKeyFrame((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->act_insertKeyFrame(); break;
        case 8: _t->act_keyFrameDelete(); break;
        case 9: _t->act_keyFrameDelete2(); break;
        case 10: _t->act_keyFrameGoto(); break;
        case 11: _t->act_keyFrameLoad(); break;
        case 12: _t->cb_viewExtentChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->cb_keyFrameSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->cb_keyFrameMove((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->cb_keyFrameModify((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 16: _t->cb_setShowCursor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GraphScene::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphScene::keyFrameSelected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GraphScene::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphScene::keyFrameMove)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GraphScene::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphScene::keyFrameModify)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GraphScene::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphScene::keyFrameDelete)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GraphScene::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphScene::keyFrameGoto)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GraphScene::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphScene::keyFrameLoad)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GraphScene::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphScene::insertKeyFrame)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GraphScene::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsScene::staticMetaObject>(),
    qt_meta_stringdata_GraphScene.data,
    qt_meta_data_GraphScene,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GraphScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GraphScene.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsScene::qt_metacast(_clname);
}

int GraphScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
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
void GraphScene::keyFrameSelected(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GraphScene::keyFrameMove(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GraphScene::keyFrameModify(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GraphScene::keyFrameDelete(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GraphScene::keyFrameGoto(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GraphScene::keyFrameLoad(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GraphScene::insertKeyFrame(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
