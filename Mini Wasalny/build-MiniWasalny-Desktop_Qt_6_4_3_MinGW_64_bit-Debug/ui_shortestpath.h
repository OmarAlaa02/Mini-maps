/********************************************************************************
** Form generated from reading UI file 'shortestpath.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHORTESTPATH_H
#define UI_SHORTESTPATH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_shortestPath
{
public:
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QLabel *label_4;
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

    void setupUi(QDialog *shortestPath)
    {
        if (shortestPath->objectName().isEmpty())
            shortestPath->setObjectName("shortestPath");
        shortestPath->resize(566, 470);
        pushButton = new QPushButton(shortestPath);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(210, 310, 83, 29));
        textEdit = new QTextEdit(shortestPath);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(60, 310, 104, 85));
        label_4 = new QLabel(shortestPath);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(80, 280, 63, 20));
        widget = new QWidget(shortestPath);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(150, 110, 154, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName("comboBox");

        horizontalLayout->addWidget(comboBox);

        widget1 = new QWidget(shortestPath);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(20, 220, 154, 30));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        comboBox_2 = new QComboBox(widget1);
        comboBox_2->setObjectName("comboBox_2");

        horizontalLayout_2->addWidget(comboBox_2);

        widget2 = new QWidget(shortestPath);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(280, 220, 154, 30));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget2);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        comboBox_3 = new QComboBox(widget2);
        comboBox_3->setObjectName("comboBox_3");

        horizontalLayout_3->addWidget(comboBox_3);


        retranslateUi(shortestPath);

        QMetaObject::connectSlotsByName(shortestPath);
    } // setupUi

    void retranslateUi(QDialog *shortestPath)
    {
        shortestPath->setWindowTitle(QCoreApplication::translate("shortestPath", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("shortestPath", "display", nullptr));
        label_4->setText(QCoreApplication::translate("shortestPath", "path", nullptr));
        label->setText(QCoreApplication::translate("shortestPath", "name", nullptr));
        label_2->setText(QCoreApplication::translate("shortestPath", "src", nullptr));
        label_3->setText(QCoreApplication::translate("shortestPath", "dest", nullptr));
    } // retranslateUi

};

namespace Ui {
    class shortestPath: public Ui_shortestPath {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHORTESTPATH_H
