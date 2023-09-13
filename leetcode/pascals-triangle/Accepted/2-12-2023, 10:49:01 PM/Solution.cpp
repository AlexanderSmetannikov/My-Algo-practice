// https://leetcode.com/problems/pascals-triangle

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        ans.resize(numRows);
        if (numRows == 1) {
         ans[0].resize(1);
         ans[0][0] = 1;
        }
        else {
            ans[0].resize(1);
            ans[1].resize(2);
            ans[0][0] = 1;
            ans[1][0] = 1;
            ans[1][1] = 1;
            for(int i = 2; i < numRows; i++) {
                ans[i].resize(i+1);
                ans[i][0] = 1;
                ans[i][i] = 1;
                for(int j = 1; j < i; j++)
                    ans[i][j] = ans[i-1][j] + ans[i-1][j-1];
            }
      
        }
        return ans;
    }
};