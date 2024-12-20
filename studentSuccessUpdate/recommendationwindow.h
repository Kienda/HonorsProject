#ifndef RECOMMENDATIONWINDOW_H
#define RECOMMENDATIONWINDOW_H

#include <QWidget>

namespace Ui {
class RecommendationWindow;
}

class RecommendationWindow : public QWidget
{
    Q_OBJECT

public:
    explicit RecommendationWindow(QWidget *parent = nullptr);
    ~RecommendationWindow();

private:
    Ui::RecommendationWindow *ui;
};

#endif // RECOMMENDATIONWINDOW_H
