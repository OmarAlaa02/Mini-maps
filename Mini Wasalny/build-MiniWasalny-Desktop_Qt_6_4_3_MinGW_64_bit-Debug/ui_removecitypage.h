/********************************************************************************
** Form generated from reading UI file 'removecitypage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVECITYPAGE_H
#define UI_REMOVECITYPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_removeCitypage
{
public:
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox_2;

    void setupUi(QDialog *removeCitypage)
    {
        if (removeCitypage->objectName().isEmpty())
            removeCitypage->setObjectName("removeCitypage");
        removeCitypage->resize(578, 479);
        pushButton = new QPushButton(removeCitypage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(230, 360, 83, 29));
        widget = new QWidget(removeCitypage);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(189, 120, 171, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName("comboBox");

        horizontalLayout->addWidget(comboBox);

        widget1 = new QWidget(removeCitypage);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(190, 230, 181, 30));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        comboBox_2 = new QComboBox(widget1);
        comboBox_2->setObjectName("comboBox_2");

        horizontalLayout_2->addWidget(comboBox_2);


        retranslateUi(removeCitypage);

        QMetaObject::connectSlotsByName(removeCitypage);
    } // setupUi

    void retranslateUi(QDialog *removeCitypage)
    {
        removeCitypage->setWindowTitle(QCoreApplication::translate("removeCitypage", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("removeCitypage", "delete", nullptr));
        label->setText(QCoreApplication::translate("removeCitypage", "graph name", nullptr));
        label_2->setText(QCoreApplication::translate("removeCitypage", "city", nullptr));
    } // retranslateUi

};

namespace Ui {
    class removeCitypage: public Ui_removeCitypage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVECITYPAGE_H
