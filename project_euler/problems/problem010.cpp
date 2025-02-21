#include "helpers.hpp"
#include <iostream>

void problem010(const int l)
{
    const std::vector<int> primes = prime_sieve(l);

    long prime_sum = 0;
    for (const int prime: primes) {
        prime_sum += prime;
    }

    std::cout << "solution: " << prime_sum << std::endl;
}