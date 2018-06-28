#include "../../catch.hpp"
#include "Solution.cpp"
//
// Created by Massimo Biancalani on 26/06/2018.
//

TEST_CASE("find minimum in rotated sorted array with duplicates 01") {

    Solution solution;
    vector<int> input = {3,3,1,3};
    REQUIRE(solution.findMin2(input) == 1);
}

TEST_CASE("find minimum in rotated sorted array with duplicates 02") {

    Solution solution;
    vector<int> input = {3,4,5,1,2};
    REQUIRE(solution.findMin2(input) == 1);
}

TEST_CASE("find minimum in rotated sorted array with duplicates 03") {

    Solution solution;
    vector<int> input = {3, 3, 3,4, 4, 5,1,2, 2};
    REQUIRE(solution.findMin2(input) == 1);
}


TEST_CASE("find minimum in rotated sorted array with duplicates 04") {

    Solution solution;
    vector<int> input = {3, 3, 3,4, 4, 5,6,2, 2};
    REQUIRE(solution.findMin2(input) == 2);
}

TEST_CASE("find minimum in rotated sorted array with duplicates 05") {

    Solution solution;
    vector<int> input = {3, 3, 3,4, 4, 5,6};
    REQUIRE(solution.findMin2(input) == 3);
}

TEST_CASE("find minimum in rotated sorted array with duplicates 06") {

    Solution solution;
    vector<int> input = {2, 2, 2, 0, 1};
    REQUIRE(solution.findMin2(input) == 0);
}

TEST_CASE("find minimum in rotated sorted array with duplicates 07") {

    Solution solution;
    vector<int> input = {2};
    REQUIRE(solution.findMin2(input) == 2);
}


TEST_CASE("find minimum in rotated sorted array with duplicates 08") {

    Solution solution;
    vector<int> input = {1, 3, 3};
    REQUIRE(solution.findMin2(input) == 1);
}

TEST_CASE("find minimum in rotated sorted array with duplicates 09") {

    Solution solution;
    vector<int> input = {1, 1, 3};
    REQUIRE(solution.findMin2(input) == 1);
}
