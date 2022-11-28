/****************************************************************************
** Meta object code from reading C++ file 'DuoMeiTiWenJianShaiXuan.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../DuoMeiTiWenJianShaiXuan.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DuoMeiTiWenJianShaiXuan.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_nanYou__DuoMeiTiWenJianShaiXuan_t {
    uint offsetsAndSizes[2];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_nanYou__DuoMeiTiWenJianShaiXuan_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_nanYou__DuoMeiTiWenJianShaiXuan_t qt_meta_stringdata_nanYou__DuoMeiTiWenJianShaiXuan = {
    {
        QT_MOC_LITERAL(0, 31)   // "mediaManager::DuoMeiTiWenJianShaiXuan"
    },
    "mediaManager::DuoMeiTiWenJianShaiXuan"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_nanYou__DuoMeiTiWenJianShaiXuan[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject mediaManager::DuoMeiTiWenJianShaiXuan::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_nanYou__DuoMeiTiWenJianShaiXuan.offsetsAndSizes,
    qt_meta_data_nanYou__DuoMeiTiWenJianShaiXuan,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_nanYou__DuoMeiTiWenJianShaiXuan_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DuoMeiTiWenJianShaiXuan, std::true_type>
    >,
    nullptr
} };

void mediaManager::DuoMeiTiWenJianShaiXuan::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *mediaManager::DuoMeiTiWenJianShaiXuan::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mediaManager::DuoMeiTiWenJianShaiXuan::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_nanYou__DuoMeiTiWenJianShaiXuan.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int mediaManager::DuoMeiTiWenJianShaiXuan::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
