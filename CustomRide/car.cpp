#include "car.h"

Car::Car(){}

bool Car::isComplete(){

    if(engine.empty()) return false;
    if(layout.empty()) return false;
    if(transmisson.empty()) return false;
    if(driveTrain.empty()) return false;
    if(fuel.empty()) return false;

    return true;
}

string Car::getTransmisson() const
{
    return transmisson;
}

void Car::setTransmisson(const string &newTransmisson)
{
    transmisson = newTransmisson;
}

string Car::getDriveTrain() const
{
    return driveTrain;
}

void Car::setDriveTrain(const string &newDriveTrain)
{
    driveTrain = newDriveTrain;
}

string Car::getFuel() const
{
    return fuel;
}

void Car::setFuel(const string &newFuel)
{
    fuel = newFuel;
}

string Car::getLayout() const
{
    return layout;
}

void Car::setLayout(const string &newLayout)
{
    layout = newLayout;
}

string Car::getEngine() const
{
    return engine;
}

void Car::setEngine(const string &newEngine)
{
    engine = newEngine;
}

string Car::getModelMake() const
{
    return modelMake;
}

void Car::setModelMake(const string &newModelMake)
{
    modelMake = newModelMake;
}


