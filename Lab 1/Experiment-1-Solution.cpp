#include <iostream>
using namespace std;
// what is structure?
//A structure is a user defined data type that allows us to group data types (e.g int, char...) under a single name.

struct Student{

	int studentID;
	char studentName[50];
	char courseCode[10];
	char courseName[50];
	int courseMarks;
};
// how the memory is allocation to a structure?
int main(){
	Student s1={24, "Affaq", "CS-112L", "OOP", 100};
	Student s2={25, "Sabah", "CS-112L", "OOP", 100};
	// data access
	cout<< "studentID\t\tstudentName\t\tcourseCode\t\tcourseName\t\tcourseMarks\n";
	cout<< s1.studentID<<"\t\t\t"<<s1.studentName<<"\t\t\t"<<s1.courseCode<<"\t\t\t"<<s1.courseName<<"\t\t\t"<<s1.courseMarks<<endl;
	cout<< s2.studentID<<"\t\t\t"<<s2.studentName<<"\t\t\t"<<s2.courseCode<<"\t\t\t"<<s2.courseName<<"\t\t\t"<<s2.courseMarks;
}