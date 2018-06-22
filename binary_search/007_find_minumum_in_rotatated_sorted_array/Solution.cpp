#include <vector>
//
// Created by Massimo Biancalani on 21/06/2018.
//
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        const unsigned int N = nums.size();
        unsigned int left = 0, right = N - 1;
        while (left < right) {
            unsigned int mid = (left + right) / 2;
            if (nums[mid] > nums[right]) {
                if (nums[left] < nums[right]) {
                    right = mid;
                } else {
                    left = mid + 1;
                }
            } else if (nums[mid] < nums[left]) {
                if (nums[left] < nums[right]) {
                    left = mid + 1;
                } else {
                    right = mid;
                }
            } else {
                return nums[left];
            }
        }
        return nums[left];
    }
};