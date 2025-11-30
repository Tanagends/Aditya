
#include <iostream>
using namespace std;

// Template function to calculate the sum of two values
template <typename T>
sum(T &a, T &b) {
    T temp=a;
    a=b;
    b=temp;
}


int main() {
		int a=5,b=10;

     double c=3.5,d=2.7;
  
   double doubleSum = sum(c, d);
    int intSum = sum(a, b);
   
    

    cout << "Sum of integers: " << intSum << endl;
    cout << "Sum of doubles: " << doubleSum << endl;
 

    return 0;
}
