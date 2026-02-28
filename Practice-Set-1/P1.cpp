// Create a class named Car that contains two data members: brand and model year. Add a member function showDetails() that displays the car’s brand and model year. In the main() function, create two different objects of the Car class, assign different values to each object, and display the details of both cars using the member function.
#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int modelYear;

    void showDetails() {
        cout << "Brand: " << brand << endl;
        cout << "Model Year: " << modelYear << endl;
    }
};

int main() {
    Car car1, car2;   // Two objects
    
    car1.brand = "Toyota";
    car1.modelYear = 2020;

    car2.brand = "Honda";
    car2.modelYear = 2022;

    car1.showDetails();
    car2.showDetails();

    return 0;
}
