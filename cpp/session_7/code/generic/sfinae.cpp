#include <vector>

template<typename T>
typename T::size_type size(T const& t) { return t.size(); }

int main()
{
  size(std::vector<int>(8)); // OK

  // no matching function for call to 'size(int)'
  size(8);
}
