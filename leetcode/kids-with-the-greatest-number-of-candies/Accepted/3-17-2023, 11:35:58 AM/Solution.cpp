// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans(candies.size());
        int max = 0;
        for (int i: candies) if (i > max) max = i;
        for (int i = 0; i < candies.size(); i++)
            ans[i] = (candies[i] + extraCandies >= max) ? true : false;
        return ans;
    }
};