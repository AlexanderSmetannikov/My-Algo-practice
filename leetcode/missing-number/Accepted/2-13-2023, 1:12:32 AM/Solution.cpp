// https://leetcode.com/problems/missing-number

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int nums_sum = 0;
        int i;
        for (i = 0; i < nums.size(); i++) {
            sum += i;
            nums_sum += nums[i];
        }
        sum += i;
        return sum - nums_sum;
    }
};