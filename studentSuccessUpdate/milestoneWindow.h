#ifndef MILESTONEWINDOW_H
#define MILESTONEWINDOW_H

#include <QWidget>

namespace Ui {
class MilestoneWindow;
}

class MilestoneWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MilestoneWindow(QWidget *parent = nullptr);
    ~MilestoneWindow();

private:
    Ui::MilestoneWindow *ui;
};

#endif // MILESTONEWINDOW_H
