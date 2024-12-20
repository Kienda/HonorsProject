#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "student.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::StudentSuccess)
{
    ui->setupUi(this);

    // Placeholder text for Login fields
    ui->StudentId->setPlaceholderText("Enter your student ID");
    ui->studentEmail->setPlaceholderText("Enter your email");

    // Placeholder text for Sign-Up fields
    ui->name->setPlaceholderText("Enter your name");
    ui->email->setPlaceholderText("Enter your email");
    ui->major->setPlaceholderText("Enter your major");
    ui->id->setPlaceholderText("Enter your student ID");
    ui->semester->setPlaceholderText("Enter your semester");
    ui->gpa->setPlaceholderText("Enter your GPA");

    // Initially show Login form and hide Sign-Up form
    ui->loginBox->show();
    ui->signUpBox->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_login_clicked()
{
    QString email = ui->studentEmail->text();
    QString id = ui->StudentId->text();

    QString studentName = Student::validateLogin(email, id, "students.json");

    if (!studentName.isEmpty()) {
        QMessageBox::information(this, "Welcome", "Login successful! Welcome, " + studentName + ".");

        // Open navigation window
        navWindow = new NavigationWindow(this);
        navWindow->setStudentName(studentName);
        navWindow->show();
        this->hide();
    } else {
        QMessageBox::critical(this, "Error", "Invalid email or ID.");
    }
}

void MainWindow::on_signUp_clicked()
{
    ui->loginBox->hide();
    ui->signUpBox->show();

    try {
        QString name = ui->name->text();
        QString email = ui->email->text();
        QString major = ui->major->text();
        QString id = ui->id->text();
        QString semester = ui->semester->text();
        QString gpa = ui->gpa->text();

        if (name.isEmpty() || email.isEmpty() || major.isEmpty() || id.isEmpty() || semester.isEmpty() || gpa.isEmpty()) {
            throw std::invalid_argument("All fields must be filled.");
        }

        Student student(name, email, id.toInt(), major, gpa.toDouble(), semester.toInt());
        student.saveToJson("students.json");

        QMessageBox::information(this, "Success", "Student registered successfully!");

        ui->signUpBox->hide();
        ui->loginBox->show();
    } catch (const std::exception &e) {
        QMessageBox::critical(this, "Error", e.what());
    }
}
