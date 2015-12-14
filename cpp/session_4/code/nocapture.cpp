void write_to_file (const std::string & message)
{
  static std::mutex mutex;

  std::lock_guard<std::mutex> lock(mutex);

  std::ofstream file("example.txt");
  if (!file.is_open())
    throw std::runtime_error("unable to open file");

  file << message << std::endl;
}
