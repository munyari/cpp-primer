#include <iostream>
int main()
{
  int i, j;
  std::cout << "Please give two numbers (first <= second)" << std::endl;
  std::cin >> i >> j;
  while (i <= j)
  {
    std::cout << i << std::endl;
    ++i;
  }
  return 0;
}
