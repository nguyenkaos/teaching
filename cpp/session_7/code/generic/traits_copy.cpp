#include <type_traits>

template<bool B> using bool_ = std::integral_constant<bool,B>;

template<typename T> inline void copy(T* b, T* e, T const* src, bool_<true> const&)
{
  std::memcpy(b,src,(e-b)*sizeof(T));
}

template<typename T> inline void copy(T* b, T* e, T const* src, bool_<false> const&)
{
  while(b != e) *b++ = *src++;
}

template<typename T>
using is_trivially_copiable_t = typename std::is_trivially_copiable<T>::type;

template<typename T> void copy(T* b, T* e, T const* src)
{
  is_trivially_copiable_t<T> select;
  copy(b,e,src,select);
}
