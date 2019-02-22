/********************************************************************************
** Form generated from reading UI file 'hodograph.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HODOGRAPH_H
#define UI_HODOGRAPH_H

#include <GLAnimationWindow.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_HodographClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    GLAnimationWindow *openGLWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_2;
    QCustomPlot *plot_speed;
    QVBoxLayout *verticalLayout_7;
    QLabel *label;
    QCustomPlot *plot_acceleration;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_l;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_r;
    QDoubleSpinBox *doubleSpinBox_omega;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_error;
    QLabel *label_9;
    QSpinBox *spinbox_points;
    QLabel *label_8;
    QCustomPlot *plot_position;
    QLabel *label_7;
    QCustomPlot *plot_phase;

    void setupUi(QMainWindow *HodographClass)
    {
        if (HodographClass->objectName().isEmpty())
            HodographClass->setObjectName(QStringLiteral("HodographClass"));
        HodographClass->resize(1473, 781);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HodographClass->sizePolicy().hasHeightForWidth());
        HodographClass->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(HodographClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        openGLWidget = new GLAnimationWindow(centralWidget);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));
        sizePolicy1.setHeightForWidth(openGLWidget->sizePolicy().hasHeightForWidth());
        openGLWidget->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(openGLWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(16777215, 20));

        verticalLayout_6->addWidget(label_2);

        plot_speed = new QCustomPlot(centralWidget);
        plot_speed->setObjectName(QStringLiteral("plot_speed"));

        verticalLayout_6->addWidget(plot_speed);


        horizontalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 20));

        verticalLayout_7->addWidget(label);

        plot_acceleration = new QCustomPlot(centralWidget);
        plot_acceleration->setObjectName(QStringLiteral("plot_acceleration"));

        verticalLayout_7->addWidget(plot_acceleration);


        horizontalLayout_2->addLayout(verticalLayout_7);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout_2->setStretch(0, 3);
        verticalLayout_2->setStretch(1, 2);

        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        doubleSpinBox_l = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_l->setObjectName(QStringLiteral("doubleSpinBox_l"));
        doubleSpinBox_l->setMinimum(0.1);
        doubleSpinBox_l->setMaximum(5);
        doubleSpinBox_l->setSingleStep(0.2);
        doubleSpinBox_l->setValue(1);

        formLayout->setWidget(0, QFormLayout::FieldRole, doubleSpinBox_l);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        doubleSpinBox_r = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_r->setObjectName(QStringLiteral("doubleSpinBox_r"));
        doubleSpinBox_r->setMinimum(0.01);
        doubleSpinBox_r->setMaximum(3);
        doubleSpinBox_r->setSingleStep(0.1);
        doubleSpinBox_r->setValue(0.5);

        formLayout->setWidget(1, QFormLayout::FieldRole, doubleSpinBox_r);

        doubleSpinBox_omega = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_omega->setObjectName(QStringLiteral("doubleSpinBox_omega"));
        doubleSpinBox_omega->setDecimals(3);
        doubleSpinBox_omega->setSingleStep(0.01);
        doubleSpinBox_omega->setValue(0.5);

        formLayout->setWidget(2, QFormLayout::FieldRole, doubleSpinBox_omega);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        doubleSpinBox_error = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_error->setObjectName(QStringLiteral("doubleSpinBox_error"));
        doubleSpinBox_error->setDecimals(6);
        doubleSpinBox_error->setMaximum(1);
        doubleSpinBox_error->setSingleStep(0.0001);

        formLayout->setWidget(3, QFormLayout::FieldRole, doubleSpinBox_error);

        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_9);

        spinbox_points = new QSpinBox(centralWidget);
        spinbox_points->setObjectName(QStringLiteral("spinbox_points"));
        spinbox_points->setMinimum(1);
        spinbox_points->setMaximum(500);
        spinbox_points->setValue(100);

        formLayout->setWidget(4, QFormLayout::FieldRole, spinbox_points);


        verticalLayout->addLayout(formLayout);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);
        label_8->setMaximumSize(QSize(16777215, 20));

        verticalLayout->addWidget(label_8);

        plot_position = new QCustomPlot(centralWidget);
        plot_position->setObjectName(QStringLiteral("plot_position"));

        verticalLayout->addWidget(plot_position);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMaximumSize(QSize(16777215, 20));

        verticalLayout->addWidget(label_7);

        plot_phase = new QCustomPlot(centralWidget);
        plot_phase->setObjectName(QStringLiteral("plot_phase"));

        verticalLayout->addWidget(plot_phase);

        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(4, 1);

        horizontalLayout->addLayout(verticalLayout);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 1);

        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        HodographClass->setCentralWidget(centralWidget);

        retranslateUi(HodographClass);

        QMetaObject::connectSlotsByName(HodographClass);
    } // setupUi

    void retranslateUi(QMainWindow *HodographClass)
    {
        HodographClass->setWindowTitle(QApplication::translate("HodographClass", "Hodograph", Q_NULLPTR));
        label_2->setText(QApplication::translate("HodographClass", "Speed", Q_NULLPTR));
        label->setText(QApplication::translate("HodographClass", "Acceleration", Q_NULLPTR));
        label_3->setText(QApplication::translate("HodographClass", "R", Q_NULLPTR));
        label_4->setText(QApplication::translate("HodographClass", "L", Q_NULLPTR));
        label_5->setText(QApplication::translate("HodographClass", "Omega", Q_NULLPTR));
        label_6->setText(QApplication::translate("HodographClass", "Error", Q_NULLPTR));
        label_9->setText(QApplication::translate("HodographClass", "Points", Q_NULLPTR));
        label_8->setText(QApplication::translate("HodographClass", "Position", Q_NULLPTR));
        label_7->setText(QApplication::translate("HodographClass", "Phase", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HodographClass: public Ui_HodographClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HODOGRAPH_H
