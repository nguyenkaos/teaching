#include <iostream>
#include <vector>

int main()
{
  std::vector<int> empty;
  std::vector<int> data(3);
  std::vector<int> values = {1,2,3,4,5,6,7};

  for(std::size_t i=0;i<values.size();++i)
    data.push_back(values[i]);

  data.resize(15);
  values = data;
}
