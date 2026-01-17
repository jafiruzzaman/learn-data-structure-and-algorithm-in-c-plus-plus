#include<iostream>
using namespace std;
/* BRUTE:
  step 01: i will traverse from first element to dth element and store into a temp array
  step 02: i will left shift the array element from i =d; arr[i-d] and shift
  step 03: i will put back array elements from dth element to the n-1
*/
void leftRotateByDPlacesBrute(int arr[],int n,int d){
  if (n<=1)
  {
    return;
  }
  
  // check rotation if d>n
  d = d % n;
  // store rotated elements in temp array
  int temp[d]; // Space Complexity --> 💾 O(d)
  for (int i = 0; i < d; i++){ 
    temp[i] = arr[i]; // Time Complexity --> ⌛ O(d)
  }
  // left shift array's element
  for (int i = d; i < n; i++)
  {
    arr[i-d] = arr[i];  // Time Complexity --> ⌛ O(n-d)
  }
  // put-back array elements
  for (int i = 0; i < n; i++)
  {
    arr[n - d + i] = temp[i]; // Time Complexity --> ⌛ O(d)
  }

}

void print(int arr[],int n){
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;  
}

int main(){
  cout<<"left rotate an array by d places "<<endl;

  int size,d;
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
  cout << "Enter the number of positions to rotate: ";
  cin >> d;

  leftRotateByDPlacesBrute(arr, size, d); // Time & Space Complexity --> ⌛ O(n+d) & 💾 O(d)
  cout << "Array after left rotation by " << d << " places:" << endl;
  print(arr, size);

  return 0;
}