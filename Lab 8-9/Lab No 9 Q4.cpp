#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Base class: Shape
class Shape {
protected:
    string color;

public:
    // Constructor
    Shape(string c = "") : color(c) {}

    // Setter and Getter for color
    void setColor(string c) { color = c; }
    string getColor() { return color; }

    // Area function (not overridden in derived classes)
    double area() { return -1; } // Default behavior: returns -1

    // Display function (not overridden in derived classes)
    void display() {
        cout << "Shape color: " << color << endl;
    }
};

// Derived class: Triangle
class Triangle : public Shape {
private:
    double base, height, sides;

public:
    // Constructor
    Triangle(double b = 0, double h = 0, double s = 0, string c = "")
        : Shape(c), base(b), height(h), sides(s) {}

    // Setter and Getter functions
    void setBase(double b) { base = b; }
    void setHeight(double h) { height = h; }
    void setSides(double s) { sides = s; }
    double getBase() { return base; }
    double getHeight() { return height; }
    double getSides() { return sides; }

    // Specific Area function for Triangle
    double triangleArea() {
        return 0.5 * base * height; // Area = 1/2 * base * height
    }

    // Display function for Triangle
    void displayTriangle() {
        cout << "Triangle:" << endl;
        cout << "Color: " << color << endl;
        cout << "Base: " << base << endl;
        cout << "Height: " << height << endl;
        cout << "Sides: " << sides << endl;
        cout << "Area: " << triangleArea() << endl;
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    double centerX, centerY, radius;

public:
    // Constructor
    Circle(double x = 0, double y = 0, double r = 0, string c = "")
        : Shape(c), centerX(x), centerY(y), radius(r) {}

    // Setter and Getter functions
    void setCenterX(double x) { centerX = x; }
    void setCenterY(double y) { centerY = y; }
    void setRadius(double r) { radius = r; }
    double getCenterX() { return centerX; }
    double getCenterY() { return centerY; }
    double getRadius() { return radius; }

    // Specific Circumference and Diameter functions for Circle
    double circleCircumference() {
        return 2 * M_PI * radius; // Circumference = 2 * p * r
    }
    double circleDiameter() {
        return 2 * radius; // Diameter = 2 * r
    }
    double circleArea() {
        return M_PI * radius * radius; // Area = p * r^2
    }

    // Display function for Circle
    void displayCircle() {
        cout << "Circle:" << endl;
        cout << "Color: " << color << endl;
        cout << "Center: (" << centerX << ", " << centerY << ")" << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << circleArea() << endl;
        cout << "Circumference: " << circleCircumference() << endl;
        cout << "Diameter: " << circleDiameter() << endl;
    }
};

// Main function
int main() {
    // Create a Triangle object
    Triangle t1(5.0, 10.0, 3, "Red");
    t1.displayTriangle();

    cout << endl;

    // Create a Circle object
    Circle c1(0.0, 0.0, 7.0, "Blue");
    c1.displayCircle();

    return 0;
}
