int sumTriangularNumbers(int n)
{
  return n > 0 ? (pow(++n, 3) - n) / 6 : 0;
}