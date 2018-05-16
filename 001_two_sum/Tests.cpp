#include "../catch.hpp"
#include "Solution.cpp"


TEST_CASE("two sum test01") {
    Solution solution;
    vector<int> input = {2, 7, 11, 15};
    vector<int> expectedSolution = {0, 1};
    REQUIRE(solution.twoSum(input, 9) == expectedSolution);
}

TEST_CASE("two sum test02") {
    Solution solution;
    vector<int> input = {2, 7, 11, 15};
    vector<int> expectedSolution = {1, 3};
    REQUIRE(solution.twoSum(input, 22) == expectedSolution);
}