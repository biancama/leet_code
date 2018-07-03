#include <vector>

//
// Created by Massimo Biancalani on 29/06/2018.
//
using namespace std;

class Solution {
public:
    vector<int> twoSumII(vector<int>& numbers, int target) {
        unsigned int left = 0, right = numbers.size() - 1;
        vector<int> result;
        while (left < right) {
            int sum = numbers[left] + numbers[right];
            if (sum == target) {
                result.push_back(left + 1);
                result.push_back( right + 1);
                break;
            } else if (sum > target) {
                right--;
            } else {
                left++;
            }
        }
        return result;
    }
};