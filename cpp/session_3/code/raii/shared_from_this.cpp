template<class T> void foo(std::shared_ptr<T>) {}

struct bad {
  void bar() { foo(std::shared_ptr<bad>(this)); }
};

struct good : std::enable_shared_from_this<good> {
  void bar() { foo(shared_from_this()); }
};

int main()
{
  std::shared_ptr<bad> p(new bad);
  p->bar();
  p.reset(); // CRASH
}
