// Write a C++ program to find and replace a specific word in a text file.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("FileName.txt");
    string word;
    int count = 0;

    if (!file) {
        cout << "Unable to open file!" << endl;
        return 1;
    }

    while (file >> word) {
        count++;
    }

    cout  << count << " words" << endl;

    file.close();
    cout<<"File opened 22 55 66 77";
    return 0;
}