#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Overloaded function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Overloaded function to add two floating-point numbers
void add(double a, double b) {
    cout<<a + b;
}

int main() {
    cout << "add(2, 3) = " << add(2, 3) << endl;           // Calls int version
    cout << "add(2, 3, 4) = " << add(2, 3, 4) << endl;      // Calls int with 3 args
    add(2.5, 3.1) ;    // Calls double version
    return 0;
}
