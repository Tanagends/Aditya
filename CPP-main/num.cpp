#include <iostream>

using namespace std;

inline int big(int a, int b) {
    return a > b ? a : b;
}

int main () {
    int a, b;
    cout << "Enter two nums: " << endl;
    cin >> a >> b;
    cout << "Biggest is " << big(a, b) << endl;;

    return 0;
    
}
