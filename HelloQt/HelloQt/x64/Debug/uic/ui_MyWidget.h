/********************************************************************************
** Form generated from reading UI file 'MyWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidgetClass
{
public:

    void setupUi(QWidget *MyWidgetClass)
    {
        if (MyWidgetClass->objectName().isEmpty())
            MyWidgetClass->setObjectName(QStringLiteral("MyWidgetClass"));
        MyWidgetClass->resize(600, 400);

        retranslateUi(MyWidgetClass);

        QMetaObject::connectSlotsByName(MyWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *MyWidgetClass)
    {
        MyWidgetClass->setWindowTitle(QApplication::translate("MyWidgetClass", "MyWidget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyWidgetClass: public Ui_MyWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
