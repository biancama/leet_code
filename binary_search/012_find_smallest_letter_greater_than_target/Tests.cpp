#include "../../catch.hpp"
#include "Solution.cpp"
//
// Created by Massimo Biancalani on 26/06/2018.
//

TEST_CASE("Find smallest letter greater than target 01") {

    Solution solution;
    vector<char> input = {'c', 'f', 'j'};

    REQUIRE(solution.nextGreatestLetter(input, 'a') == 'c');
}

TEST_CASE("Find smallest letter greater than target 02") {

    Solution solution;
    vector<char> input = {'c', 'f', 'j'};

    REQUIRE(solution.nextGreatestLetter(input, 'c') == 'f');
}

TEST_CASE("Find smallest letter greater than target 03") {

    Solution solution;
    vector<char> input = {'c', 'f', 'j'};

    REQUIRE(solution.nextGreatestLetter(input, 'd') == 'f');
}

TEST_CASE("Find smallest letter greater than target 04") {

    Solution solution;
    vector<char> input = {'c', 'f', 'j'};

    REQUIRE(solution.nextGreatestLetter(input, 'g') == 'j');
}


TEST_CASE("Find smallest letter greater than target 05") {

    Solution solution;
    vector<char> input = {'c', 'f', 'j'};

    REQUIRE(solution.nextGreatestLetter(input, 'j') == 'c');
}

TEST_CASE("Find smallest letter greater than target 06") {

    Solution solution;
    vector<char> input = {'c', 'f', 'j'};

    REQUIRE(solution.nextGreatestLetter(input, 'k') == 'c');
}

TEST_CASE("Find smallest letter greater than target 07") {

    Solution solution;
    vector<char> input = {'c', 'f', 'j'};

    REQUIRE(solution.nextGreatestLetter(input, 'k') == 'c');
}

TEST_CASE("Find smallest letter greater than target 08") {

    Solution solution;
    vector<char> input = {'c', 'f', 'f', 'f', 'j'};

    REQUIRE(solution.nextGreatestLetter(input, 'f') == 'j');
}


TEST_CASE("Find smallest letter greater than target 09") {

    Solution solution;
    vector<char> input = {'c', 'f', 'f', 'f', 'j'};

    REQUIRE(solution.nextGreatestLetter(input, 'g') == 'j');
}

TEST_CASE("Find smallest letter greater than target 10") {

    Solution solution;
    vector<char> input = {'c', 'f', 'f', 'f', 'j'};

    REQUIRE(solution.nextGreatestLetter(input, 'j') == 'c');
}

TEST_CASE("Find smallest letter greater than target 11") {

    Solution solution;
    vector<char> input = {'c', 'f', 'f', 'f', 'j'};

    REQUIRE(solution.nextGreatestLetter(input, 'd') == 'f');
}

TEST_CASE("Find smallest letter greater than target 12") {

    Solution solution;
    vector<char> input = {'c', 'f', 'f', 'f', 'j'};

    REQUIRE(solution.nextGreatestLetter(input, 'b') == 'c');
}