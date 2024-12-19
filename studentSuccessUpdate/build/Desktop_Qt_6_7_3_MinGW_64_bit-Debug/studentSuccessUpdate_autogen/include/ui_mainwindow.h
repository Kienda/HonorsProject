/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *signUpBox;
    QVBoxLayout *verticalLayout;
    QLineEdit *name;
    QLineEdit *email;
    QLineEdit *major;
    QLineEdit *id;
    QLineEdit *semester;
    QLineEdit *gpa;
    QPushButton *signUp;
    QGroupBox *loginBox;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *studentEmail;
    QLineEdit *StudentId;
    QPushButton *login;
    QPlainTextEdit *moto;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(159, 166, 170);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        signUpBox = new QGroupBox(centralwidget);
        signUpBox->setObjectName("signUpBox");
        signUpBox->setGeometry(QRect(100, 130, 311, 411));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        signUpBox->setFont(font);
        signUpBox->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 255);\n"
"border-radius: 10px;"));
        verticalLayout = new QVBoxLayout(signUpBox);
        verticalLayout->setObjectName("verticalLayout");
        name = new QLineEdit(signUpBox);
        name->setObjectName("name");
        name->setMinimumSize(QSize(293, 18));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        name->setFont(font1);
        name->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 14pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 5px;"));

        verticalLayout->addWidget(name);

        email = new QLineEdit(signUpBox);
        email->setObjectName("email");
        email->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 14pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 5px;"));

        verticalLayout->addWidget(email);

        major = new QLineEdit(signUpBox);
        major->setObjectName("major");
        major->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 14pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 5px;"));

        verticalLayout->addWidget(major);

        id = new QLineEdit(signUpBox);
        id->setObjectName("id");
        id->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 14pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 5px;"));

        verticalLayout->addWidget(id);

        semester = new QLineEdit(signUpBox);
        semester->setObjectName("semester");
        semester->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 14pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 5px;"));

        verticalLayout->addWidget(semester);

        gpa = new QLineEdit(signUpBox);
        gpa->setObjectName("gpa");
        gpa->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 14pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 5px;"));

        verticalLayout->addWidget(gpa);

        signUp = new QPushButton(signUpBox);
        signUp->setObjectName("signUp");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setItalic(false);
        signUp->setFont(font2);
        signUp->setStyleSheet(QString::fromUtf8("#signUp{\n"
"background-color: rgb(85, 170, 0);\n"
"font: 700 14pt \"Segoe UI\";\n"
"border-radius: 5px;\n"
"border-width:0px;\n"
"}\n"
"\n"
"#signUp:hover{\n"
"	background-color: rgb(0, 170, 127);\n"
"}"));

        verticalLayout->addWidget(signUp);

        loginBox = new QGroupBox(centralwidget);
        loginBox->setObjectName("loginBox");
        loginBox->setGeometry(QRect(450, 130, 261, 211));
        loginBox->setFont(font);
        loginBox->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 255);\n"
"border-radius: 10px;"));
        verticalLayout_2 = new QVBoxLayout(loginBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        studentEmail = new QLineEdit(loginBox);
        studentEmail->setObjectName("studentEmail");
        studentEmail->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 14pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 5px;"));

        verticalLayout_2->addWidget(studentEmail);

        StudentId = new QLineEdit(loginBox);
        StudentId->setObjectName("StudentId");
        StudentId->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 14pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 5px;"));

        verticalLayout_2->addWidget(StudentId);

        login = new QPushButton(loginBox);
        login->setObjectName("login");
        login->setFont(font2);
        login->setStyleSheet(QString::fromUtf8("#login{\n"
"background-color: rgb(85, 170, 0);\n"
"font: 700 14pt \"Segoe UI\";\n"
"border-radius: 5px;\n"
"border-width:0px;\n"
"}\n"
"\n"
"#login:hover{\n"
"	background-color: rgb(0, 170, 127);\n"
"}"));

        verticalLayout_2->addWidget(login);

        moto = new QPlainTextEdit(centralwidget);
        moto->setObjectName("moto");
        moto->setGeometry(QRect(90, 10, 651, 111));
        moto->setStyleSheet(QString::fromUtf8("font: 700 24pt \"Segoe UI\";"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(name, email);
        QWidget::setTabOrder(email, major);
        QWidget::setTabOrder(major, id);
        QWidget::setTabOrder(id, semester);
        QWidget::setTabOrder(semester, gpa);
        QWidget::setTabOrder(gpa, moto);
        QWidget::setTabOrder(moto, login);
        QWidget::setTabOrder(login, signUp);
        QWidget::setTabOrder(signUp, studentEmail);
        QWidget::setTabOrder(studentEmail, StudentId);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        signUpBox->setTitle(QCoreApplication::translate("MainWindow", "Create Your Account", nullptr));
        gpa->setText(QString());
        signUp->setText(QCoreApplication::translate("MainWindow", "Signup", nullptr));
        loginBox->setTitle(QCoreApplication::translate("MainWindow", "Please login:", nullptr));
        StudentId->setText(QString());
        login->setText(QCoreApplication::translate("MainWindow", "login", nullptr));
        moto->setPlainText(QCoreApplication::translate("MainWindow", "Student Success Empowers \n"
"Your Student Journey...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
