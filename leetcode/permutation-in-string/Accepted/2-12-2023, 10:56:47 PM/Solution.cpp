// https://leetcode.com/problems/permutation-in-string

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int len1 = s1.size();
        int len2 = s2.size();
        if (len2 < len1) return false;
        int left = 0, right = 0;
        vector<int> s1h(26,0);
        vector<int> s2h(26,0);

        while (right < len1) {
            s1h[s1[right] - 'a']++;
            s2h[s2[right] - 'a']++;
            right++;
        }
        right--;
        while (right < len2) {
            if (s1h == s2h) return true;
            right++;
            if (right != len2) s2h[s2[right] - 'a']++;
            s2h[s2[left] - 'a']--;
            left++;
        }
        return false;
    }
};