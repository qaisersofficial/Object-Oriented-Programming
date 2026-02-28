// Write a C++ program to find and replace a specific word in a text file.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("FileName.txt");
    ofstream outFile("temp.txt");

    string word;
    string findWord = "24";
    string replaceWord = "twenty-four";

    if (!inFile || !outFile) {
        cout << "File error!";
        return 1;
    }

    while (inFile >> word) {
        if (word == findWord)
            outFile << replaceWord << " ";
        else
            outFile << word << " ";
    }

    inFile.close();
    outFile.close();

    remove("FileName.txt");
    rename("temp.txt", "FileName.txt");

    cout << "Word replaced successfully!" << endl;
    return 0;
}