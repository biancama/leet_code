
#include <vector>
//
// Created by Massimo Biancalani on 20/06/2018.
//
using namespace std;

class Solution {
public:
   /*
    * Invariant used
    * nums[left - 1] < nums[left] && nums[right] > nums[right + 1]
    * so nums[left] > nums[left + 1]  then left is a peak
    *
    * If
    */

   int findPeakElement(vector<int>& nums) {
        if(nums.size() == 0)
            return -1;
        unsigned int left = 0, right = nums.size() - 1;

        while (left < right) {
            unsigned int mid = (right + left)/ 2;
            if (nums[mid] < nums[mid + 1]) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
       return left;
    }
};