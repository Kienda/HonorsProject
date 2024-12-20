/********************************************************************************
** Form generated from reading UI file 'recommendationwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECOMMENDATIONWINDOW_H
#define UI_RECOMMENDATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RecommendationWindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label_8;
    QLabel *label_9;

    void setupUi(QWidget *RecommendationWindow)
    {
        if (RecommendationWindow->objectName().isEmpty())
            RecommendationWindow->setObjectName("RecommendationWindow");
        RecommendationWindow->resize(830, 469);
        label = new QLabel(RecommendationWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(580, 10, 231, 20));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 700 14pt \"Segoe UI\";"));
        label_2 = new QLabel(RecommendationWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 90, 771, 31));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 700 14pt \"Segoe UI\";"));
        label_4 = new QLabel(RecommendationWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 120, 731, 51));
        label_4->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        label_5 = new QLabel(RecommendationWindow);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 170, 801, 81));
        label_5->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        label_6 = new QLabel(RecommendationWindow);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 270, 581, 61));
        label_6->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        label_7 = new QLabel(RecommendationWindow);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 310, 801, 51));
        label_7->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        label_3 = new QLabel(RecommendationWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 250, 671, 21));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 700 14pt \"Segoe UI\";"));
        label_8 = new QLabel(RecommendationWindow);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(40, 380, 801, 51));
        label_8->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        label_9 = new QLabel(RecommendationWindow);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(40, 360, 731, 16));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 700 14pt \"Segoe UI\";"));

        retranslateUi(RecommendationWindow);

        QMetaObject::connectSlotsByName(RecommendationWindow);
    } // setupUi

    void retranslateUi(QWidget *RecommendationWindow)
    {
        RecommendationWindow->setWindowTitle(QCoreApplication::translate("RecommendationWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("RecommendationWindow", "Recommendation", nullptr));
        label_2->setText(QCoreApplication::translate("RecommendationWindow", "Scholarships", nullptr));
        label_4->setText(QCoreApplication::translate("RecommendationWindow", "BMCC Foundation Scholarship Need-Based Scholarship A need-based scholarship awarded to students with financial hardship and strong academic performance. Recipients \n"
"must maintain a 3.0 GPA and full-time enrollment", nullptr));
        label_5->setText(QCoreApplication::translate("RecommendationWindow", "Excelsior Scholarship Merit and Residency-Based Scholarship \n"
"A tuition-free scholarship for New York State residents attending CUNY or SUNY schools. \n"
"Students must enroll full time, complete their degree on time, and stay in New York after graduation", nullptr));
        label_6->setText(QCoreApplication::translate("RecommendationWindow", "CUNY Service Corps Internship Community Service and Career Development", nullptr));
        label_7->setText(QCoreApplication::translate("RecommendationWindow", "BMCC Internship Program Career Development Internship", nullptr));
        label_3->setText(QCoreApplication::translate("RecommendationWindow", "Internships", nullptr));
        label_8->setText(QCoreApplication::translate("RecommendationWindow", "BMCC Programming Club Academic and Career Development Club The Programming Club provides \n"
"a platform for students interested in coding, software development, and technology. ", nullptr));
        label_9->setText(QCoreApplication::translate("RecommendationWindow", "Clubs", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RecommendationWindow: public Ui_RecommendationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECOMMENDATIONWINDOW_H
