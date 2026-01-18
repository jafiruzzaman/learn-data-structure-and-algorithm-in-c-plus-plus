/*
  Question link(GFG) --> https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1
*/

#include<iostream>
using namespace std;
/* INTUITION:
  Step 01: iterate the array and find the element
  Step 02: if found then return the index else return -1
*/
int linearSearch(int arr[],int n,int x){
  for (int i = 0; i < n; i++)
  {
    if (arr[i]==x)
    {
      return i;
    }
    
  }
  return -1;
}

int main(){
  cout<<"linear search problem on GFG"<<endl;

  int size,target;
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
  cout << "Enter the target element: ";
  cin >> target;
  int result = linearSearch(arr,size,target);
  cout<<target<<" is present at "<<result<<" index"<<endl;
  return 0;
}