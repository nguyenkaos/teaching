template<std::size_t N> struct factorial
{
  static const std::size_t value = N*factorial<N-1>::value;
};

template<> struct factorial<0>
{
  static const std::size_t value = 1;
};

int n = factorial<5>::value;
