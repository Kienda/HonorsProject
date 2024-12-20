#include "recommendationwindow.h"
#include "ui_recommendationwindow.h"

RecommendationWindow::RecommendationWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RecommendationWindow)
{
    ui->setupUi(this);
}

RecommendationWindow::~RecommendationWindow()
{
    delete ui;
}
