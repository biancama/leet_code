#include "../../catch.hpp"
#include "Solution.cpp"
//
// Created by Massimo Biancalani on 20/06/2018.
//

int firstBadVersion = 0;

bool isBadVersion(int version) {
    return (version >= firstBadVersion);
}

TEST_CASE("first bad version 01") {
    firstBadVersion = 4;
    Solution solution;

    REQUIRE(solution.firstBadVersion(5) == 4);
}


TEST_CASE("first bad version 02") {
    firstBadVersion = 2;
    Solution solution;

    REQUIRE(solution.firstBadVersion(15) == 2);
}


TEST_CASE("first bad version 03") {
    firstBadVersion = 14;
    Solution solution;

    REQUIRE(solution.firstBadVersion(15) == 14);
}
