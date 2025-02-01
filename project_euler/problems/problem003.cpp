#include <algorithm>
#include <iostream>

void problem003(long a)
{
    long largest_prime_factor = 1;

    while (a % 2 == 0) {
        a /= 2;
        largest_prime_factor = 2;
    }

    int factor = 3;
    while (factor * factor <= a) {
        while (a % factor == 0) {
            a /= factor;
            largest_prime_factor = factor;
        }

        factor += 2;
    }

    std::cout << "solution: " << std::max(largest_prime_factor, a) << std::endl;
}