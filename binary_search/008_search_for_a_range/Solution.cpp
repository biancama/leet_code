#include <vector>

//
// Created by Massimo Biancalani on 22/06/2018.
//
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.size() < 1) {
            return {-1, -1};
        }
        int left = 0, right = nums.size() - 1;
        int mid = (left + right) / 2;;
        while (left + 1 < right) {

            if (nums[mid] == target) {
                break;
            } else if (nums[mid] < target) {
                left = mid;
            } else {
                right = mid;
            }
            mid = (left + right) / 2;
        }
        while(nums[left] != target && left < mid) {
            left++;
        }
        while(nums[right] != target && right > mid) {
            right--;
        }

        if (nums[left] == target && nums[right] == target) {
            return {left, right};
        } else if (nums[left] == target) {
            return {left, left};
        } else if (nums[right] == target) {
            return {right, right};
        } else {
            return {-1, -1};
        }
    }
};