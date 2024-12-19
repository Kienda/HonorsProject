#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "student.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Placeholders for Login fields
    ui->StudentId->setPlaceholderText("Enter Your student ID");
    ui->studentEmail->setPlaceholderText("Enter Your email");

    // Placeholders for Sign-Up fields
    ui->name->setPlaceholderText("Enter Your Name");
    ui->email->setPlaceholderText("Enter Your Email");
    ui->major->setPlaceholderText("Enter Your Major");
    ui->id->setPlaceholderText("Enter Your Student ID");
    ui->semester->setPlaceholderText("Enter Your Semester");
    ui->gpa->setPlaceholderText("Enter Your GPA");

    // Initially show Login form and hide Sign-Up form
    ui->loginBox->show();
    ui->signUpBox->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_login_clicked()
{
    QString uStudentId = ui->StudentId->text();
    QString uStudentEmail = ui->studentEmail->text();

    if (Student::validateLogin(uStudentEmail, uStudentId, "students.json")) {
        QMessageBox::information(this, "Welcome", "Login successful! Welcome to the Student Success Profile.");
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
