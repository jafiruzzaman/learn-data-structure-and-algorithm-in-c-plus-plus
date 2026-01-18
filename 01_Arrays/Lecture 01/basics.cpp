#include<iostream>
using namespace std;

int main(){
  // 1️⃣ initialize an array of size 2
  int arr[2];
  // 2️⃣ declare an array
  int brr[] = {1,2,3,4,5};
  // 3️⃣ accessing the array
  cout<<brr[0] <<endl;
  // iterating array elements --> ⚠️ there is no length method for static array in c++
  for (int i = 0; i < 5; i++)
  {
    cout<<i<<" ";
  }
  cout<<endl;
  return 0;
}