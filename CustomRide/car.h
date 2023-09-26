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

    string getTransmisson() const;
    void setTransmisson(const string &newTransmisson);

    string getDriveTrain() const;
    void setDriveTrain(const string &newDriveTrain);

    string getFuel() const;
    void setFuel(const string &newFuel);




    string getLayout() const;
    void setLayout(const string &newLayout);

private:
    string modelMake;
    string engine;
    string layout;
    string transmisson;
    string driveTrain;
    string fuel;
};

#endif // CAR_H
