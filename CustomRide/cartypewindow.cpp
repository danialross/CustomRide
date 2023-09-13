#include "cartypewindow.h"
#include "ui_cartypewindow.h"

carTypeWindow::carTypeWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::carTypeWindow)
{
    ui->setupUi(this);
}

carTypeWindow::~carTypeWindow()
{
    delete ui;
}
