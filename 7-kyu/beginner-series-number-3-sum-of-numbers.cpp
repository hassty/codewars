int get_sum(int a, int b)
{
    int result = 0;
    for (int i = std::min(a, b); i <= std::max(a, b); ++i) {
        result += i;
    }
    return result;

}