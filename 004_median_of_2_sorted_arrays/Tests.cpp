#include "../catch.hpp"
#include "Solution.cpp"
//
// Created by Massimo Biancalani on 24/05/2018.
//

TEST_CASE("median of 2 sorted array test01") {
    Solution actualSolution;
    vector<int> s1 = {1, 3};
    vector<int> s2 = {2};

    REQUIRE(actualSolution.findMedianSortedArrays(s1, s2) == 2);
}


TEST_CASE("median of 2 sorted array test02") {
    Solution actualSolution;
    vector<int> s1 = {1, 2};
    vector<int> s2 = {3, 4};

    REQUIRE(actualSolution.findMedianSortedArrays(s1, s2) == 2.5);
}
