#include <iostream>

using namespace std;

int main () {
    int count, num1, num2, num3, max;

    cout << "Enter the number of elements\n";
    cin >> count;

    cout << "Enter the numbers\n";
    cin >> num1;
    cin >> num2;
    if (count == 3) {
        cin >> num3;
        max = num1 >= num2 ? num1 : num2;
        max = num3 >= max ? num3 : max;
    }    
    else
        max = num1 >= num2 ? num1 : num2;
    cout << "Max number is " << max << endl;
    return 0;
}
