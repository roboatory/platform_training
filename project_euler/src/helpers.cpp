#include "helpers.hpp"
#include <algorithm>

int gcd(int a, int b)
{
    int R;

    while ((a % b) > 0) {
        R = a % b;
        a = b;
        b = R;
    }

    return b;
}

int lcm(const int a, const int b)
{
    return (a / gcd(a, b)) * b;
}

long max_product(const std::vector<int>& nums, const int window_size)
{
    long current_product = 1;
    long largest_product;

    for (int i = 0; i < window_size; ++i) {
        current_product *= nums[i];
    }

    largest_product = current_product;

    for (int i = window_size; i < nums.size(); ++i) {
        if (nums[i - window_size] != 0) {
            current_product = current_product * nums[i] / nums[i - window_size];
        } else {
            current_product = 1;
            for (int j = i - window_size + 1; j <= i; ++j) {
                current_product *= nums[j];
            }
        }

        largest_product = std::max(largest_product, current_product);
    }

    return largest_product;
}

std::vector<int> prime_sieve(const int limit)
{
    std::vector<bool> is_prime(limit + 1, true);
    std::vector<int> primes;

    is_prime[0] = false;
    is_prime[1] = false;

    // sieve of eratosthenes
    for (int i = 2; i * i <= limit; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                is_prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= limit; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }

    return primes;
}

std::map<long, int> prime_factorization(long n)
{
    std::map<long, int> prime_factors;

    while (n % 2 == 0) {
        n /= 2;
        ++prime_factors[2];
    }

    int factor = 3;
    while (factor * factor <= n) {
        while (n % factor == 0) {
            n /= factor;
            ++prime_factors[factor];
        }

        factor += 2;
    }

    if (n > 1) {
        ++prime_factors[n];
    }

    return prime_factors;
}