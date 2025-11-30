#include <iostream>
using namespace std;

// Template function to calculate the sum of two values
template <typename T>
T sum(T a, T b) {
    return a + b;
}

// Overloading template function for three values
template <typename T>
T sum(T a, T b, T c) {
    return a + b + c;
}

// Specialization for string concatenation
template <>
string sum(string a, string b) {
    return a + " " + b;
}

int main() {
    int intSum = sum(5, 10);
    double doubleSum = sum(3.5, 2.7);
    string stringSum = sum(string("Hello"), string("World"));
    int threeIntSum = sum(1, 2, 3);

    cout << "Sum of integers: " << intSum << endl;
    cout << "Sum of doubles: " << doubleSum << endl;
    cout << "Concatenated string: " << stringSum << endl;
    cout << "Sum of three integers: " << threeIntSum << endl;

    return 0;
}

