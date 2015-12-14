#include <stdexcept>

void f(int )
{
  throw std::runtime_exception("SEVEN!!!");
}

int main()
{
  try
  {
    f(0);
  }
  catch( std::exception& e )
  {
    std::cout << e.what() << "\n";
  }
}
