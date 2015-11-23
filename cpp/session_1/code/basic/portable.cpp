#include <iostream>
#include <cstdint>

int main()
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
