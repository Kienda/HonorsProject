#include "navigationwindow.h"
#include "ui_navigationwindow.h"
#include "milestonewindow.h"
#include "recommendationwindow.h"
#include "guidancewindow.h"

NavigationWindow::NavigationWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Profile)
{
    ui->setupUi(this);

    connect(ui->milestoneButton, &QPushButton::clicked, this, &NavigationWindow::on_milestoneButton_clicked);
}

NavigationWindow::~NavigationWindow()
{
    delete ui;
}

void NavigationWindow::setStudentName(const QString &studentName)
{
    ui->studentNameLabel->setText("Welcome, " + studentName); // Ensure `studentNameLabel` exists in the UI
}

void NavigationWindow::on_milestoneButton_clicked()
{
    qDebug() << "Milestone button clicked!";
    MilestoneWindow *milestoneWindow = new MilestoneWindow(this);
    milestoneWindow->show();
}
void NavigationWindow::on_recommendationButton_clicked()
{
    RecommendationWindow *recommendationWindow = new RecommendationWindow(this);
    recommendationWindow->show();
}

void NavigationWindow::on_guidanceButton_clicked()
{
    GuidanceWindow *guidanceWindow = new GuidanceWindow(this);
    guidanceWindow->show();
}
