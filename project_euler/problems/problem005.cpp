#include "helpers.hpp"
#include <iostream>

void problem005(const int e)
{
    int running_lcm = 1;

    for (int i = 2; i <= e; ++i) {
        running_lcm = lcm(running_lcm, i);
    }

    std::cout << "solution: " << running_lcm << std::endl;
}