#include <vector>

//
// Created by Massimo Biancalani on 05/06/2018.
//

using namespace std;

class Solution {

    public:
    int search(vector<int>& nums, int target) {
        int i = 0, j = nums.size();
        while (i <= j) {
            int middle = (i + j) / 2;
            if (nums[middle] == target) {
                return middle;
            } else if (nums[middle] > target) {
                j--;
            } else {
                i++;
            }
        }

        return -1;
    }
};