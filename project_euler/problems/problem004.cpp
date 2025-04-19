#include <cmath>
#include <iostream>

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

void problem004(const int d)
{
    const int upper_limit = static_cast<int>(std::pow(10, d)) - 1;
    const int lower_limit = static_cast<int>(std::pow(10, d - 1));

    int largest_palindrome = 0;

    for (int i = upper_limit; i >= lower_limit; --i) {
        if (i * i < largest_palindrome) {
            break;
        }

        for (int j = i; j >= lower_limit; --j) {
            const int product = i * j;

            if (product < largest_palindrome) {
                break;
            }

            if (is_palindrome(product)) {
                largest_palindrome = product;
            }
        }
    }

    std::cout << "solution: " << largest_palindrome << std::endl;
}