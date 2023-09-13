// https://leetcode.com/problems/number-of-good-pairs

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       int ans = 0;
       int size = nums.size();
       for (int i = 0; i < size - 1; i++) {
           for (int j = i + 1; j < size; j++) if (nums[i] == nums[j]) ans++;
       }
       return ans; 
    }
};