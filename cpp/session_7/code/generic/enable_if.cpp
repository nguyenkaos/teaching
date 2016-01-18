#include <tuple>
#include <iostream>

template <size_t n, typename... T>
typename std::enable_if<(n >= sizeof...(T)), void>::type
print_tuple(std::ostream&, const std::tuple<T...>&) {}

template <size_t n, typename... T>
typename std::enable_if<(n < sizeof...(T)), void>::type
print_tuple(std::ostream& os, const std::tuple<T...>& tup) {
  if (n != 0) os << ", ";
  os << std::get<n>(tup);
  print_tuple<n+1>(os, tup);
}

template <typename... T>
std::ostream& operator<<(std::ostream& os, const std::tuple<T...>& tup) {
  os << '[';
  print_tuple<0>(os, tup);
  return os << ']';
}

int main() {
  std::cout << std::make_tuple(0, 0.5, "abc") << '\n';
}
