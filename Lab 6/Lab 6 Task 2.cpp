// Create a class Circle with radius as a data member.
// Write a function to calculate the area of the circle and
//  pass the Circle object to a function that displays the area.

#include <iostream>
using namespace std;

class Circle
{
public:
    double radius;

    Circle(double r) : radius(r) {}

    double area()
    {
        return 3.14159 * radius * radius;
    }
};

void displayArea(Circle c)
{
    cout << "Area of circle: " << c.area() << endl;
}

int main()
{
    Circle circle(5.0);
    displayArea(circle);
    return 0;
}
