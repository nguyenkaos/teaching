void foo(int const&)  { std::cout << "lvalue\n"; }
void foo(int&& x)     { std::cout << "rvalue\n"; }
int bar()             { return 1337; }

int main()
{
  int  x = 3;
  int& y = x;

  foo(x);
  foo(y);
  foo(4);
  foo(bar());
}
