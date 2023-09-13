// https://leetcode.com/problems/find-the-highest-altitude

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans = 0;
        int tmp = 0;
        for (int i = 0; i < gain.size(); i++) {
            tmp = tmp + gain[i]; 
            if (tmp > ans) ans = tmp;
        }
        return ans;
    }
};