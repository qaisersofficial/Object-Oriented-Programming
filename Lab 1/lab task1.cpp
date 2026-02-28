#include <iostream>

using namespace std;

struct Student {
    int studentID;
    char studentName[50];
    char courseID[20];
    int courseMarks;
};

int main() {

    Student st1 = {20, "Ahmad", "CS-201", 17};
    Student st2 = {21, "Hassan", "CS-201", 18};
    Student st3 = {22, "Jamil", "CS-201", 19};
    Student st4 = {23, "Umair", "CS-201", 13};
    
    int totalMarks = st1.courseMarks + st2.courseMarks + st3.courseMarks + st4.courseMarks;

    cout << "-------------------------------------------" << endl;
    cout << "Student Marks Calculation" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Marks for " << st1.studentName << ": " << st1.courseMarks << endl;
    cout << "Marks for " << st2.studentName << ": " << st2.courseMarks << endl;
    cout << "Marks for " << st3.studentName << ": " << st3.courseMarks << endl;
    cout << "Marks for " << st4.studentName << ": " << st4.courseMarks << endl;
    cout << "-------------------------------------------" << endl;
    
    cout << "The cumulative Total Marks of all students: " << totalMarks << endl;

    return 0;
}