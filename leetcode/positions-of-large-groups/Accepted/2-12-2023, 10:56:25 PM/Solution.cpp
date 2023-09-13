// https://leetcode.com/problems/positions-of-large-groups

class Solution {
public:
    int end_group(string& s, int start, char c) {
        int res = 0;
        while(s[start] == c) {
            start++;
            res++;
        }
        return res;
    }
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> ans;
        int group = 0;
        for (int i = 0; i < s.size(); i++) {
            group = end_group(s, i, s[i]);
            if (group >= 3) {
                ans.push_back({i, i+group-1});
                i += (group-1);
            }
        }
        return ans;
    }
};