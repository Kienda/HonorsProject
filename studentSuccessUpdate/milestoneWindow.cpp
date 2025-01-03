#include "milestonewindow.h"
#include "ui_milestonewindow.h"


MilestoneWindow::MilestoneWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MilestoneWindow)
{
    ui->setupUi(this);
}

MilestoneWindow::~MilestoneWindow()
{
    delete ui;
}


