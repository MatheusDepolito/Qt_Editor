/****************************************************************************
** Meta object code from reading C++ file 'FormRec.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ComponentsC/FormRec.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FormRec.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
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
struct qt_meta_stringdata_FormRec_t {
    uint offsetsAndSizes[30];
    char stringdata0[8];
    char stringdata1[12];
    char stringdata2[5];
    char stringdata3[19];
    char stringdata4[1];
    char stringdata5[15];
    char stringdata6[15];
    char stringdata7[12];
    char stringdata8[11];
    char stringdata9[8];
    char stringdata10[7];
    char stringdata11[6];
    char stringdata12[7];
    char stringdata13[15];
    char stringdata14[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FormRec_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_FormRec_t qt_meta_stringdata_FormRec = {
    {
        QT_MOC_LITERAL(0, 7),  // "FormRec"
        QT_MOC_LITERAL(8, 11),  // "QML.Element"
        QT_MOC_LITERAL(20, 4),  // "auto"
        QT_MOC_LITERAL(25, 18),  // "comprimentoChanged"
        QT_MOC_LITERAL(44, 0),  // ""
        QT_MOC_LITERAL(45, 14),  // "larguraChanged"
        QT_MOC_LITERAL(60, 14),  // "setComprimento"
        QT_MOC_LITERAL(75, 11),  // "comprimento"
        QT_MOC_LITERAL(87, 10),  // "setLargura"
        QT_MOC_LITERAL(98, 7),  // "largura"
        QT_MOC_LITERAL(106, 6),  // "setCor"
        QT_MOC_LITERAL(113, 5),  // "color"
        QT_MOC_LITERAL(119, 6),  // "getCor"
        QT_MOC_LITERAL(126, 14),  // "getComprimento"
        QT_MOC_LITERAL(141, 10)   // "getLargura"
    },
    "FormRec",
    "QML.Element",
    "auto",
    "comprimentoChanged",
    "",
    "larguraChanged",
    "setComprimento",
    "comprimento",
    "setLargura",
    "largura",
    "setCor",
    "color",
    "getCor",
    "getComprimento",
    "getLargura"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_FormRec[] = {

 // content:
      10,       // revision
       0,       // classname
       1,   14, // classinfo
       8,   16, // methods
       2,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   64,    4, 0x06,    3 /* Public */,
       5,    0,   65,    4, 0x06,    4 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   66,    4, 0x02,    5 /* Public */,
       8,    1,   69,    4, 0x02,    7 /* Public */,
      10,    1,   72,    4, 0x02,    9 /* Public */,
      12,    0,   75,    4, 0x02,   11 /* Public */,
      13,    0,   76,    4, 0x02,   12 /* Public */,
      14,    0,   77,    4, 0x02,   13 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,

 // properties: name, type, flags
       7, QMetaType::Int, 0x00015103, uint(0), 0,
       9, QMetaType::Int, 0x00015103, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject FormRec::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FormRec.offsetsAndSizes,
    qt_meta_data_FormRec,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'comprimento'
        int,
        // property 'largura'
        int,
        // Q_OBJECT / Q_GADGET
        FormRec,
        // method 'comprimentoChanged'
        void,
        // method 'larguraChanged'
        void,
        // method 'setComprimento'
        void,
        int,
        // method 'setLargura'
        void,
        int,
        // method 'setCor'
        void,
        QString,
        // method 'getCor'
        int,
        // method 'getComprimento'
        int,
        // method 'getLargura'
        int
    >,
    nullptr
} };

void FormRec::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FormRec *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->comprimentoChanged(); break;
        case 1: _t->larguraChanged(); break;
        case 2: _t->setComprimento((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->setLargura((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->setCor((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: { int _r = _t->getCor();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: { int _r = _t->getComprimento();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: { int _r = _t->getLargura();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FormRec::*)();
            if (_t _q_method = &FormRec::comprimentoChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FormRec::*)();
            if (_t _q_method = &FormRec::larguraChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FormRec *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->comprimento(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->largura(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FormRec *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setComprimento(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setLargura(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *FormRec::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormRec::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FormRec.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FormRec::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void FormRec::comprimentoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FormRec::larguraChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
