#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "boxwindow.h"
#include "finishwindow.h"
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
    delete carPic;
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

    carPic = new QString(QString::fromStdString(json["ymmts_img_list"][0]));

    requester->setImageURL(*carPic,ui->imageViewer);
    delete requester;
}


void MainWindow::on_engineButton_clicked()
{
    setEnabled(false);
    boxWindow *newWindow = new boxWindow(this,"engines",&Car::getEngine,&Car::setEngine);
    newWindow->show();
}

void MainWindow::on_layoutButton_clicked()
{
    setEnabled(false);
    boxWindow *newWindow = new boxWindow(this,"placement",&Car::getLayout,&Car::setLayout);
    newWindow->show();
}

void MainWindow::on_transButton_clicked()
{
    setEnabled(false);
    boxWindow *newWindow = new boxWindow(this,"transmission",&Car::getTransmisson,&Car::setTransmisson);
    newWindow->show();
}

void MainWindow::on_driveTrainButton_clicked()
{
    setEnabled(false);
    boxWindow *newWindow = new boxWindow(this,"driveTrain",&Car::getDriveTrain,&Car::setDriveTrain);
    newWindow->show();
}

void MainWindow::on_fuelButton_clicked()
{
    setEnabled(false);
    boxWindow *newWindow = new boxWindow(this,"fuel",&Car::getFuel,&Car::setFuel);
    newWindow->show();
}

void MainWindow::on_modelMakeButton_clicked()
{
    setEnabled(false);
    boxWindow *newWindow = new boxWindow(this,"cars",&Car::getModelMake,&Car::setModelMake);
    newWindow->show();
}

void MainWindow::on_finishButton_clicked()
{
    setEnabled(false);
    finishWindow *newWindow = new finishWindow(this,*carPic);
    newWindow->show();
}

void MainWindow::on_exitButton_clicked()
{
    close();
}

Ui::MainWindow *MainWindow::getUi() const
{
    return ui;
}

void MainWindow::isCarComplete()
{
    if(car->isComplete()){
        ui->finishButton->setEnabled(true);
    }else{
        ui->finishButton->setEnabled(false);
    }
}

Car *MainWindow::getCar() const
{
    return car;
}


