/****************************************************************************
** Meta object code from reading C++ file 'armmanage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../source/downserve/armmanage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'armmanage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ArmManage_t {
    QByteArrayData data[64];
    char stringdata0[1185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ArmManage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ArmManage_t qt_meta_stringdata_ArmManage = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ArmManage"
QT_MOC_LITERAL(1, 10, 18), // "upSaveActionSignal"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 9), // "abcsvName"
QT_MOC_LITERAL(4, 40, 9), // "abbinName"
QT_MOC_LITERAL(5, 50, 18), // "upOpenActionSiganl"
QT_MOC_LITERAL(6, 69, 10), // "abfileName"
QT_MOC_LITERAL(7, 80, 20), // "downloadActionSignal"
QT_MOC_LITERAL(8, 101, 22), // "downloadSequenceSignal"
QT_MOC_LITERAL(9, 124, 8), // "fileName"
QT_MOC_LITERAL(10, 133, 11), // "actionNames"
QT_MOC_LITERAL(11, 145, 23), // "downRefreshActionSignal"
QT_MOC_LITERAL(12, 169, 25), // "downRefreshSequenceSignal"
QT_MOC_LITERAL(13, 195, 24), // "downUploadSequenceSiganl"
QT_MOC_LITERAL(14, 220, 8), // "sequence"
QT_MOC_LITERAL(15, 229, 22), // "downRenameActionSignal"
QT_MOC_LITERAL(16, 252, 7), // "oldName"
QT_MOC_LITERAL(17, 260, 7), // "newName"
QT_MOC_LITERAL(18, 268, 23), // "downExecuteActionSignal"
QT_MOC_LITERAL(19, 292, 6), // "action"
QT_MOC_LITERAL(20, 299, 22), // "downDeleteActionSignal"
QT_MOC_LITERAL(21, 322, 25), // "downExecuteSequenceSignal"
QT_MOC_LITERAL(22, 348, 24), // "downRenameSequenceSignal"
QT_MOC_LITERAL(23, 373, 24), // "downDeleteSequenceSignal"
QT_MOC_LITERAL(24, 398, 6), // "closed"
QT_MOC_LITERAL(25, 405, 19), // "downReplyActionSlot"
QT_MOC_LITERAL(26, 425, 7), // "actions"
QT_MOC_LITERAL(27, 433, 21), // "downReplySequenceSlot"
QT_MOC_LITERAL(28, 455, 22), // "downUploadSequenceSlot"
QT_MOC_LITERAL(29, 478, 19), // "upRefreshActionSlot"
QT_MOC_LITERAL(30, 498, 16), // "upSaveActionSlot"
QT_MOC_LITERAL(31, 515, 18), // "upRenameActionSlot"
QT_MOC_LITERAL(32, 534, 17), // "upCoverActionSlot"
QT_MOC_LITERAL(33, 552, 18), // "upDeleteActionSlot"
QT_MOC_LITERAL(34, 571, 18), // "downloadActionSlot"
QT_MOC_LITERAL(35, 590, 25), // "upaddActionToSequenceSlot"
QT_MOC_LITERAL(36, 616, 21), // "upRefreshSequenceSlot"
QT_MOC_LITERAL(37, 638, 20), // "upCreateSequenceSlot"
QT_MOC_LITERAL(38, 659, 18), // "upSaveSequenceSlot"
QT_MOC_LITERAL(39, 678, 20), // "upRenameSequenceSlot"
QT_MOC_LITERAL(40, 699, 20), // "upDeleteSequenceSlot"
QT_MOC_LITERAL(41, 720, 18), // "upMoveUpActionSlot"
QT_MOC_LITERAL(42, 739, 20), // "upMoveDownActionSlot"
QT_MOC_LITERAL(43, 760, 20), // "downloadSequenceSlot"
QT_MOC_LITERAL(44, 781, 21), // "downRefreshActionSlot"
QT_MOC_LITERAL(45, 803, 20), // "downRenameActionSlot"
QT_MOC_LITERAL(46, 824, 21), // "downExecuteActionSlot"
QT_MOC_LITERAL(47, 846, 20), // "downDeleteActionSlot"
QT_MOC_LITERAL(48, 867, 27), // "downaddActionToSequenceSlot"
QT_MOC_LITERAL(49, 895, 23), // "downRefreshSequenceSlot"
QT_MOC_LITERAL(50, 919, 22), // "downCreateSequenceSlot"
QT_MOC_LITERAL(51, 942, 20), // "downSaveSequenceSlot"
QT_MOC_LITERAL(52, 963, 23), // "downExecuteSequenceSlot"
QT_MOC_LITERAL(53, 987, 22), // "downRenameSequenceSlot"
QT_MOC_LITERAL(54, 1010, 22), // "downDeleteSequenceSlot"
QT_MOC_LITERAL(55, 1033, 20), // "downMoveUpActionSlot"
QT_MOC_LITERAL(56, 1054, 22), // "downMoveDownActionSlot"
QT_MOC_LITERAL(57, 1077, 23), // "upOnActionDoubleClicked"
QT_MOC_LITERAL(58, 1101, 3), // "row"
QT_MOC_LITERAL(59, 1105, 3), // "col"
QT_MOC_LITERAL(60, 1109, 25), // "upOnSequenceDoubleClicked"
QT_MOC_LITERAL(61, 1135, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(62, 1152, 4), // "item"
QT_MOC_LITERAL(63, 1157, 27) // "downOnSequenceDoubleClicked"

    },
    "ArmManage\0upSaveActionSignal\0\0abcsvName\0"
    "abbinName\0upOpenActionSiganl\0abfileName\0"
    "downloadActionSignal\0downloadSequenceSignal\0"
    "fileName\0actionNames\0downRefreshActionSignal\0"
    "downRefreshSequenceSignal\0"
    "downUploadSequenceSiganl\0sequence\0"
    "downRenameActionSignal\0oldName\0newName\0"
    "downExecuteActionSignal\0action\0"
    "downDeleteActionSignal\0downExecuteSequenceSignal\0"
    "downRenameSequenceSignal\0"
    "downDeleteSequenceSignal\0closed\0"
    "downReplyActionSlot\0actions\0"
    "downReplySequenceSlot\0downUploadSequenceSlot\0"
    "upRefreshActionSlot\0upSaveActionSlot\0"
    "upRenameActionSlot\0upCoverActionSlot\0"
    "upDeleteActionSlot\0downloadActionSlot\0"
    "upaddActionToSequenceSlot\0"
    "upRefreshSequenceSlot\0upCreateSequenceSlot\0"
    "upSaveSequenceSlot\0upRenameSequenceSlot\0"
    "upDeleteSequenceSlot\0upMoveUpActionSlot\0"
    "upMoveDownActionSlot\0downloadSequenceSlot\0"
    "downRefreshActionSlot\0downRenameActionSlot\0"
    "downExecuteActionSlot\0downDeleteActionSlot\0"
    "downaddActionToSequenceSlot\0"
    "downRefreshSequenceSlot\0downCreateSequenceSlot\0"
    "downSaveSequenceSlot\0downExecuteSequenceSlot\0"
    "downRenameSequenceSlot\0downDeleteSequenceSlot\0"
    "downMoveUpActionSlot\0downMoveDownActionSlot\0"
    "upOnActionDoubleClicked\0row\0col\0"
    "upOnSequenceDoubleClicked\0QTreeWidgetItem*\0"
    "item\0downOnSequenceDoubleClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ArmManage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      48,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  254,    2, 0x06 /* Public */,
       5,    1,  259,    2, 0x06 /* Public */,
       7,    1,  262,    2, 0x06 /* Public */,
       8,    2,  265,    2, 0x06 /* Public */,
      11,    0,  270,    2, 0x06 /* Public */,
      12,    0,  271,    2, 0x06 /* Public */,
      13,    1,  272,    2, 0x06 /* Public */,
      15,    2,  275,    2, 0x06 /* Public */,
      18,    1,  280,    2, 0x06 /* Public */,
      20,    1,  283,    2, 0x06 /* Public */,
      21,    1,  286,    2, 0x06 /* Public */,
      22,    2,  289,    2, 0x06 /* Public */,
      23,    1,  294,    2, 0x06 /* Public */,
      24,    0,  297,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      25,    1,  298,    2, 0x0a /* Public */,
      27,    1,  301,    2, 0x0a /* Public */,
      28,    2,  304,    2, 0x0a /* Public */,
      29,    0,  309,    2, 0x08 /* Private */,
      30,    0,  310,    2, 0x08 /* Private */,
      31,    0,  311,    2, 0x08 /* Private */,
      32,    0,  312,    2, 0x08 /* Private */,
      33,    0,  313,    2, 0x08 /* Private */,
      34,    0,  314,    2, 0x08 /* Private */,
      35,    0,  315,    2, 0x08 /* Private */,
      36,    0,  316,    2, 0x08 /* Private */,
      37,    0,  317,    2, 0x08 /* Private */,
      38,    0,  318,    2, 0x08 /* Private */,
      39,    0,  319,    2, 0x08 /* Private */,
      40,    0,  320,    2, 0x08 /* Private */,
      41,    0,  321,    2, 0x08 /* Private */,
      42,    0,  322,    2, 0x08 /* Private */,
      43,    0,  323,    2, 0x08 /* Private */,
      44,    0,  324,    2, 0x08 /* Private */,
      45,    0,  325,    2, 0x08 /* Private */,
      46,    0,  326,    2, 0x08 /* Private */,
      47,    0,  327,    2, 0x08 /* Private */,
      48,    0,  328,    2, 0x08 /* Private */,
      49,    0,  329,    2, 0x08 /* Private */,
      50,    0,  330,    2, 0x08 /* Private */,
      51,    0,  331,    2, 0x08 /* Private */,
      52,    0,  332,    2, 0x08 /* Private */,
      53,    0,  333,    2, 0x08 /* Private */,
      54,    0,  334,    2, 0x08 /* Private */,
      55,    0,  335,    2, 0x08 /* Private */,
      56,    0,  336,    2, 0x08 /* Private */,
      57,    2,  337,    2, 0x08 /* Private */,
      60,    2,  342,    2, 0x08 /* Private */,
      63,    2,  347,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   16,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   16,   17,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,   26,
    QMetaType::Void, QMetaType::QStringList,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,   14,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   58,   59,
    QMetaType::Void, 0x80000000 | 61, QMetaType::Int,   62,   59,
    QMetaType::Void, 0x80000000 | 61, QMetaType::Int,   62,   59,

       0        // eod
};

void ArmManage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ArmManage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->upSaveActionSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->upOpenActionSiganl((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->downloadActionSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->downloadSequenceSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 4: _t->downRefreshActionSignal(); break;
        case 5: _t->downRefreshSequenceSignal(); break;
        case 6: _t->downUploadSequenceSiganl((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->downRenameActionSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->downExecuteActionSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->downDeleteActionSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->downExecuteSequenceSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->downRenameSequenceSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 12: _t->downDeleteSequenceSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->closed(); break;
        case 14: _t->downReplyActionSlot((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 15: _t->downReplySequenceSlot((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 16: _t->downUploadSequenceSlot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 17: _t->upRefreshActionSlot(); break;
        case 18: _t->upSaveActionSlot(); break;
        case 19: _t->upRenameActionSlot(); break;
        case 20: _t->upCoverActionSlot(); break;
        case 21: _t->upDeleteActionSlot(); break;
        case 22: _t->downloadActionSlot(); break;
        case 23: _t->upaddActionToSequenceSlot(); break;
        case 24: _t->upRefreshSequenceSlot(); break;
        case 25: _t->upCreateSequenceSlot(); break;
        case 26: _t->upSaveSequenceSlot(); break;
        case 27: _t->upRenameSequenceSlot(); break;
        case 28: _t->upDeleteSequenceSlot(); break;
        case 29: _t->upMoveUpActionSlot(); break;
        case 30: _t->upMoveDownActionSlot(); break;
        case 31: _t->downloadSequenceSlot(); break;
        case 32: _t->downRefreshActionSlot(); break;
        case 33: _t->downRenameActionSlot(); break;
        case 34: _t->downExecuteActionSlot(); break;
        case 35: _t->downDeleteActionSlot(); break;
        case 36: _t->downaddActionToSequenceSlot(); break;
        case 37: _t->downRefreshSequenceSlot(); break;
        case 38: _t->downCreateSequenceSlot(); break;
        case 39: _t->downSaveSequenceSlot(); break;
        case 40: _t->downExecuteSequenceSlot(); break;
        case 41: _t->downRenameSequenceSlot(); break;
        case 42: _t->downDeleteSequenceSlot(); break;
        case 43: _t->downMoveUpActionSlot(); break;
        case 44: _t->downMoveDownActionSlot(); break;
        case 45: _t->upOnActionDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 46: _t->upOnSequenceDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 47: _t->downOnSequenceDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ArmManage::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArmManage::upSaveActionSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ArmManage::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArmManage::upOpenActionSiganl)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ArmManage::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArmManage::downloadActionSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ArmManage::*)(QString , QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArmManage::downloadSequenceSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ArmManage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArmManage::downRefreshActionSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ArmManage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArmManage::downRefreshSequenceSignal)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ArmManage::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArmManage::downUploadSequenceSiganl)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ArmManage::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArmManage::downRenameActionSignal)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ArmManage::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArmManage::downExecuteActionSignal)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ArmManage::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArmManage::downDeleteActionSignal)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ArmManage::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArmManage::downExecuteSequenceSignal)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (ArmManage::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArmManage::downRenameSequenceSignal)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (ArmManage::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArmManage::downDeleteSequenceSignal)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (ArmManage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ArmManage::closed)) {
                *result = 13;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ArmManage::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_meta_stringdata_ArmManage.data,
    qt_meta_data_ArmManage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ArmManage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ArmManage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ArmManage.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int ArmManage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 48)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 48)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 48;
    }
    return _id;
}

// SIGNAL 0
void ArmManage::upSaveActionSignal(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ArmManage::upOpenActionSiganl(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ArmManage::downloadActionSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ArmManage::downloadSequenceSignal(QString _t1, QStringList _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ArmManage::downRefreshActionSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ArmManage::downRefreshSequenceSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ArmManage::downUploadSequenceSiganl(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ArmManage::downRenameActionSignal(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ArmManage::downExecuteActionSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ArmManage::downDeleteActionSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ArmManage::downExecuteSequenceSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void ArmManage::downRenameSequenceSignal(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void ArmManage::downDeleteSequenceSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void ArmManage::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
