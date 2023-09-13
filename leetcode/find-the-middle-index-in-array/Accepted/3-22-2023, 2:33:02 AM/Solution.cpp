// https://leetcode.com/problems/find-the-middle-index-in-array

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum = 0;
        for (int i: nums) sum += i;
        int current = 0;
        for (int i = 0; i < nums.size(); i++) {
            current += nums[i];
            if (current == sum) return i;
            sum -= nums[i];
        }
        return -1;
    }
};