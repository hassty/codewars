#include <cmath>

bool narcissistic( int value ){
    int number = value;
    std::vector<int> v;
    while (value > 0) {
        int digit = value % 10;
        value /= 10;
        v.push_back(digit);
    }

    int sum = 0;
    for (const auto &i : v) {
        sum += pow(i, v.size());
    }

    return sum == number;

}