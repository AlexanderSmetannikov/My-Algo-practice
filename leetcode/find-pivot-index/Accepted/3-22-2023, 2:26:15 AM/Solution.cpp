// https://leetcode.com/problems/find-pivot-index

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sumLeft = 0;
        int sumRight = 0;
        for (int i = 0; i < nums.size(); i++) {
            sumLeft +=  nums[i];
            sumRight = 0;
            for (int j = i; j < nums.size(); j++) sumRight += nums[j];
            if (sumLeft == sumRight) return i;
        }
        return -1;
    }
};