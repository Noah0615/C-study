#include "Point.h"
#include <cmath>
#include <cstdlib>

Point::Point(double x, double y) : x(x),y(y) {}

double Point::norm() const {
    return sqrt(x*x + y*y);
}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

#include "Rectangel.h"
#include <cmath>
#include <cstdlib>
using namespace std;
Rectangle::Rectangle(double x1, double y1, double x2, double y2)
    :leftTop(x1, y1), rightBottom(x2, y2) {}

double Rectangle::area() cosnt {
    double width = rightBottom.getX() - leftTop.getX();
    double height = leftTop.getY() - rightBottom.getY();
    double areaO = width * height;
    return fabs(areaO);
}