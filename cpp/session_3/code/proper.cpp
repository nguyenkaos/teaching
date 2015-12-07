class proper_base
{
  public:
  proper_base(const proper_base&) = default;
  proper_base(proper_base&&) = default;
  proper_base& operator=(const proper_base&) = default;
  proper_base& operator=(proper_base&&) = default;
  virtual ~proper_base() = default;
};
