#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int num, init, i=0, arm=0;

    cout << "Enter number: ";
    cin >> num;
    
    init = num;
    while (num) {
        num /= 10;
        i++;
    }

    num = init;

    while (num) {
        arm += pow(num%10, i);
        num /= 10;
    }

    arm == init ? cout << "Armstrong\n" : cout << "Not armstrong\n";
    return 0;

}
