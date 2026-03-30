// Circle.cpp
#include "Circle.h"
#include <iostream>
using namespace std;

// Default constructor
Circle::Circle() {
    radius = 0.0;
}

// Parameterized constructor
Circle::Circle(double r) {
    radius = r;
}

// Set the radius
void Circle::setRadius(double r) {
    radius = r;
}

// Calculate the area of the circle
double Circle::getArea() {
    return 3.14159 * radius * radius;
}

// Display the radius and area of the circle
void Circle::display() {
    cout << "Radius: " << radius << endl;
    cout << "Area: " << getArea() << endl;
}
