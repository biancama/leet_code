#include "../../catch.hpp"
#include "Solution.cpp"
//
// Created by Massimo Biancalani on 06/06/2018.
//

int numberToGuess = 0;

int guess(int num) {
    if (num == numberToGuess) {
        return 0;
    } else if (num > numberToGuess) {
        return  1;
    } else {
        return -1;
    }
}

TEST_CASE("guess number with binary search 01") {

    numberToGuess = 6;
    Solution solution;

    REQUIRE(solution.guessNumber(10) == 6);
}


TEST_CASE("guess number with binary search 02") {

    numberToGuess = 1;
    Solution solution;

    REQUIRE(solution.guessNumber(3) == 1);
}


TEST_CASE("guess number with binary search 03") {

    numberToGuess = 6;
    Solution solution;

    REQUIRE(solution.guessNumber(10) == 6);
}

