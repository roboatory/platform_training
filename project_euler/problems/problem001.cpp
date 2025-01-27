#include "helpers.hpp"
#include <iostream>

void problem001(const int a, const int b, const int t)
{
    const int lcm_ab = lcm(a, b);

    const int n_a = (t - 1) / a;
    const int n_b = (t - 1) / b;
    const int n_lcm = (t - 1) / lcm_ab;

    const int sum_a = a * (n_a * (n_a + 1) / 2);
    const int sum_b = b * (n_b * (n_b + 1) / 2);
    const int sum_lcm = lcm_ab * (n_lcm * (n_lcm + 1) / 2);

    std::cout << "solution: " << sum_a + sum_b - sum_lcm << std::endl;
}