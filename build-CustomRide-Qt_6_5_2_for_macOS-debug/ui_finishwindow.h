/********************************************************************************
** Form generated from reading UI file 'finishwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINISHWINDOW_H
#define UI_FINISHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_finishWindow
{
public:
    QWidget *centralwidget;
    QLabel *imageViewer;
    QPushButton *repeatButton;
    QPushButton *finishButton;
    QLabel *descriptionLabel;
    QPushButton *backButton;
    QMenuBar *menubar;

    void setupUi(QMainWindow *finishWindow)
    {
        if (finishWindow->objectName().isEmpty())
            finishWindow->setObjectName("finishWindow");
        finishWindow->resize(607, 404);
        centralwidget = new QWidget(finishWindow);
        centralwidget->setObjectName("centralwidget");
        imageViewer = new QLabel(centralwidget);
        imageViewer->setObjectName("imageViewer");
        imageViewer->setGeometry(QRect(300, 20, 291, 301));
        repeatButton = new QPushButton(centralwidget);
        repeatButton->setObjectName("repeatButton");
        repeatButton->setGeometry(QRect(340, 340, 141, 32));
        finishButton = new QPushButton(centralwidget);
        finishButton->setObjectName("finishButton");
        finishButton->setGeometry(QRect(490, 340, 100, 32));
        descriptionLabel = new QLabel(centralwidget);
        descriptionLabel->setObjectName("descriptionLabel");
        descriptionLabel->setGeometry(QRect(10, 20, 271, 301));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(10, 340, 71, 32));
        finishWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(finishWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 607, 24));
        finishWindow->setMenuBar(menubar);

        retranslateUi(finishWindow);

        QMetaObject::connectSlotsByName(finishWindow);
    } // setupUi

    void retranslateUi(QMainWindow *finishWindow)
    {
        finishWindow->setWindowTitle(QCoreApplication::translate("finishWindow", "MainWindow", nullptr));
        imageViewer->setText(QCoreApplication::translate("finishWindow", "TextLabel", nullptr));
        repeatButton->setText(QCoreApplication::translate("finishWindow", "Create a new car", nullptr));
        finishButton->setText(QCoreApplication::translate("finishWindow", "Finish", nullptr));
        descriptionLabel->setText(QCoreApplication::translate("finishWindow", "TextLabel", nullptr));
        backButton->setText(QCoreApplication::translate("finishWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class finishWindow: public Ui_finishWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINISHWINDOW_H
