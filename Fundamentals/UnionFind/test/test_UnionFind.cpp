#include "../code/UnionFind.h"
#include <gtest/gtest.h>
#include <iostream>
#include <fstream>

void print_output(std::vector<std::vector<int>>& result);

TEST(UnionFindTest, BasicTest) {
    std::ifstream file("../data/mediumUF.txt");
    ASSERT_TRUE(file.is_open()) << "Unable to open test file";
    int a, b, n;
    file >> n;
    UnionFind solver{n};
    while (file >> a >> b) {
        std::cout << a << " --- " << b << std::endl;
        solver.add_union(a, b);
    }
    std::cout << "n: " << n << std::endl;
    std::cout << "count: " << solver.get_count() << std::endl;
    file.close();
    //EXPECT_EQ(result, expected);
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
