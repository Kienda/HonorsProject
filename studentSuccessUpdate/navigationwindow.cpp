#include "navigationwindow.h"
#include "guidancewindow.h"
#include "milestonewindow.h"
#include "recommendationwindow.h"
#include "ui_navigationwindow.h"

NavigationWindow::NavigationWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::NavigationWindow)
{
    ui->setupUi(this);
}

NavigationWindow::~NavigationWindow()
{
    delete ui;
}

void NavigationWindow::setStudentName(const QString &name)
{
    studentName = name;
    ui->welcomeLabel->setText("Welcome, " + studentName
                              + "!"); // Update label with the student's name
}

void NavigationWindow::on_milestoneButton_clicked()
{
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
