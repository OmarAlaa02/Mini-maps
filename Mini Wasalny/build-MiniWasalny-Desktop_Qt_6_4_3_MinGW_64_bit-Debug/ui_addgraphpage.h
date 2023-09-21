/********************************************************************************
** Form generated from reading UI file 'addgraphpage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDGRAPHPAGE_H
#define UI_ADDGRAPHPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addGraphPage
{
public:
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QCheckBox *checkBox;

    void setupUi(QDialog *addGraphPage)
    {
        if (addGraphPage->objectName().isEmpty())
            addGraphPage->setObjectName("addGraphPage");
        addGraphPage->resize(505, 429);
        textEdit = new QTextEdit(addGraphPage);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(40, 100, 171, 281));
        lineEdit = new QLineEdit(addGraphPage);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(180, 40, 113, 28));
        pushButton = new QPushButton(addGraphPage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(260, 360, 83, 29));
        checkBox = new QCheckBox(addGraphPage);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(300, 140, 93, 26));

        retranslateUi(addGraphPage);

        QMetaObject::connectSlotsByName(addGraphPage);
    } // setupUi

    void retranslateUi(QDialog *addGraphPage)
    {
        addGraphPage->setWindowTitle(QCoreApplication::translate("addGraphPage", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("addGraphPage", "save", nullptr));
        checkBox->setText(QCoreApplication::translate("addGraphPage", "directed", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addGraphPage: public Ui_addGraphPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDGRAPHPAGE_H
