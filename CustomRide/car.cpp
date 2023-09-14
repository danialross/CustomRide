#include "car.h"

car::car()
{

}

void car::setType(const string &newType)
{
    type = newType;
}

string car::getType() const
{
    return type;
}

double car::getDisplacement() const
{
    return displacement;
}

void car::setDisplacement(double newDisplacement)
{
    displacement = newDisplacement;
}

int car::getCylinders() const
{
    return cylinders;
}

void car::setCylinders(int newCylinders)
{
    cylinders = newCylinders;
}

string car::getTransmisson() const
{
    return transmisson;
}

void car::setTransmisson(const string &newTransmisson)
{
    transmisson = newTransmisson;
}

string car::getDriveTrain() const
{
    return driveTrain;
}

void car::setDriveTrain(const string &newDriveTrain)
{
    driveTrain = newDriveTrain;
}

string car::getFuel() const
{
    return fuel;
}

void car::setFuel(const string &newFuel)
{
    fuel = newFuel;
}


