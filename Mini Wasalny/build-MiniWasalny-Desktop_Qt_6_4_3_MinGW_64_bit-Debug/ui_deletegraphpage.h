/********************************************************************************
** Form generated from reading UI file 'deletegraphpage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEGRAPHPAGE_H
#define UI_DELETEGRAPHPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_deleteGraphpage
{
public:
    QComboBox *comboBox;
    QPushButton *pushButton;

    void setupUi(QDialog *deleteGraphpage)
    {
        if (deleteGraphpage->objectName().isEmpty())
            deleteGraphpage->setObjectName("deleteGraphpage");
        deleteGraphpage->resize(674, 499);
        comboBox = new QComboBox(deleteGraphpage);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(240, 160, 161, 28));
        pushButton = new QPushButton(deleteGraphpage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(280, 290, 83, 29));

        retranslateUi(deleteGraphpage);

        QMetaObject::connectSlotsByName(deleteGraphpage);
    } // setupUi

    void retranslateUi(QDialog *deleteGraphpage)
    {
        deleteGraphpage->setWindowTitle(QCoreApplication::translate("deleteGraphpage", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("deleteGraphpage", "delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteGraphpage: public Ui_deleteGraphpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEGRAPHPAGE_H
