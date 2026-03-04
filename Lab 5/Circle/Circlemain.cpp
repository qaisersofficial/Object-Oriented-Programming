// main.cpp
#include "Circle.h"
#include <iostream>
using namespace std;

int main() {
    Circle circle1;
    Circle circle2(5.0);

    // Set the radius for circle1
    circle1.setRadius(3.5);

    // Display circle1 and circle2 details
    cout << "Circle 1:" << endl;
    circle1.display();

    cout << "\nCircle 2:" << endl;
    circle2.display();

    return 0;
}

/*
Create a class Circle that has private members for radius.
 Implement methods to set the radius, calculate the area,
  and display the radius and area. 
Split the program into Circle.h, Circle.cpp, and main.cpp.

*/