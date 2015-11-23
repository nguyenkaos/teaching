#include <iostream>

double addition(double a, double b)
{
  return a + b;
}

void decimate(double *a)
{
  *a *= 0.9;
}

void decimate(double &a)
{
  a *= 0.9;
}

// C++11
auto confuzzle(double a, int &b, float c)
      -> decltype(c/b - b/a)
{
  b = static_cast<int>(c/a);
  return c/b - b/a;
}

// C++14
auto confuzzle(double a, int &b, float c)
{
  b = static_cast<int>(c/a);
  return c/b - b/a;
}

int main()
{

}
