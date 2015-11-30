A make() { return A{}; }

int main()
{
  A a;                // A()
  A b(a);             // A(A const&)
  A c = a;            // A(A const&)
  A d = make();       // A()
  A e = std::move(a); // A(A&&)
  
  a = b;              // A::=(A const&)
  b = make();         // A(); A::=(A&&)
  c = std::move(d);   // A::=(A&&)
}