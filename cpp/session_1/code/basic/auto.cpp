#include <iostream>
#include <vector>

int main()
{
  auto f = 3.f;
  auto s = "some C string";
  auto* p = &f;

  std::vector<double> dd = {1.,2e-1,1e-2,1e-3};
  auto  deci  = dd[1];
  auto& rdeci = dd[1];
  rdeci       = 1e-1;

  auto b = dd.begin();

  decltype(1/f + *b) z;

  declype( dd[0] )   rd;
}
