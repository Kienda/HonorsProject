/********************************************************************************
** Form generated from reading UI file 'milestonewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MILESTONEWINDOW_H
#define UI_MILESTONEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MilestoneWindow
{
public:

    void setupUi(QWidget *MilestoneWindow)
    {
        if (MilestoneWindow->objectName().isEmpty())
            MilestoneWindow->setObjectName("MilestoneWindow");
        MilestoneWindow->resize(400, 300);

        retranslateUi(MilestoneWindow);

        QMetaObject::connectSlotsByName(MilestoneWindow);
    } // setupUi

    void retranslateUi(QWidget *MilestoneWindow)
    {
        MilestoneWindow->setWindowTitle(QCoreApplication::translate("MilestoneWindow", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MilestoneWindow: public Ui_MilestoneWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MILESTONEWINDOW_H
