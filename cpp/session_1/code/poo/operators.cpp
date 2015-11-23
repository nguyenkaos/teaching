struct rational
{
  int  numerator()   const { return num; }
  int  denumerator() const { return denum; }

  rational operator-() const { return {-num,denum}; }

  rational& operator*=(rational const& rhs)
  {
    num   *= rhs.num;
    denum *= rhs.denum;
    return *this;
  }

  int num,denum;
};

rational operator*(rational const& lhs, rational const& rhs)
{
  rational that = lhs;
  return that *= rhs;
}
