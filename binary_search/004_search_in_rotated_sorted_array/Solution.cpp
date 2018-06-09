#include <vector>

//
// Created by Massimo Biancalani on 06/06/2018.
//
using namespace std;

class Solution {

    public:
    int search_rotated(vector<int>& nums, int target) {

        int min = 0, max = nums.size() - 1;
        while (min <= max) {
            int middle = (min + max) /2;
            if (nums[middle] == target) {
                return middle;
            } else if ((nums[middle] > nums[max] && nums[max] > target && nums[min] > target) || (nums[middle] < target && nums[max] > target && nums[min] > target)) {
                min =  middle;
            } else if ((nums[middle] > target && nums[max] < target && nums[min] < target) || (nums[middle] < target && nums[max] < target && nums[min] < target)) {
                max = middle;
            } else {
                break;
            }
        }
        return -1;
    }

};