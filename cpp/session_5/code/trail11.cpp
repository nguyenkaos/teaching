// C++ 11
template<typename T1, typename T2>
auto add(T1 const& a, T2 const& b) -> decltype(a+b)
{
  return a+b;
}
