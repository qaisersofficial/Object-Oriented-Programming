#include <iostream>
#include <cmath> // For M_PI
using namespace std;

// Base Class: Shape
class Shape {
protected:
    string color;

public:
    // Constructors
    Shape() : color("undefined") {}
    Shape(string c) : color(c) {}

    // Virtual Functions
    virtual double area() const = 0; // Pure virtual function
    virtual void draw() const = 0;   // Pure virtual function

    // Setter and Getter for color
    void setColor(string c) { color = c; }
    string getColor() const { return color; }

    // Virtual Destructor
    virtual ~Shape() {}
};

// Derived Class: Triangle
class Triangle : public Shape {
private:
    double base;
    double height;

public:
    // Constructors
    Triangle() : Shape(), base(0), height(0) {}
    Triangle(double b, double h, string c) : Shape(c), base(b), height(h) {}

    // Setter and Getter
    void setBase(double b) { base = b; }
    void setHeight(double h) { height = h; }
    double getBase() const { return base; }
    double getHeight() const { return height; }

    // Overridden Functions
    double area() const override { return 0.5 * base * height; }
    void draw() const override {
        cout << "Triangle - Base: " << base << ", Height: " << height
             << ", Color: " << color << ", Area: " << area() << endl;
    }
};

// Derived Class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    // Constructors
    Circle() : Shape(), radius(0) {}
    Circle(double r, string c) : Shape(c), radius(r) {}

    // Setter and Getter
    void setRadius(double r) { radius = r; }
    double getRadius() const { return radius; }

    // Additional Functions
    double circumference() const { return 2 * M_PI * radius; }
    double diameter() const { return 2 * radius; }

    // Overridden Functions
    double area() const override { return M_PI * radius * radius; }
    void draw() const override {
        cout << "Circle - Radius: " << radius << ", Color: " << color
             << ", Area: " << area()
             << ", Circumference: " << circumference()
             << ", Diameter: " << diameter() << endl;
    }
};

// Main Function
int main() {
    const int MAX_SHAPES = 100; // Maximum number of shapes
    Shape* shapes[MAX_SHAPES]; // Static array of Shape pointers
    int shapeCount = 0;        // Current number of shapes
    int choice;

    do {
        cout << "Enter 1 to add a Triangle, 2 to add a Circle, 0 to exit: ";
        cin >> choice;

        if (choice == 1 && shapeCount < MAX_SHAPES) {
            double base, height;
            string color;
            cout << "Enter base of the Triangle: ";
            cin >> base;
            cout << "Enter height of the Triangle: ";
            cin >> height;
            cout << "Enter color of the Triangle: ";
            cin >> color;

            // Create a Triangle and add it to the array
            shapes[shapeCount++] = new Triangle(base, height, color);
        } else if (choice == 2 && shapeCount < MAX_SHAPES) {
            double radius;
            string color;
            cout << "Enter radius of the Circle: ";
            cin >> radius;
            cout << "Enter color of the Circle: ";
            cin >> color;

            // Create a Circle and add it to the array
            shapes[shapeCount++] = new Circle(radius, color);
        } else if (shapeCount >= MAX_SHAPES) {
            cout << "Shape storage limit reached!" << endl;
        }
    } while (choice != 0);

    // Display all shapes
    cout << "\nDisplaying all shapes:\n";
    for (int i = 0; i < shapeCount; ++i) {
        shapes[i]->draw(); // Call draw() using polymorphism
    }

    // Free allocated memory
    for (int i = 0; i < shapeCount; ++i) {
        delete shapes[i];
    }

    return 0;
}
