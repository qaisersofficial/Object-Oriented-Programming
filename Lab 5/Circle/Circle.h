// Circle.h
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
private:
    double radius;  // Private data member for radius

public:
    Circle();  // Default constructor
    Circle(double);  // Parameterized constructor

    // Member functions
    void setRadius(double);
    double getArea();
    void display();
};

#endif
