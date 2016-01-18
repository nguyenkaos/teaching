#include <iostream>

int factorial(int n)
{
  return n < 2 ? 1 : n * factorial(n - 1);
}

int main()
{
  std::cout << factorial(8) << '\n';
}
