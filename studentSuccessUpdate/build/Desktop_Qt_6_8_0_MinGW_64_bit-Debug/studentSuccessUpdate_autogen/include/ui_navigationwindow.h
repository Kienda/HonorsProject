/********************************************************************************
** Form generated from reading UI file 'navigationwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAVIGATIONWINDOW_H
#define UI_NAVIGATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NavigationWindow
{
public:
    QLabel *studentNameLabel;
    QLabel *semesterLabel;
    QStackedWidget *stackedWidget;
    QWidget *welcomePage;
    QPlainTextEdit *moto;
    QWidget *milesonePage;
    QWidget *recommendationPage;
    QWidget *guidancePage;
    QWidget *QVBoxLayout;
    QPushButton *milestoneButton;
    QPushButton *guidanceButton;
    QPushButton *recommendationButton;
    QLabel *majorLabel;
    QLabel *gpaLabel;

    void setupUi(QWidget *NavigationWindow)
    {
        if (NavigationWindow->objectName().isEmpty())
            NavigationWindow->setObjectName("NavigationWindow");
        NavigationWindow->setEnabled(true);
        NavigationWindow->resize(836, 495);
        NavigationWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 247, 255);"));
        studentNameLabel = new QLabel(NavigationWindow);
        studentNameLabel->setObjectName("studentNameLabel");
        studentNameLabel->setGeometry(QRect(490, 10, 331, 21));
        studentNameLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 900 12pt \"Segoe UI Black\";"));
        semesterLabel = new QLabel(NavigationWindow);
        semesterLabel->setObjectName("semesterLabel");
        semesterLabel->setGeometry(QRect(540, 50, 191, 31));
        semesterLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Segoe UI\";"));
        stackedWidget = new QStackedWidget(NavigationWindow);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(10, 90, 811, 411));
        stackedWidget->setStyleSheet(QString::fromUtf8("border-radius:10px;"));
        welcomePage = new QWidget();
        welcomePage->setObjectName("welcomePage");
        welcomePage->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        moto = new QPlainTextEdit(welcomePage);
        moto->setObjectName("moto");
        moto->setGeometry(QRect(20, 30, 781, 311));
        moto->setStyleSheet(QString::fromUtf8("font: 700 24pt \"Segoe UI\";\n"
"color: rgb(0, 0, 255);\n"
"background-color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(welcomePage);
        milesonePage = new QWidget();
        milesonePage->setObjectName("milesonePage");
        stackedWidget->addWidget(milesonePage);
        recommendationPage = new QWidget();
        recommendationPage->setObjectName("recommendationPage");
        recommendationPage->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(recommendationPage);
        guidancePage = new QWidget();
        guidancePage->setObjectName("guidancePage");
        guidancePage->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QVBoxLayout = new QWidget(guidancePage);
        QVBoxLayout->setObjectName("QVBoxLayout");
        QVBoxLayout->setGeometry(QRect(0, 0, 711, 411));
        stackedWidget->addWidget(guidancePage);
        milestoneButton = new QPushButton(NavigationWindow);
        milestoneButton->setObjectName("milestoneButton");
        milestoneButton->setGeometry(QRect(180, 0, 101, 41));
        milestoneButton->setStyleSheet(QString::fromUtf8("#milestoneButton{\n"
"	font: 700 12pt \"Segoe UI\";\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(0, 0, 255);\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"#milestoneButton:hover{\n"
"	background-color: rgb(0, 85, 255);\n"
"	border-color: rgb(255, 0, 0);\n"
"}\n"
"#milestoneButton:focus{\n"
"	\n"
"	background-color: rgb(0, 170, 255);\n"
"}"));
        guidanceButton = new QPushButton(NavigationWindow);
        guidanceButton->setObjectName("guidanceButton");
        guidanceButton->setGeometry(QRect(290, 0, 101, 41));
        guidanceButton->setStyleSheet(QString::fromUtf8("#guidanceButton{\n"
"	font: 700 12pt \"Segoe UI\";\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(0, 0, 255);\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"#guidanceButton:hover{\n"
"	background-color: rgb(0, 85, 255);\n"
"	border-color: rgb(255, 0, 0);\n"
"}\n"
"#guidanceButton:focus{\n"
"	\n"
"	background-color: rgb(0, 170, 255);\n"
"}"));
        recommendationButton = new QPushButton(NavigationWindow);
        recommendationButton->setObjectName("recommendationButton");
        recommendationButton->setGeometry(QRect(0, 0, 171, 41));
        recommendationButton->setStyleSheet(QString::fromUtf8("#recommendationButton{\n"
"	font: 700 12pt \"Segoe UI\";\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(0, 0, 255);\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"#recommendationButton:hover{\n"
"	background-color: rgb(0, 85, 255);\n"
"	border-color: rgb(255, 0, 0);\n"
"}\n"
"#recommendationButton:focus{\n"
"	\n"
"	background-color: rgb(0, 170, 255);\n"
"}"));
        majorLabel = new QLabel(NavigationWindow);
        majorLabel->setObjectName("majorLabel");
        majorLabel->setGeometry(QRect(10, 50, 321, 31));
        majorLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Segoe UI\";"));
        gpaLabel = new QLabel(NavigationWindow);
        gpaLabel->setObjectName("gpaLabel");
        gpaLabel->setGeometry(QRect(350, 50, 181, 31));
        gpaLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Segoe UI\";"));
        stackedWidget->raise();
        studentNameLabel->raise();
        semesterLabel->raise();
        milestoneButton->raise();
        guidanceButton->raise();
        recommendationButton->raise();
        majorLabel->raise();
        gpaLabel->raise();

        retranslateUi(NavigationWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(NavigationWindow);
    } // setupUi

    void retranslateUi(QWidget *NavigationWindow)
    {
        NavigationWindow->setWindowTitle(QCoreApplication::translate("NavigationWindow", "Form", nullptr));
        studentNameLabel->setText(QString());
        semesterLabel->setText(QString());
        moto->setPlainText(QCoreApplication::translate("NavigationWindow", "Student Success Empowers \n"
"Your Student Journey...", nullptr));
        milestoneButton->setText(QCoreApplication::translate("NavigationWindow", "Milestone", nullptr));
        guidanceButton->setText(QCoreApplication::translate("NavigationWindow", "Guidence", nullptr));
        recommendationButton->setText(QCoreApplication::translate("NavigationWindow", "Recommendation", nullptr));
        majorLabel->setText(QString());
        gpaLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NavigationWindow: public Ui_NavigationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAVIGATIONWINDOW_H
