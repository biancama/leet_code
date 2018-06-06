#include "../../catch.hpp"
#include "Solution.cpp"

//
// Created by Massimo Biancalani on 05/06/2018.
//

TEST_CASE("find target 01") {

    Solution solution;
    vector<int> input = {-1,0,3,5,9,12};
    REQUIRE(solution.search(input, 9) == 4);
}


TEST_CASE("find target 02") {

    Solution solution;
    vector<int> input = {-1,0,3,5,9,12};
    REQUIRE(solution.search(input, 2) == -1);
}


TEST_CASE("find target 03") {

    Solution solution;
    vector<int> input = {-1,0,3,5,9,12};
    REQUIRE(solution.search(input, 12) == 5);
}

TEST_CASE("find target 04") {

    Solution solution;
    vector<int> input = {-1,0,3,5,9,12};
    REQUIRE(solution.search(input, -1) == 0);
}