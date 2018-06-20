//
// Created by Massimo Biancalani on 06/06/2018.
//

// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        unsigned int low = 0;
        unsigned int mid = 0;

        while(1) {
            mid = (n + low)/2;
            int guess_result = guess(mid);
            if(guess_result == -1) {
                low = mid;
            }  else if(guess_result == 1) {
                n = mid;
            } else {
                break;
            };
        }
        return mid;
    }
};