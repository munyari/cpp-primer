#include <iostream>
int main()
{
  int value, total = 0;
  while (std::cin >> value)
    total += value;
  std::cout << total << std::endl;
  return 0;
}
