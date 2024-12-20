/********************************************************************************
** Form generated from reading UI file 'navigationwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAVIGATIONWINDOW_H
#define UI_NAVIGATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Profile
{
public:
    QPushButton *milestoneButton;
    QPushButton *recommendationButton;
    QPushButton *guidanceButton;
    QLabel *studentNameLabel;

    void setupUi(QWidget *Profile)
    {
        if (Profile->objectName().isEmpty())
            Profile->setObjectName("Profile");
        Profile->resize(686, 495);
        Profile->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 247, 255);"));
        milestoneButton = new QPushButton(Profile);
        milestoneButton->setObjectName("milestoneButton");
        milestoneButton->setEnabled(false);
        milestoneButton->setGeometry(QRect(220, 90, 251, 71));
        milestoneButton->setStyleSheet(QString::fromUtf8("#milestoneButton{\n"
"font: 700 14pt \"Segoe UI\";\n"
"background-color: rgb(0, 0, 255);\n"
"border-radius: 5px;\n"
"color: rgb(255, 255, 255);\n"
"}\n"
"#milestoneButton:hover{\n"
"	background-color: rgb(0, 85, 255);\n"
"}\n"
""));
        milestoneButton->setAutoDefault(false);
        recommendationButton = new QPushButton(Profile);
        recommendationButton->setObjectName("recommendationButton");
        recommendationButton->setGeometry(QRect(220, 180, 251, 71));
        recommendationButton->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 255);\n"
"border-radius: 5px;"));
        guidanceButton = new QPushButton(Profile);
        guidanceButton->setObjectName("guidanceButton");
        guidanceButton->setGeometry(QRect(220, 270, 251, 71));
        guidanceButton->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 255);\n"
"border-radius: 5px;"));
        studentNameLabel = new QLabel(Profile);
        studentNameLabel->setObjectName("studentNameLabel");
        studentNameLabel->setGeometry(QRect(50, 30, 591, 31));
        studentNameLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 700 14pt \"Segoe UI\";"));

        retranslateUi(Profile);

        QMetaObject::connectSlotsByName(Profile);
    } // setupUi

    void retranslateUi(QWidget *Profile)
    {
        Profile->setWindowTitle(QCoreApplication::translate("Profile", "Form", nullptr));
        milestoneButton->setText(QCoreApplication::translate("Profile", "Milestone", nullptr));
        recommendationButton->setText(QCoreApplication::translate("Profile", "Recommendation", nullptr));
        guidanceButton->setText(QCoreApplication::translate("Profile", "Guidence", nullptr));
        studentNameLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Profile: public Ui_Profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAVIGATIONWINDOW_H
