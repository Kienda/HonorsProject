#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "navigationwindow.h"
#include "student.h"
#include <QMessageBox>
#include <stdexcept>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
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

    ui->loginBox->show();
    ui->signUpBox->show();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_login_clicked() {
    QString email = ui->studentEmail->text();
    QString id = ui->StudentId->text();

    if (email.isEmpty() || id.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill in both email and ID.");
        return;
    }

    try {
        StudentInfo studentInfo = Student::validateLogin(email, id, "students.json");
        if (studentInfo.name.isEmpty()) {
            throw std::runtime_error("Invalid email or ID.");
        }

        QMessageBox::information(this, "Welcome", "Login successful! Welcome, " + studentInfo.name + ".");

        navWindow = new NavigationWindow(this);
        navWindow->setStudentDetails(studentInfo.name, studentInfo.gpa, studentInfo.semester);
        navWindow->show();
        this->hide();
    } catch (const std::exception &e) {
        QMessageBox::critical(this, "Login Failed", e.what());
    }
}

void MainWindow::on_signUp_clicked() {
    QString name = ui->name->text();
    QString email = ui->email->text();
    QString major = ui->major->text();
    QString id = ui->id->text();
    QString semester = ui->semester->text();
    QString gpa = ui->gpa->text();

    if (name.isEmpty() || email.isEmpty() || major.isEmpty() || id.isEmpty() || semester.isEmpty() || gpa.isEmpty()) {
        QMessageBox::critical(this, "Input Error", "All fields must be filled.");
        return;
    }

    bool idOk, semesterOk, gpaOk;
    int studentId = id.toInt(&idOk);
    int studentSemester = semester.toInt(&semesterOk);
    double studentGpa = gpa.toDouble(&gpaOk);

    if (!idOk || !semesterOk || !gpaOk || studentGpa < 0.0 || studentGpa > 4.0) {
        QMessageBox::critical(this, "Validation Error", "Invalid numeric values for ID, Semester, or GPA.");
        return;
    }

    try {
        Student student(name, email, studentId, major, studentGpa, studentSemester);
        student.saveToJson("students.json");

        QMessageBox::information(this, "Success", "Student registered successfully!");
        ui->signUpBox->hide();
        ui->loginBox->show();
    } catch (const std::exception &e) {
        QMessageBox::critical(this, "Error", e.what());
    }
}
