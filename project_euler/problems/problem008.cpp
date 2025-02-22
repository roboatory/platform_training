#include "helpers.hpp"
#include <iostream>
#include <string>

void problem008(const std::string& d, const int s)
{
    std::vector<int> digits;

    for (const char c : d) {
        digits.push_back(c - '0');
    }

    const long largest_product = max_product(digits, s);
    std::cout << "solution: " << largest_product << std::endl;
}