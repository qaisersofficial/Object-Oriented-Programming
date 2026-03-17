//Write a program to create an array of Employee objects. 
//Each employee should have an id, name, and salary.
// Create a method to set the details of each employee and another method to display them.
#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    string name;
    double salary;

    void setDetails(int i, string n, double s) {
        id = i;
        name = n;
        salary = s;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << ", Salary: $" << salary << endl;
    }
};

int main() {
    Employee employees[3];
    employees[0].setDetails(1, "John", 50000);
    employees[1].setDetails(2, "Jane", 55000);
    employees[2].setDetails(3, "Smith", 60000);

    for (int i = 0; i < 3; ++i) {
        employees[i].display();
    }
    return 0;
}
