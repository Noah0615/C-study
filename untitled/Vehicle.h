#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
public:
    Vehicle(const std::string& name, int range, float batteryCapacity);
    Vehicle(const std::string& name, int range, bool hasFDS, float batteryCapacity);
    Vehicle(const std::string& name, int range, bool hasFDS, float batteryCapacity, bool autoPilotOn);
    Vehicle();

    void autoPilot(bool onOff);
    void runFDS() const;
    void displayEfficiency() const;

private:
    std::string name;
    int range;
    bool hasFDS;
    bool autoPilotOn;
    float batteryCapacity;

};

#endif