#include <iostream>

using namespace std;

int main () {
    int num;

    cout << "Enter number" << endl;
    cin>>num;

    num % 2 ? cout << num << " is odd" << endl : cout << num << " is even" << endl;

    return 0;
}
