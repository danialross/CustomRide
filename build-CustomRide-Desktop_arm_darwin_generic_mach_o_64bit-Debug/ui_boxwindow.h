/********************************************************************************
** Form generated from reading UI file 'boxwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOXWINDOW_H
#define UI_BOXWINDOW_H

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

class Ui_boxWindow
{
public:
    QWidget *centralwidget;
    QPushButton *doneButton;
    QComboBox *comboBox;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *boxWindow)
    {
        if (boxWindow->objectName().isEmpty())
            boxWindow->setObjectName("boxWindow");
        boxWindow->resize(286, 234);
        centralwidget = new QWidget(boxWindow);
        centralwidget->setObjectName("centralwidget");
        doneButton = new QPushButton(centralwidget);
        doneButton->setObjectName("doneButton");
        doneButton->setGeometry(QRect(110, 140, 61, 32));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(70, 80, 151, 32));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 30, 111, 16));
        boxWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(boxWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 286, 24));
        boxWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(boxWindow);
        statusbar->setObjectName("statusbar");
        boxWindow->setStatusBar(statusbar);

        retranslateUi(boxWindow);

        QMetaObject::connectSlotsByName(boxWindow);
    } // setupUi

    void retranslateUi(QMainWindow *boxWindow)
    {
        boxWindow->setWindowTitle(QCoreApplication::translate("boxWindow", "MainWindow", nullptr));
        doneButton->setText(QCoreApplication::translate("boxWindow", "Done", nullptr));
        label->setText(QCoreApplication::translate("boxWindow", "Select a car type :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class boxWindow: public Ui_boxWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOXWINDOW_H
