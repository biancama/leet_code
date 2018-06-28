#include <vector>
//
// Created by Massimo Biancalani on 26/06/2018.
//
using namespace std;

class Solution {
public:
    int findMin2(vector<int> &nums) {
        int min = nums[0];

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] < min) {
                min = nums[i];
            }
        }
        return min;
    }
};