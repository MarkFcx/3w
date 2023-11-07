/****************************************************************************
** Meta object code from reading C++ file 'LoudspeakerFrequencyResponse.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widgets/LoudspeakerFrequencyResponse.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LoudspeakerFrequencyResponse.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSLoudspeakerFrequencyResponseENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSLoudspeakerFrequencyResponseENDCLASS = QtMocHelpers::stringData(
    "LoudspeakerFrequencyResponse",
    "handleButtonReleased",
    "",
    "index",
    "pos",
    "handleSpeakerButtonChecked",
    "checked",
    "handleBypassButtonChecked",
    "handleTestButtonClicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSLoudspeakerFrequencyResponseENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[29];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[4];
    char stringdata5[27];
    char stringdata6[8];
    char stringdata7[26];
    char stringdata8[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSLoudspeakerFrequencyResponseENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSLoudspeakerFrequencyResponseENDCLASS_t qt_meta_stringdata_CLASSLoudspeakerFrequencyResponseENDCLASS = {
    {
        QT_MOC_LITERAL(0, 28),  // "LoudspeakerFrequencyResponse"
        QT_MOC_LITERAL(29, 20),  // "handleButtonReleased"
        QT_MOC_LITERAL(50, 0),  // ""
        QT_MOC_LITERAL(51, 5),  // "index"
        QT_MOC_LITERAL(57, 3),  // "pos"
        QT_MOC_LITERAL(61, 26),  // "handleSpeakerButtonChecked"
        QT_MOC_LITERAL(88, 7),  // "checked"
        QT_MOC_LITERAL(96, 25),  // "handleBypassButtonChecked"
        QT_MOC_LITERAL(122, 23)   // "handleTestButtonClicked"
    },
    "LoudspeakerFrequencyResponse",
    "handleButtonReleased",
    "",
    "index",
    "pos",
    "handleSpeakerButtonChecked",
    "checked",
    "handleBypassButtonChecked",
    "handleTestButtonClicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLoudspeakerFrequencyResponseENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   38,    2, 0x08,    1 /* Private */,
       5,    1,   43,    2, 0x08,    4 /* Private */,
       7,    0,   46,    2, 0x08,    6 /* Private */,
       8,    0,   47,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QPointF,    3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject LoudspeakerFrequencyResponse::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSLoudspeakerFrequencyResponseENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLoudspeakerFrequencyResponseENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLoudspeakerFrequencyResponseENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LoudspeakerFrequencyResponse, std::true_type>,
        // method 'handleButtonReleased'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPointF &, std::false_type>,
        // method 'handleSpeakerButtonChecked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'handleBypassButtonChecked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleTestButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void LoudspeakerFrequencyResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LoudspeakerFrequencyResponse *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->handleButtonReleased((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[2]))); break;
        case 1: _t->handleSpeakerButtonChecked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->handleBypassButtonChecked(); break;
        case 3: _t->handleTestButtonClicked(); break;
        default: ;
        }
    }
}

const QMetaObject *LoudspeakerFrequencyResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoudspeakerFrequencyResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLoudspeakerFrequencyResponseENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int LoudspeakerFrequencyResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
