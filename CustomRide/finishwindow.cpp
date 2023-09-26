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

// deletes all the data from car and oepsn a new window
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

