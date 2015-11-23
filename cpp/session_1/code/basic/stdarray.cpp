#include <iostream>
#include <array>

std::array<float,3> translate(std::array<float,3> const &p,
                              std::array<float,3> const &v)
{
  std::array<float,3> that = p;
  for (std::size_t i = 0; i < that.size(); ++i)
    that[i] += v[i];
  return that;
}

int main()
{
  std::array<float,7> data;
  std::array<float,7> values = {1,2,3,4,5,6,7};

  for (std::size_t i = 0; i < values.size(); ++i)
    data[i] = 3.f * values[i];

  values = data;
}
