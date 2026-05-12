#include <iostream>
#include <string>
using namespace std;

// Base Class: Person
class Person {
protected:
    string name;
    int age;
    bool isMale;

public:
    // Default Constructor
    Person() : name("undefined"), age(0), isMale(true) {}

    // Overloaded Constructor
    Person(string n, int a, bool gender) : name(n), age(a), isMale(gender) {}

    // Setters and Getters
    void setName(string n) { name = n; }
    string getName() const { return name; }

    void setAge(int a) { age = a; }
    int getAge() const { return age; }

    void setIsMale(bool gender) { isMale = gender; }
    bool getIsMale() const { return isMale; }

    // Pure Virtual Function
    virtual void showData() const = 0;

    // Virtual Destructor
    virtual ~Person() {}
};

// Derived Class: Employee
class Employee : public Person {
protected:
    string employerName;
    double hourlyWage;

public:
    // Default Constructor
    Employee() : Person(), employerName("undefined"), hourlyWage(0.0) {}

    // Overloaded Constructor
    Employee(string n, int a, bool gender, string employer, double wage)
        : Person(n, a, gender), employerName(employer), hourlyWage(wage) {}

    // Setters and Getters
    void setEmployerName(string employer) { employerName = employer; }
    string getEmployerName() const { return employerName; }

    void setHourlyWage(double wage) { hourlyWage = wage; }
    double getHourlyWage() const { return hourlyWage; }

    // Overridden Function
    void showData() const override {
        cout << "Employee Name: " << name << ", Age: " << age
             << ", Gender: " << (isMale ? "Male" : "Female")
             << ", Employer: " << employerName
             << ", Hourly Wage: " << hourlyWage << endl;
    }
};

// Derived Class: Teacher
class Teacher : public Person {
private:
    string address;
    string contactNumber;
    int teachesGrade;

public:
    // Default Constructor
    Teacher() : Person(), address("undefined"), contactNumber("undefined"), teachesGrade(0) {}

    // Overloaded Constructor
    Teacher(string n, int a, bool gender, string addr, string contact, int grade)
        : Person(n, a, gender), address(addr), contactNumber(contact), teachesGrade(grade) {}

    // Setters and Getters
    void setAddress(string addr) { address = addr; }
    string getAddress() const { return address; }

    void setContactNumber(string contact) { contactNumber = contact; }
    string getContactNumber() const { return contactNumber; }

    void setTeachesGrade(int grade) { teachesGrade = grade; }
    int getTeachesGrade() const { return teachesGrade; }

    // Overridden Function
    void showData() const override {
        cout << "Teacher Name: " << name << ", Age: " << age
             << ", Gender: " << (isMale ? "Male" : "Female")
             << ", Address: " << address
             << ", Contact Number: " << contactNumber
             << ", Teaches Grade: " << teachesGrade << endl;
    }
};

// Main Function
int main() {
    const int SIZE = 4;
    Person* persons[SIZE]; // Array of pointers to Person

    // Create Employee objects
    persons[0] = new Employee("John Doe", 30, true, "TechCorp", 25.5);
    persons[1] = new Employee("Jane Smith", 28, false, "InnovateLtd", 30.0);

    // Create Teacher objects
    persons[2] = new Teacher("Alice Brown", 40, false, "123 Elm St", "555-1234", 5);
    persons[3] = new Teacher("Bob White", 35, true, "456 Maple Ave", "555-5678", 8);

    // Display data for all objects
    cout << "Displaying data for all objects:\n";
    for (int i = 0; i < SIZE; ++i) {
        persons[i]->showData();
    }

    // Free allocated memory
    for (int i = 0; i < SIZE; ++i) {
        delete persons[i];
    }

    return 0;
}
