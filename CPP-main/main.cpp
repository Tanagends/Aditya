#include <iostream>

using namespace std;

inline void num() {
    static int n = 5;
    cout << "Num is " << n << endl;
    n++;
}

int main () {
    num();
    num();
    num();

    return 0;
    
}
