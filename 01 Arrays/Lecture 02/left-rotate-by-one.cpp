#include<iostream>
using namespace std;

/* BRUTE / OPTIMAL:
  step 01: i will store the first element on temp variable
  step 02: i will traverse the array and left shift by one
  step 03: i will add the first end of the array
*/

void leftRotateByOne(int arr[],int n){
  int temp = arr[0];
  for (int i = 1; i < n; i++)
  {
    arr[i-1] = arr[i];
  }
  arr[n-1] = temp;
}

void print(int arr[],int n){
  for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}


int main(){
  cout<<"left rotate an array by one places on GFG" <<endl;

  
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
  leftRotateByOne(arr,size); // Total Time Complexity --> ⌛ O(n)
  print(arr,size);
  return 0;
}