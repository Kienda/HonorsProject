/********************************************************************************
** Form generated from reading UI file 'milestonewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MILESTONEWINDOW_H
#define UI_MILESTONEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MilestoneWindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *gpaLabel;

    void setupUi(QWidget *MilestoneWindow)
    {
        if (MilestoneWindow->objectName().isEmpty())
            MilestoneWindow->setObjectName("MilestoneWindow");
        MilestoneWindow->resize(682, 477);
        MilestoneWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 247, 255);"));
        label = new QLabel(MilestoneWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 60, 261, 31));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 700 14pt \"Segoe UI\";"));
        label_2 = new QLabel(MilestoneWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 100, 551, 351));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);"));
        gpaLabel = new QLabel(MilestoneWindow);
        gpaLabel->setObjectName("gpaLabel");
        gpaLabel->setGeometry(QRect(360, 50, 301, 31));
        gpaLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Segoe UI\";\n"
"background-color: rgb(255, 255, 255);"));

        retranslateUi(MilestoneWindow);

        QMetaObject::connectSlotsByName(MilestoneWindow);
    } // setupUi

    void retranslateUi(QWidget *MilestoneWindow)
    {
        MilestoneWindow->setWindowTitle(QCoreApplication::translate("MilestoneWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("MilestoneWindow", "Milestone", nullptr));
        label_2->setText(QCoreApplication::translate("MilestoneWindow", " Title     Descrition      Status\n"
" Schollarship Jack kent Cooke Recieved\n"
" Finacial Aid Tap Recieved\n"
" FellowShip Jump Start In progress\n"
" Internship JPmorgan Internship Completed\n"
" GPA 4.0 2 Semester\n"
"", nullptr));
        gpaLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MilestoneWindow: public Ui_MilestoneWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MILESTONEWINDOW_H
