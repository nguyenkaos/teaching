class stack : private std::vector<double>
{
  public:
  using parent = std::vector<double>;
  using parent::size;

  void push(double v) { parent::push_back(v); }
  double top() { return parent::back(); }

  double pop()
  {
    double v = parent::back();
    parent::pop_back();
    return v;
  }
};