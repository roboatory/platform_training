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
    return (a / gcd(a, b)) * b;
}

bool is_palindrome(const int original)
{
    int reverse = 0;
    int a = original;

    while (a != 0) {
        reverse  = reverse * 10 + a % 10;
        a = a / 10;
    }

    return original == reverse;
}