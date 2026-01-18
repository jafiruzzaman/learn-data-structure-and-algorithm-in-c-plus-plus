/* 
  * Question link (GFG) --> https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1
*/

#include <iostream>
using namespace std;

int largestElement(int arr[], int n) {
    if (n <= 0) {
        return -1; // safety check
    }

    int maxElement = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int main() {
    cout << "=========================== Largest Element in an Array ===========================" << endl;

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid array size" << endl;
        return 0;
    }

    int arr[size];

    cout << "Enter the array elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int result = largestElement(arr, size);
    cout << "The largest element in this array is: " << result << endl;

    return 0;
}
