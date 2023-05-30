#include "Cell.cpp"
#include <iostream>
#include <cmath>
#include <memory>
#include <algorithm>
#include <stdexcept>
using namespace std;


class Rectangle {
public:
    Rectangle(double x1, double y1, double x2, double y2);
    double area() const;
private:
    Point leftTop, rightBottom;
};

Rectangle::Rectangle(double x1, double y1, double x2, double y2) : leftTop(x1, y1), rightBottom(x2, y2){}

double Rectangle::area() const {
    double width = rightBottom.getX() - leftTop.getX();
    double height = leftTop.getY() - rightBottom.getY();
    double areaO = width * height;
    return fabs(areaO);
}