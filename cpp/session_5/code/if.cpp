#include <cstdint>

template<bool Condition, typename T, typename F> class if_;

template<typename T, typename F> struct if_<true, T, F>
{
  typedef T type;
};

template<typename T, typename F> struct if_<false, T, F>
{
  typedef F type;
};

int main()
{
  typename if_<true , int, void*>::type number(3);
  typename if_<false, int, void*>::type pointer(&number);

  typedef typename if_<(sizeof(void *) > sizeof(uint32_t))
                      , uint64_t
                      , uint32_t
                      >::type  integral_ptr_t;

   integral_ptr_t ptr =
     reinterpret_cast<integral_ptr_t>(pointer);
}
