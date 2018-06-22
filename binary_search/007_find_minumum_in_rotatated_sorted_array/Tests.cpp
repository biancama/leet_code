#include "../../catch.hpp"
#include "Solution.cpp"
//
// Created by Massimo Biancalani on 21/06/2018.
//

TEST_CASE("find minimum in rotated sorted array 01") {

    Solution solution;
    vector<int> input = {3,4,5,1,2};
    REQUIRE(solution.findMin(input) == 1);
}

TEST_CASE("find minimum in rotated sorted array 02") {

    Solution solution;
    vector<int> input = {4,5,6,7,0,1,2};
    REQUIRE(solution.findMin(input) == 0);
}


TEST_CASE("find minimum in rotated sorted array 03") {

    Solution solution;
    vector<int> input = {4};
    REQUIRE(solution.findMin(input) == 4);
}


TEST_CASE("find minimum in rotated sorted array 04") {

    Solution solution;
    vector<int> input = {1, 2, 3, 4};
    REQUIRE(solution.findMin(input) == 1);
}

TEST_CASE("find minimum in rotated sorted array 05") {

    Solution solution;
    vector<int> input = {4, 3, 2, 1};
    REQUIRE(solution.findMin(input) == 1);
}


TEST_CASE("find minimum in rotated sorted array 06") {

    Solution solution;
    vector<int> input = {5, 4, 3, 2, 1};
    REQUIRE(solution.findMin(input) == 1);
}


TEST_CASE("find minimum in rotated sorted array 07") {

    Solution solution;
    vector<int> input = {3, 1, 2};
    REQUIRE(solution.findMin(input) == 1);
}

TEST_CASE("find minimum in rotated sorted array 08") {

    Solution solution;
    vector<int> input = {5, 1, 2, 3, 4};
    REQUIRE(solution.findMin(input) == 1);
}


TEST_CASE("find minimum in rotated sorted array 09") {

    Solution solution;
    vector<int> input = {2, 3, 4, 5, 1};
    REQUIRE(solution.findMin(input) == 1);
}

TEST_CASE("find minimum in rotated sorted array 10") {

    Solution solution;
    vector<int> input = {0, 4, 3, 2, 1};
    REQUIRE(solution.findMin(input) == 0);
}