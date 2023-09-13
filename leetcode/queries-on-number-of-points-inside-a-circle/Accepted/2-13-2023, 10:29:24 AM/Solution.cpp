// https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle

class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& p, vector<vector<int>>& q) {
        int n = q.size();
        vector<int> ans(n, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < p.size(); j++) {
            if( sqrt((pow( q[i][0] - p[j][0], 2)) + (pow( q[i][1] - p[j][1], 2 ))) <= q[i][2]) ans[i]++;
            }
        }
        return ans;
    }
};