#include "helpers.hpp"
#include <iostream>
#include <map>
#include <numeric>

void problem012(const int d)
{
    int i = 1;
    int divisors = 1;

    while (divisors <= d) {
        i += 1;

        std::map<long, int> factors = prime_factorization(i * (i + 1) / 2);
        divisors = std::accumulate(factors.begin(), factors.end(), 1, [](int accumulator, const std::pair<int, int>& p) {
            return accumulator * (p.second + 1);
        });
    }

    std::cout << "solution: " << i * (i + 1) / 2 << std::endl;
}