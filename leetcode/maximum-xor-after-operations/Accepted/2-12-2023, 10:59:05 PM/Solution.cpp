// https://leetcode.com/problems/maximum-xor-after-operations

class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        int result = 0;
        for (int i = 0; i < nums.size(); i++) result |= nums[i];
        return result; 
    }
};