/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Setting
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QLabel *label_7;
    QLineEdit *lineEdit_7;
    QLabel *label_8;
    QLineEdit *lineEdit_8;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_9;

    void setupUi(QDialog *Setting)
    {
        if (Setting->objectName().isEmpty())
            Setting->setObjectName(QStringLiteral("Setting"));
        Setting->resize(319, 294);
        Setting->setStyleSheet(QStringLiteral("background-color:black;"));
        formLayout = new QFormLayout(Setting);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(Setting);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Variable Display"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color : #90ee90;"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(Setting);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Variable Display"));
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QLatin1String("border-radius : 5px;\n"
"border-style : solid;\n"
"background-color:white;"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(Setting);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color : #90ee90;"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(Setting);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setFont(font1);
        lineEdit_2->setStyleSheet(QLatin1String("border-radius : 5px;\n"
"border-style : solid;\n"
"background-color:white;"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_3 = new QLabel(Setting);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("color : #90ee90;"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_3 = new QLineEdit(Setting);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setFont(font1);
        lineEdit_3->setStyleSheet(QLatin1String("border-radius : 5px;\n"
"border-style : solid;\n"
"background-color:white;"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        label_4 = new QLabel(Setting);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("color : #90ee90;"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lineEdit_4 = new QLineEdit(Setting);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setFont(font1);
        lineEdit_4->setStyleSheet(QLatin1String("border-radius : 5px;\n"
"border-style : solid;\n"
"background-color:white;"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_4);

        label_5 = new QLabel(Setting);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QStringLiteral("color : #90ee90;"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        lineEdit_5 = new QLineEdit(Setting);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setFont(font1);
        lineEdit_5->setStyleSheet(QLatin1String("border-radius : 5px;\n"
"border-style : solid;\n"
"background-color:white;"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_5);

        label_6 = new QLabel(Setting);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QStringLiteral("color : #90ee90;"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        lineEdit_6 = new QLineEdit(Setting);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setFont(font1);
        lineEdit_6->setStyleSheet(QLatin1String("border-radius : 5px;\n"
"border-style : solid;\n"
"background-color:white;"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_6);

        label_7 = new QLabel(Setting);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);
        label_7->setStyleSheet(QStringLiteral("color : #90ee90;"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        lineEdit_7 = new QLineEdit(Setting);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setFont(font1);
        lineEdit_7->setStyleSheet(QLatin1String("border-radius : 5px;\n"
"border-style : solid;\n"
"background-color:white;"));

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEdit_7);

        label_8 = new QLabel(Setting);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);
        label_8->setStyleSheet(QStringLiteral("color : #90ee90;"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_8);

        lineEdit_8 = new QLineEdit(Setting);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setFont(font1);
        lineEdit_8->setStyleSheet(QLatin1String("border-radius : 5px;\n"
"border-style : solid;\n"
"background-color:white;"));

        formLayout->setWidget(7, QFormLayout::FieldRole, lineEdit_8);

        label_9 = new QLabel(Setting);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);
        label_9->setStyleSheet(QStringLiteral("color : #90ee90;"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_9);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(Setting);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QStringLiteral("Segoe UI Variable Display"));
        font2.setPointSize(9);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QLatin1String("QPushButton{\n"
"border-radius : 5px;\n"
"border-style : solid;\n"
"background-color:white;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color:#90ee90;\n"
"color:white;\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(Setting);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
"border-radius : 5px;\n"
"border-style : solid;\n"
"background-color:white;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color:#90ee90;\n"
"color:white;\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_2);


        formLayout->setLayout(10, QFormLayout::FieldRole, horizontalLayout);

        lineEdit_9 = new QLineEdit(Setting);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setFont(font1);
        lineEdit_9->setStyleSheet(QLatin1String("border-radius : 5px;\n"
"border-style : solid;\n"
"background-color:white;"));

        formLayout->setWidget(8, QFormLayout::FieldRole, lineEdit_9);


        retranslateUi(Setting);

        QMetaObject::connectSlotsByName(Setting);
    } // setupUi

    void retranslateUi(QDialog *Setting)
    {
        Setting->setWindowTitle(QApplication::translate("Setting", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Setting", "Debounce", Q_NULLPTR));
        label_2->setText(QApplication::translate("Setting", "IP Server", Q_NULLPTR));
        label_3->setText(QApplication::translate("Setting", "Port Server", Q_NULLPTR));
        label_4->setText(QApplication::translate("Setting", "Line", Q_NULLPTR));
        label_5->setText(QApplication::translate("Setting", "Machine", Q_NULLPTR));
        label_6->setText(QApplication::translate("Setting", "Restart Time", Q_NULLPTR));
        label_7->setText(QApplication::translate("Setting", "My ID", Q_NULLPTR));
        label_8->setText(QApplication::translate("Setting", "Mode", Q_NULLPTR));
        label_9->setText(QApplication::translate("Setting", "Hour", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Setting", "OK", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Setting", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Setting: public Ui_Setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
