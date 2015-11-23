#include <iostream>
#include <utility>
#include <tuple>

int main()
{
  std::pair<float,int> chu(3.f,5);
  float f = chu.first;
  int   i = chu.second;

  std::tuple<double,int,char> bar =
      std::make_tuple(3.1, 14, 'y');
  std::get<2>(bar) = 100;

  int myint; char mychar;
  std::tie(std::ignore, myint, mychar) = bar;

  std::cout << "myint : " << myint << "\n";
  std::cout << "mychar: " << mychar << "\n";

  std::tuple<int,char> foo(10,'z');
  std::get<0>(foo) = std::get<2>(bar);
  mychar = std::get<1>(foo);

  std::cout << "foo: ";
  std::cout << std::get<0>(foo) << ' ';
  std::cout << std::get<1>(foo) << '\n';
}
