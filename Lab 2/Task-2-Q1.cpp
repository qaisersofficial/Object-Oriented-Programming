// Find the average of numbers stored in a file.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("FileName.txt");

    int num, sum = 0, count = 0;

    if (!file) {
        cout << "File could not be opened!" << endl;
        return 1;
    }

    while (file >> num) {
        sum += num;
        count++;
    }

    if (count > 0)
        cout << "Average = " << (float)sum / count << endl;
    else
        cout << "File is empty!" << endl;

    file.close();
    return 0;
}
