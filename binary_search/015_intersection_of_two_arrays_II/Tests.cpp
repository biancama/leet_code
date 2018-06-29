#include "../../catch.hpp"
#include "Solution.cpp"

TEST_CASE("intersection of two arrays II 01") {

    Solution solution;
    vector<int> input1 = {1, 2, 2, 1, 3};
    vector<int> input2 = {2, 2};

    vector<int> expectedOutput = {2, 2};
    vector<int> sol = solution.intersect(input1, input2);

    REQUIRE( sol.size() == expectedOutput.size());
    sort(sol.begin(), sol.end());
    REQUIRE( sol == expectedOutput);
}

TEST_CASE("intersection of two arrays II 02") {

    Solution solution;
    vector<int> input1 = {33, 33, 33};
    vector<int> input2 = {33, 33, 33, 33};

    vector<int> expectedOutput = {33, 33, 33};
    vector<int> sol = solution.intersect(input1, input2);

    REQUIRE( sol.size() == expectedOutput.size());
    sort(sol.begin(), sol.end());
    REQUIRE( sol == expectedOutput);
}