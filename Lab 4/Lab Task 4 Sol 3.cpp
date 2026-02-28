// Write a Circle class that has the following member variables.
// i.	radius: a double
// ii.	pi: a double initialized with the value 3.14159
// The class should have the following member functions:
// Default Constructor: A default constructor that sets radius to 0.0
// Constructor: Accepts the radius of the circle as an argument
// 	setRadius: A mutator function for the radius variable
// 	getRadius: An accessor function for the radius variable
// 	getArea: Returns the area of the circle, calculated as:
// area = pi *radius * radius
// 	getDiameter: Returns the diameter of the circle, calculated as:
// diameter = radius * 2
// 	getCircumference: Returns the circumference of the circle, which is calculated as: circumference = 2 * pi * radius
// Write a program that demonstrates the Circle class by asking the user for the circle’s radius, creating a Circle object, and then reporting the circle’s area, diameter, and circumference.

#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;             // The radius of the circle
    const double pi = 3.14159; // Value of pi initialized as a constant

public:
    // Default constructor that sets the radius to 0.0
    Circle()
    {
        radius = 0.0;
    }

    // Constructor that accepts the radius as an argument
    Circle(double r)
    {
        radius = r;
    }

    // Mutator function to set the radius
    void setRadius(double r)
    {
        radius = r;
    }

    // Accessor function to get the radius
    double getRadius() const
    {
        return radius;
    }

    // Function to calculate the area of the circle
    double getArea() const
    {
        return pi * radius * radius;
    }

    // Function to calculate the diameter of the circle
    double getDiameter() const
    {
        return radius * 2;
    }

    // Function to calculate the circumference of the circle
    double getCircumference() const
    {
        return 2 * pi * radius;
    }
};

int main()
{
    double userRadius;

    // Ask the user for the circle's radius
    cout << "Enter the radius of the circle: ";
    cin >> userRadius;

    // Create a Circle object and set the radius
    Circle myCircle(userRadius);

    // Display the area, diameter, and circumference of the circle
    cout << "Circle's area: " << myCircle.getArea() << endl;
    cout << "Circle's diameter: " << myCircle.getDiameter() << endl;
    cout << "Circle's circumference: " << myCircle.getCircumference() << endl;

    return 0;
}
