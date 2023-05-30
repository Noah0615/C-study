#include "Cell.h"
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

using namespace std;

class Point {
public:
    Point(double x=0, double y=0);
    double norm() const;
    double getX() const;
    double getY() const;
private:
    const double x, y;
};

Point::Point(double x, double y) : x(x), y(y) {}

double Point::norm() const {
    return sqrt(x*x + y*y);
}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}
