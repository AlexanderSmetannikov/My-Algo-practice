// https://leetcode.com/problems/majority-element

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = 0;
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            if(res == 0) n = nums[i];
            res += (n == nums[i]) ? 1 : -1;
        }
        return n;
    }
};