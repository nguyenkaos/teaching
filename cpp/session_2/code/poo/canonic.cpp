class my_little_class
{
  public:

   my_little_class() { fill(); }

  private:
  int a_;
  std::vector<double> data_;

  public:

  int value_of_a() const { return a_; }

  std::vector<double>&      data()        { return data_; }
  std::vector<double>const& data() const  { return data_; }

  protected:
  void fill()
  {
    std::fill(data_.begin(),data_.end(), 1.);
  }
};
