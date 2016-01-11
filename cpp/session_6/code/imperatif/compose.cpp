#include <iostream>
#include <math.h>

template<typename F, typename G> auto compose(F f, G g)
{
  return [=](auto... x){ return f(g(x...)); };
}

double divides(int i,int j) { return double(i)/j; }
double dec(int i) { return i/100.; }

int main()
{
  auto f = compose(sin, [](int i) { return i/100.; });
  auto g = compose(sin, divides);

  std::cout << f(314) << "\n";
  std::cout << g(314152,100000) << "\n";
}
