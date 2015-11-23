#include <iostream>
#include <string>

int main()
{
  std::string empty;
  std::string cstyle = "some text";
  std::string repeat(9,'*');
  std::string copy = cstyle;

  repeat[5] = 'X';
  copy[copy.size()-1] = '!';

  std::cout << empty << "\n";
  std::cout << cstyle << "\n";
  std::cout << repeat << "\n";
  std::cout << copy << "\n";

  if (copy == cstyle)
    std::cout << "s1 et s2 sont identiques\n";
  else
    std::cout << "s1 et s2 sont differentes\n";

  std::string x;

  x = repeat + repeat;
  std::cout << x << "\n";
}
