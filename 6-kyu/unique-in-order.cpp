#include <algorithm>
#include <string>
#include <vector>

template <typename T>
std::vector<T> uniqueInOrder(const std::vector<T> &iterable) {
    std::vector<T> result = iterable;
    auto last = std::unique(result.begin(), result.end());
    result.erase(last, result.end());
    return result;
}

std::vector<char> uniqueInOrder(const std::string &iterable) {
    return uniqueInOrder<char>({iterable.begin(), iterable.end()});
}