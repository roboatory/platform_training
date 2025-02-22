#ifndef HELPERS_HPP
#define HELPERS_HPP

#include <vector>

int gcd(int a, int b);
bool is_palindrome(int original);
int lcm(int a, int b);
long max_product(const std::vector<int>& nums, int window_size);
std::vector<int> prime_sieve(int limit);

#endif // HELPERS_HPP