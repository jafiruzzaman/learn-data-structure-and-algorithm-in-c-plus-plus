#include <iostream>

using namespace std;

int main()
{
  // =========================================================
  // 1️⃣ if-else statement

  // 1️⃣.0️⃣ if-else statement
  int age;
  cout << "Enter Your Age: ";
  cin >> age;
  if (age >= 18)
  {
    cout << "You are an adult" << endl;
  }
  else
  {
    cout << "You are not an adult" << endl;
  }

  // =========================================================
  // 2️⃣ control statement
  cout << "Enter a day from the weekdays" << endl;
  int day;
  cin >> day;
  switch (day)
  {
  case 1:
    cout << "The Day is Saturday" << endl;
    break;
  case 2:
    cout << "The Day is Sunday" << endl;
    break;
  case 3:
    cout << "The Day is Monday" << endl;
    break;
  case 4:
    cout << "The Day is Tuesday" << endl;
    break;
  case 5:
    cout << "The Day is wednesday" << endl;
    break;
  case 6:
    cout << "The Day is Thursday" << endl;
    break;
  case 7:
    cout << "The Day is Friday" << endl;
    break;
  default:
    cout << "The day you entered is not correct" << endl;
    break;
  }
  return 0;
}