#ifndef NAVIGATIONWINDOW_H
#define NAVIGATIONWINDOW_H

#include <QMainWindow>

namespace Ui {
class Profile;
}

class NavigationWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit NavigationWindow(QWidget *parent = nullptr);
    ~NavigationWindow();

    void setStudentName(const QString &studentName);

private slots:
    void on_milestoneButton_clicked();
    void on_recommendationButton_clicked();
    void on_guidanceButton_clicked();

private:
    Ui::Profile *ui;
};

#endif // NAVIGATIONWINDOW_H
