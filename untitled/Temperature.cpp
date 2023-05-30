#include "Temperature.h"
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;

Temperature::Temperature(double temp, SCALE scale) : temperature(temp), scale(scale){}

Temperature Temperature::add(Temperature other) {
    if(this->scale == FAHRENHEIT && other.scale != FAHRENHEIT)
        other.convertToFahrenheit();
    if(this->scale == CELSIUS && other.scale != CELSIUS)
        other.convertToCelsius();
    double newtemp = this->temperature + other.temperature;
    SCALE newscale = this->scale;

    return Temperature(newtemp, newscale);
}

void Temperature::convertToCelsius() {
    this->temperature = (this->temperature - 32.0) * 5.0 / 9.0;
    this->scale = CELSIUS;
}

void Temperature::convertToFahrenheit() {
    this->temperature = (this->temperature) * 9.0 / 5.0 +32.0;
    this->scale = FAHRENHEIT;
}

string Temperature::print() const {
    stringstream ss;
    ss << fixed;
    ss << setprecision(1);
    if(this->scale == FAHRENHEIT) {
        ss << this->temperature << "F\n";
    } else {
        ss << this->temperature << "C\n";
    }
    return ss.str();
}

