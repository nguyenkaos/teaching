int x,n;

auto f = [x](int a, int b) { return a*x+b; }
auto g = [&x]() -> void { x++; }
auto h = [&x,n]() -> void { x *=n; }
auto s = [&]() { x = n; n = 0; return x; }