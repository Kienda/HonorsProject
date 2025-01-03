#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "navigationwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_login_clicked();
    void on_signUp_clicked();

private:
    Ui::MainWindow *ui;
    NavigationWindow *navWindow;
};

#endif // MAINWINDOW_H
