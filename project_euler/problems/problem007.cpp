#include "helpers.hpp"
#include <cmath>
#include <iostream>
#include <vector>

void problem007(const int n)
{
    const int prime_upper_bound = std::ceil(n * (std::log(n) + std::log(std::log(n)))); // c.f. dusart
    const std::vector<int> primes = prime_sieve(prime_upper_bound);

    std::cout << "solution: " << primes[n - 1] << std::endl;
}