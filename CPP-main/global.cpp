#include <iostream>

int x = 100;

using namespace std;
int main () {
    int x = 50;

    cout << ::x << endl;
}
