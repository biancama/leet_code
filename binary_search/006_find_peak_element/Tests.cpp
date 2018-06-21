#include "../../catch.hpp"
#include "Solution.cpp"
//
// Created by Massimo Biancalani on 20/06/2018.
//

TEST_CASE("find peak element 01") {

    Solution solution;
    vector<int> input = {1,2,3,1};
    REQUIRE(solution.findPeakElement(input) == 2);
}


TEST_CASE("find peak element 02") {

    Solution solution;
    vector<int> input = {1,2,1,3,5,6,4};
    int solutionNumber = solution.findPeakElement(input);
    REQUIRE((solutionNumber == 1 || solutionNumber == 5));
}

TEST_CASE("find peak element 03") {

    Solution solution;
    vector<int> input = {4, 2, 3, 5};
    int solutionNumber = solution.findPeakElement(input);
    REQUIRE((solutionNumber == 0 || solutionNumber == 3));
}

TEST_CASE("find peak element 04") {

    Solution solution;
    vector<int> input = {1, 2, 3, 5};
    REQUIRE(solution.findPeakElement(input) == 3);
}

TEST_CASE("find peak element 05") {

    Solution solution;
    vector<int> input = {1};
    REQUIRE(solution.findPeakElement(input) == 0);
}

TEST_CASE("find peak element 06") {

    Solution solution;
    vector<int> input = {3, 2, 1};
    REQUIRE(solution.findPeakElement(input) == 0);
}

TEST_CASE("find peak element 07") {

    Solution solution;
    vector<int> input = {2, 1};
    REQUIRE(solution.findPeakElement(input) == 0);
}

TEST_CASE("find peak element 08") {

    Solution solution;
    vector<int> input = {-2147483648};
    REQUIRE(solution.findPeakElement(input) == 0);
}

TEST_CASE("find peak element 09") {

    Solution solution;
    vector<int> input = {1, 3, 2, 1};
    REQUIRE(solution.findPeakElement(input) == 1);
}

TEST_CASE("find peak element 10") {

    Solution solution;
    vector<int> input = {100, 101, 100, 99, 98, 97, 96, 95, 94, 93};
    REQUIRE(solution.findPeakElement(input) == 1);
}
