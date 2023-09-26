#include "finishwindow.h"
#include "ui_finishwindow.h"
#include "httprequest.h"

finishWindow::finishWindow(MainWindow *mainWindow,QString img,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::finishWindow)
{
    this->mainWindow = mainWindow;

    ui->setupUi(this);

    httpRequest *requester = new httpRequest();
    requester->setImageURL(img,ui->imageViewer);

    Car *car = mainWindow->getCar();
    QString modelMake = QString::fromStdString(car->getModelMake());
    QString engine = QString::fromStdString(car->getEngine());
    QString layout = QString::fromStdString(car->getLayout());
    QString transmission = QString::fromStdString(car->getTransmisson());
    QString driveTrain = QString::fromStdString(car->getDriveTrain());
    QString fuel = QString::fromStdString(car->getFuel());
    QString specs = QString("Car Specifications\n\n"
                                  "Model And Make:\n" + modelMake + "\n\n"
                                  "Engine :\n" + engine + "\n\n"
                                  "Layout :\n" + layout + "\n\n"
                                  "Transmission :\n" + transmission + "\n\n"
                                  "Drive Train :\n" + driveTrain + "\n\n"
                                  "Fuel :\n" + fuel + "\n\n");

    ui->descriptionLabel->setText(specs);

}

finishWindow::~finishWindow()
{
    delete ui;
}

void finishWindow::on_backButton_clicked()
{
    mainWindow->setEnabled(true);
    close();
}

// deletes all the data from car and opens a new window
void finishWindow::on_repeatButton_clicked()
{
//    close();
//    mainWindow->close();
//    MainWindow *newWindow = new MainWindow(this);
//    newWindow->show();

}


void finishWindow::on_finishButton_clicked()
{
    close();

}

