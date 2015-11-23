#include <iostream>

int main()
{
  int x;

  switch(x)
  {
    case 0 :  std::cout << "x is nul\n";
              break;
    case 1 :  std::cout << "x is unity\n";
              break;
    case 2  :
    case 4  :
    case 6  :
    case 8  :
    case 10 : std::cout << "x is even\n";
              break;

    default: std::cout << "nothing to say\n";
  }
}
