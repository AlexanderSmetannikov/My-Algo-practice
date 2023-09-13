// https://leetcode.com/problems/3sum-closest

class Solution {
public:
    int abbs(int a) {
        return a < 0 ? -1*a : a;
    }
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int min_diff = 1e9;
        int res = 0;
        for(int i = 0; i < nums.size() - 2; i++) {
            int l = i + 1;
            int r = nums.size() - 1;
            
            while(l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                if (abbs(sum - target) < min_diff) {
                    min_diff = abbs(sum - target);
                    res = sum;
                }
                if (sum < target) {
                    l++;
                } if (sum > target) {
                    r--;
                } if (sum == target) {
                    return sum;
                }
            }
        }
        return res;
    }
};