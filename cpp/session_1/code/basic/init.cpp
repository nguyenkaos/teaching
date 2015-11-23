#include <iostream>

double sum( std::initializer_list<double> x )
{
  double r = 0.;

  std::cout << "Somme de " << x.size() << " valeurs.\n";

  for(auto& e : x)
    r += e;

  return r;
}

int main()
{
  auto l = {1,2,3,4,5};

  for(auto e : l)
    std::cout << e << " ";

  auto y = sum( {1.,2.,3.,4.,5.} );
}
