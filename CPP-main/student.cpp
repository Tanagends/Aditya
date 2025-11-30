#include <iostream>
using namespace std;

class Student {
    int rollNo;
    string name;

    public:
        void getData() {
            cout << "Enter rollno and name: " << endl;
            cin >> rollNo >> name;
        }

        void display () {
            cout << rollNo << name << endl;
        }
};

int main () {
    Student s[3];

    for (int i=0; i<3; i++) {
        s[i].getData();
    }

    cout << "Student details: " << endl;

    for (int i=0; i< 3; i++) {
        s[i].display();
    }
}
