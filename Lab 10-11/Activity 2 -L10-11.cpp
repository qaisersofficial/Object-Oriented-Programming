#include <iostream>
#include <string>
using namespace std;

// first base class
class Teacher {
protected:
    string teacherName;
    int teacherAge;
    string teacherAddress;

public:
    void inputTeacher() {
        cout << "Enter teacher name: ";
        getline(cin,teacherName);
        cout << "Enter age of teacher: ";
        cin >> teacherAge;
        cout << "Enter particular address of your instructor: ";
        cin.ignore();
        getline(cin,teacherAddress);
		
    }

    void displayTeacher() {
        cout << "Teacher Name: " << teacherName << endl;
        cout << "Teacher Age: " << teacherAge << endl;
        cout << "Teacher Address: " << teacherAddress << endl;
    }
};

// second base class
class Writer {
protected:
    string writerName;
    string writerAddress;
    int writerBooks;

public:
    void inputWriter() {
        cout << "Enter writer name: ";
        getline(cin,writerName);
        cout << "Enter writer address: ";
        getline(cin,writerAddress);
        cout << "Enter number of books og writer: ";
        cin >> writerBooks;
    }

    void displayWriter() {
        cout << "Writer Name: " << writerName << endl;
        cout << "Address  of writer: " << writerAddress << endl;
        cout << "Books Written by writer: " << writerBooks << endl;
    }
};

// child class that inherits BOTH Teacher and Writer (multiple inheritance)
class Scholar : public Teacher, public Writer {
public:
    void inputAll() {
        cout << "Enter Data for teacher:-"<<endl;
        inputTeacher();
        cout<< endl;
        cout << "Enter Writer details:-"<<endl;
        inputWriter();
    }

    void displayAll() {
    	cout<< endl;
        cout << "Scholar data entered by user " << endl;
        displayTeacher();
        displayWriter();
    }
};

int main() {
    Scholar scholarObj;
    scholarObj.inputAll();
    scholarObj.displayAll();
    return 0;
}