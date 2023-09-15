#include "car.h"

Car::Car(){
    displacement = 0.0;
    cylinders = 0;
}

bool Car::isComplete(){

    if(type.empty()) return false;
    if(displacement == 0) return false;
    if(cylinders == 0) return false;
    if(transmisson.empty()) return false;
    if(driveTrain.empty()) return false;
    if(fuel.empty()) return false;

    return true;
}

void Car::setType(const string &newType)
{
    type = newType;
}

string Car::getType() const
{
    return type;
}

double Car::getDisplacement() const
{
    return displacement;
}

void Car::setDisplacement(double newDisplacement)
{
    displacement = newDisplacement;
}

int Car::getCylinders() const
{
    return cylinders;
}

void Car::setCylinders(int newCylinders)
{
    cylinders = newCylinders;
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


