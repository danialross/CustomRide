/********************************************************************************
** Form generated from reading UI file 'cartypewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARTYPEWINDOW_H
#define UI_CARTYPEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_carTypeWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *carTypeWindow)
    {
        if (carTypeWindow->objectName().isEmpty())
            carTypeWindow->setObjectName("carTypeWindow");
        carTypeWindow->resize(286, 234);
        centralwidget = new QWidget(carTypeWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(110, 140, 61, 32));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(90, 80, 103, 32));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 30, 111, 16));
        carTypeWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(carTypeWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 286, 24));
        carTypeWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(carTypeWindow);
        statusbar->setObjectName("statusbar");
        carTypeWindow->setStatusBar(statusbar);

        retranslateUi(carTypeWindow);

        QMetaObject::connectSlotsByName(carTypeWindow);
    } // setupUi

    void retranslateUi(QMainWindow *carTypeWindow)
    {
        carTypeWindow->setWindowTitle(QCoreApplication::translate("carTypeWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("carTypeWindow", "Done", nullptr));
        comboBox->setItemText(0, QString());
        comboBox->setItemText(1, QCoreApplication::translate("carTypeWindow", "Sedan", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("carTypeWindow", "Hatchback", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("carTypeWindow", "SUV", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("carTypeWindow", "Van", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("carTypeWindow", "Station Wagon", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("carTypeWindow", "Truck", nullptr));

        label->setText(QCoreApplication::translate("carTypeWindow", "Select a car type :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class carTypeWindow: public Ui_carTypeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARTYPEWINDOW_H
