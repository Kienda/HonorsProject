#include "navigationwindow.h"
#include <QMessageBox>
#include "ui_navigationwindow.h"

NavigationWindow::NavigationWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::NavigationWindow) {
    ui->setupUi(this);

    // Connect buttons to their respective slots if not set up in the .ui file
    connect(ui->milestoneButton, &QPushButton::clicked, this, &NavigationWindow::on_milestoneButton_clicked);
    connect(ui->recommendationButton, &QPushButton::clicked, this, &NavigationWindow::on_recommendationButton_clicked);
    connect(ui->guidanceButton, &QPushButton::clicked, this, &NavigationWindow::on_guidanceButton_clicked);
}

NavigationWindow::~NavigationWindow() {
    delete ui;
}

void NavigationWindow::setStudentDetails(const QString &name, const QString &gpa, const QString &semester) {
    ui->studentNameLabel->setText(name);
    ui->gpaLabel->setText(gpa);
    ui->semesterLabel->setText(semester);
}

// Slot: Milestone button clicked
void NavigationWindow::on_milestoneButton_clicked() {
    QMessageBox::information(this, "Milestone", "Milestone button clicked!");
}

// Slot: Recommendation button clicked
void NavigationWindow::on_recommendationButton_clicked() {
    QMessageBox::information(this, "Recommendation", "Recommendation button clicked!");
}

// Slot: Guidance button clicked
void NavigationWindow::on_guidanceButton_clicked() {
    QMessageBox::information(this, "Guidance", "Guidance button clicked!");
}
