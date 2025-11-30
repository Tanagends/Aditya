#include <iostream>
using namespace std;

// Forward declaration
class B;

class A {
private:
    int valueA;

public:
    A(int val) : valueA(val) {}

    // Declare friend function
    friend void showValues(const A&, const B&);
};

class B {
private:
    int valueB;

public:
    B(int val) : valueB(val) {}

    // Declare friend function
    friend void showValues(const A&, const B&);
};

// Friend function definition
void showValues(const A& objA, const B& objB) {
    cout << "Value from Class A: " << objA.valueA << endl;
    cout << "Value from Class B: " << objB.valueB << endl;
}

int main() {
    A aObj(10);
    B bObj(20);

    showValues(aObj, bObj);

    return 0;
}

