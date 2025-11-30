#include <iostream>
using namespace std;

// Function template to swap two entities
template <typename T>
void swapEntities(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    // Swapping integers
    int x = 10, y = 20;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapEntities(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;

    // Swapping doubles
    double p = 3.14, q = 2.71;
    cout << "\nBefore swap: p = " << p << ", q = " << q << endl;
    swapEntities(p, q);
    cout << "After swap: p = " << p << ", q = " << q << endl;

    // Swapping strings
    string s1 = "Hello", s2 = "World";
    cout << "\nBefore swap: s1 = " << s1 << ", s2 = " << s2 << endl;
    swapEntities(s1, s2);
    cout << "After swap: s1 = " << s1 << ", s2 = " << s2 << endl;

    return 0;
}
