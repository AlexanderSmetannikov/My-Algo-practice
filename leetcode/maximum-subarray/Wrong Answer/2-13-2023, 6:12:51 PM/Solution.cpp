// https://leetcode.com/problems/maximum-subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int max = 0;
         int max_2 = 0;
         int n = nums.size();
         vector<int> dp(n);
         dp[0] = nums[0];
         for (int i = 1; i < n; i++) {
            dp[i] = dp[i-1] + nums[i];
            if(dp[i] > max) {
                // cout << dp[i] << " " << nums[i]; 
                max_2 = max;
                max = i;
            }
         }
        //  cout << max_2 << " " << max;
         int res = 0;
        //  for (int i = max_2; i <= max; i++) res += nums[i];
         for (int i = 0; i < n; i++) cout << dp[i] << " ";
         return res;
    }
};