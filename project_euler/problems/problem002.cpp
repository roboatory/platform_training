#include "helpers.hpp"
#include <iostream>

void problem002(const int t)
{
    int a = 0;
    int b = 2;
    int c;

    int sum = a;

    while (b < t) {
        sum += b;

        c = 4 * b + a;
        a = b;
        b = c;
    }

    std::cout << "solution: " << sum << std::endl;
}