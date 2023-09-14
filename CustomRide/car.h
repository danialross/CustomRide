#ifndef CAR_H
#define CAR_H

#include <iostream>

using namespace std;

class car
{
public:
    car();
    bool isComplete();

    void setType(const string &newType);

    string getType() const;

    double getDisplacement() const;
    void setDisplacement(double newDisplacement);

    int getCylinders() const;
    void setCylinders(int newCylinders);

    string getTransmisson() const;
    void setTransmisson(const string &newTransmisson);

    string getDriveTrain() const;
    void setDriveTrain(const string &newDriveTrain);

    string getFuel() const;
    void setFuel(const string &newFuel);

private:
    string type;
    double displacement;
    int cylinders;
    string transmisson;
    string driveTrain;
    string fuel;
};

#endif // CAR_H
