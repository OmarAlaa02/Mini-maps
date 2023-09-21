/********************************************************************************
** Form generated from reading UI file 'editgraphpage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITGRAPHPAGE_H
#define UI_EDITGRAPHPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editGraphpage
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *editGraphpage)
    {
        if (editGraphpage->objectName().isEmpty())
            editGraphpage->setObjectName("editGraphpage");
        editGraphpage->resize(554, 451);
        widget = new QWidget(editGraphpage);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(230, 170, 99, 139));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout->addWidget(pushButton_4);


        retranslateUi(editGraphpage);

        QMetaObject::connectSlotsByName(editGraphpage);
    } // setupUi

    void retranslateUi(QDialog *editGraphpage)
    {
        editGraphpage->setWindowTitle(QCoreApplication::translate("editGraphpage", "Dialog", nullptr));
        pushButton_2->setText(QCoreApplication::translate("editGraphpage", "Add edge", nullptr));
        pushButton->setText(QCoreApplication::translate("editGraphpage", "add city", nullptr));
        pushButton_3->setText(QCoreApplication::translate("editGraphpage", "remove edge", nullptr));
        pushButton_4->setText(QCoreApplication::translate("editGraphpage", "remove city", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editGraphpage: public Ui_editGraphpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITGRAPHPAGE_H
