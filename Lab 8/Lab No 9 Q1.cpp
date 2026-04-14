#include <iostream>
#include <string>
using namespace std;

// Base class Publication
class Publication {
protected:
    string title;
    float price;

public:
    void getdata() {
        cout << "Enter title: ";
        cin.ignore(); // To ignore leftover newline from previous input
        getline(cin, title);
        cout << "Enter price: ";
        cin >> price;
    }

    void putdata() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

// Derived class Book
class Book : public Publication {
private:
    int pageCount;

public:
    void getdata() {
        Publication::getdata();
        cout << "Enter page count: ";
        cin >> pageCount;
    }

    void putdata() {
        Publication::putdata();
        cout << "Page Count: " << pageCount << endl;
    }
};

// Derived class Tape
class Tape : public Publication {
private:
    float playingTime;

public:
    void getdata() {
        Publication::getdata();
        cout << "Enter playing time (in minutes): ";
        cin >> playingTime;
    }

    void putdata() {
        Publication::putdata();
        cout << "Playing Time: " << playingTime << " minutes" << endl;
    }
};

// Main function
int main() {
    Book book;
    Tape tape;

    cout << "Enter details for Book:" << endl;
    book.getdata();

    cout << "\nEnter details for Tape:" << endl;
    tape.getdata();

    cout << "\nDisplaying Book details:" << endl;
    book.putdata();

    cout << "\nDisplaying Tape details:" << endl;
    tape.putdata();

    return 0;
}
