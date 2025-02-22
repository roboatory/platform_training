#include "helpers.hpp"
#include <iostream>

void problem011(const std::vector<std::vector<int>>& grid, const int s)
{
    const int n = static_cast<int>(grid.size());
    long largest_product = 0;

    // horizontal
    for (int r = 0; r < n; ++r) {
        largest_product = std::max(largest_product, max_product(grid[r], s));
    }

    // vertical
    for (int c = 0; c < n; ++c) {
        std::vector<int> column(n);
        for (int r = 0; r < n; ++r) {
            column[r] = grid[r][c];
        }

        largest_product = std::max(largest_product, max_product(column, s));
    }

    // diagonals (top-left to bottom-right)
    for (int r = 0; r < n - s + 1; ++r) {
        for (int c = 0; c < n - s + 1; ++c) {
            std::vector<int> diagonal(n);
            for (int d = 0; d < s; ++d) {
                diagonal[d] = grid[r + d][c + d];
            }

            largest_product = std::max(largest_product, max_product(diagonal, s));
        }
    }

    // diagonals (top-right to bottom-left)
    for (int r = 0; r < n - s + 1; ++r) {
        for (int c = s - 1; c < n; ++c) {
            std::vector<int> diagonal(n);
            for (int d = 0; d < s; ++d) {
                diagonal[d] = grid[r + d][c - d];
            }

            largest_product = std::max(largest_product, max_product(diagonal, s));
        }
    }

    std::cout << "solution: " << largest_product << std::endl;
}