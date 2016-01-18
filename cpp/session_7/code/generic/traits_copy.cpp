#include <cstring>
#include <type_traits>

template<bool B> using bool_ = std::integral_constant<bool,B>;

template<typename T> void copy(T *b, T *e, T const *src, bool_<true> const&)
{
  std::memcpy(b, src, (e - b) * sizeof(T));
}

template<typename T> void copy(T *b, T *e, T const *src, bool_<false> const&)
{
  for (; b != e; ++b, ++src) *b = *src;
}

template<typename T> void copy(T *b, T *e, T const *src)
{
  typename std::is_trivially_copyable<T>::type select;
  copy(b, e, src, select);
}
