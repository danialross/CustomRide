#include "ui_boxwindow.h"
#include "boxwindow.h"

boxWindow::boxWindow(MainWindow *mainWindow,string db,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::boxWindow)
{
    this->mainWindow = mainWindow;
    ui->setupUi(this);

    populateCombobox(db);

    int index = comboIndex;
    ui->comboBox->setCurrentIndex(index);

}

boxWindow::~boxWindow()
{
    delete ui;
}

void boxWindow::on_doneButton_clicked()
{
    this->mainWindow->setEnabled(true);
    close();
}


void boxWindow::on_comboBox_currentIndexChanged(int index)
{

    if(mainWindow){
        QString type = ui->comboBox->currentText();
        mainWindow->setImageLabel(type);
        mainWindow->getCar()->setType(type.toStdString());
        comboIndex = index;
    }

}

void boxWindow::populateCombobox(string filename){
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
    ui->comboBox->addItem("");
    while (getline(inputFile, line)) {
        ui->comboBox->addItem(QString::fromStdString(line) );
    }

    // Close the file
    inputFile.close();
}


