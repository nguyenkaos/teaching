class base
{
  public:
  virtual void behavior();
  virtual void foo() final {}
};

class derived final : public base
{
  public:
  virtual void behavior() override;
  void derived_behavior() {}
};
