// Create a class LibraryBook that has an ID, title, and author as data members. 
// Use an array of LibraryBook objects to store information for multiple books. 
// Pass the objects to a function that displays all book details.

#include <iostream>
using namespace std;

class LibraryBook {
public:
    int id;
    string title;
    string author;

    void setDetails(int i, string t, string a) {
        id = i;
        title = t;
        author = a;
    }

    void display() const {
        cout << "ID: " << id << ", Title: " << title << ", Author: " << author << endl;
    }
};

void displayBooks(const LibraryBook books[], int size) {
    for (int i = 0; i < size; ++i) {
        books[i].display();
    }
}

int main() {
    LibraryBook books[3];
    books[0].setDetails(101, "C++ Programming", "Bjarne Stroustrup");
    books[1].setDetails(102, "Introduction to Algorithms", "Thomas H. Cormen");
    books[2].setDetails(103, "Clean Code", "Robert C. Martin");

    displayBooks(books, 3);
    return 0;
}
