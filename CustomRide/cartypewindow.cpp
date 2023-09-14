#include "cartypewindow.h"
#include "ui_cartypewindow.h"
#include "ui_mainwindow.h"

carTypeWindow::carTypeWindow(MainWindow *mainWindow,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::carTypeWindow)
{
    this->mainWindow = mainWindow;
    this->mainWindow->setEnabled(false);
    ui->setupUi(this);

}

carTypeWindow::~carTypeWindow()
{
    delete ui;
}

void carTypeWindow::on_doneButton_clicked()
{
    this->mainWindow->setEnabled(true);
    close();
}


void carTypeWindow::on_comboBox_currentIndexChanged(int index)
{

    if(mainWindow){
        mainWindow->setImageLabel(ui->comboBox->currentText());
    }

}

