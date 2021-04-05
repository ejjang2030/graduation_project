/****************************************************************************
** Meta object code from reading C++ file 'uvcacquisition.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../inc/uvcacquisition.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uvcacquisition.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UvcAcquisition_t {
    QByteArrayData data[21];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UvcAcquisition_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UvcAcquisition_t qt_meta_stringdata_UvcAcquisition = {
    {
QT_MOC_LITERAL(0, 0, 14), // "UvcAcquisition"
QT_MOC_LITERAL(1, 15, 10), // "frameReady"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "QVideoFrame"
QT_MOC_LITERAL(4, 39, 5), // "frame"
QT_MOC_LITERAL(5, 45, 13), // "formatChanged"
QT_MOC_LITERAL(6, 59, 19), // "QVideoSurfaceFormat"
QT_MOC_LITERAL(7, 79, 6), // "format"
QT_MOC_LITERAL(8, 86, 10), // "cciChanged"
QT_MOC_LITERAL(9, 97, 20), // "AbstractCCInterface*"
QT_MOC_LITERAL(10, 118, 20), // "dataFormatterChanged"
QT_MOC_LITERAL(11, 139, 16), // "videoSizeChanged"
QT_MOC_LITERAL(12, 156, 4), // "size"
QT_MOC_LITERAL(13, 161, 14), // "setVideoFormat"
QT_MOC_LITERAL(14, 176, 11), // "pauseStream"
QT_MOC_LITERAL(15, 188, 12), // "resumeStream"
QT_MOC_LITERAL(16, 201, 11), // "videoFormat"
QT_MOC_LITERAL(17, 213, 3), // "cci"
QT_MOC_LITERAL(18, 217, 13), // "dataFormatter"
QT_MOC_LITERAL(19, 231, 14), // "DataFormatter*"
QT_MOC_LITERAL(20, 246, 9) // "videoSize"

    },
    "UvcAcquisition\0frameReady\0\0QVideoFrame\0"
    "frame\0formatChanged\0QVideoSurfaceFormat\0"
    "format\0cciChanged\0AbstractCCInterface*\0"
    "dataFormatterChanged\0videoSizeChanged\0"
    "size\0setVideoFormat\0pauseStream\0"
    "resumeStream\0videoFormat\0cci\0dataFormatter\0"
    "DataFormatter*\0videoSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UvcAcquisition[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    1,   57,    2, 0x06 /* Public */,
       8,    1,   60,    2, 0x06 /* Public */,
      10,    1,   63,    2, 0x06 /* Public */,
      11,    1,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   69,    2, 0x0a /* Public */,
      14,    0,   72,    2, 0x0a /* Public */,
      15,    0,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,    7,
    QMetaType::Void, 0x80000000 | 9,    7,
    QMetaType::Void, QMetaType::QSize,   12,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      16, 0x80000000 | 6, 0x0049510b,
      17, 0x80000000 | 9, 0x0049500b,
      18, 0x80000000 | 19, 0x00495009,
      20, QMetaType::QSize, 0x00495001,

 // properties: notify_signal_id
       1,
       2,
       3,
       4,

       0        // eod
};

void UvcAcquisition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UvcAcquisition *_t = static_cast<UvcAcquisition *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->frameReady((*reinterpret_cast< const QVideoFrame(*)>(_a[1]))); break;
        case 1: _t->formatChanged((*reinterpret_cast< const QVideoSurfaceFormat(*)>(_a[1]))); break;
        case 2: _t->cciChanged((*reinterpret_cast< AbstractCCInterface*(*)>(_a[1]))); break;
        case 3: _t->dataFormatterChanged((*reinterpret_cast< AbstractCCInterface*(*)>(_a[1]))); break;
        case 4: _t->videoSizeChanged((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 5: _t->setVideoFormat((*reinterpret_cast< const QVideoSurfaceFormat(*)>(_a[1]))); break;
        case 6: _t->pauseStream(); break;
        case 7: _t->resumeStream(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoFrame >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoSurfaceFormat >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AbstractCCInterface* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AbstractCCInterface* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoSurfaceFormat >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UvcAcquisition::*)(const QVideoFrame & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UvcAcquisition::frameReady)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UvcAcquisition::*)(const QVideoSurfaceFormat & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UvcAcquisition::formatChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UvcAcquisition::*)(AbstractCCInterface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UvcAcquisition::cciChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (UvcAcquisition::*)(AbstractCCInterface * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UvcAcquisition::dataFormatterChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (UvcAcquisition::*)(const QSize & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UvcAcquisition::videoSizeChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AbstractCCInterface* >(); break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DataFormatter* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoSurfaceFormat >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        UvcAcquisition *_t = static_cast<UvcAcquisition *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVideoSurfaceFormat*>(_v) = _t->videoFormat(); break;
        case 1: *reinterpret_cast< AbstractCCInterface**>(_v) = _t->m_cci; break;
        case 2: *reinterpret_cast< DataFormatter**>(_v) = _t->getDataFormatter(); break;
        case 3: *reinterpret_cast< QSize*>(_v) = _t->getVideoSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        UvcAcquisition *_t = static_cast<UvcAcquisition *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVideoFormat(*reinterpret_cast< QVideoSurfaceFormat*>(_v)); break;
        case 1:
            if (_t->m_cci != *reinterpret_cast< AbstractCCInterface**>(_v)) {
                _t->m_cci = *reinterpret_cast< AbstractCCInterface**>(_v);
                Q_EMIT _t->cciChanged(_t->m_cci);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject UvcAcquisition::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UvcAcquisition.data,
      qt_meta_data_UvcAcquisition,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UvcAcquisition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UvcAcquisition::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UvcAcquisition.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UvcAcquisition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void UvcAcquisition::frameReady(const QVideoFrame & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UvcAcquisition::formatChanged(const QVideoSurfaceFormat & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UvcAcquisition::cciChanged(AbstractCCInterface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UvcAcquisition::dataFormatterChanged(AbstractCCInterface * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UvcAcquisition::videoSizeChanged(const QSize & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
