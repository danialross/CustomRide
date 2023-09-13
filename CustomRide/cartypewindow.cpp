#include "cartypewindow.h"
#include "ui_cartypewindow.h"

carTypeWindow::carTypeWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::carTypeWindow)
{
    parent->setEnabled(false);
    setEnabled(true);
    ui->setupUi(this);

}

carTypeWindow::~carTypeWindow()
{
    delete ui;
}

void carTypeWindow::on_doneButton_clicked()
{

    QWidget *parentWidget = this->parentWidget();
    parentWidget->setEnabled(true);
    close();
}

