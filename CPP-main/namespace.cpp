#include <iostream>
using namespace std;

namespace Math {
    int value = 10;
    void test() {
        cout << "Hello" << endl;
    }
};

int main () {
    cout << Math::value << endl;
    Math::test();
}
