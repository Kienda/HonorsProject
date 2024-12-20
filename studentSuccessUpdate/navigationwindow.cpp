#include "navigationwindow.h"
#include "ui_navigationwindow.h"
#include "milestonewindow.h"
#include "recommendationwindow.h"
#include "guidancewindow.h"
#include <QDebug>

NavigationWindow::NavigationWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::NavigationWindow)
{
    ui->setupUi(this);

    // Connect each button click to the respective slot
    connect(ui->milestoneButton, &QPushButton::clicked, this, &NavigationWindow::on_milestoneButton_clicked);
    connect(ui->recommendationButton, &QPushButton::clicked, this, &NavigationWindow::on_recommendationButton_clicked);
    connect(ui->guidanceButton, &QPushButton::clicked, this, &NavigationWindow::on_guidanceButton_clicked);
}

NavigationWindow::~NavigationWindow()
{
    delete ui;
}

void NavigationWindow::setStudentName(const QString &studentName)
{
    ui->studentNameLabel->setText("Welcome, " + studentName);  // Ensure `studentNameLabel` exists in the UI
}

// Show Milestone Window
void NavigationWindow::on_milestoneButton_clicked()
{
    qDebug() << "Milestone button clicked!";

    MilestoneWindow *milestoneWindow = new MilestoneWindow(this);
    milestoneWindow->show();  // Show the Milestone Window

    this->show();  // Hide the current Navigation Window
}

// Show Recommendation Window
void NavigationWindow::on_recommendationButton_clicked()
{
    qDebug() << "Recommendation button clicked!";

    RecommendationWindow *recommendationWindow = new RecommendationWindow(this);
    recommendationWindow->show();  // Show the Recommendation Window

    this->show();  // Hide the current Navigation Window
}

// Show Guidance Window
void NavigationWindow::on_guidanceButton_clicked()
{
    qDebug() << "Guidance button clicked!";

    GuidanceWindow *guidanceWindow = new GuidanceWindow(this);
    guidanceWindow->show();  // Show the Guidance Window

    this->show();  // Hide the current Navigation Window
}
