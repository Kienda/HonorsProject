/********************************************************************************
** Form generated from reading UI file 'guidancewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIDANCEWINDOW_H
#define UI_GUIDANCEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GuidanceWindow
{
public:

    void setupUi(QWidget *GuidanceWindow)
    {
        if (GuidanceWindow->objectName().isEmpty())
            GuidanceWindow->setObjectName("GuidanceWindow");
        GuidanceWindow->resize(400, 300);

        retranslateUi(GuidanceWindow);

        QMetaObject::connectSlotsByName(GuidanceWindow);
    } // setupUi

    void retranslateUi(QWidget *GuidanceWindow)
    {
        GuidanceWindow->setWindowTitle(QCoreApplication::translate("GuidanceWindow", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuidanceWindow: public Ui_GuidanceWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIDANCEWINDOW_H
