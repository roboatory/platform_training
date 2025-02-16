#include "helpers.hpp"
#include <cmath>
#include <iostream>

void problem006(const int n)
{
    const int sum_squares = static_cast<int>(1 / 3.0 * std::pow(n, 3) + 1 / 2.0 * std::pow(n, 2) + 1 / 6.0 * n);
    const int squared_sum = static_cast<int>(std::pow(n * (n + 1) / 2, 2));

    std::cout << "solution: " << squared_sum - sum_squares << std::endl;
}