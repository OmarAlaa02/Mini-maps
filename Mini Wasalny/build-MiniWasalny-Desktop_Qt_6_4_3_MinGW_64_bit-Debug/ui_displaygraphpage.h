/********************************************************************************
** Form generated from reading UI file 'displaygraphpage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYGRAPHPAGE_H
#define UI_DISPLAYGRAPHPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_displayGraphpage
{
public:
    QComboBox *comboBox;
    QTextEdit *textEdit;

    void setupUi(QDialog *displayGraphpage)
    {
        if (displayGraphpage->objectName().isEmpty())
            displayGraphpage->setObjectName("displayGraphpage");
        displayGraphpage->resize(685, 544);
        comboBox = new QComboBox(displayGraphpage);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(331, 80, 141, 28));
        textEdit = new QTextEdit(displayGraphpage);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(80, 150, 211, 281));

        retranslateUi(displayGraphpage);

        QMetaObject::connectSlotsByName(displayGraphpage);
    } // setupUi

    void retranslateUi(QDialog *displayGraphpage)
    {
        displayGraphpage->setWindowTitle(QCoreApplication::translate("displayGraphpage", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class displayGraphpage: public Ui_displayGraphpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYGRAPHPAGE_H
