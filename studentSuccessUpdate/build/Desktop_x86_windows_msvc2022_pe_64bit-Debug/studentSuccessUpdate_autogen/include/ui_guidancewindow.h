/********************************************************************************
** Form generated from reading UI file 'guidanceWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIDANCEWINDOW_H
#define UI_GUIDANCEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GuidanceWindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *GuidanceWindow)
    {
        if (GuidanceWindow->objectName().isEmpty())
            GuidanceWindow->setObjectName("GuidanceWindow");
        GuidanceWindow->resize(709, 469);
        label = new QLabel(GuidanceWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 70, 511, 31));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 700 14pt \"Segoe UI\";"));
        label_2 = new QLabel(GuidanceWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 319, 641, 31));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 700 14pt \"Segoe UI\";"));
        label_3 = new QLabel(GuidanceWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(450, 10, 511, 20));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 700 14pt \"Segoe UI\";"));
        label_4 = new QLabel(GuidanceWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 100, 641, 221));
        label_4->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        label_5 = new QLabel(GuidanceWindow);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(60, 350, 651, 121));
        label_5->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        retranslateUi(GuidanceWindow);

        QMetaObject::connectSlotsByName(GuidanceWindow);
    } // setupUi

    void retranslateUi(QWidget *GuidanceWindow)
    {
        GuidanceWindow->setWindowTitle(QCoreApplication::translate("GuidanceWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("GuidanceWindow", "Learning Tips:", nullptr));
        label_2->setText(QCoreApplication::translate("GuidanceWindow", "Study Tips:", nullptr));
        label_3->setText(QCoreApplication::translate("GuidanceWindow", "Guidance", nullptr));
        label_4->setText(QCoreApplication::translate("GuidanceWindow", " \n"
" Practice Active Recall \n"
"Test yourself on key concepts instead of passively re-reading notes. \n"
"Example: After studying a topic, close your book and try to explain it in your own words. \n"
"Use Spaced Repetition \n"
" \n"
"Review material at gradually increasing intervals to improve long-term memory retention. \n"
"Example: Use flashcards or apps like Anki to space out your study sessions effectively. \n"
"Learn by Teaching \n"
" \n"
"Explain topics to others as if you\342\200\231re teaching; it reinforces your understanding. \n"
"Example: Form a study group and take turns teaching each other different topic", nullptr));
        label_5->setText(QCoreApplication::translate("GuidanceWindow", "Create a Dedicated Study Schedule \n"
" \n"
"Set specific times and durations for studying each day to build a habit. \n"
"Example: Study math from 3\342\200\2234 PM and take a 10-minute break before moving to another subject. \n"
"Minimize Distractions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuidanceWindow: public Ui_GuidanceWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIDANCEWINDOW_H
