#ifndef GUIDANCEWINDOW_H
#define GUIDANCEWINDOW_H

#include <QWidget>

namespace Ui {
class GuidanceWindow;
}

class GuidanceWindow : public QWidget
{
    Q_OBJECT

public:
    explicit GuidanceWindow(QWidget *parent = nullptr);
    ~GuidanceWindow();

private:
    Ui::GuidanceWindow *ui;
};

#endif // GUIDANCEWINDOW_H
