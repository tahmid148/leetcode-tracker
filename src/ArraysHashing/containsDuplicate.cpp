#include "ArraysHashing/containsDuplicate.h"
#include <unordered_set>

bool containsDuplicate(std::vector<int> &nums)
{
    std::unordered_set<int> numSet;

    for (auto& num : nums) {
        if (numSet.find(num) != numSet.end()) {
            return true;
        }
        numSet.insert(num);
    }
    return false;
}