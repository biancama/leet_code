#include "../../catch.hpp"
#include "Solution.cpp"

TEST_CASE("two sum II test01") {
    Solution solution;
    vector<int> input = {2, 7, 11, 15};
    vector<int> expectedSolution = {1, 2};
    REQUIRE(solution.twoSumII(input, 9) == expectedSolution);
}


TEST_CASE("two sum II test02") {
    Solution solution;
    vector<int> input = {1, 2, 7, 11, 15};
    vector<int> expectedSolution = {2, 3};
    REQUIRE(solution.twoSumII(input, 9) == expectedSolution);
}