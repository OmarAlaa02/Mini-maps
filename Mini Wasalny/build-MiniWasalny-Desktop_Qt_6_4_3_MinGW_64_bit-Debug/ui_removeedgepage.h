/********************************************************************************
** Form generated from reading UI file 'removeedgepage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEEDGEPAGE_H
#define UI_REMOVEEDGEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_removeEdgepage
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

    void setupUi(QDialog *removeEdgepage)
    {
        if (removeEdgepage->objectName().isEmpty())
            removeEdgepage->setObjectName("removeEdgepage");
        removeEdgepage->resize(569, 506);
        pushButton = new QPushButton(removeEdgepage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(240, 370, 83, 29));
        widget = new QWidget(removeEdgepage);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(170, 140, 171, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName("comboBox");

        horizontalLayout->addWidget(comboBox);

        widget1 = new QWidget(removeEdgepage);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(180, 230, 141, 30));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        comboBox_2 = new QComboBox(widget1);
        comboBox_2->setObjectName("comboBox_2");

        horizontalLayout_2->addWidget(comboBox_2);


        retranslateUi(removeEdgepage);

        QMetaObject::connectSlotsByName(removeEdgepage);
    } // setupUi

    void retranslateUi(QDialog *removeEdgepage)
    {
        removeEdgepage->setWindowTitle(QCoreApplication::translate("removeEdgepage", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("removeEdgepage", "delete", nullptr));
        label->setText(QCoreApplication::translate("removeEdgepage", "graph name", nullptr));
        label_2->setText(QCoreApplication::translate("removeEdgepage", "edge", nullptr));
    } // retranslateUi

};

namespace Ui {
    class removeEdgepage: public Ui_removeEdgepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEEDGEPAGE_H
