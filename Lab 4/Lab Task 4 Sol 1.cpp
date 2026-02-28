// Write a class named Employee that has the following member variables:
// 1.	name: A string that holds the employee’s name
// 2.	idNumber: An int variable that holds the employee’s ID number
// 3.	department: A string that holds the name of the department where the employee works.
// 4.	position: A string that holds the employee’s job title
// i.	A constructor that accepts the following values as arguments and assigns them to the appropriate member variables: employee’s name, employee’s ID number, department, and position.
// ii.	A constructor that accepts the following values as arguments and assigns them to the appropriate member variables: the employee’s name and ID number. The department and position fields should be assigned an empty string ("")
// iii.	A default constructor that assigns empty strings ("") to the name, department, and position member variables, and 0 to the idNumber member variable
// Write appropriate setter/getter functions that store values and return the values in these member variables. Once you have written the class, write a program that creates three Employee objects to hold the following data. 
// The program should store this data in the three objects and then display the data for each employee on the screen. 

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;        // Employee's name
    int idNumber;       // Employee's ID number
    string department;  // Employee's department
    string position;    // Employee's position

public:
    // Default constructor
    Employee() {
        name = "";
        idNumber = 0;
        department = "";
        position = "";
    }

    // Constructor with all member variables
    Employee(string empName, int empIdNumber, string empDepartment, string empPosition) {
        name = empName;
        idNumber = empIdNumber;
        department = empDepartment;
        position = empPosition;
    }

    // Constructor with name and idNumber only
    Employee(string empName, int empIdNumber) {
        name = empName;
        idNumber = empIdNumber;
        department = "";
        position = "";
    }

    // setter functions
    void setName(string empName) {
        name = empName;
    }

    void setIdNumber(int empIdNumber) {
        idNumber = empIdNumber;
    }

    void setDepartment(string empDepartment) {
        department = empDepartment;
    }

    void setPosition(string empPosition) {
        position = empPosition;
    }

    // getter functions
    // string getName() const {
    //     return name;
    // }

    // int getIdNumber() const {
    //     return idNumber;
    // }

    // string getDepartment() const {
    //     return department;
    // }

    // string getPosition() const {
    //     return position;
    // }

    // display Employee details
    void display() const {
        cout << "Name: " << name << ", ID Number: " << idNumber
             << ", Department: " << department << ", Position: " << position << endl;
    }
};

int main() {
    // Creating three Employee objects
    Employee emp1("Qaiser Ali", 12345, "HR", "Manager");
    Employee emp2("Hameed Raza", 67890);
    Employee emp3;

    // Setting details for emp3 using setter functions
    emp3.setName("Arslan");
    emp3.setIdNumber(12312);
    emp3.setDepartment("Finance");
    emp3.setPosition("Analyst");

    // Displaying the employee details
    emp1.display();
    emp2.display();
    emp3.display();

    return 0;
}