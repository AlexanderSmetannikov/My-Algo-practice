// https://leetcode.com/problems/longest-common-prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int flag = 0;
        int conti = 1;
        for (int j = 0; j < strs[0].size(); j++){
            flag = 0; 
            for (int i = 0; i < strs.size() && conti; i++) {
                if (strs[i][j] == strs[0][j] && (j <= strs[i].size() - 1 || strs[0].size() == strs[i].size())) flag = 1;
                else {
                    conti = 0;
                    flag = 0;
                }
            }
            if (flag) ans.push_back(strs[0][j]);    
        }
        return ans;
    }
};