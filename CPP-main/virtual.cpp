#include <iostream>

using namespace std;
//Pointer to class

class Person {
    public:
        void show () {
            cout << "I am a person" << endl;
        }
};

class Student : virtual public Person {
    public:
        void studentInfo () {
            cout << "I am a student" << endl;
        }
};

class Teacher : virtual public Person {
    public:
        void teacherInfo () {
            cout << "I am a teacher" << endl;
        }
};

class TA : public Student, public Teacher
{
    public:
        void display () {
            show();
        }
};

class Base {

    public:
        virtual void display () {
            cout << "Display from base class" << endl;
        }
};

class Derived : public Base {

};

int main () {
    TA obj;
    obj.display();
    obj.studentInfo();
    obj.teacherInfo();

    return 0;
}
