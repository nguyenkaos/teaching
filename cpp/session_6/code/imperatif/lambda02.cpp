auto somme = [](auto a, auto b) { return a+b; }
auto as_tuple = [](auto... args)
                {
                  return std::make_tuple(args...);
                }
