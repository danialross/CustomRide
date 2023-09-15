#include "cartypewindow.h"
#include "ui_cartypewindow.h"

carTypeWindow::carTypeWindow(MainWindow *mainWindow,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::carTypeWindow)
{
    this->mainWindow = mainWindow;
    mainWindow->setEnabled(false);
    ui->setupUi(this);

    string type = mainWindow->getCar()->getType();
    int index = setComboboxIndex(type);
    ui->comboBox->setCurrentIndex(index);

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
        QString type = ui->comboBox->currentText();
        mainWindow->setImageLabel(type);
        mainWindow->getCar()->setType(type.toStdString());

    }

}

int carTypeWindow::setComboboxIndex(string type)
{
    if(type == ""){
        return 0;

    }else if(type == "Sedan"){
        return 1;

    }else if(type == "Coupe"){
        return 2;

    }else if(type == "Hatchback"){
        return 3;

    }else if(type == "SUV"){
        return 4;

    }else if(type == "Van"){
        return 5;

    }else if(type == "Station Wagon"){
        return 6;

    }else if(type == "Truck"){
        return 7;

    }
}

