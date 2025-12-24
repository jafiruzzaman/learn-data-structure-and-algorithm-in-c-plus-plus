#include <iostream>
using namespace std;
int main()
{
  cout << "loops in c++" << endl;
  // 1️⃣ for loop
  cout << "for loop" << endl;
  for (int i = 0; i < 5; i++)
  {
    cout << i << " " << endl;
  }

  // 2️⃣ while loop
  cout << "while loop" << endl;
  int i = 0;
  while (i < 5)
  {
    cout << i << ' ';
    i++; // if don't increment loop will be infinite ♾️
  }

  // 3️⃣ do-while loop
  i = 6;
  do
  {
    cout << "Do while loop run atleast" << endl;
  } while (i < 5);
  return 0;
}