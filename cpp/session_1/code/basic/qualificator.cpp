#include <iostream>

int main()
{
  float f = 8;
  float const cf = 7;

  f = 9;
  cf = 10; // ERREUR : assignment of read-only variable 'cf'

  {
  int i = 1337, j = 42;
  int *pn = nullptr, *pi = &i;

  *pi = j;
   pn = pi;
  }

  {
  int &rn; // ERREUR : reference not initialized
  int i = 1337, j = 42;
  int &pi = i, &pj = j;

  pi = -42;
  pj = pi;

  std::cout << pi << " " << pj << "\n";
  }
}
