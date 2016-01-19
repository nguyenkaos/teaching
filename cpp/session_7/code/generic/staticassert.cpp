#include <type_traits>

template<typename T> T factorial(T n)
{
  static_assert(std::is_integral<T>::value, "factorial requires integral parameter");
  return n < 2 ? 1 : n * factorial(n - 1);
}
