//
// Created by Massimo Biancalani on 24/06/2018.
//

#include <climits>
#include <cmath>

class Solution {
private:
    unsigned int neg(int value) {
        return (value == -2147483648) ? 2147483647 : -value;
    }
public:
    double myPow(double x, int n) {
        double result = 1.0;
        bool isPositive = n >= 0;
        bool isOdd = (n % 2 == 0);
        if (!isPositive) {
            n = neg(n);
        }
        while (n > 0) {
            if (n % 2 != 0) {
                result *= x;
            }
            n /= 2;
            x = x * x;
        }
        result = isPositive ? result : 1 / result;
        return isOdd ? fabs(result) : result;
    }
};