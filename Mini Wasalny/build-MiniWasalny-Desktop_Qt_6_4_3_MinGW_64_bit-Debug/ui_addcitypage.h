/********************************************************************************
** Form generated from reading UI file 'addcitypage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCITYPAGE_H
#define UI_ADDCITYPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addCitypage
{
public:
    QComboBox *comboBox;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QTextEdit *textEdit;
    QCheckBox *checkBox;

    void setupUi(QDialog *addCitypage)
    {
        if (addCitypage->objectName().isEmpty())
            addCitypage->setObjectName("addCitypage");
        addCitypage->resize(462, 406);
        comboBox = new QComboBox(addCitypage);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(140, 50, 151, 28));
        pushButton = new QPushButton(addCitypage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(310, 330, 83, 29));
        layoutWidget = new QWidget(addCitypage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 110, 197, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        layoutWidget1 = new QWidget(addCitypage);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(30, 260, 258, 121));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        textEdit = new QTextEdit(layoutWidget1);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        checkBox = new QCheckBox(addCitypage);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(40, 220, 111, 26));

        retranslateUi(addCitypage);

        QMetaObject::connectSlotsByName(addCitypage);
    } // setupUi

    void retranslateUi(QDialog *addCitypage)
    {
        addCitypage->setWindowTitle(QCoreApplication::translate("addCitypage", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("addCitypage", "save", nullptr));
        label->setText(QCoreApplication::translate("addCitypage", "city name", nullptr));
        label_2->setText(QCoreApplication::translate("addCitypage", "edges", nullptr));
        checkBox->setText(QCoreApplication::translate("addCitypage", "with edges", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addCitypage: public Ui_addCitypage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCITYPAGE_H
