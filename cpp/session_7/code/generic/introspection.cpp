#include <type_traits>

int main()
{
  std::cout << std::is_same<float,int>::value << "\n";
  std::cout << std::is_convertible<float,int>::value << "\n";
  std::cout << std::is_base_of<istream,ifstream>::value << "\n";
  std::cout << std::is_class<vector<int>>::value << "\n";
  std::cout << std::is_constructible<string,char*>::value << "\n";
  std::cout << std::is_polymorphic<istream>::value << "\n";
  std::cout << std::is_pointer<void*>::value << "\n";
}