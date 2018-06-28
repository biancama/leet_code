#include "../../catch.hpp"
#include "Solution.cpp"

TEST_CASE("intersection of two arrays 01") {

    Solution solution;
    vector<int> input1 = {1, 2, 2, 1};
    vector<int> input2 = {2, 2};

    vector<int> expectedOutput = {2};
    REQUIRE(solution.intersection(input1, input2) == expectedOutput);
}


TEST_CASE("intersection of two arrays 02") {

    Solution solution;
    vector<int> input1 = {1, 2, 2, 1, 3};
    vector<int> input2 = {2, 2, 3};

    vector<int> expectedOutput = {2, 3};
    vector<int> sol = solution.intersection(input1, input2);

    REQUIRE( sol.size() == expectedOutput.size());
    sort(sol.begin(), sol.end());
    REQUIRE( sol == expectedOutput);
}


TEST_CASE("intersection of two arrays 03") {

    Solution solution;
    vector<int> input1 = {1, 2, 2, 1, 3};
    vector<int> input2 = {-1, 4, 5};

    vector<int> expectedOutput = {};
    vector<int> sol = solution.intersection(input1, input2);

    REQUIRE( sol.size() == expectedOutput.size());
    sort(sol.begin(), sol.end());
    REQUIRE( sol == expectedOutput);
}

TEST_CASE("intersection of two arrays 04") {

    Solution solution;
    vector<int> input1 = {1};
    vector<int> input2 = {};

    vector<int> expectedOutput = {};
    vector<int> sol = solution.intersection(input1, input2);

    REQUIRE( sol.size() == expectedOutput.size());
    sort(sol.begin(), sol.end());
    REQUIRE( sol == expectedOutput);
}

TEST_CASE("intersection of two arrays 05") {

    Solution solution;
    vector<int> input1 = {};
    vector<int> input2 = {3, 4, 5};

    vector<int> expectedOutput = {};
    vector<int> sol = solution.intersection(input1, input2);

    REQUIRE( sol.size() == expectedOutput.size());
    sort(sol.begin(), sol.end());
    REQUIRE( sol == expectedOutput);
}