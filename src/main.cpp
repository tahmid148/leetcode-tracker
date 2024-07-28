#include <iostream>
#include <vector>

#include "ArraysHashing/containsDuplicate.h"

int main()
{
    std::vector<int> test = {1, 2, 3, 4, 1};
    const bool testResult = containsDuplicate(test);
    std::cout << "Contains Duplicate: " << testResult << std::endl;
    return 0;
}