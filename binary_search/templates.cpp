//
// Created by Massimo Biancalani on 20/06/2018.
//
#include <vector>
/*
 * Template #1 is used to search for an element or condition which can be determined by accessing a single index in the array.
 *
 * Most basic and elementary form of Binary Search
 * Search Condition can be determined without comparing to the element's neighbors (or use specific elements around it)
 * No post-processing required because at each step, you are checking to see if the element has been found. If you reach the end, then you know the element is not found
 *
 */
using namespace std;

int binarySearch1(vector<int>& nums, int target){
    if(nums.size() == 0)
        return -1;

    int left = 0, right = nums.size() - 1;
    while(left <= right){
        // Prevent (left + right) overflow
        int mid = left + (right - left) / 2;
        if(nums[mid] == target){ return mid; }
        else if(nums[mid] < target) { left = mid + 1; }
        else { right = mid - 1; }
    }

    // End Condition: left > right
    return -1;
}

/*
 * Template #2 is an advanced form of Binary Search. It is used to search for an element or condition which requires accessing the current index and its immediate right neighbor's index in the array.
 * An advanced way to implement Binary Search.
 *
 * Search Condition needs to access element's immediate right neighbor
 * Use element's right neighbor to determine if condition is met and decide whether to go left or right
 * Guarantees Search Space is at least 2 in size at each step
 * Post-processing required. Loop/Recursion ends when you have 1 element left. Need to assess if the remaining element meets the condition.
 *
 */

int binarySearch2(vector<int>& nums, int target){
    if(nums.size() == 0)
        return -1;

    int left = 0, right = nums.size();
    while(left < right){
        // Prevent (left + right) overflow
        int mid = left + (right - left) / 2;
        if(nums[mid] == target){ return mid; }
        else if(nums[mid] < target) { left = mid + 1; }
        else { right = mid; }
    }

    // Post-processing:
    // End Condition: left == right
    if(left != nums.size() && nums[left] == target) return left;
    return -1;
}

/*
 * Template #3 is another unique form of Binary Search.
 * It is used to search for an element or condition which requires accessing the current index
 * and its immediate left and right neighbor's index in the array.
 *
 */

int binarySearch3(vector<int>& nums, int target){
    if (nums.size() == 0)
        return -1;

    int left = 0, right = nums.size() - 1;
    while (left + 1 < right){
        // Prevent (left + right) overflow
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid;
        } else {
            right = mid;
        }
    }

    // Post-processing:
    // End Condition: left + 1 == right
    if(nums[left] == target) return left;
    if(nums[right] == target) return right;
    return -1;
}