#include <iostream>
using namespace std;

// Template function for bubble sort
template <typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Template function to print array
template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArr[] = {64, 34, 25, 12, 22, 11, 90};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);

    double doubleArr[] = {3.4, 1.2, 2.1, 4.5, 0.6};
    int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);

    char charArr[] = {'d', 'a', 'c', 'b', 'e'};
    int charSize = sizeof(charArr) / sizeof(charArr[0]);

    cout << "Original integer array: ";
    printArray(intArr, intSize);
    bubbleSort(intArr, intSize);
    cout << "Sorted integer array: ";
    printArray(intArr, intSize);

    cout << "\nOriginal double array: ";
    printArray(doubleArr, doubleSize);
    bubbleSort(doubleArr, doubleSize);
    cout << "Sorted double array: ";
    printArray(doubleArr, doubleSize);

    cout << "\nOriginal character array: ";
    printArray(charArr, charSize);
    bubbleSort(charArr, charSize);
    cout << "Sorted character array: ";
    printArray(charArr, charSize);

    return 0;
}
