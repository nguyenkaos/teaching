#include <iostream>

int main()
{
{
  char  c = 'e';
  short s = -32000;
  int   i = 154515;

  unsigned char  uc = 0xFF;
  unsigned short us = 65535;
  unsigned int   ui = 2563489542;

  std::cout << c << "\n";
  std::cout << s << "\n";
  std::cout << i << "\n";
  std::cout << uc << "\n";
  std::cout << us << "\n";
  std::cout << ui << "\n";
}
{
  std::int8_t   c = 'e';
  std::uint16_t s = -32000;
  std::uint32_t i = 0xDEADBEEF;
  std::int64_t  l = 0xC01DBABEF0011337L;

  std::ptrdiff_t p = 5;
  std::size_t    sz = sizeof(l);
  std::uintptr_t a = reinterpret_cast<std::uintptr_t>(&p);

  std::cout << c  << "\n";
  std::cout << s  << "\n";
  std::cout << i  << "\n";
  std::cout << l  << "\n";
  std::cout << p  << "\n";
  std::cout << sz << "\n";
  std::cout << a  << "\n";
}
{
  float  f = 1.45f;
  double d = 1.45;

  float  sf = 3.6e-4f;
  double sd = -9e-25;

  std::cout << f << "\n";
  std::cout << sf << "\n";
  std::cout << d << "\n";
  std::cout << sd << "\n";

  std::cout << CHAR_BIT*sizeof(f) << "\n";
  std::cout << CHAR_BIT*sizeof(d) << "\n";
}
{
  bool t = true;
  bool f = false;

  bool x = t || (!f && t);

  if(x) std::cout << "x est vrai" << std::endl;
}
}
