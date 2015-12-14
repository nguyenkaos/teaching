vector::vector( vector const& src )
{
  size_ = src.size();
  double* tmp = new double[src.size()];
  std::copy(tmp,tmp+size, src.data());
  data_ = tmp;
}

vector::vector( vector const& src )
{
  unique_ptr<double[]> tmp = new double[src.size()];
  std::copy(tmp.get(),tmp.get()+src.size(), src.data());

  data_ = tmp.release();
  size_ = src.size();
}
