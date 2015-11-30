int a = 42;     // lvalue
int b = 43;     // lvalue
a = b;          // ok
a = a * b;      // ok
a * b = 42;     // erreur

int getx() { return 17;}
int& lr  = getx();       // erreur