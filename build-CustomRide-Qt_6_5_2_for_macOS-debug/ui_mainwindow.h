/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *welcomeLabel;
    QPushButton *modelMakeButton;
    QPushButton *engineButton;
    QPushButton *ePlacementButton;
    QPushButton *driveTrainButton;
    QPushButton *fuelButton;
    QPushButton *transButton;
    QLabel *imageViewer;
    QPushButton *exitButton;
    QPushButton *finishButton;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(501, 362);
        MainWindow->setMinimumSize(QSize(501, 362));
        MainWindow->setMaximumSize(QSize(501, 362));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        welcomeLabel = new QLabel(centralwidget);
        welcomeLabel->setObjectName("welcomeLabel");
        welcomeLabel->setGeometry(QRect(205, 10, 91, 61));
        modelMakeButton = new QPushButton(centralwidget);
        modelMakeButton->setObjectName("modelMakeButton");
        modelMakeButton->setGeometry(QRect(10, 80, 100, 71));
        modelMakeButton->setStyleSheet(QString::fromUtf8("background-color: #FF6666 ; color: black"));
        engineButton = new QPushButton(centralwidget);
        engineButton->setObjectName("engineButton");
        engineButton->setGeometry(QRect(10, 150, 100, 71));
        engineButton->setStyleSheet(QString::fromUtf8("background-color: #FF6666 ; color: black"));
        ePlacementButton = new QPushButton(centralwidget);
        ePlacementButton->setObjectName("ePlacementButton");
        ePlacementButton->setGeometry(QRect(10, 220, 100, 71));
        ePlacementButton->setLayoutDirection(Qt::LeftToRight);
        ePlacementButton->setStyleSheet(QString::fromUtf8("background-color: #FF6666 ; color: black"));
        driveTrainButton = new QPushButton(centralwidget);
        driveTrainButton->setObjectName("driveTrainButton");
        driveTrainButton->setGeometry(QRect(390, 150, 100, 71));
        driveTrainButton->setStyleSheet(QString::fromUtf8("background-color: #FF6666 ; color: black"));
        fuelButton = new QPushButton(centralwidget);
        fuelButton->setObjectName("fuelButton");
        fuelButton->setGeometry(QRect(390, 220, 100, 71));
        fuelButton->setStyleSheet(QString::fromUtf8("background-color: #FF6666 ; color: black"));
        transButton = new QPushButton(centralwidget);
        transButton->setObjectName("transButton");
        transButton->setGeometry(QRect(390, 80, 100, 71));
        transButton->setStyleSheet(QString::fromUtf8("background-color: #FF6666 ; color: black"));
        imageViewer = new QLabel(centralwidget);
        imageViewer->setObjectName("imageViewer");
        imageViewer->setGeometry(QRect(120, 80, 261, 211));
        imageViewer->setAlignment(Qt::AlignCenter);
        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(450, 10, 41, 41));
        exitButton->setStyleSheet(QString::fromUtf8(" color: black"));
        finishButton = new QPushButton(centralwidget);
        finishButton->setObjectName("finishButton");
        finishButton->setGeometry(QRect(210, 310, 81, 31));
        finishButton->setStyleSheet(QString::fromUtf8(" color: black"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 501, 24));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        welcomeLabel->setText(QString());
        modelMakeButton->setText(QCoreApplication::translate("MainWindow", "Make\n"
"and\n"
"Model", nullptr));
        engineButton->setText(QCoreApplication::translate("MainWindow", "Engine", nullptr));
        ePlacementButton->setText(QCoreApplication::translate("MainWindow", "Engine\n"
"Placement", nullptr));
        driveTrainButton->setText(QCoreApplication::translate("MainWindow", "Drive Train", nullptr));
        fuelButton->setText(QCoreApplication::translate("MainWindow", "Fuel", nullptr));
        transButton->setText(QCoreApplication::translate("MainWindow", "Transmission", nullptr));
        imageViewer->setText(QCoreApplication::translate("MainWindow", "No Type Selected", nullptr));
        exitButton->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        finishButton->setText(QCoreApplication::translate("MainWindow", "Finish", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
