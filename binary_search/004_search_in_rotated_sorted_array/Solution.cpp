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
            int middle = (min + max) / 2;
            if (nums[middle] == target) {
                return middle;
            } else if (nums[middle] > nums[max]) {
                if ((target > nums[middle] && target >= nums[max]) || (target < nums[middle] && target <= nums[max])){
                    min =  middle + 1;
                } else {
                    max =  middle - 1;
                }
            } else if (nums[middle] < nums[min]) {
                if ((target < nums[middle] && target >= nums[max]) || (target > nums[middle] && target <= nums[max]) ) {
                    min =  middle + 1;
                } else {
                    max =  middle - 1;
                }
            } else {  // no rotation
                if (target <= nums[middle]) {
                    max =  middle - 1;
                } else {
                    min =  middle + 1;
                }
            }
        }
        return -1;
    }

};