std::vector<int> sort(std::vector<int> const& v)
{
  std::vector<int> that{v};

  std::sort( that.begin(), that.end() );

  return that;
}

void sort(std::vector<int> const& v, std::vector<int>& that)
{
  that = v;
  std::sort( that.begin(), that.end() );
}

std::vector<int> sort(std::vector<int>&& v)
{
  std::vector<int> that{std::move(v)};

  std::sort( that.begin(), that.end() );

  return that;
}

std::vector<int> sort(std::vector<int> v)
{
  std::sort( v.begin(), v.end() );
  return v;
}