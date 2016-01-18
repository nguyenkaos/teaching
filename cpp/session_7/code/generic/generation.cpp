#include <memory>
#include <type_traits>

int main()
{
  int i;
  std::add_pointer<int>::type pi = &i;
  std::add_rvalue_reference<int>::type rri = std::forward<int>(i);
}
