#include "../code/3Sum.h"
#include <gtest/gtest.h>
#include <iostream>

void print_output(std::vector<std::vector<int>>& result);

TEST(ThreeSumTest, BasicTest) {
    ThreeSum solver;
    std::vector<int> nums = {-4, -3, -2, -2, -1, 0, 0, 0, 1, 1, 2, 2, 3, 4, 5, 6};
    std::vector<std::vector<int>> expected = 
    {{-4, -2, 6}, {-4, -1, 5}, {-4, 0, 4}, {-4, 1, 3}, {-4, 2, 2}, 
    {-3, -2, 5}, {-3, -1, 4}, {-3, 0, 3}, {-3, 1, 2}, {-2, -2, 4}, 
    {-2, -1, 3}, {-2, 0, 2}, {-2, 1, 1}, {-1, 0, 1}, {0, 0, 0}};
    std::vector<std::vector<int>> result = solver.find3Sum(nums);
    EXPECT_EQ(result, expected);
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
