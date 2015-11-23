#include <iostream>

int main()
{
  int data[5];
  int code[] = {1, 58, 98, 97, 36};

  for(int i=0;i<4;++i)
    data[i] = code[i];

  int matrix[3][4] = { {1,0,0,-1}, {0,1,0,0}, {0,0,1,+2} };

  for(int i=0;i<3;++i)
  {
    for(int j=0;j<4;++j)
      std::cout << matrix[i][j] << " ";
    std::cout << "\n";
  }
}
