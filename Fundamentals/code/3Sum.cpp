#include "3Sum.h"
#include <vector>
#include <algorithm>

std::vector<std::vector<int>> ThreeSum::find3Sum(std::vector<int>& nums)
{
    std::vector<std::vector<int>> res;
    sort(nums.begin(), nums.end());
    int i = 0;
    while (i < nums.size() - 2) {
        if (nums[i] > 0) {
            break;
        }
        int j = i + 1;
        while (j < nums.size() - 1) {
            // nums[i] + nums[j] + nums[k] = 0
            int target = -(nums[i] + nums[j]);
            int k = binary_search(nums, j + 1, nums.size() - 1, target);
            if (k != -1) {
                res.push_back({nums[i], nums[j], nums[k]});
            }
            ++j;
            while (j < nums.size() - 1 && nums[j] == nums[j - 1]) {
                ++j;
            }
        }
        ++i;
        while (i < nums.size() - 2 && nums[i] == nums[i - 1]) {
            ++i;
        }
    }
    return res;
}

int ThreeSum::binary_search(std::vector<int>& nums, int lo, int hi, int target) {
    if (lo > hi) {
        return -1;
    }
    int mid = lo + (hi - lo) / 2;
    if (nums[mid] == target) {
        return mid;
    }
    else if (nums[mid] > target) {
        return ThreeSum::binary_search(nums, lo, mid - 1, target);
    }
    else {
        return ThreeSum::binary_search(nums, mid + 1, hi, target);
    }
    return 0;
}
