#include "helpers.hpp"
#include <cmath>
#include <iostream>
#include <vector>

void problem007(int n)
{
    const int prime_upper_bound = std::ceil(n * (std::log(n) + std::log(std::log(n)))); // c.f. dusart

    std::vector<bool> is_prime(prime_upper_bound + 1, true);
    is_prime[0] = false;
    is_prime[1] = false;

    // sieve of eratosthenes
    for (int i = 2; i * i <= prime_upper_bound; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= prime_upper_bound; j += i) {
                is_prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= prime_upper_bound; ++i) {
        if (is_prime[i]) {
            --n;

            if (n == 0) {
                std::cout << "solution: " << i << std::endl;
                return;
            }
        }
    }
}