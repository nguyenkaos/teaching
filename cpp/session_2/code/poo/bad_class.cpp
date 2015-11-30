#include <iostream>
#include <algorithm>

class buffer
{
  public:

  buffer() { size = 0; data = nullptr; }
  buffer(std::size_t n) { size = n; data = new double[n]; }

  buffer& operator=( buffer const& other )
  {
    if(this != &other)
    {
      delete[] data;
      copy(other);
    }

    return *this;
  }

  buffer( buffer const& other )
  {
    copy(other);
  }

  ~buffer() { delete[] data; }

  double&       operator[](std::size_t i)       { return data[i]; }
  double const& operator[](std::size_t i) const { return data[i]; }

  double* raw() const { return data; }

  private:

  void copy(buffer const& other)
  {
    size = other.size;
    data = new double[size];
    std::copy(other.raw(), other.raw()+size, data);
  }

  std::size_t size;
  double*     data;
};

buffer f(int n)
{
  buffer that(2*n);
  that[0] = n;
  return that;
}

int main()
{
  buffer x;
  std::cout << (void*)(x.raw()) << "\n";
  buffer y(10);
  std::cout << (void*)(y.raw()) << "\n";

  x = f(3);
  std::cout << (void*)(x.raw()) << "\n";

  y = x;
  std::cout << (void*)(y.raw()) << "\n";

  x = x;
}
