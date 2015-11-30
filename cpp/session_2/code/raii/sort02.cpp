#include <iostream>
#include <vector>
#include <algorithm>

// Cas général
std::vector<int> sort(std::vector<int> const& v)
{
  std::vector<int> that{v};

  std::sort( that.begin(), that.end() );

  return that;
}

// Cas du temporaire
std::vector<int> sort(std::vector<int>&& v)
{
  std::vector<int> that{std::move(v)};

  std::sort( that.begin(), that.end() );

  return that;
}
