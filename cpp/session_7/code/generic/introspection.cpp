#include <iostream>
#include <fstream>
#include <vector>
#include <type_traits>

int main()
{
  std::cout << std::is_same<float,int>::value << '\n';
  std::cout << std::is_convertible<float,int>::value << '\n';
  std::cout << std::is_base_of<std::istream,std::ifstream>::value << '\n';
  std::cout << std::is_class<std::vector<int>>::value << '\n';
  std::cout << std::is_constructible<std::string,char*>::value << '\n';
  std::cout << std::is_polymorphic<std::istream>::value << '\n';
  std::cout << std::is_pointer<void*>::value << '\n';
}
