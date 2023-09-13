// https://leetcode.com/problems/min-cost-climbing-stairs

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp;
        int n = cost.size();
        dp.resize(n+1);
        cost.resize(n + 1);
        cost[n] = 0;
        dp[0] = cost[0];
        dp[1] = cost[1];
        int ans = 0;
        //ans += min(dp[0], dp[1]);
        for (int i = 2; i <= n; i++) {
            dp[i] = min(dp[i-1] + cost[i], dp[i-2] + cost[i]);
        }
        ans = dp[n];
        // int ans = 0;
        // int i = cost.size();
        // // cout << i;
        // while (i >= 2) {
        //     if (cost[i-1] < cost[i-2]){
        //         ans += cost[i-1];
        //         i--;
        //     } else if (cost[i-1] >= cost[i-2]) {
        //         ans += cost[i-2];
        //         i -= 2;
        //     }
        // }
        return ans;
    }
};