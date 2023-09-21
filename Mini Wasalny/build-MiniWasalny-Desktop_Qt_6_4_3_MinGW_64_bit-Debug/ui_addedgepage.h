/********************************************************************************
** Form generated from reading UI file 'addedgepage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEDGEPAGE_H
#define UI_ADDEDGEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addEdgepage
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
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *comboBox_3;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit;

    void setupUi(QDialog *addEdgepage)
    {
        if (addEdgepage->objectName().isEmpty())
            addEdgepage->setObjectName("addEdgepage");
        addEdgepage->resize(528, 502);
        pushButton = new QPushButton(addEdgepage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(220, 340, 83, 29));
        widget = new QWidget(addEdgepage);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(140, 80, 154, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName("comboBox");

        horizontalLayout->addWidget(comboBox);

        widget1 = new QWidget(addEdgepage);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(30, 210, 154, 30));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        comboBox_2 = new QComboBox(widget1);
        comboBox_2->setObjectName("comboBox_2");

        horizontalLayout_2->addWidget(comboBox_2);

        widget2 = new QWidget(addEdgepage);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(200, 210, 154, 30));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget2);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        comboBox_3 = new QComboBox(widget2);
        comboBox_3->setObjectName("comboBox_3");

        horizontalLayout_3->addWidget(comboBox_3);

        widget3 = new QWidget(addEdgepage);
        widget3->setObjectName("widget3");
        widget3->setGeometry(QRect(400, 210, 101, 30));
        horizontalLayout_4 = new QHBoxLayout(widget3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget3);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        lineEdit = new QLineEdit(widget3);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_4->addWidget(lineEdit);


        retranslateUi(addEdgepage);

        QMetaObject::connectSlotsByName(addEdgepage);
    } // setupUi

    void retranslateUi(QDialog *addEdgepage)
    {
        addEdgepage->setWindowTitle(QCoreApplication::translate("addEdgepage", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("addEdgepage", "save", nullptr));
        label->setText(QCoreApplication::translate("addEdgepage", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("addEdgepage", "city 1", nullptr));
        label_3->setText(QCoreApplication::translate("addEdgepage", "city 2", nullptr));
        label_4->setText(QCoreApplication::translate("addEdgepage", "cost", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addEdgepage: public Ui_addEdgepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEDGEPAGE_H
