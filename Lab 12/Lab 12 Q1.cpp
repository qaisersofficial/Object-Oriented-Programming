#include <iostream>
using namespace std;

// Book Class
class Book {
public:
    string title;
    string author;

    Book(string t, string a) : title(t), author(a) {}
};

// Library Class
class Library {
public:
    string libraryName;
    Book* books[3]; // Fixed array for 3 books

    Library(string name) : libraryName(name) {}

    void addBook(Book* book, int index) {
        if (index < 3) {
            books[index] = book;
        }
    }

    void display() {
        cout << "Library: " << libraryName << endl;
        for (int i = 0; i < 3; i++) {
            if (books[i]) {
                cout << "Book " << i + 1 << ": " << books[i]->title
                     << ", Author: " << books[i]->author << endl;
            }
        }
    }
};

int main() {
    Book book1("C++ Primer", "Stanley Lippman");
    Book book2("Clean Code", "Robert C. Martin");
    Book book3("The Pragmatic Programmer", "Andrew Hunt");

    Library library("City Library");
    library.addBook(&book1, 0);
    library.addBook(&book2, 1);
    library.addBook(&book3, 2);

    library.display();
    return 0;
}
