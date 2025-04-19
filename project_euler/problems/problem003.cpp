#include "helpers.hpp"
#include <iostream>
#include <map>

void problem003(const long a)
{
    const std::map<long, int> factors = prime_factorization(a);

    std::cout << "solution: " << factors.rbegin()->first << std::endl;
}