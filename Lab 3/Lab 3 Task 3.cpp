// Write a class named Car that has the following member variables:
// yearModel: An int that holds the car’s year model
// Company: A string that holds the maker of the car
// Speed: An int that holds the car’s current speed
// Mutator: Appropriate mutator functions to set the values of data members 
// Accessor: Appropriate accessor functions to get the values stored in an object’s yearModel, company, and speed member variables
// Accelerate: The accelerate function should add 5 to the speed member variable each time it is called
// Brake: The brake function should subtract 5 from the speed member variable each time it is called
// Demonstrate the class in a program that creates a Car object, and then calls the accelerate function five times. After each call to the accelerate function, get the current speed of the car and display it. Then, call the brake function five times. After each call to the brake function, get the current speed of the car and display it.

#include <iostream>
using namespace std;

class Car {
private:
    int yearModel;
    string company;
    int speed;

public:
    void setYearModel(int y) {
        yearModel = y;
    }

    void setCompany(string c) {
        company = c;
    }

    void setSpeed(int s) {
        speed = s;
    }

    int getYearModel() {
        return yearModel;
    }

    string getCompany() {
        return company;
    }

    int getSpeed() {
        return speed;
    }

    void accelerate() {
        speed += 5;
    }

    void brake() {
        speed -= 5;
    }
};

int main() {
    Car myCar;

    myCar.setYearModel(2022);
    myCar.setCompany("Toyota");
    myCar.setSpeed(0);

    for (int i = 0; i < 5; i++) {
        myCar.accelerate();
        cout << "Current Speed: " << myCar.getSpeed() << endl;
    }

    for (int i = 0; i < 5; i++) {
        myCar.brake();
        cout << "Current Speed: " << myCar.getSpeed() << endl;
    }

    return 0;
}
