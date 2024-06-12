/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <glviewer.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    glViewer *openGLWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *way;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *Open;
    QPushButton *Button_2;
    QPushButton *Save_gif;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QSpinBox *move_x;
    QSpinBox *move_y;
    QSpinBox *move_z;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *turn_x;
    QSpinBox *turn_y;
    QSpinBox *turn_z;
    QLabel *label_3;
    QDoubleSpinBox *scale_d;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_6;
    QDoubleSpinBox *rc_1;
    QDoubleSpinBox *rc_2;
    QDoubleSpinBox *rc_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_8;
    QDoubleSpinBox *vc_1;
    QDoubleSpinBox *vc_2;
    QDoubleSpinBox *vc_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_7;
    QDoubleSpinBox *bc_1;
    QDoubleSpinBox *bc_2;
    QDoubleSpinBox *bc_3;
    QDoubleSpinBox *bc_4;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_16;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_11;
    QDoubleSpinBox *fin_thickness;
    QDoubleSpinBox *vertex_size;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_11;
    QLabel *vertices;
    QLabel *label_13;
    QLabel *ribs;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *solid;
    QRadioButton *dashes;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_12;
    QRadioButton *none;
    QRadioButton *square;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(925, 564);
        MainWindow->setAnimated(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        openGLWidget = new glViewer(centralwidget);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));
        openGLWidget->setGeometry(QRect(10, 10, 641, 481));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(660, 10, 266, 552));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        way = new QLineEdit(verticalLayoutWidget);
        way->setObjectName(QString::fromUtf8("way"));

        verticalLayout->addWidget(way);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        Open = new QPushButton(verticalLayoutWidget);
        Open->setObjectName(QString::fromUtf8("Open"));
        Open->setAutoRepeat(false);

        horizontalLayout_13->addWidget(Open);

        Button_2 = new QPushButton(verticalLayoutWidget);
        Button_2->setObjectName(QString::fromUtf8("Button_2"));

        horizontalLayout_13->addWidget(Button_2);


        verticalLayout->addLayout(horizontalLayout_13);

        Save_gif = new QPushButton(verticalLayoutWidget);
        Save_gif->setObjectName(QString::fromUtf8("Save_gif"));

        verticalLayout->addWidget(Save_gif);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        move_x = new QSpinBox(verticalLayoutWidget);
        move_x->setObjectName(QString::fromUtf8("move_x"));
        move_x->setMinimum(-99);

        horizontalLayout->addWidget(move_x);

        move_y = new QSpinBox(verticalLayoutWidget);
        move_y->setObjectName(QString::fromUtf8("move_y"));
        move_y->setMinimum(-99);

        horizontalLayout->addWidget(move_y);

        move_z = new QSpinBox(verticalLayoutWidget);
        move_z->setObjectName(QString::fromUtf8("move_z"));
        move_z->setMinimum(-99);

        horizontalLayout->addWidget(move_z);


        verticalLayout->addLayout(horizontalLayout);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_4->addWidget(label_7);

        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_4->addWidget(label_8);

        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_4->addWidget(label_9);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        turn_x = new QSpinBox(verticalLayoutWidget);
        turn_x->setObjectName(QString::fromUtf8("turn_x"));
        turn_x->setMinimum(-99);

        horizontalLayout_2->addWidget(turn_x);

        turn_y = new QSpinBox(verticalLayoutWidget);
        turn_y->setObjectName(QString::fromUtf8("turn_y"));
        turn_y->setMinimum(-99);

        horizontalLayout_2->addWidget(turn_y);

        turn_z = new QSpinBox(verticalLayoutWidget);
        turn_z->setObjectName(QString::fromUtf8("turn_z"));
        turn_z->setMinimum(-99);

        horizontalLayout_2->addWidget(turn_z);


        verticalLayout->addLayout(horizontalLayout_2);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        scale_d = new QDoubleSpinBox(verticalLayoutWidget);
        scale_d->setObjectName(QString::fromUtf8("scale_d"));
        scale_d->setEnabled(true);
        scale_d->setMinimum(0.010000000000000);
        scale_d->setMaximum(10.000000000000000);
        scale_d->setSingleStep(0.010000000000000);
        scale_d->setValue(1.000000000000000);

        verticalLayout->addWidget(scale_d);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_2->addWidget(label_10);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        rc_1 = new QDoubleSpinBox(verticalLayoutWidget);
        rc_1->setObjectName(QString::fromUtf8("rc_1"));
        rc_1->setMaximum(1.000000000000000);
        rc_1->setSingleStep(0.100000000000000);
        rc_1->setValue(1.000000000000000);

        horizontalLayout_6->addWidget(rc_1);

        rc_2 = new QDoubleSpinBox(verticalLayoutWidget);
        rc_2->setObjectName(QString::fromUtf8("rc_2"));
        rc_2->setMaximum(1.000000000000000);
        rc_2->setSingleStep(0.100000000000000);

        horizontalLayout_6->addWidget(rc_2);

        rc_3 = new QDoubleSpinBox(verticalLayoutWidget);
        rc_3->setObjectName(QString::fromUtf8("rc_3"));
        rc_3->setMaximum(1.000000000000000);
        rc_3->setSingleStep(0.100000000000000);

        horizontalLayout_6->addWidget(rc_3);


        verticalLayout_2->addLayout(horizontalLayout_6);


        verticalLayout->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_14 = new QLabel(verticalLayoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout_4->addWidget(label_14);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        vc_1 = new QDoubleSpinBox(verticalLayoutWidget);
        vc_1->setObjectName(QString::fromUtf8("vc_1"));
        vc_1->setMaximum(1.000000000000000);
        vc_1->setSingleStep(0.100000000000000);

        horizontalLayout_8->addWidget(vc_1);

        vc_2 = new QDoubleSpinBox(verticalLayoutWidget);
        vc_2->setObjectName(QString::fromUtf8("vc_2"));
        vc_2->setMaximum(1.000000000000000);
        vc_2->setSingleStep(0.100000000000000);
        vc_2->setValue(1.000000000000000);

        horizontalLayout_8->addWidget(vc_2);

        vc_3 = new QDoubleSpinBox(verticalLayoutWidget);
        vc_3->setObjectName(QString::fromUtf8("vc_3"));
        vc_3->setMaximum(1.000000000000000);
        vc_3->setSingleStep(0.100000000000000);
        vc_3->setValue(1.000000000000000);

        horizontalLayout_8->addWidget(vc_3);


        verticalLayout_4->addLayout(horizontalLayout_8);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_12 = new QLabel(verticalLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_3->addWidget(label_12);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        bc_1 = new QDoubleSpinBox(verticalLayoutWidget);
        bc_1->setObjectName(QString::fromUtf8("bc_1"));
        bc_1->setMaximum(1.000000000000000);
        bc_1->setSingleStep(0.100000000000000);

        horizontalLayout_7->addWidget(bc_1);

        bc_2 = new QDoubleSpinBox(verticalLayoutWidget);
        bc_2->setObjectName(QString::fromUtf8("bc_2"));
        bc_2->setMaximum(1.000000000000000);
        bc_2->setSingleStep(0.100000000000000);

        horizontalLayout_7->addWidget(bc_2);

        bc_3 = new QDoubleSpinBox(verticalLayoutWidget);
        bc_3->setObjectName(QString::fromUtf8("bc_3"));
        bc_3->setMaximum(1.000000000000000);
        bc_3->setSingleStep(0.100000000000000);

        horizontalLayout_7->addWidget(bc_3);

        bc_4 = new QDoubleSpinBox(verticalLayoutWidget);
        bc_4->setObjectName(QString::fromUtf8("bc_4"));
        bc_4->setMaximum(1.000000000000000);
        bc_4->setSingleStep(0.100000000000000);

        horizontalLayout_7->addWidget(bc_4);


        verticalLayout_3->addLayout(horizontalLayout_7);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_16 = new QLabel(verticalLayoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_9->addWidget(label_16);

        label_17 = new QLabel(verticalLayoutWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_9->addWidget(label_17);


        verticalLayout_4->addLayout(horizontalLayout_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        fin_thickness = new QDoubleSpinBox(verticalLayoutWidget);
        fin_thickness->setObjectName(QString::fromUtf8("fin_thickness"));
        fin_thickness->setMaximum(10.000000000000000);
        fin_thickness->setValue(1.000000000000000);

        horizontalLayout_11->addWidget(fin_thickness);

        vertex_size = new QDoubleSpinBox(verticalLayoutWidget);
        vertex_size->setObjectName(QString::fromUtf8("vertex_size"));
        vertex_size->setMinimum(1.000000000000000);
        vertex_size->setMaximum(25.000000000000000);
        vertex_size->setValue(4.000000000000000);

        horizontalLayout_11->addWidget(vertex_size);


        verticalLayout_4->addLayout(horizontalLayout_11);


        verticalLayout->addLayout(verticalLayout_4);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 500, 373, 61));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(horizontalLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_5->addWidget(label_11);

        vertices = new QLabel(horizontalLayoutWidget);
        vertices->setObjectName(QString::fromUtf8("vertices"));

        horizontalLayout_5->addWidget(vertices);

        label_13 = new QLabel(horizontalLayoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_5->addWidget(label_13);

        ribs = new QLabel(horizontalLayoutWidget);
        ribs->setObjectName(QString::fromUtf8("ribs"));

        horizontalLayout_5->addWidget(ribs);

        verticalLayoutWidget_6 = new QWidget(centralwidget);
        verticalLayoutWidget_6->setObjectName(QString::fromUtf8("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(460, 500, 191, 61));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(verticalLayoutWidget_6);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout_6->addWidget(label_15);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        solid = new QRadioButton(verticalLayoutWidget_6);
        solid->setObjectName(QString::fromUtf8("solid"));
        solid->setChecked(true);

        horizontalLayout_10->addWidget(solid);

        dashes = new QRadioButton(verticalLayoutWidget_6);
        dashes->setObjectName(QString::fromUtf8("dashes"));

        horizontalLayout_10->addWidget(dashes);


        verticalLayout_6->addLayout(horizontalLayout_10);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(250, 500, 211, 61));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(verticalLayoutWidget_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_5->addWidget(label_18);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        none = new QRadioButton(verticalLayoutWidget_2);
        none->setObjectName(QString::fromUtf8("none"));
        none->setChecked(true);

        horizontalLayout_12->addWidget(none);

        square = new QRadioButton(verticalLayoutWidget_2);
        square->setObjectName(QString::fromUtf8("square"));

        horizontalLayout_12->addWidget(square);


        verticalLayout_5->addLayout(horizontalLayout_12);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Open->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        Button_2->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        Save_gif->setText(QCoreApplication::translate("MainWindow", "Start record", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><h6 align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Move</h6></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><h6 align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">X</h6></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><h6 align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Y</h6></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><h6 align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Z</h6></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><h6 align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Turn</h6></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><h6 align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">X</h6></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><h6 align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Y</h6></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><h6 align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Z</h6></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><h6 align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Scale</h6></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><h6 align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Rib color</h6></body></html>", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><h6 align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Vertex color</h6></body></html>", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><h6 align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Background color</h6></body></html>", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><h6 align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Fin thickness</h6></body></html>", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><h6 align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Vertex size</h6></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Number of vertices:", nullptr));
        vertices->setText(QString());
        label_13->setText(QCoreApplication::translate("MainWindow", "Number of ribs:", nullptr));
        ribs->setText(QString());
        label_15->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><h6 align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Line type</h6></body></html>", nullptr));
        solid->setText(QCoreApplication::translate("MainWindow", "Solid", nullptr));
        dashes->setText(QCoreApplication::translate("MainWindow", "Dashed", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><h6 align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Vetrex</h6></body></html>", nullptr));
        none->setText(QCoreApplication::translate("MainWindow", "None", nullptr));
        square->setText(QCoreApplication::translate("MainWindow", "Square", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
