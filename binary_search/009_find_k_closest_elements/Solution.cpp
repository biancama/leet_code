#include <vector>
#include <stdlib.h>
//
// Created by Massimo Biancalani on 24/06/2018.
//
using namespace std;
class Solution {
private:
    int binarySearch(const vector<int>& nums, int target){
        if(nums.size() == 0)
            return -1;

        int left = 0, right = nums.size() - 1;
        while(left < right){
            // Prevent (left + right) overflow
            int mid = left + (right - left) / 2;
            if(nums[mid] == target){ return mid; }
            else if(nums[mid] < target) { left = mid + 1; }
            else { right = mid - 1; }
        }

        // End Condition: left > right
        return left;
    }
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int index = binarySearch(arr, x);
        int i = index, j = i;
        while (k -1 > 0) {
            if (i == 0) {
                j++;
            } else if (j == arr.size() -1) {
                i--;
            } else if (abs(arr[i - 1] - x) <= abs(arr[j + 1] - x)) {
                i--;
            } else {
                j++;
            }
            k--;
        }
        vector<int> result;
        for (int l = i; l <= j; ++l) {
            result.push_back(arr[l]);
        }
        return result;
    }
};