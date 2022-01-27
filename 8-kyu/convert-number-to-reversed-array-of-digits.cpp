std::vector<int> digitize(unsigned long n) 
{        
    std::vector<int> result;

    while (n > 0) {
        int digit = n % 10;
        n /= 10;
        result.push_back(digit);
    }

    return result;

}