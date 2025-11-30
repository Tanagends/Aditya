#include <iostream>

using namespace std;

int main () {
    int num, fact=0;

    cout << "Enter number" << endl;
    cin>>num;
    
    for (int i=1; i<=num; i++) {
        if (!(num%i))
            fact++;
    }
    
    fact == 2 ? cout << num << " is prime number"<< endl : cout << num << " is not prime number"<< endl;
    return 0;
}
