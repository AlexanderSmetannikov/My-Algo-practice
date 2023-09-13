// https://leetcode.com/problems/shuffle-the-array

class Solution {
public:
    vector<int> shuffle(const vector<int>& nums, int n) {
        vector<int>ans;
        for(int i = 0; i < n; i++) {
            ans.push_back(nums[i]);
            ans.push_back(nums[i + n]);
        }
        return ans;
    }
};