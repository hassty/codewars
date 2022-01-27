unsigned __int128 factorial(unsigned n)
{
    return (!n) ? 1 : n * factorial(n - 1);
}