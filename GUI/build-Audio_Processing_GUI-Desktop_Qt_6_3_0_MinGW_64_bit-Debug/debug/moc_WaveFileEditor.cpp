/****************************************************************************
** Meta object code from reading C++ file 'WaveFileEditor.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Audio_Processing_GUI/WaveFileEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WaveFileEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WaveFileEditor_t {
    const uint offsetsAndSize[18];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_WaveFileEditor_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_WaveFileEditor_t qt_meta_stringdata_WaveFileEditor = {
    {
QT_MOC_LITERAL(0, 14), // "WaveFileEditor"
QT_MOC_LITERAL(15, 17), // "on_exit_1_clicked"
QT_MOC_LITERAL(33, 0), // ""
QT_MOC_LITERAL(34, 20), // "on_confirm_1_clicked"
QT_MOC_LITERAL(55, 20), // "on_confirm_2_clicked"
QT_MOC_LITERAL(76, 17), // "on_exit_2_clicked"
QT_MOC_LITERAL(94, 17), // "on_next_1_clicked"
QT_MOC_LITERAL(112, 17), // "on_back_2_clicked"
QT_MOC_LITERAL(130, 21) // "on_pushButton_clicked"

    },
    "WaveFileEditor\0on_exit_1_clicked\0\0"
    "on_confirm_1_clicked\0on_confirm_2_clicked\0"
    "on_exit_2_clicked\0on_next_1_clicked\0"
    "on_back_2_clicked\0on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WaveFileEditor[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    0,   62,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WaveFileEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WaveFileEditor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_exit_1_clicked(); break;
        case 1: _t->on_confirm_1_clicked(); break;
        case 2: _t->on_confirm_2_clicked(); break;
        case 3: _t->on_exit_2_clicked(); break;
        case 4: _t->on_next_1_clicked(); break;
        case 5: _t->on_back_2_clicked(); break;
        case 6: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject WaveFileEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_WaveFileEditor.offsetsAndSize,
    qt_meta_data_WaveFileEditor,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_WaveFileEditor_t
, QtPrivate::TypeAndForceComplete<WaveFileEditor, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *WaveFileEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WaveFileEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WaveFileEditor.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int WaveFileEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
