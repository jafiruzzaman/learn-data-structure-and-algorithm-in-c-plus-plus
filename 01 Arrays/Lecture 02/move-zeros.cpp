/*
  Question(leetcode) -> https://leetcode.com/problems/move-zeroes/description/
*/
#include<iostream>
using namespace std;
/* BRUTE:
  Step 01: pick all the non-zero numbers into temp array
  Step 02: put-back all the non-zero to the original array
  Step 03: put all the zeros to the end
*/
void moveZerosBrute(int arr[],int n){
  int temp[n];
  // put all the non-zero number in temp array
  int count=0;
  for (int i = 0; i < n; i++){
    if (arr[i]!=0)
    {
      temp[count] = arr[i];
      count++;
    }
  }
  
  // put-back all the non-zero number to the original array
  for (int i = 0; i < count; i++)
  {
    arr[i] = temp[i];
  }
  // put all the zeros to the end
  for (int i = count; i < n; i++) {
    arr[i] = 0;
  }
}

// print array function
void print(int arr[],int n){
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}


/*OPTIMAL:
  Step 01: i will first find the 1st zero
  Step 02: i will traverse from i+1th to n
  Step 03: swap with non-zero numbers
*/

  void moveZerosOptimal(int arr[], int n) {
    int j = 0; // position for next non-zero

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main(){
  cout<<"move zeros to the end leetcode problem"<<endl;
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
  
  cout<<"Brute-force solution: "<<endl;
  moveZerosBrute(arr,size);
  print(arr,size);

  cout<<"Optimal-force solution: "<<endl;
  moveZerosOptimal(arr,size);
  print(arr,size);
  return 0;
}