// https://leetcode.com/problems/maximum-subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = 0, max_sum = nums[0];
        for (int i: nums) {
            if (curr < 0) curr = 0;
            curr += i;
            max_sum = max(curr, max_sum);
        }
         return max_sum;
    }
};