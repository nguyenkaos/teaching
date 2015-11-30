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
