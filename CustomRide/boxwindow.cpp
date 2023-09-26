#include "ui_boxwindow.h"
#include "boxwindow.h"
#include "ui_mainwindow.h"

boxWindow::boxWindow(MainWindow *mainWindow,string db,getterFunc getter,setterFunc setter, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::boxWindow),
    map(new unordered_map<string,int>),
    getter(getter),
    setter(setter)
{
    this->mainWindow = mainWindow;
    ui->setupUi(this);

    initCombobox(db);

    string car = (mainWindow->getCar()->*getter)();
    auto it = map->find(car);

    if(it != map->end()){
        ui->comboBox->setCurrentIndex(it->second);
    }
}
boxWindow::~boxWindow()
{
    delete ui;
    delete map;
}

void boxWindow::on_doneButton_clicked()
{

    QPushButton *button;
    if(getter == &Car::getModelMake ){
        button = mainWindow->getUi()->modelMakeButton;

    }else if(getter == &Car::getDriveTrain){
        button = mainWindow->getUi()->driveTrainButton;

    }else if(getter == &Car::getLayout ){
        button = mainWindow->getUi()->layoutButton;

    }else if(getter == &Car::getEngine ){
        button = mainWindow->getUi()->engineButton;

    }else if(getter == &Car::getFuel ){
        button = mainWindow->getUi()->fuelButton;

    }else{
        button = mainWindow->getUi()->transButton;

    }

    Car *car = mainWindow->getCar();
    if((car->*getter)() == ""){
        button->setStyleSheet("background-color: #FF6666; color: black");
    }else{
        button->setStyleSheet("background-color: #66FF66; color: black");
    }
    button->update();

    this->mainWindow->isCarComplete();
    this->mainWindow->setEnabled(true);
    close();
}

void boxWindow::initCombobox(string filename){
    // Specify the full or relative path to the file
    filesystem::path directory = filesystem::current_path().parent_path().parent_path().parent_path().parent_path();
    directory /= "CustomRide/databases/";
    string filePath = directory.string() + filename + ".txt";

    // Create an ifstream object to read from the file
    ifstream inputFile(filePath);

    // Check if the file opened successfully
    if (!inputFile.is_open()) {
        cerr << "Error opening the file." << std::endl;
        return;
    }

    // Read and display the file line by line
    string line;
    int counter = 1;
    ui->comboBox->addItem("");
    while (getline(inputFile, line)) {
        ui->comboBox->addItem(QString::fromStdString(line));
        map->insert({line,counter++});
    }

    // Close the file
    inputFile.close();
}


void boxWindow::on_comboBox_activated(int index)
{
    QString selected = ui->comboBox->currentText();


    if(setter == &Car::setModelMake){
        mainWindow->setImageLabel(selected);
    }

    (mainWindow->getCar()->*setter)(selected.toStdString());
}

