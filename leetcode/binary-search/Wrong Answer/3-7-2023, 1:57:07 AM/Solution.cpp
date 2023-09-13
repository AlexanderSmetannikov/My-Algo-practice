// https://leetcode.com/problems/binary-search

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        int mid;
        while (l <= r) {
            mid = l  + (r - l) / 2;
            if (nums[mid] == target) return mid;
            if (nums[mid] < mid) r -= 1;
            else l += 1;
        }
        return -1;
    }
};