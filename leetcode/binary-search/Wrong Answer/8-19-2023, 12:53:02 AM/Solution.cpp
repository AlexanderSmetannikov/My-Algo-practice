// https://leetcode.com/problems/binary-search

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        int mid = l + (r - l) / 2;
        if (nums[mid] == target) return mid;
        while (l < r) {
            mid = l + (r - l) / 2;
            if (nums[mid] == target) return mid;
            else if (target > nums[mid]) l = mid + 1;
            else r = mid;              
        }
        return -1;
    }
};