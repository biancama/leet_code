#include "../../catch.hpp"
#include "Solution.cpp"
//
// Created by Massimo Biancalani on 22/06/2018.
//

TEST_CASE("search for a range 01") {

    Solution solution;
    vector<int> input = {5,7,7,8,8,10};
    vector<int> expectedOutput = {3, 4};

    REQUIRE(solution.searchRange(input, 8) == expectedOutput);
}


TEST_CASE("search for a range 02") {

    Solution solution;
    vector<int> input = {5,7,7,8,8,10};
    vector<int> expectedOutput = {-1, -1};

    REQUIRE(solution.searchRange(input, 6) == expectedOutput);
}


TEST_CASE("search for a range 03") {

    Solution solution;
    vector<int> input = {5,7};
    vector<int> expectedOutput = {-1, -1};

    REQUIRE(solution.searchRange(input, 6) == expectedOutput);
}

TEST_CASE("search for a range 04") {

    Solution solution;
    vector<int> input = {6,6};
    vector<int> expectedOutput = {0, 1};

    REQUIRE(solution.searchRange(input, 6) == expectedOutput);
}

TEST_CASE("search for a range 05") {

    Solution solution;
    vector<int> input = {1, 1, 2, 3, 4, 5, 6};
    vector<int> expectedOutput = {0, 1};

    REQUIRE(solution.searchRange(input, 1) == expectedOutput);
}

TEST_CASE("search for a range 06") {

    Solution solution;
    vector<int> input = {1, 1, 2, 3, 4, 5, 6};
    vector<int> expectedOutput = {6, 6};

    REQUIRE(solution.searchRange(input, 6) == expectedOutput);
}

TEST_CASE("search for a range 07") {

    Solution solution;
    vector<int> input = {1, 1, 2, 3, 4, 5, 6, 6};
    vector<int> expectedOutput = {6, 7};

    REQUIRE(solution.searchRange(input, 6) == expectedOutput);
}

TEST_CASE("search for a range 08") {

    Solution solution;
    vector<int> input = {1, 1, 2, 2, 2, 2, 3, 4, 5, 6, 6};
    vector<int> expectedOutput = {2, 5};

    REQUIRE(solution.searchRange(input, 2) == expectedOutput);
}

TEST_CASE("search for a range 09") {

    Solution solution;
    vector<int> input = {1};
    vector<int> expectedOutput = {0, 0};

    REQUIRE(solution.searchRange(input, 1) == expectedOutput);
}

TEST_CASE("search for a range 10") {

    Solution solution;
    vector<int> input = {1};
    vector<int> expectedOutput = {-1, -1};

    REQUIRE(solution.searchRange(input, 2) == expectedOutput);
}

TEST_CASE("search for a range 11") {

    Solution solution;
    vector<int> input = {};
    vector<int> expectedOutput = {-1, -1};

    REQUIRE(solution.searchRange(input, 2) == expectedOutput);
}


TEST_CASE("search for a range 12") {

    Solution solution;
    vector<int> input = {1, 3};
    vector<int> expectedOutput = {1, 1};

    REQUIRE(solution.searchRange(input, 3) == expectedOutput);
}

TEST_CASE("search for a range 13") {

    Solution solution;
    vector<int> input = {1, 3, 3};
    vector<int> expectedOutput = {1, 2};

    REQUIRE(solution.searchRange(input, 3) == expectedOutput);
}

TEST_CASE("search for a range 14") {

    Solution solution;
    vector<int> input = {1, 3, 3};
    vector<int> expectedOutput = {0, 0};

    REQUIRE(solution.searchRange(input, 1) == expectedOutput);
}

TEST_CASE("search for a range 15") {

    Solution solution;
    vector<int> input = {1, 3, 3};
    vector<int> expectedOutput = {-1, -1};

    REQUIRE(solution.searchRange(input, 4) == expectedOutput);
}

TEST_CASE("search for a range 16") {

    Solution solution;
    vector<int> input = {1, 3};
    vector<int> expectedOutput = {0, 0};

    REQUIRE(solution.searchRange(input, 1) == expectedOutput);
}


TEST_CASE("search for a range 17") {

    Solution solution;
    vector<int> input = {3, 3, 3};
    vector<int> expectedOutput = {0, 2};

    REQUIRE(solution.searchRange(input, 3) == expectedOutput);
}

TEST_CASE("search for a range 18") {

    Solution solution;
    vector<int> input = {1, 2, 3, 3, 3, 4, 5, 6};
    vector<int> expectedOutput = {2, 4};

    REQUIRE(solution.searchRange(input, 3) == expectedOutput);
}

TEST_CASE("search for a range 19") {

    Solution solution;
    vector<int> input = {1, 2, 3, 3, 3};
    vector<int> expectedOutput = {2, 4};

    REQUIRE(solution.searchRange(input, 3) == expectedOutput);
}


TEST_CASE("search for a range 20") {

    Solution solution;
    vector<int> input = {3, 3, 3, 4, 5, 6, 7, 8};
    vector<int> expectedOutput = {0, 2};

    REQUIRE(solution.searchRange(input, 3) == expectedOutput);
}