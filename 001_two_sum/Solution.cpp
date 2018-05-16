//
// Created by Massimo Biancalani on 16/05/2018.
//

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mappedDifference;
        vector<int> solution;
        int currentIndex = 0;
        for (auto &&item : nums) {
            unordered_map<int, int>::iterator it = mappedDifference.find(item);
            if (it == mappedDifference.end()) { // key not found
                mappedDifference[target - item] = currentIndex;
                currentIndex++;
            } else {
                solution.push_back(it->second);
                solution.push_back(currentIndex);
                break;
            }
        }
        return solution;
    }
};