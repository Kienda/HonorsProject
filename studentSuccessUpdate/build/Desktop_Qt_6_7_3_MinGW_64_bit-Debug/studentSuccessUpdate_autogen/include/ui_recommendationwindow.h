/********************************************************************************
** Form generated from reading UI file 'recommendationwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECOMMENDATIONWINDOW_H
#define UI_RECOMMENDATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RecommendationWindow
{
public:

    void setupUi(QWidget *RecommendationWindow)
    {
        if (RecommendationWindow->objectName().isEmpty())
            RecommendationWindow->setObjectName("RecommendationWindow");
        RecommendationWindow->resize(400, 300);

        retranslateUi(RecommendationWindow);

        QMetaObject::connectSlotsByName(RecommendationWindow);
    } // setupUi

    void retranslateUi(QWidget *RecommendationWindow)
    {
        RecommendationWindow->setWindowTitle(QCoreApplication::translate("RecommendationWindow", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RecommendationWindow: public Ui_RecommendationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECOMMENDATIONWINDOW_H
