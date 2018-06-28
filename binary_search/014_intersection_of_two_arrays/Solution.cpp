#include <vector>
#include <unordered_set>

//
// Created by Massimo Biancalani on 28/06/2018.
//
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(), nums1.end());
        vector<int> res;
        for (auto num : nums2) {
            if (s.find(num) != s.end()) {
                res.push_back(num);
                s.erase(num);
            }
        }
        return res;
    }
};