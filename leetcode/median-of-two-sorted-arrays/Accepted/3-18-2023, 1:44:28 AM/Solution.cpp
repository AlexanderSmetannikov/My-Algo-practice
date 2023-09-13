// https://leetcode.com/problems/median-of-two-sorted-arrays

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for (int n: nums2) nums1.push_back(n);
        sort(nums1.begin(), nums1.end());
        int s = nums1.size();
        return s % 2 ? nums1[s/2] : (nums1[s/2-1]+nums1[s/2]) / 2.0;
    }
};