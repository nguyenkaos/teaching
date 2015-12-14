#include <cassert>

float f(int x)
{
  assert(x != 0 && "x must be non-null");
  return 1.f/x;
}

int main()
{
  auto x = f(78);
  auto y = f(0);
}
