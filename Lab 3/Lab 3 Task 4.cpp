// Write a class that displays a simple message on the screen whenever an object of that class is created.
#include <iostream>
using namespace std;

class Message {
public:
    void displayMessage() {
        cout << "A new object of Message class has been created!" << endl;
    }
};

int main() {
    Message obj;
    obj.displayMessage(); // This will print the message
    return 0;
}
