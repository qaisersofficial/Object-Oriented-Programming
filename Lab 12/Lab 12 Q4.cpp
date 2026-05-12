#include <iostream>
using namespace std;

// Building Class
class Building {
public:
    string buildingName;
    int rooms;

    Building(string name, int r) : buildingName(name), rooms(r) {}
};

// Teacher Class
class Teacher {
public:
    string name;
    string subject;

    Teacher(string n, string s) : name(n), subject(s) {}
};

// Department Class
class Department {
public:
    string departmentName;
    Building building; // Composition: Department owns Building
    Teacher* teachers[2]; // Association: Teachers are associated with Department

    Department(string name, string buildingName, int rooms)
        : departmentName(name), building(buildingName, rooms) {}

    void addTeacher(Teacher* teacher, int index) {
        if (index < 2) {
            teachers[index] = teacher;
        }
    }

    void display() {
        cout << "Department: " << departmentName << endl;
        cout << "Building: " << building.buildingName << ", " << building.rooms << " rooms" << endl;
        for (int i = 0; i < 2; i++) {
            if (teachers[i]) {
                cout << "Teacher " << i + 1 << ": " << teachers[i]->name
                     << ", Subject: " << teachers[i]->subject << endl;
            }
        }
    }
};

// University Class
class University {
public:
    string universityName;
    Department* departments[2]; // Aggregation: University has Departments

    University(string name) : universityName(name) {}

    void addDepartment(Department* department, int index) {
        if (index < 2) {
            departments[index] = department;
        }
    }

    void display() {
        cout << "University: " << universityName << endl;
        for (int i = 0; i < 2; i++) {
            if (departments[i]) {
                departments[i]->display();
                cout << endl;
            }
        }
    }
};

int main() {
    Teacher teacher1("Dr. Hina", "Machine Learning");
    Teacher teacher2("Dr. Asim", "Artificial Intelligence");

    Department csDept("Computer Science", "Academic Block", 25);
    csDept.addTeacher(&teacher1, 0);
    csDept.addTeacher(&teacher2, 1);

    Department bioDept("Biotechnology", "Science Block", 15);

    University university("XYZ University");
    university.addDepartment(&csDept, 0);
    university.addDepartment(&bioDept, 1);

    university.display();
    return 0;
}
