#ifndef ADD_H
#define ADD_H
#include <iostream>
#include <vector>
#include <string>
//Temperature.h
using namespace std;

enum SCALE{
    CELSIUS,
    FAHRENHEIT
};

class Temperature {
public:
    Temperature(double temp, SCALE scale = CELSIUS);
    Temperature add(Temperature other);
    string print() const;
private:
    void convertToCelsius();
    void convertToFahrenheit();
private:
    double temperature;
    SCALE scale;
};

#endif