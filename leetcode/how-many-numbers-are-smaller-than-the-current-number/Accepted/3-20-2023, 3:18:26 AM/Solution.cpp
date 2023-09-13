// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans(nums.size());
        int more = 0;
        for (int i = 0; i < nums.size(); i++) {
            more = 0;
            for (int j = 0; j < nums.size(); j++) if (nums[j] < nums[i]) more++;
            ans[i] = more;
        }
        return ans;
    }
};