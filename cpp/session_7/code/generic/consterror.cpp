#include <iostream>

constexpr int factorial(int n)
{
  return n >= 0 ? (n < 2 ? 1 : n * factorial(n - 1))
                : throw std::out_of_range("");
}

int main()
{
  static constexpr int f = factorial(-1);
}
