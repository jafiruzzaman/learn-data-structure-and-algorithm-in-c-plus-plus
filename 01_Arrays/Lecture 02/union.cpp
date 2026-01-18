/*
  Question link (GFG): https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1
*/
#include <iostream>
#include <set>
#include <vector>
using namespace std;
/* BRUTE:
  step 01: check if array is sorted or not
  step 02: put all the unique elements from array 1 and array 2
  step 03: create a vector and put it and return the vector
*/
vector<int> unionArr(int arr[], int brr[], int a, int b) {
    set<int> st;

    for (int i = 0; i < a; i++) {
        st.insert(arr[i]);
    }

    for (int i = 0; i < b; i++) {
        st.insert(brr[i]);
    }

    vector<int> result;
    for (int val : st) {
        result.push_back(val);
    }

    return result;
}

/* OPTIMAL:
  step 01: take two pointers i and j for both arrays
  step 02: iterate both arrays together
  step 03: if arr[i] < brr[j] then push arr[i] and move i
  step 04: if arr[i] > brr[j] then push brr[j] and move j
  step 05: if both are equal then push only one and move both
  step 06: while pushing, avoid duplicate elements
  step 07: if one array finishes, push remaining elements of the other array
*/



vector<int> unionArrOptimal(int arr[], int brr[], int a, int b) {
  vector<int> result;
  int i = 0, j = 0;

  while (i < a && j < b) {
      if (arr[i] < brr[j]) {
          if (result.empty() || result.back() != arr[i])
              result.push_back(arr[i]);
          i++;
      }
      else if (arr[i] > brr[j]) {
          if (result.empty() || result.back() != brr[j])
              result.push_back(brr[j]);
          j++;
      }
      else {
          if (result.empty() || result.back() != arr[i])
              result.push_back(arr[i]);
          i++;
          j++;
      }
  }

  while (i < a) {
      if (result.back() != arr[i])
          result.push_back(arr[i]);
      i++;
  }

  while (j < b) {
      if (result.back() != brr[j])
          result.push_back(brr[j]);
      j++;
  }

  return result;
}


int main() {
    int arr[] = {1, 2, 2, 3, 4};
    int brr[] = {2, 3, 5, 6};

    int a = 5, b = 4;

    vector<int> ans = unionArr(arr, brr, a, b); // Total Time & Space Complexity --> ⌛ & 💾 O(a + b)

    cout << "Union of two sorted arrays Brute: ";
    for (int x : ans) {
      cout << x << " ";
    }
    cout << "Union of two sorted arrays Optimal: "<<endl;
    vector<int> result = unionArrOptimal(arr,brr,a,b);
    for (int i : result)
    {
      cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
