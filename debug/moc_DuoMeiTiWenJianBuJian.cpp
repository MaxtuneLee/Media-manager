/****************************************************************************
** Meta object code from reading C++ file 'MediaComponent.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../DuoMeiTiWenJianBuJian.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DuoMeiTiWenJianBuJian.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_mediaManager__DuoMeiTiWenJianBuJian_t {
    uint offsetsAndSizes[10];
    char stringdata0[36];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_mediaManager__DuoMeiTiWenJianBuJian_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_mediaManager__DuoMeiTiWenJianBuJian_t qt_meta_stringdata_mediaManager__DuoMeiTiWenJianBuJian = {
    {
        QT_MOC_LITERAL(0, 35),  // "mediaManager::MediaFile..."
        QT_MOC_LITERAL(36, 11),  // "dataSave"
        QT_MOC_LITERAL(48, 0),  // ""
        QT_MOC_LITERAL(49, 9),  // "dataRead"
        QT_MOC_LITERAL(59, 12)   // "dataRegister"
    },
    "mediaManager::MediaComponent",
    "dataSave",
    "",
    "dataRead",
    "dataRegister"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_mediaManager__DuoMeiTiWenJianBuJian[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x0a,    1 /* Public */,
       3,    0,   33,    2, 0x0a,    2 /* Public */,
       4,    0,   34,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject mediaManager::MediaComponent::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_mediaManager__DuoMeiTiWenJianBuJian.offsetsAndSizes,
    qt_meta_data_mediaManager__DuoMeiTiWenJianBuJian,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_mediaManager__DuoMeiTiWenJianBuJian_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MediaComponent, std::true_type>,
        // method 'dataSave'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'dataRead'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'dataRegister'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mediaManager::MediaComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MediaComponent *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QString _r = _t->dataSave();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->dataRead();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->dataRegister(); break;
        default: ;
        }
    }
}

const QMetaObject *mediaManager::MediaComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mediaManager::MediaComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mediaManager__DuoMeiTiWenJianBuJian.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int mediaManager::MediaComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
