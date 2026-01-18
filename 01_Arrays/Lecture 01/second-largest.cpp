/*
  Question link --> https://www.geeksforgeeks.org/problems/second-largest3735/1
*/

#include<iostream>
using namespace std;
/*  BRUTE: Solution
    step 01:
      First sort the array 
      TODO: i will add the brute-force solution when i learn Merge-Sort
      Time Complexity --> ⌛ O(n log n)
      step 02:
      traverse the whole array and find the 2nd largest 
      Time Complexity --> ⌛ O(n )
    Total Time Complexity --> ⌛ O(n log n)+ O(n)
*/

/*  BETTER: Solution
    step 01:
      First find the largest element in the array
      Time Complexity --> ⌛ O(n )
      step 02:
      find the 2nd largest element in the array while comparing with largest
      Time Complexity --> ⌛ O(n )    
    Total Time Complexity --> ⌛  O(2n)
*/
int secondMaxBetter(int arr[],int n){
  // if array contains only one element
  if (n<2){
    return -1; 
  }
  // first find the largest element in an array
  int max = arr[0];
  for (int i = 0; i < n; i++)
  {
    if (arr[i]>max)
    {
      max = arr[i];
    }
  }

  // find the 2nd largest element in the array while comparing with largest
  int secondMax = -1e9;
  for(int i =0;i<n;i++){
    if (arr[i]>secondMax && arr[i]<max)
    {
      secondMax = arr[i];
    }
  }
  return (secondMax == -1e9) ? -1 : secondMax;
 // Total time complexity --> ⌛ O(2n)
}
/*  OPTIMAL: Solution
    step 01:
      First find the largest element and compare with secondLargest if element > secondLargest && element< Largest, only then i will update
      Time Complexity --> ⌛ O(n )
    Total Time Complexity --> ⌛  O(n)
*/
int secondMaxOptimal(int arr[],int n){
  if (n<2)
  {
    return -1;
  }
  int max = arr[0];
  int secondMax = -1e9;
  for (int i = 0; i < n; i++)
  {
    if (arr[i]>max)
    {
      secondMax = max;
      max=arr[i];
    }
    else if (arr[i]>secondMax && arr[i]<max)
    {
      secondMax = arr[i];
    }
    
  }
  
  return (secondMax == -1e9) ? -1 : secondMax; // Total time complexity --> ⌛ O(2n)
}
int main() {
  cout << "=========================== Second Largest Element in an Array ===========================" << endl;

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
    // BETTER: result
    int better = secondMaxBetter(arr,size);
    cout<<"Better result: "<< better <<endl;
    // OPTIMAL: result
    int optimal = secondMaxOptimal(arr,size);
    cout<<"Optimal result: "<< optimal <<endl;
  return 0;
}