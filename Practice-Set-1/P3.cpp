// Create a class named Rectangle that contains two data members: length and width. Create a member function setValues() to assign values to length and width, and another function calculateArea() to calculate and display the area of the rectangle. In the main() function, create an object of the Rectangle class, assign values using the setValues() function, and then call calculateArea() to display the result.
#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int width;

    void setValues(int l, int w)
    {
        length = l;
        width = w;
    }

    void calculateArea()
    {
        int area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }
};

int main()
{
    Rectangle r1;

    r1.setValues(5, 4);
    r1.calculateArea();

    return 0;
}
