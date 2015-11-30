class base
{
  public:
  virtual void behavior();
};

class derived : public base
{
  public:
  virtual void behavior();
  void derived_behavior();
};

void process(base& b)
{
  b.behavior();
}

int main()
{
  derived d;

  d.behavior();
  d.derived_behavior();

  process(d);
}
