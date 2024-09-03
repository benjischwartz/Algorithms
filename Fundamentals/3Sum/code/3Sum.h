#include <vector>

class ThreeSum {
public:
    std::vector<std::vector<int>> find3Sum(std::vector<int>& nums);

private:
    int binary_search(std::vector<int>& nums, int lo, int hi, int target);
};
