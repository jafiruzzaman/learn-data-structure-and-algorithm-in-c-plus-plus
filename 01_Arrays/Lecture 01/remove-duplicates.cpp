/*
  Question link(LeetCode) --> https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
*/
#include <iostream>
#include <set>
using namespace std;

/* BRUTE:
  step 01: use set to contains only unique elements
  step 02: replace array's elements with set elements
  step 03: return the number of unique elements
*/
int removeDuplicateBrute(int arr[],int size){
  set<int> s;
  for (int i = 0; i < size; i++)
  {
    s.insert(arr[i]);
  }
  int index = 0;
  for (int x : s) {
      arr[index++] = x;
  }
  return index;
}

/* OPTIMAL:
  step 01: i will track 2 pointer i & j. i start from 0 and j start 1
  step 02: if j != i then i++ and insert the value in new value
  step 03: return i+1 for unique elements
*/

int removeDuplicatesOptimal(int arr[],int size){
  int i=0;
  for (int j = 1; j < size; j++)
  {
    if (arr[j]!=arr[i])
    {
      arr[++i] = arr[j];
    }
  }
  return i+1;
}



int main(){
  cout<<"remove duplicates problem on leetcode"<<endl;
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
  int bruteResult = removeDuplicateBrute(arr,size);
  cout<<"brute result : "<<bruteResult<<endl;
  int optimalResult = removeDuplicatesOptimal(arr,size);
  cout<<"optimal result: "<<optimalResult<<endl;
  return 0;
}