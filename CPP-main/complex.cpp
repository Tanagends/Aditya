#include <iostream>

using namespace std;


class Complex {
    float real;
    float imag;

    public:
        Complex (float r = 0.0, float i = 0.0) {
            real = r;
            imag = i;
        }

        Complex operator+ (const Complex & c)
        {
            Complex temp;
            temp.real = c.real + real;
            temp.imag = c.imag + imag;
            return temp;
        }

        void display () {
            cout << "Real: " << real << endl << "Imaginary: " << imag <<  endl;
        }
        friend Complex operator- (Complex & c, Complex & b);
};

Complex operator-(Complex & c, Complex &b) {
    Complex k;
    k.real = c.real - b.real;
    k.imag = c.imag - b.imag;
    return k;
}


int main () {
    Complex c1(3.5, 6.5);
    Complex c2(1.6, 4.1);

    Complex c3 = c1 + c2;

    cout << "Sum complex is: ";
    c3.display();

    Complex c4 = c1-c2;

    c4.display();
    return 0;
}
