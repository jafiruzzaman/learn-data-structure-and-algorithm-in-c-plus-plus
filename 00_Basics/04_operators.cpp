#include <iostream>

using namespace std;

int main()
{
  cout << "operators in c-plus-plus" << endl;
  // =========================================================
  int a = 10;
  // 1️⃣ assignment-operator

  // 1️⃣.0️⃣ = equals
  // 1️⃣.1️⃣ += plus-equals
  a += 10;
  cout << "After a+= " << a << endl;
  // 1️⃣.2️⃣ += minus-equals
  a -= 4;
  cout << "After a-= " << a << endl;
  // 1️⃣.3️⃣ -= times-equals
  a *= 4;
  cout << "After a*= " << a << endl;
  // 1️⃣.4️⃣ *= divide-equals
  a /= 2;
  cout << "After a/= " << a << endl;

  // =========================================================
  // 2️⃣ arithmetic operator
  int num1 = 5, num2 = 3;

  // 2️⃣.0️⃣ + plus operator
  cout << "summation of 5 + 3 = " << (num1 + num2) << endl;
  // 2️⃣.1️⃣ - minus operator
  cout << "subtraction of 5 - 3 = " << (num1 - num2) << endl;
  // 2️⃣.2️⃣ * times operator
  cout << "multiplication of 5 * 3 = " << (num1 * num2) << endl;
  // 2️⃣.3️⃣ / divide operator
  cout << "division of 5 / 3 = " << (num1 / num2) << endl;
  // 2️⃣.4️⃣ % modulo operator
  cout << "modulo of 5 % 3 = " << (num1 % num2) << endl;

  // =========================================================
  // 3️⃣ comparision operator
  // 3️⃣.0️⃣ (==) ➡️ double equals
  cout << "is 5 == 3 is it " << (num1 == num2) << endl;
  // 3️⃣.1️⃣ (!=) ➡️ not equals
  cout << "is 5 != 3 is it " << (num1 != num2) << endl;
  // 3️⃣.2️⃣ (>=) ➡️ greater than or equal
  cout << "is 5 >= 3 is it " << (num1 >= num2) << endl;
  // 3️⃣.3️⃣ (<=) ➡️ greater than or equal
  cout << "is 5 <= 3 is it " << (num1 <= num2) << endl;

  // =========================================================
  // 4️⃣ logical operator

  // 4️⃣.0️⃣ logical and operator (&&)
  cout << "is  5>= 3 && 5!=3 is it " << (5 >= 3 && 5 != 3) << endl;
  // 4️⃣.1️⃣ logical or operator (||)
  cout << "is  5>= 3 && 5!=3 is it " << (5 >= 3 || 5 != 3) << endl;
  // 4️⃣.2️⃣ logical not operator (!)
  cout << "!3 is " << (!3) << endl;
  
  return 0;
}