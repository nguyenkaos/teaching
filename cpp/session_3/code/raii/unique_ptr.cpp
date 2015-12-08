#include <memory>

int main()
{
  std::unique_ptr<int> p1 = std::make_unique<int>(5);
  std::unique_ptr<int> p2 = p1; // ERREUR
  std::unique_ptr<int> p3 = std::move(p1);

  p3.reset();
  p1.reset();
}
