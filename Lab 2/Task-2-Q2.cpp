// Write a C++ program to open an existing text file and display its contents on the console. 
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("FileName.txt");
    string line;

    if (!file) {
        cout << "File not found!" << endl;
        return 1;
    }
    cout << "Contents of the file:";

    while (getline(file, line)) {
        
        cout << line << endl;
    }

    file.close();
    return 0;
}