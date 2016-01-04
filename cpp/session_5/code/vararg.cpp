#include <iostream>

int sum() { return 0; }

template<typename T0, typename... Ts>
auto sum(T0 v0, Ts... vs)
{
  return v0 + sum(vs...);
}

int main()
{
  auto a = sum(1u, 2, 3., 4.5f);
  std::cout << a << "\n";
  return 0;
}
