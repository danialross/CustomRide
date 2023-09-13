#pragma once
/********************************************************************************
** Form generated from reading UI file ''
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *typeButton;
    QPushButton *displacementButton;
    QPushButton *cylinderButton;
    QPushButton *driveTrainButton;
    QPushButton *fuelButton;
    QPushButton *transButton;
    QLabel *imageViewer;
    QPushButton *exitButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(501, 344);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 30, 151, 16));
        typeButton = new QPushButton(centralwidget);
        typeButton->setObjectName("typeButton");
        typeButton->setGeometry(QRect(10, 70, 100, 61));
        displacementButton = new QPushButton(centralwidget);
        displacementButton->setObjectName("displacementButton");
        displacementButton->setGeometry(QRect(10, 140, 100, 61));
        cylinderButton = new QPushButton(centralwidget);
        cylinderButton->setObjectName("cylinderButton");
        cylinderButton->setGeometry(QRect(10, 210, 100, 61));
        driveTrainButton = new QPushButton(centralwidget);
        driveTrainButton->setObjectName("driveTrainButton");
        driveTrainButton->setGeometry(QRect(390, 140, 100, 61));
        fuelButton = new QPushButton(centralwidget);
        fuelButton->setObjectName("modelButton");
        fuelButton->setGeometry(QRect(390, 210, 100, 61));
        transButton = new QPushButton(centralwidget);
        transButton->setObjectName("transButton");
        transButton->setGeometry(QRect(390, 70, 100, 61));
        imageViewer = new QLabel(centralwidget);
        imageViewer->setObjectName("imageViewer");
        imageViewer->setGeometry(QRect(120, 80, 261, 181));
        imageViewer->setAlignment(Qt::AlignCenter);
        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(450, 10, 41, 32));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 501, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Welcome To CustomRide", nullptr));
        typeButton->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        displacementButton->setText(QCoreApplication::translate("MainWindow", "Displacement", nullptr));
        cylinderButton->setText(QCoreApplication::translate("MainWindow", "Cylinders", nullptr));
        driveTrainButton->setText(QCoreApplication::translate("MainWindow", "Drive Train", nullptr));
        fuelButton->setText(QCoreApplication::translate("MainWindow", "Fuel", nullptr));
        transButton->setText(QCoreApplication::translate("MainWindow", "Transmission", nullptr));
        imageViewer->setText(QCoreApplication::translate("MainWindow", "No Type Selected", nullptr));
        exitButton->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

