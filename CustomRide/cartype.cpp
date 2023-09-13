#include "cartype.h"
#include "ui_cartype.h"

CarType::CarType(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CarType)
{
    ui->setupUi(this);
}

CarType::~CarType()
{
    delete ui;
}
