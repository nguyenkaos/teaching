class simple_class
{
  std::vector<float>  buffer;

  protected:
  int                 id;
  std::string         name;

  public:
  MyLittleClass();
  MyLittleClass(MyLittleClass const& other); 
  ~MyLittleClass();
  
  MyLittleClass& operator=(MyLittleClass const& other);
  int update(double n);
};