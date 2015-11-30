int main()
{
  std::shared_ptr<int> p1 = std::make_shared<int>(5);
  std::weak_ptr<int>   wp1 = p1;

  {
    std::shared_ptr<int> p2 = wp1.lock();
    if(p2) std::cout << *p2 << "\n";
  }

  p1.reset();
  std::shared_ptr<int> p3 = wp1.lock();

  if(p3) std::cout << "nope :(\n";
}
