#include "../../catch.hpp"
#include "Solution.cpp"
//
// Created by Massimo Biancalani on 26/06/2018.
//

TEST_CASE("Valid perfect square 01") {

    Solution solution;

    REQUIRE(solution.isPerfectSquare(16) == true);
}

TEST_CASE("Valid perfect square 02") {

    Solution solution;

    REQUIRE(solution.isPerfectSquare(14) == false);
}

TEST_CASE("Valid perfect square 03") {

    Solution solution;

    REQUIRE(solution.isPerfectSquare(4) == true);
}


TEST_CASE("Valid perfect square 04") {

    Solution solution;

    REQUIRE(solution.isPerfectSquare(25) == true);
}

TEST_CASE("Valid perfect square 05") {

    Solution solution;

    REQUIRE(solution.isPerfectSquare(400) == true);
}

TEST_CASE("Valid perfect square 06") {

    Solution solution;

    REQUIRE(solution.isPerfectSquare(1) == true);
}

TEST_CASE("Valid perfect square 07") {

    Solution solution;

    REQUIRE(solution.isPerfectSquare(2147395600) == true);
}

TEST_CASE("Valid perfect square 08") {

    Solution solution;

    REQUIRE(solution.isPerfectSquare(2985984) == true);
}

TEST_CASE("Valid perfect square 09") {

    Solution solution;

    REQUIRE(solution.isPerfectSquare(2147302921) == true);
}


