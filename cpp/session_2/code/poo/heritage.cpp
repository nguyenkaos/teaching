#include <iostream>
#include <memory>
#include <vector>

class Displayable
{
  public:
  virtual void display() const =0;
};

class A final : public Displayable
{
  public:

  A( double pn = 0 ) { n = pn; }

  virtual void display() const override
  {
    std::cout << "[" << n << "]\n";
  }

  protected:
  double n;
};

class B : public A
{
  public:
  using A::A;

  virtual void display() const override
  {
    std::cout << "****" << n << "****\n";
  }
};

void f(Displayable const& a)
{
  a.display();
}

int main()
{
  std::vector<std::unique_ptr<Displayable>> x;

  char c;
  bool done = false;

  do
  {
    std::cin >> c;

    if(c == 'a')       x.push_back( std::make_unique<A>(3) );
    else if(c == 'b')  x.push_back( std::make_unique<B>(7) );
    else done = true;
  } while (!done);

  for(auto const& e : x) e->display();

}
