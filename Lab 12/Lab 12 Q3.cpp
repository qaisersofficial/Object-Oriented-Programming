#include <iostream>
using namespace std;

// Doctor Class
class Doctor {
public:
    string name;
    string specialization;

    Doctor(string n, string s) : name(n), specialization(s) {}
};

// Hospital Class
class Hospital {
public:
    string hospitalName;
    Doctor* doctors[2]; // Fixed array for 2 doctors

    Hospital(string name) : hospitalName(name) {}

    void addDoctor(Doctor* doctor, int index) {
        if (index < 2) {
            doctors[index] = doctor;
        }
    }

    void display() {
        cout << "Hospital: " << hospitalName << endl;
        for (int i = 0; i < 2; i++) {
            if (doctors[i]) {
                cout << "Doctor " << i + 1 << ": " << doctors[i]->name
                     << ", Specialization: " << doctors[i]->specialization << endl;
            }
        }
    }
};

int main() {
    Doctor doctor1("Dr. Hassan", "Cardiologist");
    Doctor doctor2("Dr. Sara", "Pediatrician");

    Hospital hospital("City Hospital");
    hospital.addDoctor(&doctor1, 0);
    hospital.addDoctor(&doctor2, 1);

    hospital.display();
    return 0;
}
