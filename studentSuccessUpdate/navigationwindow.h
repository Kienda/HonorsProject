#ifndef NAVIGATIONWINDOW_H
#define NAVIGATIONWINDOW_H

#include <QMainWindow>

namespace Ui {
class NavigationWindow;
}

class NavigationWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit NavigationWindow(QWidget *parent = nullptr);
    ~NavigationWindow();

    void setStudentName(const QString &name); // Set the student's name

private slots:
    void on_milestoneButton_clicked();
    void on_recommendationButton_clicked();
    void on_guidanceButton_clicked();

private:
    Ui::NavigationWindow *ui;
    QString studentName; // Store the student's name
};

#endif // NAVIGATIONWINDOW_H
