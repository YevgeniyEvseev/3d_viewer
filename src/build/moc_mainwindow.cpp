/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../3dViewer/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[92];
    char stringdata0[778];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 10), // "set_points"
QT_MOC_LITERAL(22, 0), // ""
QT_MOC_LITERAL(23, 5), // "char*"
QT_MOC_LITERAL(29, 4), // "file"
QT_MOC_LITERAL(34, 17), // "set_update_points"
QT_MOC_LITERAL(52, 3), // "num"
QT_MOC_LITERAL(56, 8), // "code_num"
QT_MOC_LITERAL(65, 19), // "set_update_settings"
QT_MOC_LITERAL(85, 16), // "signal_get_param"
QT_MOC_LITERAL(102, 4), // "int&"
QT_MOC_LITERAL(107, 1), // "v"
QT_MOC_LITERAL(109, 1), // "p"
QT_MOC_LITERAL(111, 15), // "on_Open_clicked"
QT_MOC_LITERAL(127, 22), // "on_move_x_valueChanged"
QT_MOC_LITERAL(150, 22), // "on_move_y_valueChanged"
QT_MOC_LITERAL(173, 22), // "on_move_z_valueChanged"
QT_MOC_LITERAL(196, 22), // "on_turn_x_valueChanged"
QT_MOC_LITERAL(219, 22), // "on_turn_y_valueChanged"
QT_MOC_LITERAL(242, 22), // "on_turn_z_valueChanged"
QT_MOC_LITERAL(265, 23), // "on_scale_d_valueChanged"
QT_MOC_LITERAL(289, 20), // "on_rc_1_valueChanged"
QT_MOC_LITERAL(310, 20), // "on_rc_2_valueChanged"
QT_MOC_LITERAL(331, 20), // "on_rc_3_valueChanged"
QT_MOC_LITERAL(352, 20), // "on_vc_1_valueChanged"
QT_MOC_LITERAL(373, 20), // "on_vc_2_valueChanged"
QT_MOC_LITERAL(394, 20), // "on_vc_3_valueChanged"
QT_MOC_LITERAL(415, 20), // "on_bc_1_valueChanged"
QT_MOC_LITERAL(436, 20), // "on_bc_2_valueChanged"
QT_MOC_LITERAL(457, 20), // "on_bc_3_valueChanged"
QT_MOC_LITERAL(478, 20), // "on_bc_4_valueChanged"
QT_MOC_LITERAL(499, 29), // "on_fin_thickness_valueChanged"
QT_MOC_LITERAL(529, 16), // "on_solid_clicked"
QT_MOC_LITERAL(546, 17), // "on_dashes_clicked"
QT_MOC_LITERAL(564, 27), // "on_vertex_size_valueChanged"
QT_MOC_LITERAL(592, 15), // "on_none_clicked"
QT_MOC_LITERAL(608, 17), // "on_square_clicked"
QT_MOC_LITERAL(626, 19), // "createGifFromImages"
QT_MOC_LITERAL(646, 14), // "imageFilenames"
QT_MOC_LITERAL(661, 11), // "gifFilename"
QT_MOC_LITERAL(673, 11), // "shootScreen"
QT_MOC_LITERAL(685, 19), // "on_Save_gif_clicked"
QT_MOC_LITERAL(705, 14), // "GetScreenShoot"
QT_MOC_LITERAL(720, 19), // "on_Button_2_clicked"
QT_MOC_LITERAL(740, 18), // "save_param_to_file"
QT_MOC_LITERAL(759, 18) // "open_param_of_file"

    },
    "MainWindow\0set_points\0\0char*\0file\0"
    "set_update_points\0num\0code_num\0"
    "set_update_settings\0signal_get_param\0"
    "int&\0v\0p\0on_Open_clicked\0"
    "on_move_x_valueChanged\0on_move_y_valueChanged\0"
    "on_move_z_valueChanged\0on_turn_x_valueChanged\0"
    "on_turn_y_valueChanged\0on_turn_z_valueChanged\0"
    "on_scale_d_valueChanged\0on_rc_1_valueChanged\0"
    "on_rc_2_valueChanged\0on_rc_3_valueChanged\0"
    "on_vc_1_valueChanged\0on_vc_2_valueChanged\0"
    "on_vc_3_valueChanged\0on_bc_1_valueChanged\0"
    "on_bc_2_valueChanged\0on_bc_3_valueChanged\0"
    "on_bc_4_valueChanged\0on_fin_thickness_valueChanged\0"
    "on_solid_clicked\0on_dashes_clicked\0"
    "on_vertex_size_valueChanged\0on_none_clicked\0"
    "on_square_clicked\0createGifFromImages\0"
    "imageFilenames\0gifFilename\0shootScreen\0"
    "on_Save_gif_clicked\0GetScreenShoot\0"
    "on_Button_2_clicked\0save_param_to_file\0"
    "open_param_of_file"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  224,    2, 0x06,    1 /* Public */,
       5,    2,  227,    2, 0x06,    3 /* Public */,
       8,    2,  232,    2, 0x06,    6 /* Public */,
       9,    2,  237,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      13,    0,  242,    2, 0x08,   12 /* Private */,
      14,    0,  243,    2, 0x08,   13 /* Private */,
      15,    0,  244,    2, 0x08,   14 /* Private */,
      16,    0,  245,    2, 0x08,   15 /* Private */,
      17,    0,  246,    2, 0x08,   16 /* Private */,
      18,    0,  247,    2, 0x08,   17 /* Private */,
      19,    0,  248,    2, 0x08,   18 /* Private */,
      20,    0,  249,    2, 0x08,   19 /* Private */,
      21,    0,  250,    2, 0x08,   20 /* Private */,
      22,    0,  251,    2, 0x08,   21 /* Private */,
      23,    0,  252,    2, 0x08,   22 /* Private */,
      24,    0,  253,    2, 0x08,   23 /* Private */,
      25,    0,  254,    2, 0x08,   24 /* Private */,
      26,    0,  255,    2, 0x08,   25 /* Private */,
      27,    0,  256,    2, 0x08,   26 /* Private */,
      28,    0,  257,    2, 0x08,   27 /* Private */,
      29,    0,  258,    2, 0x08,   28 /* Private */,
      30,    0,  259,    2, 0x08,   29 /* Private */,
      31,    0,  260,    2, 0x08,   30 /* Private */,
      32,    0,  261,    2, 0x08,   31 /* Private */,
      33,    0,  262,    2, 0x08,   32 /* Private */,
      34,    0,  263,    2, 0x08,   33 /* Private */,
      35,    0,  264,    2, 0x08,   34 /* Private */,
      36,    0,  265,    2, 0x08,   35 /* Private */,
      37,    2,  266,    2, 0x08,   36 /* Private */,
      40,    0,  271,    2, 0x08,   39 /* Private */,
      41,    0,  272,    2, 0x08,   40 /* Private */,
      42,    0,  273,    2, 0x08,   41 /* Private */,
      43,    0,  274,    2, 0x08,   42 /* Private */,
      44,    0,  275,    2, 0x08,   43 /* Private */,
      45,    0,  276,    2, 0x08,   44 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Double, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Double, QMetaType::Int,    6,    7,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10,   11,   12,

 // slots: parameters
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
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   38,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->set_points((*reinterpret_cast< std::add_pointer_t<char*>>(_a[1]))); break;
        case 1: _t->set_update_points((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->set_update_settings((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->signal_get_param((*reinterpret_cast< std::add_pointer_t<int&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int&>>(_a[2]))); break;
        case 4: _t->on_Open_clicked(); break;
        case 5: _t->on_move_x_valueChanged(); break;
        case 6: _t->on_move_y_valueChanged(); break;
        case 7: _t->on_move_z_valueChanged(); break;
        case 8: _t->on_turn_x_valueChanged(); break;
        case 9: _t->on_turn_y_valueChanged(); break;
        case 10: _t->on_turn_z_valueChanged(); break;
        case 11: _t->on_scale_d_valueChanged(); break;
        case 12: _t->on_rc_1_valueChanged(); break;
        case 13: _t->on_rc_2_valueChanged(); break;
        case 14: _t->on_rc_3_valueChanged(); break;
        case 15: _t->on_vc_1_valueChanged(); break;
        case 16: _t->on_vc_2_valueChanged(); break;
        case 17: _t->on_vc_3_valueChanged(); break;
        case 18: _t->on_bc_1_valueChanged(); break;
        case 19: _t->on_bc_2_valueChanged(); break;
        case 20: _t->on_bc_3_valueChanged(); break;
        case 21: _t->on_bc_4_valueChanged(); break;
        case 22: _t->on_fin_thickness_valueChanged(); break;
        case 23: _t->on_solid_clicked(); break;
        case 24: _t->on_dashes_clicked(); break;
        case 25: _t->on_vertex_size_valueChanged(); break;
        case 26: _t->on_none_clicked(); break;
        case 27: _t->on_square_clicked(); break;
        case 28: _t->createGifFromImages((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 29: _t->shootScreen(); break;
        case 30: _t->on_Save_gif_clicked(); break;
        case 31: _t->GetScreenShoot(); break;
        case 32: _t->on_Button_2_clicked(); break;
        case 33: _t->save_param_to_file(); break;
        case 34: _t->open_param_of_file(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(char * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::set_points)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(double , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::set_update_points)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(double , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::set_update_settings)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int & , int & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signal_get_param)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<char *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int &, std::false_type>, QtPrivate::TypeAndForceComplete<int &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 35;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::set_points(char * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::set_update_points(double _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::set_update_settings(double _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::signal_get_param(int & _t1, int & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
