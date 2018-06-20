//
// Created by Massimo Biancalani on 20/06/2018.
//

bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if (n <= 0) {
            return 0;
        }
        unsigned int left = 0, right =  n;
        while(left < right) {
            unsigned int mid = left + (right - left) / 2;
            bool isBadVersionFlag = isBadVersion(mid);
            if (!isBadVersionFlag && isBadVersion(mid + 1)) {
                return mid + 1;
            } else if (!isBadVersionFlag) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return -1;
    }
};