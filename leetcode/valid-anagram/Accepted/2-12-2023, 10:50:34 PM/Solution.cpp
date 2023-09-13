// https://leetcode.com/problems/valid-anagram

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        vector<char> l1;
        vector<char> l2;
        for(int i = 0; i < s.size(); i++) {
            l1.push_back(s[i]);
        }
        for(int i = 0; i < t.size(); i++) {
            l2.push_back(t[i]);
        }
        sort(l1.begin(), l1.end());
        sort(l2.begin(), l2.end());
        for(int i = 0; i < t.size(); i++) {
            if(l1[i] != l2[i]) return false;
        }
        return true;
    }
};