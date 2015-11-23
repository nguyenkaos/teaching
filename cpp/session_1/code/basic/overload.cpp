#include <iostream>

double min(double a, double b)
{
  return a<b ? a : b;
}

double min(float a, float b)
{
  return a<b ? a : b;
}

double min(int a, int b)
{
  return a<b ? a : b;
}

template<typename T> T min(T const &a, T const &b)
{
  return a<b ? a : b;
}

int main()
{
  double a = min(13., 37.);
  float b = min(4.f, 3.f);
  int c = min(4, 3);
  char d = min('e', 'z');
}
