#include <string>
#include <unordered_set>
#include <algorithm>
//
// Created by Massimo Biancalani on 24/05/2018.
//
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> slidingWindow;
        int result = 0;
        int i = 0, j = 0;
        int n = s.length();

        while(i <= n && j < n) {
            char c = s.at(j);
            if (slidingWindow.count(c) == 0) {
                // first time of that specific character
                slidingWindow.insert(c);
                result = max(result, (int) slidingWindow.size());
                j++;
            } else {
                i++;
                j = i;
                slidingWindow.clear();
            }

        }
        return result;
    }
};