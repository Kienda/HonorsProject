#ifndef NAVIGATIONWINDOW_H
#define NAVIGATIONWINDOW_H

#include <QMainWindow>

namespace Ui {
class NavigationWindow;
}

class NavigationWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit NavigationWindow(QWidget *parent = nullptr);
    ~NavigationWindow();

    void setStudentDetails(const QString &name, const QString &gpa, const QString &semester);

private slots:
    void on_milestoneButton_clicked();
    void on_recommendationButton_clicked();
    void on_guidanceButton_clicked();

private:
    Ui::NavigationWindow *ui;
};

#endif // NAVIGATIONWINDOW_H
