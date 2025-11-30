#include <iostream>
#include <cmath>
#include <stdexcept>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    try {
        if (a == 0) {
            throw invalid_argument("Coefficient 'a' cannot be zero for a quadratic equation.");
        }

        double discriminant = b * b - 4 * a * c;

        if (discriminant < 0) {
            throw runtime_error("The equation has imaginary roots.");
        }

        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << "Roots are real and distinct:\n";
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    catch (const exception& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
