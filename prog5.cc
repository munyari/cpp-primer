#include <iostream>
int main()
{
  int sum = 0, val = 50;
  while (val <= 100)
  {
    sum += val;
    ++val;
  }
  std::cout << "The sum of all the numbers between 50 and 100 inclusive is ";
  std::cout << sum << std::endl;
  return 0;
}
