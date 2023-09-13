// https://leetcode.com/problems/shuffle-string

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans=s;
        int n=s.size();
        for(int i=0;i < n;i++) {
            int shift = indices[i];
            ans[shift] = s[i];
        }
        return ans;
    }
};