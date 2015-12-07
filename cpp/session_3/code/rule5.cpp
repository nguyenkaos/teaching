struct rule5
{
  rule5(const char* arg) : data(new char[std::strlen(arg)+1])
  {
    std::strcpy(data, arg);
  }

  ~rule5() { delete[] data; }

  rule5(const rule5& o)
  {
    data = new char[std::strlen(o.data) + 1];
    std::strcpy(data, o.data);
  }

  rule5(rule5&& o) : data(o.data) { o.data = nullptr; }

  rule5& operator=(const rule5& o)
  {
    char* tmp_data = new char[std::strlen(o.data) + 1];
    std::strcpy(tmp_data, o.data);
    delete[] data;
    data = tmp_data;
    return *this;
  }
  rule5& operator=(rule5&& o)
  {
    delete[] data;
    data = o.data;
    o.data = nullptr;
    return *this;
  }

  private:
  char* data;
};
