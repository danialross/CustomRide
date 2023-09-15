#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cartypewindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow),
    car(new Car())
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete car;
}


void MainWindow::setImageLabel(QString str){
    QString path = "/Users/danialross/Documents/GitHub/CustomRide/CustomRide/carTypes/";
    QPixmap pixmap = QPixmap(path+str+".png");
    pixmap = pixmap.scaled(ui->imageViewer->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->imageViewer->setPixmap(pixmap); // Set the image path
    ui->imageViewer->show();
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
    close();
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

void MainWindow::on_finishButton_clicked()
{

}

Car *MainWindow::getCar() const
{
    return car;
}

