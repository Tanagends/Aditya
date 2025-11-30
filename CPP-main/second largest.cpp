#include<iostream>
#include<climits> // for INT_MIN
using namespace std;

int main()
{
    cout << "Enter number of elements: ";
    int n;
    cin >> n;

    if(n < 2) {
        cout << "Elements too few to find second largest!..." << endl;
        return 0;
    }

    int arr[100];
    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = INT_MIN;
    int secondlargest = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            secondlargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondlargest && arr[i] != largest) {
            secondlargest = arr[i];
        }
    }

    if(secondlargest == INT_MIN)
        cout << "There's no second largest element!" << endl;
    else
        cout << "Second largest is: " << secondlargest << endl;

    return 0;
}
