#include <chrono>
#include <iostream>
#include <string>

extern void problem001(int a, int b, int t);
extern void problem002(int t);
extern void problem003(long a);
extern void problem004(int num_digits);
extern void problem005(int e);
extern void problem006(int n);
extern void problem007(int n);
extern void problem008(const std::string& d, int s);

int main()
{
    const auto start = std::chrono::high_resolution_clock::now();

    // problem<>()

    const auto end = std::chrono::high_resolution_clock::now();
    const auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    std::cout << "function duration: " << duration << std::endl;

    return 0;
}