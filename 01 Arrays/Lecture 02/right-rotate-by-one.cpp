/*
  Question link --> https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
*/
#include<iostream>
using namespace std;
/* INTUITION:
    step 01: first store the last element of the array
    step 02: traverse the array and right shift array element by one
*/
void rightRotate(int arr[],int n){
  if (n <= 1) return;

    int temp = arr[n - 1];

    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = temp;
  
}
void print(int arr[],int n){
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;  
}
int main(){
  cout<<"right rotate by one problem on leetcode"<<endl;
  
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
  
  rightRotate(arr,size);
  print(arr,size);
  return 0;
}