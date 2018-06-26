#include <vector>
//
// Created by Massimo Biancalani on 26/06/2018.
//
using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        vector<char>::iterator pointer = lower_bound(letters.begin(), letters.end(), target);
        if (pointer == letters.end()) {
            return letters[0];
        } else {

            while (*pointer == target) {
                if (pointer == letters.end() || ( pointer == letters.end() - 1 && *pointer == target)) {
                    return letters[0];
                } else {
                    pointer++;
                }
            }
            return *pointer;
        }
    }
};