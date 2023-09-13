// https://leetcode.com/problems/climbing-stairs

class Solution {
public:
    int climbStairs(int n) {
           vector<int> ans;
           ans.resize(n+2);
            ans[0] = 1;
            ans[1] = 2;
            ans[2] = 3;
            if (n > 3) {
                for(int i = 3; i < n; i++) {
                ans[i] = ans[i-2] + ans[i-1];
            }   
            }
            return ans[n-1];
  
        
    }
};