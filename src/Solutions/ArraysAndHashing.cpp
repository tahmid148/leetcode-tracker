#include "ArraysAndHashing.h"

bool ArraysHashing::containsDuplicate(const std::vector<int>& nums) {
    std::unordered_set<int> numSet;
    for (int num : nums) {
        if (numSet.find(num) != numSet.end()) {
            return true;
        }
        numSet.insert(num);
    }
    return false;
}

