#include <iostream>
#include <string>
using namespace std;

// Base class: Employee
class Employee {
private:
    string name;
    int employeeNumber;
    string hireDate;

public:
    // Constructor
    Employee(string n = "", int num = 0, string date = "") 
        : name(n), employeeNumber(num), hireDate(date) {}

    // Accessor functions
    string getName() { return name; }
    int getEmployeeNumber() { return employeeNumber; }
    string getHireDate() { return hireDate; }

    // Mutator functions
    void setName(string n) { name = n; }
    void setEmployeeNumber(int num) { employeeNumber = num; }
    void setHireDate(string date) { hireDate = date; }
};

// Derived class: ProductionWorker
class ProductionWorker : public Employee {
private:
    int shift;       // 1 for day, 2 for night
    double hourlyPayRate;

public:
    // Constructor
    ProductionWorker(string n = "", int num = 0, string date = "", int sh = 1, double rate = 0.0) 
        : Employee(n, num, date), shift(sh), hourlyPayRate(rate) {}

    // Accessor functions
    int getShift() { return shift; }
    double getHourlyPayRate() { return hourlyPayRate; }

    // Mutator functions
    void setShift(int sh) { shift = sh; }
    void setHourlyPayRate(double rate) { hourlyPayRate = rate; }

    // Display function
    void display() {
        cout << "Employee Name: " << getName() << endl;
        cout << "Employee Number: " << getEmployeeNumber() << endl;
        cout << "Hire Date: " << getHireDate() << endl;
        cout << "Shift: " << (shift == 1 ? "Day" : "Night") << endl;
        cout << "Hourly Pay Rate: $" << hourlyPayRate << endl;
    }
};

// Main function
int main() {
    // Create a ProductionWorker object
    ProductionWorker worker("Ali", 12345, "01/01/2022", 2, 25.50);

    // Display worker's details
    worker.display();

    // Modify worker's details
    worker.setName("Ahmed");
    worker.setEmployeeNumber(54321);
    worker.setHireDate("02/02/2023");
    worker.setShift(1); // Day shift
    worker.setHourlyPayRate(30.00);

    // Display modified details
    cout << "\nUpdated Worker Details:" << endl;
    worker.display();

    return 0;
}
