#include "helpers.hpp"
#include <algorithm>
#include <iostream>
#include <string>

void problem008(const std::string& d, const int s)
{
    long current_product = 1;
    long largest_product;

    for (int i = 0; i < s; ++i) {
        current_product *= d[i] - '0';
    }

    largest_product = current_product;

    for (int i = s; i < d.length(); ++i) {
        if (d[i - s] != '0') {
            current_product = current_product * (d[i] - '0') / (d[i - s] - '0');
        } else {
            current_product = 1;
            for (int j = i - s + 1; j <= i; ++j) {
                current_product *= d[j] - '0';
            }
        }

        largest_product = std::max(current_product, largest_product);
    }

    std::cout << "solution: " << largest_product << std::endl;
}