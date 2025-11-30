#include <iostream>
using namespace std;

// Define a class
class Book {
public:
    string title;
    string author;

    void setDetails(string t, string a) {
        title = t;
        author = a;
    }

    void display() {
        cout << "Title: " << title << ", Author: " << author << endl;
    }
};

int main() {
    // Array of 3 Book objects
    Book library[3];

    // Set details for each book
    library[0].setDetails("1984", "George Orwell");
    library[1].setDetails("Brave New World", "Aldous Huxley");
    library[2].setDetails("Fahrenheit 451", "Ray Bradbury");

    // Display all books
    for (int i = 0; i < 3; i++) {
        library[i].display();
    }

    return 0;
}
