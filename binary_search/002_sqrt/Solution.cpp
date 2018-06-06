//
// Created by Massimo Biancalani on 06/06/2018.
//

#include <cmath>

class Solution {
public:
    int mySqrt(int x) {
        double i = 0, j = x;
        while(i <= j) {
            double middle = i +  (j - i)/2;
            double power_2_of_middle = middle * middle;
            if ( floor(power_2_of_middle) == x) {
                return middle;
            } else if (power_2_of_middle > x) {
                j = middle;
            } else {
                i = middle;
            }
        }
        return 0;
    }
};