// Create a class named Employee that contains two data members: employee name and salary. Create two member functions: getData() to take input from the user and displayData() to print the employee’s information. In the main() function, create one object of the Employee class, call the getData() function to store values, and then call displayData() to print the details.
#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    float salary;

    void getData() {
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayData() {
        cout << "Employee Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main(){
    Employee emp1;

    emp1.getData();
    emp1.displayData();

    return 0;
}