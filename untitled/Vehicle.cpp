// Vehicle.cpp

#include "Vehicle.h"
#include <iostream>
#include <iomanip>

Vehicle::Vehicle(const std::string& name, int range, float batteryCapacity)
        : name(name), range(range), hasFDS(false), autoPilotOn(false), batteryCapacity(batteryCapacity) {}

Vehicle::Vehicle(const std::string& name, int range, bool hasFDS, float batteryCapacity)
        : name(name), range(range), hasFDS(hasFDS), autoPilotOn(false), batteryCapacity(batteryCapacity) {}

Vehicle::Vehicle(const std::string& name, int range, bool hasFDS, float batteryCapacity, bool autoPilotOn)
        : name(name), range(range), hasFDS(hasFDS), autoPilotOn(autoPilotOn), batteryCapacity(batteryCapacity) {}

Vehicle::Vehicle()
        : Vehicle("Model Y LR", 511, false, 85) {}



void Vehicle::autoPilot(bool onOff){
    autoPilotOn = onOff;
    std::cout << "Auto-Pilot is " << (autoPilotOn ? "on!" : "off!") << std::endl;
}

void Vehicle::runFDS() const {
    if(hasFDS)
        std::cout << "Full Self-Driving!" << std::endl;
}

void Vehicle::displayEfficiency() const {
    std::cout << name << " Range: " << range << "km, Efficiency: " << std::setprecision(3) << range / batteryCapacity << "kWh/100km" << std::endl;
}
