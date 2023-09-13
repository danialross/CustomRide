#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cartypewindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_cylinderButton_clicked()
{

}

void MainWindow::on_displacementButton_clicked()
{

}

void MainWindow::on_driveTrainButton_clicked()
{

}

void MainWindow::on_exitButton_clicked()
{

}

void MainWindow::on_fuelButton_clicked()
{

}

void MainWindow::on_transButton_clicked()
{

}

void MainWindow::on_typeButton_clicked()
{
    carTypeWindow *newWindow = new carTypeWindow(this);
    newWindow->show();

}


