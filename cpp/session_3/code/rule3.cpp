struct rule3
{
  rule3(const char* arg) : data(new char[std::strlen(arg)+1])
  {
    std::strcpy(data, arg);
  }

  ~rule3() { delete[] data; }

  rule3(const rule3& other)
  {
    data = new char[std::strlen(other.data) + 1];
    std::strcpy(data, other.data);
  }

  rule3& operator=(const rule3& other)
  {
    char* tmp_data = new char[std::strlen(other.data) + 1];
    std::strcpy(tmp_data, other.data);
    delete[] data;
    data = tmp_data;
    return *this;
  }

  private:
  char* data;
};
