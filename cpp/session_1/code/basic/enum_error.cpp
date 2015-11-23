#include <iostream>

enum class Color    { RED, GREEN, BLUE };
enum class Feelings { EXCITED, MOODY, BLUE };

template<typename T> struct describe;

int main()
{
  auto c = Color::BLUE;
  auto f = Feelings::BLUE;

  describe<decltype(c)> dc;
  describe<decltype(f)> df;
/*
  if(c == f)
    std::cout << "c==f\n";
  else
    std::cout << "c!=f\n";
*/
}
