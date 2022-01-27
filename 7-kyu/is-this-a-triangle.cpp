namespace Triangle
{
  bool isTriangle(unsigned long long a, unsigned long long b, unsigned long long c)
  {
    return (a < b + c) && (b < a + c) && (c < a + b);
  }
};