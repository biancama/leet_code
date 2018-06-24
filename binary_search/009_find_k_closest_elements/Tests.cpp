#include "../../catch.hpp"
#include "Solution.cpp"
//
// Created by Massimo Biancalani on 24/06/2018.
//
TEST_CASE("find k closest elements 01") {

    Solution solution;
    vector<int> input = {1,2,3,4,5};
    vector<int> expectedOutput = {1, 2, 3 ,4 };

    REQUIRE(solution.findClosestElements(input, 4, 3) == expectedOutput);
}

TEST_CASE("find k closest elements 02") {

    Solution solution;
    vector<int> input = {1,2,3,4,5};
    vector<int> expectedOutput = {1, 2, 3 ,4 };

    REQUIRE(solution.findClosestElements(input, 4, -1) == expectedOutput);
}


TEST_CASE("find k closest elements 03") {

    Solution solution;
    vector<int> input = {1,2,3,4,5};
    vector<int> expectedOutput = {2, 3 ,4 };

    REQUIRE(solution.findClosestElements(input, 3, 3) == expectedOutput);
}

TEST_CASE("find k closest elements 04") {

    Solution solution;
    vector<int> input = {1,2,3,4,5};
    vector<int> expectedOutput = {1, 2, 3 ,4 };

    REQUIRE(solution.findClosestElements(input, 4, 3) == expectedOutput);
}

TEST_CASE("find k closest elements 05") {

    Solution solution;
    vector<int> input = {1,2,3,4,5};
    vector<int> expectedOutput = {2, 3, 4, 5};

    REQUIRE(solution.findClosestElements(input, 4, 6) == expectedOutput);
}

TEST_CASE("find k closest elements 06") {

    Solution solution;
    vector<int> input = {1,2,3,4,5};
    vector<int> expectedOutput = {1, 2, 3 ,4 };

    REQUIRE(solution.findClosestElements(input, 4, 3) == expectedOutput);
}

TEST_CASE("find k closest elements 07") {

Solution solution;
vector<int> input = {0,0,1,2,3,3,4,7,7,8};
vector<int> expectedOutput = {3,3,4};

REQUIRE(solution.findClosestElements(input, 3, 5) == expectedOutput);
}
