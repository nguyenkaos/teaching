class simple_class
{
  std::vector<float>  buffer;

  protected:
  int                 id;
  std::string         name;

  public:
  simple_class();
  simple_class(simple_class const& other);
  ~simple_class();

  simple_class& operator=(simple_class const& other);
  int update(double n);
};
