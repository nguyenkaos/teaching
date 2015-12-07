#include <memory>
#include <iostream>

int main()
{
  std::shared_ptr<int> p1 = std::make_shared<int>(5);
  std::shared_ptr<int> p2 = p1;

  std::cout << *p1 << "\n";
  *p2 = 42;
  std::cout << *p1 << "\n";
  p1.reset();
  std::cout << *p2 << "\n";
  p2.reset();
}
