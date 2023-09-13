// https://leetcode.com/problems/ransom-note

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mag;
        for (char &c : magazine) {
            ++mag[c];
        }
        for (char &c : ransomNote) {
            --mag[c];
            if (mag[c] < 0) return false;
        }

        return true;
    }
};