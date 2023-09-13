// https://leetcode.com/problems/single-number-iii

class Solution {
public:
    bool contain(vector<int>& nums, int n) {
        for (int i = 0; i < nums.size(); i++) {
            if(n == nums[i]) return true;
        }
        return false;
    }
    
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        vector<int> duplicates;
        bool flag = false;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    duplicates.push_back(nums[i]);
                    flag  = true;                    
                    break;
                } else flag = false;
            }
        }
        for (int i = 0;  i < nums.size(); i++) {
            if(!contain(duplicates, nums[i])) ans.push_back(nums[i]);
        }
        return ans;
    }
};