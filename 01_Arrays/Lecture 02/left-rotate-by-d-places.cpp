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
  for (int i = 0; i < d; i++)
  {
    arr[n - d + i] = temp[i]; // Time Complexity --> ⌛ O(d)
  }

}

void reverse(int arr[],int start,int end){
  while (start<end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}


/* OPTIMAL:
  step 01: i will first reverse 0 to dth places
  step 02: i will reverse dth place to nth places
  step 03: i will reverse the whole array
*/
void leftRotateByDPlacesOptimal(int arr[],int n,int d){
  // if d is greater than n
  d = d%n;
  // if d == 0
  if (n<=1 ||d==0)
  {
    return;
  }
  
  // first reverse 0 to dth places
  reverse(arr,0,d-1);
  // reverse dth place to nth places
  reverse(arr,d,n-1);
  // reverse the whole array
  reverse(arr,0,n-1);
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
  leftRotateByDPlacesOptimal(arr,size,d); // Time & Space Complexity --> ⌛ O(n) & 💾 O(1)
  print(arr,size);
  return 0;
}