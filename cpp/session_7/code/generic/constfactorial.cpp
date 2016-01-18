#include <iostream>

constexpr int factorial(int n) { return n<2 ? 1 : n*factorial(n-1); }
template<int N> void display() { std::cout << N << "\n"; }

int main()
{
  display<factorial(5)>();

  int x;
  std::cin >> x;
  std::cout << factorial(x) << "\n";
}
