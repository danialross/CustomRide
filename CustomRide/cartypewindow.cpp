#include "cartypewindow.h"
#include "ui_cartypewindow.h"

carTypeWindow::carTypeWindow(MainWindow *mainWindow,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::carTypeWindow)
{
    this->mainWindow = mainWindow;
    ui->setupUi(this);

    string type = mainWindow->getCar()->getType();
    int index = comboIndex;
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
        comboIndex = index;
    }

}


