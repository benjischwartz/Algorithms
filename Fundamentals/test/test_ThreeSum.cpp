#include "../code/3Sum.h"
#include <gtest/gtest.h>
#include <iostream>

TEST(ThreeSumTest, BasicTest) {
    ThreeSum solver;
    std::vector<int> nums = {-4, -3, -2, -2, -1, 0, 0, 0, 1, 1, 2, 2, 3, 4, 5, 6};
    std::vector<std::vector<int>> result = solver.find3Sum(nums);

}

void print_output(std::vector<std::vector<int>>& result) {
    std::cout << "PRINTING OUTPUT...\n";
    std::cout << "{";
    for (auto v : result) {
        std::cout << "{";
        for (auto x : v) {
            std::cout << x << ", ";
        }
        std::cout << "\b\b}, ";
    }
    std::cout << "\b\b}\n";
}
