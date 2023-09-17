#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "boxwindow.h"
#include "httprequest.h"
#include "nlohmann/json.hpp"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow),
    car(new Car())
{
    ui->setupUi(this);

    QString path = "/Users/danialross/Documents/GitHub/CustomRide/CustomRide/logo.png";
    QPixmap pixmap = QPixmap(path);
    pixmap = pixmap.scaled(ui->welcomeLabel->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->welcomeLabel->setPixmap(pixmap); // Set the image path
    ui->welcomeLabel->show();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete car;
}


void MainWindow::setImageLabel(QString str){

    if(str == ""){
        ui->imageViewer->setText("No Type Selected");
        ui->imageViewer->setAlignment(Qt::AlignCenter);
        return;
    }

    str = str.replace(" ", "_");

    httpRequest *requester = new httpRequest();
    string modelMake = str.toStdString();
    string response = requester->getImageURL(modelMake);
    nlohmann::json json = nlohmann::json::parse(response);

    QString url = QString::fromStdString(json["ymmts_img_list"][0]);

    requester->setImageURL(url,ui->imageViewer);
    delete requester;
}


void MainWindow::on_engineButton_clicked()
{

}

void MainWindow::on_ePlacementButton_clicked()
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

void MainWindow::on_modelMakeButton_clicked()
{

    setEnabled(false);
    boxWindow *newWindow = new boxWindow(this,string("cars"));
    newWindow->show();

}

void MainWindow::on_finishButton_clicked()
{

}

Car *MainWindow::getCar() const
{
    return car;
}






