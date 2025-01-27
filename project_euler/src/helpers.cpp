#include "helpers.hpp"

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
    return (a * b) / gcd(a, b);
}