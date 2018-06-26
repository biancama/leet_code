//
// Created by Massimo Biancalani on 26/06/2018.
//

class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1) {
            return true;
        }
        unsigned long left = 0, right = num;
        while (left < right) {
            unsigned long mid = (left + right) / 2;
            unsigned long squareOfMid = mid * mid;
            if (squareOfMid == num) {
                return true;
            } else if (squareOfMid > num) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return false;
    }
};