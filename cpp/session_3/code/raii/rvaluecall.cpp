A make() { return A{}; }

int main()
{
  A a;
  A b(a);
  A c = a;
  A d = make();
  A e = std::move(a);
  
  a = b;
  b = make();
  c = std::move(d);
}