// https://leetcode.com/problems/left-and-right-sum-differences

class Solution {
public:
    vector<int> leftRigthDifference(const vector<int>& nums) {
        short size = nums.size();
        int r = accumulate(nums.begin(), nums.end(), 0) - nums[0];
        vector<int> ans (size, 0);
        int l = 0;
        for (int i = 0; i < size - 1; i++) {
            ans[i] = abs(l - r); 
            l += nums[i];
            r -= nums[i + 1];
        }
        ans[size - 1] = l;
        return ans;
    }
};