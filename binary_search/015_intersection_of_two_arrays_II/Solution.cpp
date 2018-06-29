#include <vector>
#include <unordered_map>
//
// Created by Massimo Biancalani on 29/06/2018.
//
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mapForNums1, mapForNums2;
        vector<int> result;

        for(auto& it : nums1) {
            mapForNums1[it] = mapForNums1[it] + 1;
        }

        for(auto& it : nums2) {
            mapForNums2[it] = mapForNums2[it] + 1;
        }

        for (auto& keyValues : mapForNums1) {
            int minIntersect = min(mapForNums2[keyValues.first], keyValues.second);
            for (int i = 0; i < minIntersect; ++i) {
                result.push_back(keyValues.first);
            }
        }

        return result;
    }
};