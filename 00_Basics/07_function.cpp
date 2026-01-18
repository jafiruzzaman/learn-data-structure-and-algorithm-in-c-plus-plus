#include <iostream>
using namespace std;
// ============================= function ============================
/*
  * Syntax:
  return-type function-name (parameter){
    * logic/code
  }
 */
int countdigit(int number)
{
  int count = 0;

  while (number > 0)
  {
    number /= 10;
    count++;
  }

  return count;
}

int main()
{
  int result = countdigit(456);
  cout << "The total number of digits: " << result << endl;
  return 4;
}
