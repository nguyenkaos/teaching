void swap(int& a, int& b)
{
  int t{a};
  a = b;
  b = t;
}

void swap(int& a, int& b) noexcept
{
  int t{a};
  a = b;
  b = t;
}

template<typename T> T f(T x)  // noexcept ?
{
  return g(g(x));
}

template<typename T> T f(T x) noexcept( noexcept(g(x)) )
{
  return g(g(x));
}
