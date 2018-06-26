#include "../../catch.hpp"
#include "Solution.cpp"
//
// Created by Massimo Biancalani on 24/06/2018.
//
#define Abs(x)    ((x) < 0 ? -(x) : (x))
#define Max(a, b) ((a) > (b) ? (a) : (b))

#define TOLERANCE 0.0000001
double RelDif(double a, double b)
{
    double c = Abs(a);
    double d = Abs(b);

    d = Max(c, d);

    return d == 0.0 ? 0.0 : Abs(a - b) / d;
}

TEST_CASE("pow x n 01") {

    Solution solution;

    REQUIRE(RelDif(solution.myPow(2.00000, 10), 1024.00000) <= TOLERANCE);
}

TEST_CASE("pow x n 02") {

    Solution solution;

    REQUIRE(RelDif(solution.myPow(2.00000, 2), 4.00000) <= TOLERANCE);
}

TEST_CASE("pow x n 03") {

    Solution solution;

    REQUIRE(RelDif(solution.myPow(2.00000, 4), 16.00000) <= TOLERANCE);
}

TEST_CASE("pow x n 04") {

    Solution solution;

    REQUIRE(RelDif(solution.myPow(2.00000, 8), 256.00000) <= TOLERANCE);
}

TEST_CASE("pow x n 05") {

    Solution solution;

    REQUIRE(RelDif(solution.myPow(2.00000, 6), 64.00000) <= TOLERANCE);
}

TEST_CASE("pow x n 06") {

    Solution solution;

    REQUIRE(RelDif(solution.myPow(2.10000, 3), 9.26100) <= TOLERANCE);
}

TEST_CASE("pow x n 07") {

    Solution solution;

    REQUIRE(RelDif(solution.myPow(2.00000, -2), 0.25000) <= TOLERANCE);
}

TEST_CASE("pow x n 08") {

    Solution solution;

    REQUIRE(RelDif(solution.myPow(2.00000, -2147483648), 0.00000) <= TOLERANCE);
}

TEST_CASE("pow x n 09") {

    Solution solution;

    REQUIRE(RelDif(solution.myPow(-1.00000, -2147483648), 1.00000) <= TOLERANCE);
}
