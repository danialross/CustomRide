#include "ui_boxwindow.h"
#include "boxwindow.h"

boxWindow::boxWindow(MainWindow *mainWindow,string db, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::boxWindow),
    map(new unordered_map<string,int>)
{
    this->mainWindow = mainWindow;
    ui->setupUi(this);

    initCombobox(db);

    string car = mainWindow->getCar()->getModelMake();
    cout << "the car : " << mainWindow->getCar()->getModelMake() << endl;
    auto it = map->find(car);

    if(it != map->end()){
        ui->comboBox->setCurrentIndex(it->second);
        cout << "car found";
    }else{
        cout << "car not found" << endl;
    }
}

boxWindow::~boxWindow()
{
    delete ui;
    delete map;
}

void boxWindow::on_doneButton_clicked()
{
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
    QString modelMake = ui->comboBox->currentText();
    mainWindow->setImageLabel(modelMake);
    mainWindow->getCar()->setModelMake(modelMake.toStdString());
}

