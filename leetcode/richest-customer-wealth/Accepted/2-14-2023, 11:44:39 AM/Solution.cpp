// https://leetcode.com/problems/richest-customer-wealth

class Solution {
public:
    int maximumWealth(vector<vector<int>>& m) {
        int sum = 0;
        int max = 0;
        for (int i = 0; i < m.size(); i++) {
            sum = 0;
            for (int j = 0; j < m[i].size(); j++) sum += m[i][j];
            if (sum > max) max = sum;
        }
        return max;
    }
};