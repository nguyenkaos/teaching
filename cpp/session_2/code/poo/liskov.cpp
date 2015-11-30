#include <iostream>

class rectangle
{
  protected:
  double width;
  double height;

  public:
  rectangle() : width(0), height(0) {}
  virtual void set_width(double x){width=x;}
  virtual void set_height(double x){height=x;}
  double area() const {return width*height;}
};

class square : public rectangle
{
  public:
  void set_width(double x)
  {
    rectangle::set_width(x);
    rectangle::set_height(x);
  }

  void set_height(double x)
  {
    rectangle::set_width(x);
    rectangle::set_height(x);
 }
};

void foo(rectangle& r)
{
  r.set_height(4);
  r.set_width(5);

  if( r.area() !=20 )
    std::cout << "ERROR " << r.area() << " != 20\n";
}

int main()
{
  rectangle r;
  square s;

  foo(r);
  foo(s);
}
