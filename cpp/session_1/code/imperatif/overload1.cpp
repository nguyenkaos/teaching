void f(int)         { cout << "void f(int)\n"; }
void f(char const*) { cout << "void f(char const*)\n"; }
void f(double)      { cout << "void f(double)\n"; }


f(1); f(1.); f("1");  f(1.f);  f('1');
