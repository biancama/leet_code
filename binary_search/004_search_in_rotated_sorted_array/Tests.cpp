#include "../../catch.hpp"
#include "Solution.cpp"

//
// Created by Massimo Biancalani on 06/06/2018.
//

TEST_CASE("find target in a rotated sorted array 01") {

    Solution solution;
    vector<int> input = {4,5,6,7,0,1,2};
    REQUIRE(solution.search_rotated(input, 0) == 4);
}


TEST_CASE("find target in a rotated sorted array 02") {

    Solution solution;
    vector<int> input = {4,5,6,7,0,1,2};
    REQUIRE(solution.search_rotated(input, 3) == -1);
}

TEST_CASE("find target in a rotated sorted array 03") {

    Solution solution;
    vector<int> input = {4,5,6,7,0,1,2};
    REQUIRE(solution.search_rotated(input, 5) == 1);
}

TEST_CASE("find target in a rotated sorted array 04") {

    Solution solution;
    vector<int> input = {7, 8, 9, 0, 1, 2, 4};
    REQUIRE(solution.search_rotated(input, 8) == 1);
}

TEST_CASE("find target in a rotated sorted array 05") {

    Solution solution;
    vector<int> input = {1};
    REQUIRE(solution.search_rotated(input, 1) == 0);
}