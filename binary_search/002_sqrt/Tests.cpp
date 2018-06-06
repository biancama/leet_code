#include "../../catch.hpp"
#include "Solution.cpp"
//
// Created by Massimo Biancalani on 06/06/2018.
//

TEST_CASE("sqrt with binary search 01") {
    Solution solution;
    REQUIRE(solution.mySqrt(4) == 2);
}

TEST_CASE("sqrt with binary search 02") {
    Solution solution;
    REQUIRE(solution.mySqrt(8) == 2);
}