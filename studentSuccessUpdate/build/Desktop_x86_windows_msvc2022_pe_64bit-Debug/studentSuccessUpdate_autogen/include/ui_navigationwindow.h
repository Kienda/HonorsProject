/********************************************************************************
** Form generated from reading UI file 'navigationwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAVIGATIONWINDOW_H
#define UI_NAVIGATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NavigationWindow
{
public:
    QPushButton *recommendationButton;
    QPushButton *guidanceButton;
    QLabel *studentNameLabel;
    QPushButton *milestoneButton;
    QLabel *gpaLabel;
    QLabel *semesterLabel;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;

    void setupUi(QWidget *NavigationWindow)
    {
        if (NavigationWindow->objectName().isEmpty())
            NavigationWindow->setObjectName("NavigationWindow");
        NavigationWindow->setEnabled(true);
        NavigationWindow->resize(836, 495);
        NavigationWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 247, 255);"));
        recommendationButton = new QPushButton(NavigationWindow);
        recommendationButton->setObjectName("recommendationButton");
        recommendationButton->setGeometry(QRect(10, 180, 251, 71));
        recommendationButton->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 255);\n"
"border-radius: 5px;"));
        guidanceButton = new QPushButton(NavigationWindow);
        guidanceButton->setObjectName("guidanceButton");
        guidanceButton->setGeometry(QRect(10, 260, 251, 71));
        guidanceButton->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 255);\n"
"border-radius: 5px;"));
        studentNameLabel = new QLabel(NavigationWindow);
        studentNameLabel->setObjectName("studentNameLabel");
        studentNameLabel->setGeometry(QRect(20, 10, 331, 31));
        studentNameLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 700 14pt \"Segoe UI\";"));
        milestoneButton = new QPushButton(NavigationWindow);
        milestoneButton->setObjectName("milestoneButton");
        milestoneButton->setGeometry(QRect(10, 100, 251, 71));
        milestoneButton->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 255);\n"
"border-radius: 5px;"));
        gpaLabel = new QLabel(NavigationWindow);
        gpaLabel->setObjectName("gpaLabel");
        gpaLabel->setGeometry(QRect(390, 20, 181, 31));
        gpaLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 700 14pt \"Segoe UI\";"));
        semesterLabel = new QLabel(NavigationWindow);
        semesterLabel->setObjectName("semesterLabel");
        semesterLabel->setGeometry(QRect(600, 20, 191, 31));
        semesterLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 700 14pt \"Segoe UI\";"));
        stackedWidget = new QStackedWidget(NavigationWindow);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(299, 79, 531, 411));
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        retranslateUi(NavigationWindow);

        QMetaObject::connectSlotsByName(NavigationWindow);
    } // setupUi

    void retranslateUi(QWidget *NavigationWindow)
    {
        NavigationWindow->setWindowTitle(QCoreApplication::translate("NavigationWindow", "Form", nullptr));
        recommendationButton->setText(QCoreApplication::translate("NavigationWindow", "Recommendation", nullptr));
        guidanceButton->setText(QCoreApplication::translate("NavigationWindow", "Guidence", nullptr));
        studentNameLabel->setText(QString());
        milestoneButton->setText(QCoreApplication::translate("NavigationWindow", "Milestone", nullptr));
        gpaLabel->setText(QString());
        semesterLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NavigationWindow: public Ui_NavigationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAVIGATIONWINDOW_H
