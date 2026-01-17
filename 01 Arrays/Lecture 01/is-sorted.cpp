/*
  Question link(GFG) --> https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1
*/
#include<iostream>
using namespace std;
/* INTUITION:
  1. i will traverse the whole array
  2 if arr[i] > arr[i-1] then do nothing
  3. return false
*/
bool isSorted(int arr[],int size){
  if (size <= 1) {
    return true; // single element or empty array is sorted
}

for (int i = 1; i < size; i++) {
    if (arr[i] < arr[i - 1]) {
        return false;
    }
}
return true;
}
int main(){
  cout<<"Check if array is sorted Problem on GFG"<<endl;
  
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
  bool result = isSorted(arr,size); // Total Time Complexity --> ⌛ O(n)
  cout<<"Is the array is sorted: "<<result<<endl;
  return 0;
}

