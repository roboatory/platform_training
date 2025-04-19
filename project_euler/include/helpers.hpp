#ifndef HELPERS_HPP
#define HELPERS_HPP

#include <map>
#include <vector>

int gcd(int a, int b);
int lcm(int a, int b);
long max_product(const std::vector<int>& nums, int window_size);
std::vector<int> prime_sieve(int limit);
std::map<long, int> prime_factorization(long n);

#endif // HELPERS_HPP