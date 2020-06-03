/********************************************************************************
** Form generated from reading UI file 'subwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBWIDGET_H
#define UI_SUBWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_subwidget
{
public:

    void setupUi(QWidget *subwidget)
    {
        if (subwidget->objectName().isEmpty())
            subwidget->setObjectName(QStringLiteral("subwidget"));
        subwidget->resize(400, 300);

        retranslateUi(subwidget);

        QMetaObject::connectSlotsByName(subwidget);
    } // setupUi

    void retranslateUi(QWidget *subwidget)
    {
        subwidget->setWindowTitle(QApplication::translate("subwidget", "subwidget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class subwidget: public Ui_subwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBWIDGET_H
