struct A
{
  A& operator=( A const& a )
  {
    // STRONG ...

    return *this;
  }
};

struct A
{
  A& operator=( A const& a )
  {
    A tmp(a);
    this->swap(tmp);

    return *this;
  }
};
