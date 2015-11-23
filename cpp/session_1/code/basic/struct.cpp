struct point3D
{
  float x,y,z;
};

int main()
{
  point3D p;
  point3D q = {1.f,2.f,3.f};

  p.x = q.y;
  p = q;
}
