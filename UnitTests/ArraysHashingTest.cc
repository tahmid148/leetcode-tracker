#include <gtest/gtest.h>
#include "ArraysAndHashing.h"

// Define a test fixture class for organizing tests if needed
class ArraysHashingTest : public ::testing::Test {
protected:
    ArraysHashing ah;
};

// Test for an empty vector
TEST_F(ArraysHashingTest, EmptyVector) {
    std::vector<int> empty;
    EXPECT_FALSE(ah.containsDuplicate(empty));
}

// Test for a vector with no duplicates
TEST_F(ArraysHashingTest, NoDuplicates) {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    EXPECT_FALSE(ah.containsDuplicate(nums));
}

// Test for a vector with duplicates
TEST_F(ArraysHashingTest, ContainsDuplicates) {
    std::vector<int> nums = {1, 2, 3, 2, 5};
    EXPECT_TRUE(ah.containsDuplicate(nums));
}

// Test for a vector with all identical elements
TEST_F(ArraysHashingTest, AllIdentical) {
    std::vector<int> nums = {1, 1, 1, 1};
    EXPECT_TRUE(ah.containsDuplicate(nums));
}
