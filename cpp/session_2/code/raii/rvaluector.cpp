#include <iostream>
#include <vector>

struct A
{
  std::vector<int> data_;

  A() : data_(100)         { std::cout << "A()\n"; }

  A(A const& s) : data_(s.data_) { std::cout << "A(A const&)\n"; }
  A(A&& s) : data_(std::move(s.data_)) { std::cout << "A(A&&)\n"; }

  ~A() }{}

  A& operator=(A const& s)
  {
    std::cout << "A::=(A const&)\n";
    data_ = s.data_;
    return *this;
  }

  A& operator=(A&& s)
  {
    std::cout << "A::=(A&&)\n";
    data_ = std::move(s.data_);
    return *this;
  }
}
