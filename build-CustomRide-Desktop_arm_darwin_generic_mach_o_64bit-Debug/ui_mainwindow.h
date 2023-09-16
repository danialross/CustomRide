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
    QPushButton *typeButton;
    QPushButton *displacementButton;
    QPushButton *cylinderButton;
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
        typeButton = new QPushButton(centralwidget);
        typeButton->setObjectName("typeButton");
        typeButton->setGeometry(QRect(10, 80, 100, 71));
        displacementButton = new QPushButton(centralwidget);
        displacementButton->setObjectName("displacementButton");
        displacementButton->setGeometry(QRect(10, 150, 100, 71));
        cylinderButton = new QPushButton(centralwidget);
        cylinderButton->setObjectName("cylinderButton");
        cylinderButton->setGeometry(QRect(10, 220, 100, 71));
        driveTrainButton = new QPushButton(centralwidget);
        driveTrainButton->setObjectName("driveTrainButton");
        driveTrainButton->setGeometry(QRect(390, 150, 100, 71));
        fuelButton = new QPushButton(centralwidget);
        fuelButton->setObjectName("fuelButton");
        fuelButton->setGeometry(QRect(390, 220, 100, 71));
        transButton = new QPushButton(centralwidget);
        transButton->setObjectName("transButton");
        transButton->setGeometry(QRect(390, 80, 100, 71));
        imageViewer = new QLabel(centralwidget);
        imageViewer->setObjectName("imageViewer");
        imageViewer->setGeometry(QRect(120, 90, 261, 191));
        imageViewer->setAlignment(Qt::AlignCenter);
        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(450, 10, 41, 41));
        finishButton = new QPushButton(centralwidget);
        finishButton->setObjectName("finishButton");
        finishButton->setGeometry(QRect(210, 300, 81, 31));
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
        typeButton->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        displacementButton->setText(QCoreApplication::translate("MainWindow", "Displacement", nullptr));
        cylinderButton->setText(QCoreApplication::translate("MainWindow", "Cylinders", nullptr));
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
