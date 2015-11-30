void foo(int const&)  { std::cout << "lvalue\n"; }
void foo(int&&)       { std::cout << "rvalue\n"; }
void chu(int&& x)     { foo( std::forward<int>(x) ); }
int bar()             { return 1337; }

foo(bar());
chu(bar());
