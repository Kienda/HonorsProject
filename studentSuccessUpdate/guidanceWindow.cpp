#include "guidancewindow.h"
#include "ui_guidancewindow.h"

GuidanceWindow::GuidanceWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::GuidanceWindow)
{
    ui->setupUi(this);
}

GuidanceWindow::~GuidanceWindow()
{
    delete ui;
}
