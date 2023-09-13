// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution {
public:
    int maxProfit(vector<int>& pr) {
        int min = pr[0];
        int max_profit = 0;
        for (int i = 0; i < pr.size(); i++) {
            if (pr[i] < min) min = pr[i];
            max_profit = max(max_profit, pr[i] - min);
        }
        return max_profit;
    }
};