#ifndef CAR_H
#define CAR_H

#include <iostream>

using namespace std;

class Car
{
public:
    Car();

    bool isComplete();

    string getModelMake() const;
    void setModelMake(const string &newModelMake);

    string getEngine() const;
    void setEngine(const string &newEngine);

    string getEPlacement() const;
    void setEPlacement(const string &newEPlacement);

    string getTransmisson() const;
    void setTransmisson(const string &newTransmisson);

    string getDriveTrain() const;
    void setDriveTrain(const string &newDriveTrain);

    string getFuel() const;
    void setFuel(const string &newFuel);




private:
    string modelMake;
    string engine;
    string ePlacement;
    string transmisson;
    string driveTrain;
    string fuel;
};

#endif // CAR_H
