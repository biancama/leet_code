#include "../catch.hpp"
#include "Solution.cpp"
//
// Created by Massimo Biancalani on 24/05/2018.
//

TEST_CASE("longest substring test01") {
    Solution solution;
    string inputStr = "abcabcbb";
    int actualSolution = solution.lengthOfLongestSubstring(inputStr);


    REQUIRE(actualSolution == 3);
}


TEST_CASE("longest substring test02") {
    Solution solution;
    string inputStr = "bbbbb";
    int actualSolution = solution.lengthOfLongestSubstring(inputStr);


    REQUIRE(actualSolution == 1);
}


TEST_CASE("longest substring test03") {
    Solution solution;
    string inputStr = "pwwkew";
    int actualSolution = solution.lengthOfLongestSubstring(inputStr);


    REQUIRE(actualSolution == 3);
}

TEST_CASE("longest substring test04") {
    Solution solution;
    string inputStr = "dvdf";
    int actualSolution = solution.lengthOfLongestSubstring(inputStr);


    REQUIRE(actualSolution == 3);
}

TEST_CASE("longest substring test05") {
    Solution solution;
    string inputStr = "c";
    int actualSolution = solution.lengthOfLongestSubstring(inputStr);


    REQUIRE(actualSolution == 1);
}


